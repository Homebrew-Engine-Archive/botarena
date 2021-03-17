#include "stdafx.h"
#include "CardM14.h"

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
		DEFINE_CARD(CAcademyRaiderCard);
		DEFINE_CARD(CAccordersShieldCard);
		DEFINE_CARD(CAccursedSpiritCard);
		DEFINE_CARD(CAdvocateOfTheBeastCard);
		DEFINE_CARD(CAltarsReapCard);
		DEFINE_CARD(CAngelicAccordCard);
		DEFINE_CARD(CArchangelOfThuneCard);
		DEFINE_CARD(CArtificersHexCard);
		DEFINE_CARD(CAwakenTheAncientCard);
		DEFINE_CARD(CBanisherPriestCard);
		DEFINE_CARD(CBarrageOfExpendablesCard);
		DEFINE_CARD(CBattleSliverCard);
		DEFINE_CARD(CBlightcasterCard);
		DEFINE_CARD(CBloodBairnCard);
		DEFINE_CARD(CBlurSliverCard);
		DEFINE_CARD(CBonescytheSliverCard);
		DEFINE_CARD(CBramblecrushCard);
		DEFINE_CARD(CBraveTheElementsCard);
		DEFINE_CARD(CBriarpackAlphaCard);
		DEFINE_CARD(CBurningEarthCard);
		DEFINE_CARD(CCapashenKnightCard);
		DEFINE_CARD(CCelestialFlareCard);
		DEFINE_CARD(CChargingGriffinCard);
		DEFINE_CARD(CClaustrophobiaCard);
		DEFINE_CARD(CColossalWhaleCard);
		DEFINE_CARD(CCongregateCard);
		DEFINE_CARD(CCorpseHaulerCard);
		DEFINE_CARD(CCyclopsTyrantCard);
		DEFINE_CARD(CDarkProphecyCard);
		DEFINE_CARD(CDarksteelForgeCard);
		DEFINE_CARD(CDarksteelIngotCard);
		DEFINE_CARD(CDawnstrikePaladinCard);
		DEFINE_CARD(CDeathgazeCockatriceCard);
		DEFINE_CARD(CDevoutInvocationCard);
		DEFINE_CARD(CDisperseCard);
		DEFINE_CARD(CDomesticationCard);
		DEFINE_CARD(CElvishMysticCard);
		DEFINE_CARD(CDragonEggCard);
		DEFINE_CARD(CFireshriekerCard);
		DEFINE_CARD(CFleshpulperGiantCard);
		DEFINE_CARD(CFortifyCard);
		DEFINE_CARD(CGaleriderSliverCard);
		DEFINE_CARD(CGlimpseTheFutureCard);
		DEFINE_CARD(CGnawingZombieCard);
		DEFINE_CARD(CGoblinDiplomatsCard);
		DEFINE_CARD(CGoblinShortcutterCard);
		DEFINE_CARD(CGrimReturnCard);
		DEFINE_CARD(CGroundshakerSliverCard);
		DEFINE_CARD(CGuardianOfTheAgesCard);
		DEFINE_CARD(CHauntedPlateMailCard);
		DEFINE_CARD(CHiveStirringsCard);
		DEFINE_CARD(CHuntTheWeakCard);
		DEFINE_CARD(CIllusionaryArmorCard);
		DEFINE_CARD(CImposingSovereignCard);
		DEFINE_CARD(CIntoTheWildsCard);
		DEFINE_CARD(CKalonianHydraCard);
		DEFINE_CARD(CKalonianTuskerCard);
		DEFINE_CARD(CLayOfTheLandCard);
		DEFINE_CARD(CLifebaneZombieCard);
		DEFINE_CARD(CLightningTalonsCard);
		DEFINE_CARD(CLilianasReaverCard);
		DEFINE_CARD(CLiturgyOfBloodCard);
		DEFINE_CARD(CManaweftSliverCard);
		DEFINE_CARD(CMaraudingMaulhornCard);
		DEFINE_CARD(CMasterOfDiversionCard);
		DEFINE_CARD(CMeganticSliverCard);
		DEFINE_CARD(CMessengerDrakeCard);
		DEFINE_CARD(CMindsparkerCard);
		DEFINE_CARD(CMinotaurAbominationCard);
		DEFINE_CARD(CMoltenBirthCard);
		DEFINE_CARD(CMutavaultCard);
		DEFINE_CARD(CNephaliaSeakiteCard);
		DEFINE_CARD(COathOfTheAncientWoodCard);
		DEFINE_CARD(COgreBattledriverCard);
		DEFINE_CARD(CPitchburnDevilsCard);
		DEFINE_CARD(CPredatorySliverCard);
		DEFINE_CARD(CPrimevalBountyCard);
		DEFINE_CARD(CQuickenCard);
		DEFINE_CARD(CRangersGuileCard);
		DEFINE_CARD(CRatchetBombCard);
		DEFINE_CARD(CRegathanFirecatCard);
		DEFINE_CARD(CRingOfThreeWishesCard);
		DEFINE_CARD(CRiseOfTheDarkRealmsCard);
		DEFINE_CARD(CRumblingBalothCard);
		DEFINE_CARD(CSavageSummoningCard);
		DEFINE_CARD(CScavengingOozeCard);
		DEFINE_CARD(CScourgeOfValkasCard);
		DEFINE_CARD(CSeacoastDrakeCard);
		DEFINE_CARD(CSeismicStompCard);
		DEFINE_CARD(CSensoryDeprivationCard);
		DEFINE_CARD(CSentinelSliverCard);
		DEFINE_CARD(CSeraphOfTheSwordCard);
		DEFINE_CARD(CShadowbornApostleCard);
		DEFINE_CARD(CShadowbornDemonCard);
		DEFINE_CARD(CShimmeringGrottoCard);
		DEFINE_CARD(CShrivelCard);
		DEFINE_CARD(CSliverConstructCard);
		DEFINE_CARD(CSoulmenderCard);
		DEFINE_CARD(CSporemoundCard);
		DEFINE_CARD(CStaffOfTheDeathMagusCard);
		DEFINE_CARD(CStaffOfTheFlameMagusCard);
		DEFINE_CARD(CStaffOfTheMindMagusCard);
		DEFINE_CARD(CStaffOfTheSunMagusCard);
		DEFINE_CARD(CStaffOfTheWildMagusCard);
		DEFINE_CARD(CSteelformSliverCard);
		DEFINE_CARD(CStonehornChanterCard);
		DEFINE_CARD(CStrikingSliverCard);
		DEFINE_CARD(CSyphonSliverCard);
		DEFINE_CARD(CThorncasterSliverCard);
		DEFINE_CARD(CTrainedCondorCard);
		DEFINE_CARD(CUndeadMinotaurCard);
		DEFINE_CARD(CVampireWarlordCard);
		DEFINE_CARD(CVastwoodHydraCard);
		DEFINE_CARD(CVerdantHavenCard);
		DEFINE_CARD(CVialOfPoisonCard);
		DEFINE_CARD(CVoraciousWurmCard);
		DEFINE_CARD(CWindreaderSphinxCard);
		DEFINE_CARD(CWitchstalkerCard);
		DEFINE_CARD(CWoodbornBehemothCard);
		DEFINE_CARD(CXathridNecromancerCard);
		DEFINE_CARD(CYoungPyromancerCard);
		DEFINE_CARD(CZephyrChargeCard);
		
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CKalonianTuskerCard::CKalonianTuskerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kalonian Tusker"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CShadowbornDemonCard::CShadowbornDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shadowborn Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(6))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShadowbornDemonCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShadowbornDemonCard::BeforeResolution));
		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	}
}

bool CShadowbornDemonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CZone* pGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = 0;

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 6)
			return false;
		}
	}

	return true;
}

bool CShadowbornDemonCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pGraveyard = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	int nCount = 0;

	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 6)
			return false;
		}
	}

	return true;
}


//____________________________________________________________________________
//
CShadowbornApostleCard::CShadowbornApostleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shadowborn Apostle"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter1(_T("a creature named Shadowborn Apostle"), _T("creatures named Shadowborn Apostle"), new AnyCreatureComparer)
	, m_CardFilter2(_T("a Demon creature"), _T("Demon creatures"), new AnyCreatureComparer)
{
	m_CardFilter1.AddComparer(new CardNameComparer(_T("Shadowborn Apostle")));
	m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));

	AllowUnlimitedCopies(TRUE);

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			BLACK_MANA_TEXT,
			&m_CardFilter2, 
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	
	cpAbility->GetCost().AddSacrificeCardCost(6, &m_CardFilter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStaffOfTheWildMagusCard::CStaffOfTheWildMagusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of the Wild Magus"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRegathanFirecatCard::CRegathanFirecatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Regathan Firecat"), CardType::Creature, CREATURE_TYPE2(Elemental, Cat), nID,
		_T("2") RED_MANA_TEXT, Power(4), Life(1))
{
}

//____________________________________________________________________________
//
CBattleSliverCard::CBattleSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battle Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+2), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlurSliverCard::CBlurSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blur Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Haste));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGroundshakerSliverCard::CGroundshakerSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Groundshaker Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("6") GREEN_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSentinelSliverCard::CSentinelSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sentinel Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Vigilance));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSteelformSliverCard::CSteelformSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Steelform Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrikingSliverCard::CStrikingSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Striking Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVastwoodHydraCard::CVastwoodHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vastwood Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVastwoodHydraCard::OnZoneChanged))
	, m_YesNoSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVastwoodHydraCard::OnYesNoSelected))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVastwoodHydraCard::OnCardSelected))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVastwoodHydraCard::OnNumberSelected))
	, RemainingCounters(0)
{
	GetMovedEventSource()->AddListener(m_cpListener.GetPointer());
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVastwoodHydraCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

void CVastwoodHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nCount = GetLastCastingExtraValue();

		CCardCounterModifier modifier = CCardCounterModifier(_T("+1/+1"), nCount, true);
		modifier.ApplyTo(this);
	}
}

bool CVastwoodHydraCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CardKeywordComparer(CardKeyword::CantGetCounters, false));

	CPlayer* pController = pAction->GetController();

	CZone* pZone = GetController()->GetZoneById(ZoneId::Battlefield);
	int nLegal = m_CardFilter.CountIncluded(pZone->GetCardContainer());

	RemainingCounters = GetLastKnownp11Counters();

	if ((RemainingCounters > 0) && (nLegal > 0))
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			if (RemainingCounters == 1)
				selectionEntry.strText.Format(_T("Don't place a counter"));
			else
				selectionEntry.strText.Format(_T("Don't distribute counters"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			if (RemainingCounters == 1)
				selectionEntry.strText.Format(_T("Place a +1/+1 counter"));
			else
				selectionEntry.strText.Format(_T("Distribute %d +1/+1 counters"), (int)RemainingCounters);

			entries.push_back(selectionEntry);
		}
		m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CVastwoodHydraCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					if (RemainingCounters == 1)
						strMessage.Format(_T("%s doesn't place a counter"), pSelectionPlayer->GetPlayerName());
					else
						strMessage.Format(_T("%s doesn't distribute counters"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				CardSelection(pSelectionPlayer);

				return;
			}
		}
}

void CVastwoodHydraCard::CardSelection(CPlayer* pPlayer)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CardKeywordComparer(CardKeyword::CantGetCounters, false));

	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	std::vector<SelectionEntry> entries;
	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (m_CardFilter.IsCardIncluded(pCard))
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Place counters on %s"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
		}
					
	}

	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CVastwoodHydraCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
			NumberSelection(pCard, pSelectionPlayer);

			return;
		}
}

void CVastwoodHydraCard::NumberSelection(CCard* pCard, CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	for (int i = 1; i <= RemainingCounters; ++i)
	{
		SelectionEntry entry;
			entry.dwContext = i;

		if (i == 1)
			entry.strText.Format(_T("Place %d +1/+1 counter on %s"),
				i, pCard->GetCardName(TRUE));
		else
			entry.strText.Format(_T("Place %d +1/+1 counters on %s"),
				i, pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pCard);
}

void CVastwoodHydraCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nCounter = (int)it->dwContext;
			CCard* pCard = (CCard*)dwContext1;
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (nCounter == 1)
					strMessage.Format(_T("%s places %d +1/+1 counter on %s"), pSelectionPlayer->GetPlayerName(), nCounter, pCard->GetCardName(TRUE));
				else
					strMessage.Format(_T("%s places %d +1/+1 counters on %s"), pSelectionPlayer->GetPlayerName(), nCounter, pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nCounter);

			pModifier.ApplyTo(pCard);

			RemainingCounters -= nCounter;

			if (RemainingCounters > 0)
				CardSelection(pSelectionPlayer);

			return;
		}
}

//____________________________________________________________________________
//
CAdvocateOfTheBeastCard::CAdvocateOfTheBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Advocate of the Beast"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Beast), false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArchangelOfThuneCard::CArchangelOfThuneCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archangel of Thune"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CArchangelOfThuneCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddLifelink(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenPlayerLifeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArchangelOfThuneCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->AddAbilityTag(AbilityTag::CardChange);
	AddAbility(cpAbility.GetPointer());
}

bool CArchangelOfThuneCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife) return true;

	return false;
}

void CArchangelOfThuneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CHuntTheWeakCard::CHuntTheWeakCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunt the Weak"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CHuntTheWeakSpell> cpSpell(
		::CreateObject <CHuntTheWeakSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CHuntTheWeakCard::CHuntTheWeakSpell::CHuntTheWeakSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
}

void CHuntTheWeakCard::CHuntTheWeakSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize()) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
	pModifier1.ApplyTo((CCard*)pCreature1);
	
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		CFightsModifier modifier = CFightsModifier(const_cast<CCreatureCard*>(pCreature2));
		if (pCreature2) modifier.ApplyTo(const_cast<CCreatureCard*>(pCreature1));
	}
	
}

//____________________________________________________________________________
//
CScavengingOozeCard::CScavengingOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scavenging Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CScavengingOozeCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("") GREEN_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CScavengingOozeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
		
	if (pTarget->GetCardType().IsCreature())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), 1);
		CLifeModifier pModifier2 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(this);
		pModifier2.ApplyTo(GetController());
	}

}

//______________________________________________________________________________
//
CMeganticSliverCard::CMeganticSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Megantic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+3), Life(+3), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAwakenTheAncientCard::CAwakenTheAncientCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Awaken the Ancient"), CardType::EnchantLand, nID)
{
	counted_ptr<CIsAlsoAEnchant> cpSpell(
		::CreateObject<CIsAlsoAEnchant>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Mountain, false),
			_T("Giant AB"), 64085));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStaffOfTheMindMagusCard::CStaffOfTheMindMagusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of the Mind Magus"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("blue cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBonescytheSliverCard::CBonescytheSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bonescythe Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChargingGriffinCard::CChargingGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Charging Ggriffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevoutInvocationCard::CDevoutInvocationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Devout Invocation"), CardType::Sorcery, nID)
   , m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDevoutInvocationCard::OnCreatureSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("6") WHITE_MANA_TEXT));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDevoutInvocationCard::BeforeResolution));
	cpSpell->AddAbilityTag(AbilityTag::TokenCreation);
	AddSpell(cpSpell.GetPointer());	
}

bool CDevoutInvocationCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new UntappedComparer);

	pCreatures.RemoveAll();
	pRemainingCreatures.RemoveAll();

	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				pRemainingCreatures.AddCard(pCard, CardPlacement::Top);
			}
		}
		CreatureSelection(pController);
	}

	return true;
}

void CDevoutInvocationCard::CreatureSelection(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop tapping creatures"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pRemainingCreatures.GetSize(); ++i)
	{
		CCard* pCard = pRemainingCreatures.GetAt(i);
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Tap %s"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
		}
					
	}
	m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CDevoutInvocationCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops tapping creatures"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pCreatures.GetSize() > 0)
					Finale(pSelectionPlayer);
				
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
				pCreatures.AddCard(pCard, CardPlacement::Top);
				pRemainingCreatures.RemoveCard(pCard);

				CreatureSelection(pSelectionPlayer);

				return;
			}
		}
}

void CDevoutInvocationCard::Finale(CPlayer* pPlayer)
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	int nNumber = pCreatures.GetSize();

	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pCreatures.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
	
	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Angel I"), 62049, nNumber);
	pModifier2.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CGlimpseTheFutureCard::CGlimpseTheFutureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glimpse the Future"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT,
			3));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);
	cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, NULL);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGrimReturnCard::CGrimReturnCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grim Return"), CardType::Instant, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("2") BLACK_MANA_TEXT,
			new CardPresentinHistoryComparer(ZoneId::Graveyard, ZoneId::Battlefield),
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGuardianOfTheAgesCard::CGuardianOfTheAgesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian of the Ages"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(7), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGuardianOfTheAgesCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGuardianOfTheAgesCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CGuardianOfTheAgesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, AttackSubject attacked) const
{
	return (GetCreatureKeyword()->Defender() == TRUE);
}

bool CGuardianOfTheAgesCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay() && GetCreatureKeyword()->Defender())
	{
		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Defender, FALSE, FALSE);
		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Trample, TRUE, FALSE);

		pModifier1.ApplyTo(this);
		pModifier2.ApplyTo(this);
	}

	return true;
}

//______________________________________________________________________________
//
CHiveStirringsCard::CHiveStirringsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hive Stirrings"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			_T("Sliver C"), 62050,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIntoTheWildsCard::CIntoTheWildsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Into the Wilds"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIntoTheWildsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIntoTheWildsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				CCardFilter::GetFilter(_T("lands")), // land cards
				ZoneId::Battlefield, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::NotApplicable, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CLilianasReaverCard::CLilianasReaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Liliana's Reaver"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CLilianasReaverCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CLilianasReaverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = pAbilityAction->GetController();

	int nTokenCount = 1;
	int nMultiplyBy = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nMultiplyBy <<= nMultiplier;

	for (int j = 0; j < nTokenCount * nMultiplyBy; ++j)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Zombie M"), 2917));		
		
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2917); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Zombie M")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		cpToken.GetPointer()->SetIntoPlayTapped();

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}
}

//____________________________________________________________________________
//
CMaraudingMaulhornCard::CMaraudingMaulhornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marauding Maulhorn"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0), CreatureKeyword::MustAttackEachCombat));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardNameComparer(_T("Advocate of the Beast")));
	cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetConditionValue(0);
	cpAbility->SetConditionIsMaximum();
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMasterOfDiversionCard::CMasterOfDiversionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master of Diversion"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoltenBirthCard::CMoltenBirthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Molten Birth"), CardType::Sorcery, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMoltenBirthCard::OnFlipSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoltenBirthCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMoltenBirthCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elemental T"), 62056, 2);
	pModifier.ApplyTo(pController);

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
		Move(GetOwner()->GetZoneById(ZoneId::Hand), pController, MoveType::Others);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"));

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CMoltenBirthCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	CCreatureCard* pTarget = (CCreatureCard*)dwContext1;

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
				Move(GetOwner()->GetZoneById(ZoneId::Hand), pSelectionPlayer, MoveType::Others);
				
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
COgreBattledriverCard::COgreBattledriverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Battledriver"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COgreBattledriverCard::SetTriggerContext));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool COgreBattledriverCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = reinterpret_cast<CCreatureCard*>(pCard);
	return true;
}

//____________________________________________________________________________
//
CPredatorySliverCard::CPredatorySliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Predatory Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimevalBountyCard::CPrimevalBountyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Primeval Bounty"), CardType::GlobalEnchantment, nID,
		_T("5") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Beast M"), 62053, 1);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +3));
		
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		
		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRingOfThreeWishesCard::CRingOfThreeWishesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Three Wishes"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(WISH_COUNTER, 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("5"),
			CCardFilter::GetFilter(_T("cards")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->SetRevealCards(FALSE);
	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(WISH_COUNTER), -1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRiseOfTheDarkRealmsCard::CRiseOfTheDarkRealmsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rise of the Dark Realms"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiseOfTheDarkRealmsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRiseOfTheDarkRealmsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer creatures;
	CZone* pZone;
	CPlayer* pController = pAction->GetController();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard);
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, creatures);
	}

	for (int ic = 0; ic < creatures.GetSize(); ++ic)
		creatures.GetAt(ic)->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	return true;
}

//____________________________________________________________________________
//
CRumblingBalothCard::CRumblingBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rumbling Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CSavageSummoningCard::CSavageSummoningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Savage Summoning"), CardType::Instant, nID)
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Savage Summoning First Effect"), 61123, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSeraphOfTheSwordCard::CSeraphOfTheSwordCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Seraph of the Sword"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddPreventAllCombatDamage(FALSE);
}

//____________________________________________________________________________
//
CSliverConstructCard::CSliverConstructCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sliver Construct"), CardType::_ArtifactCreature, CREATURE_TYPE2(Sliver, Construct), nID,
		_T("3"), Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CSporemoundCard::CSporemoundCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sporemound"), CardType::Creature, CREATURE_TYPE(Fungus), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling N"), 62054, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStaffOfTheDeathMagusCard::CStaffOfTheDeathMagusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of the Death Magus"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Swamp, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThorncasterSliverCard::CThorncasterSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thorncaster Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CThorncasterSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CThorncasterSliverCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVialOfPoisonCard::CVialOfPoisonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vial of Poison"), CardType::Artifact, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWoodbornBehemothCard::CWoodbornBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodborn Behemoth"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+4), Life(+4), CreatureKeyword::Trample));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->SetConditionValue(8);
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYoungPyromancerCard::CYoungPyromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Young Pyromancer"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Elemental S"), 62052, 1);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDawnstrikePaladinCard::CDawnstrikePaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dawnstrike Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CStaffOfTheFlameMagusCard::CStaffOfTheFlameMagusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of the Flame Magus"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoblinDiplomatsCard::CGoblinDiplomatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Diplomats"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Goblin Diplomats Effect"), 61127, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CColossalWhaleCard::CColossalWhaleCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Colossal Whale"), CardType::Creature, CREATURE_TYPE(Whale), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5),
		CreatureKeyword::Islandwalk)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CColossalWhaleCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CColossalWhaleCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CColossalWhaleCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
										 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CColossalWhaleCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CColossalWhaleCard::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CColossalWhaleCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pExiled.HasCard(pCard)) return false;

	pExiled.RemoveCard(pCard);
	return false;
}

bool CColossalWhaleCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const
{
	CCountedCardContainer pSubjects;
	CCountedCardContainer pCreated;

	if (IsInplay())
		pSubjects.AddCard((CCard*)this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Generic Container - Battlefield"), 61128, &pSubjects, &pCreated);
	pModifier.ApplyTo(GetController());

	triggerContext.nValue1 = (DWORD)pCreated.GetAt(0);

	return true;
}

bool CColossalWhaleCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCard* pContainer = (CCard*)pAction->GetTriggerContext().nValue1;
	
	if (pContainer->GetZoneId() == ZoneId::_Effects)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
		pModifier1.ApplyTo(pContainer);

		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
		pModifier2.ApplyTo(pTarget);

		if (pTarget->GetZoneId() == ZoneId::Exile)
			pExiled.AddCard(pTarget, CardPlacement::Top);
	}

	return true;
}

bool CColossalWhaleCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others);
	}

	return false;
}

void CColossalWhaleCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//___________________________________________________________________________________
//
CMinotaurAbominationCard::CMinotaurAbominationCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minotaur Abomination"), CardType::Creature, CREATURE_TYPE2(Zombie, Minotaur), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(6))
{
}

//____________________________________________________________________________
//
CRatchetBombCard::CRatchetBombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ratchet Bomb"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		cpAbility->SetAbilityName(_T("Put a Charge counter on"));
		cpAbility->SetAbilityText(_T("Put a Charge counter on"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CExplosiveKegSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CExplosiveKegSpell>>(this,
				_T(""),
				new TrueCardComparer, ZoneId::Graveyard, MoveType::Destroy, ZoneId::Battlefield, CHARGE_COUNTER));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	
}
//____________________________________________________________________________
//
CScourgeOfValkasCard::CScourgeOfValkasCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scourge of Valkas"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScourgeOfValkasCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScourgeOfValkasCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CScourgeOfValkasCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));

	int nDragons = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nDragons > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-nDragons), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		if (pTargetCreature)
			pModifier.ApplyTo(pTargetCreature);
		else
			pModifier.ApplyTo(pTargetPlayer);
	}

	return true;
}


//____________________________________________________________________________
//
CTrainedCondorCard::CTrainedCondorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Trained Condor"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWindreaderSphinxCard::CWindreaderSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Windreader Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWindreaderSphinxCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CWindreaderSphinxCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	if (CCardFilter::GetFilter(_T("flying creatures"))->IsCardIncluded(pCreature))
		return true;

	return false;
}

//____________________________________________________________________________
//
CSoulmenderCard::CSoulmenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soulmender"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
   counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,_T(""),
			Life(+1), PreventableType::NotPreventable));
   cpAbility->AddTapCost();
   AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CSeacoastDrakeCard::CSeacoastDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Seacoast Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{ 
}
//____________________________________________________________________________
//
CImposingSovereignCard::CImposingSovereignCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Imposing Sovereign"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("creatures")),	
			TRUE));

	cpAbility->SetAffectOpponentsOnly();

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CStonehornChanterCard::CStonehornChanterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonehorn Chanter"), CardType::Creature, CREATURE_TYPE2(Rhino, Cleric), nID,
		_T("5") WHITE_MANA_TEXT, Power(4), Life(4))
{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("5") WHITE_MANA_TEXT,
				Power(+0), Life(+0)));
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Vigilance);
	    cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CGaleriderSliverCard::CGaleriderSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Galerider Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Flying));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CMessengerDrakeCard::CMessengerDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Messenger Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CZephyrChargeCard::CZephyrChargeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Zephyr Charge"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
    counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
CAcademyRaiderCard::CAcademyRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Academy Raider"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CAcademyRaiderCard::OnCardSelected))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcademyRaiderCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CAcademyRaiderCard::BeforeResolution(CAbilityAction* pAction)
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

void CAcademyRaiderCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CAccordersShieldCard::CAccordersShieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Accorder's Shield"), CardType::Artifact | CardType::Equipment, nID, 
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+0), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+3), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Vigilance);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAccursedSpiritCard::CAccursedSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Accursed Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
}
//____________________________________________________________________________
//
CAltarsReapCard::CAltarsReapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Altar's Reap"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT, 2));

	ATLASSERT(cpSpell);

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAngelicAccordCard::CAngelicAccordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Accord"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelicAccordCard::SetTriggerContext));
	cpAbility->SetCreateTokenOption(TRUE, _T("Angel I"), 62049, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}
	
bool CAngelicAccordCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetController()->GetLifeGainThisTurn() >= Life(4);
}

//____________________________________________________________________________
//
CArtificersHexCard::CArtificersHexCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Artificer's Hex"), CardType::EnchantArtifact, nID,
		BLACK_MANA_TEXT,
		new CardTypeComparer(CardType::Equipment, false))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArtificersHexCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArtificersHexCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CArtificersHexCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CCard* pCard = m_pEnchantSpell->GetEnchantedOnCard();
	if (!pCard) return false;
	if (!pCard->GetEquippedOn()) return false;

	triggerContext.nValue1 = (DWORD)m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

bool CArtificersHexCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->GetEquippedOn()) return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());
	pModifier.ApplyTo(pCard->GetEquippedOn());
	return true;
}

//____________________________________________________________________________
//
CBanisherPriestCard::CBanisherPriestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Banisher Priest"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBanisherPriestCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanisherPriestCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBanisherPriestCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
										 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanisherPriestCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBanisherPriestCard::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CBanisherPriestCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pExiled.HasCard(pCard)) return false;

	pExiled.RemoveCard(pCard);
	return false;
}

bool CBanisherPriestCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CCountedCardContainer pSubjects;
	CCountedCardContainer pCreated;

	if (IsInplay())
		pSubjects.AddCard((CCard*)this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Generic Container - Battlefield"), 61128, &pSubjects, &pCreated);
	pModifier.ApplyTo(GetController());

	triggerContext.nValue1 = (DWORD)pCreated.GetAt(0);

	return true;
}

bool CBanisherPriestCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCard* pContainer = (CCard*)pAction->GetTriggerContext().nValue1;
	
	if (pContainer->GetZoneId() == ZoneId::_Effects)
	{
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
		pModifier1.ApplyTo(pContainer);

		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
		pModifier2.ApplyTo(pTarget);

		if (pTarget->GetZoneId() == ZoneId::Exile)
			pExiled.AddCard(pTarget, CardPlacement::Top);
	}
	return true;
}

bool CBanisherPriestCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others);
	}

	return false;
}

void CBanisherPriestCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CBlightcasterCard::CBlightcasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blightcaster"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodBairnCard::CBloodBairnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Bairn"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+2), Life(+2)));

	cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CCorpseHaulerCard::CCorpseHaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpse Hauler"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->AddSacrificeCost();
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarkProphecyCard::CDarkProphecyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dark Prophecy"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredPlayerModifiers().Add(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeathgazeCockatriceCard::CDeathgazeCockatriceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Deathgaze Cockatrice"), CardType::Creature, CREATURE_TYPE(Cockatrice), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CGnawingZombieCard::CGnawingZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gnawing Zombie"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(3))
{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE/*bTargetPlayers*/,
				Life(-1), PreventableType::NotPreventable));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLifebaneZombieCard::CLifebaneZombieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lifebane Zombie"), CardType::Creature, CREATURE_TYPE2(Zombie, Warrior), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(1))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLifebaneZombieCard::OnCardSelected))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLifebaneZombieCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CLifebaneZombieCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.ApplyTo(pTarget);
	
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::Creature, false));
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::Green | CardType::White, false));
	if (m_CardFilter.CountIncluded(pHand->GetCardContainer()) > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.ApplyTo(pTarget);

		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

			if ((pCard->IsColor(CManaPoolBase::Color::White) || pCard->IsColor(CManaPoolBase::Color::Green)) && pCard->GetCardType().IsCreature())
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

void CLifebaneZombieCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CLiturgyOfBloodCard::CLiturgyOfBloodCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Liturgy of Blood"), CardType::Sorcery, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT)));
}

//____________________________________________________________________________
//
CSyphonSliverCard::CSyphonSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Syphon Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUndeadMinotaurCard::CUndeadMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undead Minotaur"), CardType::Creature, CREATURE_TYPE2(Zombie, Minotaur), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3))
{
}
//____________________________________________________________________________
//
CVampireWarlordCard::CVampireWarlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Warlord"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(2))
{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarrageOfExpendablesCard::CBarrageOfExpendablesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Barrage of Expendables"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	
	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CCyclopsTyrantCard::CCyclopsTyrantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cyclops Tyrant"), CardType::Creature, CREATURE_TYPE(Cyclops), nID,
		_T("5") RED_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	m_CardFilter.AddComparer(new CreaturePowerComparer<std::less_equal<int>>(2)); // power 2 or less
	GetCreatureKeyword()->AddCantBlock(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CFleshpulperGiantCard::CFleshpulperGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fleshpulper Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureToughnessComparer<std::less_equal<int>>(2)); // toughness 2 or less
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMindsparkerCard::CMindsparkerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Mindsparker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue | CardType::White, false));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBraveTheElementsCard::CBraveTheElementsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brave the Elements"), CardType::Instant, nID)
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBraveTheElementsCard::OnColorSelected))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBraveTheElementsCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CBraveTheElementsCard::BeforeResolution(CAbilityAction* pAction)
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

void CBraveTheElementsCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
				pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				pModifier1->GetModifier().SetOneTurnOnly(TRUE);

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("white creatures")),
					std::auto_ptr<CCardModifier>(pModifier1));
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CCapashenKnightCard::CCapashenKnightCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Capashen Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		_T("1") WHITE_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CCongregateCard::CCongregateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Congregate"), CardType::Instant, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CCongregateCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			_T("3") WHITE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CCongregateCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	CZone* pContInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.AddComparer(new AnyCreatureComparer);

	int n = 2 * (m_CardFilter_temp.CountIncluded(pContInplay->GetCardContainer()) + m_CardFilter_temp.CountIncluded(pOppInplay->GetCardContainer()));

	CLifeModifier modifier1 = CLifeModifier(Life(n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier1.ApplyTo(pAbilityAction->GetAssociatedPlayer());
}

//____________________________________________________________________________
//
CFortifyCard::CFortifyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fortify"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Creatures you control get +2/+0 until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+2)));

		cpSpell->SetAffectControllerCardsOnly();
		cpSpell->SetAbilityText(_T("Creatures you control get +0/+2 until end of turn. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CClaustrophobiaCard::CClaustrophobiaCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Claustrophobia"), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+0))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CClaustrophobiaCard::OnResolutionCompleted))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	m_pChgPwrTghAttrEnchant->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CClaustrophobiaCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* target = pAbilityAction->GetAssociatedCard();
	CCardOrientationModifier pModifier = CCardOrientationModifier(true);
	if (bResult) pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CDisperseCard::CDisperseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Disperse"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CDomesticationCard::CDomesticationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Domestication"), CardType::EnchantCreature, nID)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false)));
		ATLASSERT(cpSpell);

		pSpell = cpSpell.GetPointer();
		AddSpell(pSpell);
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDomesticationCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDomesticationCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDomesticationCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CNode* pToNode) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pSpell->GetEnchantedOnCard();
	return (GET_INTEGER(pCreature->GetPower()) >= 4);
}

bool CDomesticationCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* pCreature = (CCreatureCard*)pSpell->GetEnchantedOnCard();
	return (GET_INTEGER(pCreature->GetPower()) >= 4);
}

//____________________________________________________________________________
//
CNephaliaSeakiteCard::CNephaliaSeakiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nephalia Seakite"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
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
CSensoryDeprivationCard::CSensoryDeprivationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sensory Deprivation"), nID,
		BLUE_MANA_TEXT,
		Power(-3), Life(-0))
{
}

//____________________________________________________________________________
//
CShrivelCard::CShrivelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shrivel"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(-1),	// power delta
			Life(-1)));	// life delta

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGoblinShortcutterCard::CGoblinShortcutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Shortcutter"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility,
								 CWhenSelfInplay, CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
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
CPitchburnDevilsCard::CPitchburnDevilsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pitchburn Devils"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(true);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBramblecrushCard::CBramblecrushCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Bramblecrush"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new AnyCreatureComparer),
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CBriarpackAlphaCard::CBriarpackAlphaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Briarpack Alpha"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLayOfTheLandCard::CLayOfTheLandCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Lay of the Land"), CardType::Sorcery, nID,
		GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CRangersGuileCard::CRangersGuileCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Ranger's Guile"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
}

//____________________________________________________________________________
//
CVerdantHavenCard::CVerdantHavenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Verdant Haven"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				_T("2") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CAbilityEnchant::CreateAbilityCallback(this, &CVerdantHavenCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CVerdantHavenCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredProdManaAbility, CWhenSelfTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetSkipStack(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarksteelForgeCard::CDarksteelForgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Forge"), CardType::Artifact, nID,
		_T("9"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));
	
	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarksteelIngotCard::CDarksteelIngotCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Ingot"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);
	
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
CFireshriekerCard::CFireshriekerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fireshrieker"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMutavaultCard::CMutavaultCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mutavault"), nID)
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
				_T("Shapeshifter AA"), 64064));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShimmeringGrottoCard::CShimmeringGrottoCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shimmering Grotto"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddManaCost(_T("1"));

		AddAbility(cpAbility.GetPointer());
	}
	/*{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}*/
}

//____________________________________________________________________________
//
CDragonEggCard::CDragonEggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragon Egg"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Dragon G"), 62055, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CXathridNecromancerCard::CXathridNecromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Xathrid Necromancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CXathridNecromancerCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Human), false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CXathridNecromancerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CXathridNecromancerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nTokenCount = 1;
	int nMultiplyBy = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nMultiplyBy <<= nMultiplier;

	for (int j = 0; j < nTokenCount * nMultiplyBy; ++j)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Zombie M"), 2917));		
		
		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2917); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Zombie M")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		cpToken.GetPointer()->SetIntoPlayTapped();

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CStaffOfTheSunMagusCard::CStaffOfTheSunMagusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of the Sun Magus"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("white cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Plains, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CElvishMysticCard::CElvishMysticCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Elvish Mystic"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CManaweftSliverCard::CManaweftSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Manaweft Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaweftSliverCard::CreateAbility1)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaweftSliverCard::CreateAbility2)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaweftSliverCard::CreateAbility3)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaweftSliverCard::CreateAbility4)));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CManaweftSliverCard::CreateAbility5)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CManaweftSliverCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CManaweftSliverCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CManaweftSliverCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CManaweftSliverCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CManaweftSliverCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COathOfTheAncientWoodCard::COathOfTheAncientWoodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oath of the Ancient Wood"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false)); // add one counter

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIllusionaryArmorCard::CIllusionaryArmorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Illusionary Armor"), nID,
		_T("4") BLUE_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null | CreatureKeyword::Null)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, true, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurningEarthCard::CBurningEarthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Burning Earth"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("a nonbasic land")));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CCelestialFlareCard::CCelestialFlareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Celestial Flare"), CardType::Instant, nID)	
	, m_CardFilter(_T("an attacking or blocking creature"), _T("attacking or blocking creatures"), new AttackingBlockingCreatureComparer)
{
	counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
		::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Instant,					
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			&m_CardFilter));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWitchstalkerCard::CWitchstalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Witchstalker"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
	, m_CardFilter(_T("a blue or black card"), _T("blue or black cards"), new CardTypeComparer(CardType::Blue | CardType::Black, false))
{
	GetCardKeyword()->AddHexproof(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWitchstalkerCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWitchstalkerCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return (m_pGame->GetActivePlayer() == GetController());
}

//____________________________________________________________________________
//
CVoraciousWurmCard::CVoraciousWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Voracious Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVoraciousWurmCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CVoraciousWurmCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;
	int nControllerLifeGainCount = GetController()->GetLifeGainThisTurn();
	
	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nControllerLifeGainCount);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CKalonianHydraCard::CKalonianHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kalonian Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyTriggeredPlayersCards);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKalonianHydraCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKalonianHydraCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetCardType().IsCreature())
		{
			int nCounterCount = pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();
			CCardCounterModifier modifier(_T("+1/+1"), nCounterCount); // double the number of counters
			modifier.ApplyTo((CCreatureCard*)pCard);
		}
	}
	return true;
}

//____________________________________________________________________________
//
CSeismicStompCard::CSeismicStompCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seismic Stomp"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Seismic Stomp Effect"), 61129, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHauntedPlateMailCard::CHauntedPlateMailCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Haunted Plate Mail"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CHauntedPlateMailCard::OnResolutionCompleted))
{
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("0"),
				_T("Spirit AI"), 64087));

		counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CHauntedPlateMailCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("4")));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+4), this, 
			PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+4), FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CHauntedPlateMailCard::CanPlay(BOOL bIncludeTricks)
{
	return CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0;
}

void CHauntedPlateMailCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!IsInplay()) return;

	CCardTypeModifier pModifier = CCardTypeModifier(CardType::Null, TRUE, CardType::Equipment);
	pModifier.ApplyTo(this);
}

//____________________________________________________________________________
//
