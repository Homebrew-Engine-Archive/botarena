#include "stdafx.h"
#include "CardScarsOfMirrodin.h"

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
		DEFINE_CARD(CAbunaAcolyteCard);
		DEFINE_CARD(CAccordersShieldCard);
		DEFINE_CARD(CAcidWebSpiderCard);
		DEFINE_CARD(CAlphaTyrranaxCard);
		DEFINE_CARD(CArcTrailCard);
		DEFINE_CARD(CArgentSphinxCard);
		DEFINE_CARD(CArgentumArmorCard);
		DEFINE_CARD(CAsceticismCard);
		DEFINE_CARD(CAssaultStrobeCard);
		DEFINE_CARD(CAuriokEdgewrightCard);
		DEFINE_CARD(CAuriokReplicaCard);
		DEFINE_CARD(CAuriokSunchaserCard);
		DEFINE_CARD(CBarbedBattlegearCard);
		DEFINE_CARD(CBarrageOgreCard);
		DEFINE_CARD(CBellowingTanglewurmCard);
		DEFINE_CARD(CBlackcleaveCliffsCard);
		DEFINE_CARD(CBlackcleaveGoblinCard);
		DEFINE_CARD(CBladeTribeBerserkersCard);
		DEFINE_CARD(CBladedPinionsCard);
		DEFINE_CARD(CBleakCovenVampiresCard);
		DEFINE_CARD(CBlightMambaCard);
		DEFINE_CARD(CBlistergrubCard);
		DEFINE_CARD(CBluntTheAssaultCard);
		DEFINE_CARD(CBondsOfQuicksilverCard);
		DEFINE_CARD(CCarapaceForgerCard);
		DEFINE_CARD(CCarnifexDemonCard);
		DEFINE_CARD(CCarrionCallCard);
		DEFINE_CARD(CCerebralEruptionCard);
		DEFINE_CARD(CChimericMassCard);
		DEFINE_CARD(CChromeSteedCard);
		DEFINE_CARD(CCloneShellCard);
		DEFINE_CARD(CContagionClaspCard);
		DEFINE_CARD(CContagionEngineCard);
		DEFINE_CARD(CContagiousNimCard);
		DEFINE_CARD(CCopperhornScoutCard);
		DEFINE_CARD(CCopperlineGorgeCard);
		DEFINE_CARD(CCorpseCurCard);
		DEFINE_CARD(CCorruptedHarvesterCard);
		DEFINE_CARD(CCullingDaisCard);
		DEFINE_CARD(CCystbearerCard);
		DEFINE_CARD(CDarkslickDrakeCard);
		DEFINE_CARD(CDarkslickShoresCard);
		DEFINE_CARD(CDarksteelAxeCard);
		DEFINE_CARD(CDarksteelJuggernautCard);
		DEFINE_CARD(CDarksteelMyrCard);
		DEFINE_CARD(CDarksteelSentinelCard);
		DEFINE_CARD(CDispenseJusticeCard);
		DEFINE_CARD(CDrossHopperCard);
		DEFINE_CARD(CEchoCircletCard);
		DEFINE_CARD(CElspethTirelCard);
		DEFINE_CARD(CEmbersmithCard);
		DEFINE_CARD(CEngulfingSlagwurmCard);
		DEFINE_CARD(CEtchedChampionCard);
		DEFINE_CARD(CExsanguinateCard);
		DEFINE_CARD(CEzurisArchersCard);
		DEFINE_CARD(CEzurisBrigadeCard);
		DEFINE_CARD(CEzuriRenegadeLeaderCard);
		DEFINE_CARD(CFerrovoreCard);
		DEFINE_CARD(CFlamebornHellionCard);
		DEFINE_CARD(CFleshAllergyCard);
		DEFINE_CARD(CFlightSpellbombCard);
		DEFINE_CARD(CFumeSpitterCard);
		DEFINE_CARD(CFurnaceCelebrationCard);
		DEFINE_CARD(CGalvanicBlastCard);
		DEFINE_CARD(CGenesisWaveCard);
		DEFINE_CARD(CGethLordoftheVaultCard);
		DEFINE_CARD(CGhalmasWardenCard);
		DEFINE_CARD(CGlintHawkIdolCard);
		DEFINE_CARD(CGlimmerpointStagCard);
		DEFINE_CARD(CGlimmerpostCard);
		DEFINE_CARD(CGlintHawkCard);
		DEFINE_CARD(CGoldenUrnCard);
		DEFINE_CARD(CGolemArtisanCard);
		DEFINE_CARD(CGolemFoundryCard);
		DEFINE_CARD(CGolemsHeartCard);
		DEFINE_CARD(CGraftedExoskeletonCard);
		DEFINE_CARD(CGraspOfDarknessCard);
		DEFINE_CARD(CGrindclockCard);
		DEFINE_CARD(CHaltOrderCard);
		DEFINE_CARD(CHandofthePraetorsCard);
		DEFINE_CARD(CHeavyArbalestCard);
		DEFINE_CARD(CHoardSmelterDragonCard);
		DEFINE_CARD(CHorizonSpellbombCard);
		DEFINE_CARD(CIchorclawMyrCard);
		DEFINE_CARD(CIchorRatsCard);
		DEFINE_CARD(CIndomitableArchangelCard);
		DEFINE_CARD(CInexorableTideCard);
		DEFINE_CARD(CInfiltrationLensCard);
		DEFINE_CARD(CInstillInfectionCard);
		DEFINE_CARD(CKembaKhaRegentCard);
		DEFINE_CARD(CKembasSkyguardCard);
		DEFINE_CARD(CKothoftheHammerCard);
		DEFINE_CARD(CKuldothaForgemasterCard);
		DEFINE_CARD(CKuldothaPhoenixCard);
		DEFINE_CARD(CKuldothaRebirthCard);
		DEFINE_CARD(CLifesmithCard);
		DEFINE_CARD(CLiquimetalCoatingCard);
		DEFINE_CARD(CLoxodonWayfarerCard);
		DEFINE_CARD(CLumengridDrakeCard);
		DEFINE_CARD(CLuxCannonCard);
		DEFINE_CARD(CMeltTerrainCard);
		DEFINE_CARD(CMemniteCard);
		DEFINE_CARD(CMemoricideCard);
		DEFINE_CARD(CMimicVatCard);
		DEFINE_CARD(CMolderBeastCard);
		DEFINE_CARD(CMoltenTailMasticoreCard);
		DEFINE_CARD(CMoriokReaverCard);
		DEFINE_CARD(CMoriokReplicaCard);
		DEFINE_CARD(CMoxOpalCard);
		DEFINE_CARD(CMyrBattlesphereCard);
		DEFINE_CARD(CMyrGalvanizerCard);
		DEFINE_CARD(CMyrPropagatorCard);
		DEFINE_CARD(CMyrsmithCard);
		DEFINE_CARD(CNecrogenCenserCard);
		DEFINE_CARD(CNecrogenScudderCard);
		DEFINE_CARD(CNecropedeCard);
		DEFINE_CARD(CNeurokInvisimancerCard);
		DEFINE_CARD(CNeurokReplicaCard);
		DEFINE_CARD(CNihilSpellbombCard);
		DEFINE_CARD(COriginSpellbombCard);
		DEFINE_CARD(COxiddaDaredevilCard);
		DEFINE_CARD(COxiddaScrapmelterCard);
		DEFINE_CARD(CPainfulQuandaryCard);
		DEFINE_CARD(CPainsmithCard);
		DEFINE_CARD(CPalladiumMyrCard);
		DEFINE_CARD(CPanicSpellbombCard);
		DEFINE_CARD(CPerilousMyrCard);
		DEFINE_CARD(CPlagueStingerCard);
		DEFINE_CARD(CPlatedSeastriderCard);
		DEFINE_CARD(CPlatinumEmperionCard);
		DEFINE_CARD(CPutrefaxCard);
		DEFINE_CARD(CRatchetBombCard);
		DEFINE_CARD(CRazorfieldThresherCard);
		DEFINE_CARD(CRazorHippogriffCard);
		DEFINE_CARD(CRazorvergeThicketCard);
		DEFINE_CARD(CRelicPutrescenceCard);
		DEFINE_CARD(CRevokeExistenceCard);
		DEFINE_CARD(CRiddlesmithCard);
		DEFINE_CARD(CSaberclawGolemCard);
		DEFINE_CARD(CSalvageScoutCard);
		DEFINE_CARD(CScoriaElementalCard);
		DEFINE_CARD(CScrapdiverSerpentCard);
		DEFINE_CARD(CScreechingSilcawCard);
		DEFINE_CARD(CSeachromeCoastCard);
		DEFINE_CARD(CSeizeTheInitiativeCard);
		DEFINE_CARD(CSemblanceAnvilCard);
		DEFINE_CARD(CShapeAnewCard);
		DEFINE_CARD(CSkinrenderCard);
		DEFINE_CARD(CSkithiryxtheBlightDragonCard);
		DEFINE_CARD(CSkyEelSchoolCard);
		DEFINE_CARD(CSliceInTwainCard);
		DEFINE_CARD(CSnapsailGliderCard);
		DEFINE_CARD(CSolitonCard);
		DEFINE_CARD(CSoulParryCard);
		DEFINE_CARD(CSpikeshotElderCard);
		DEFINE_CARD(CSteadyProgressCard);
		DEFINE_CARD(CSteelHellkiteCard);
		DEFINE_CARD(CStoicRebuttalCard);
		DEFINE_CARD(CStriderHarnessCard);
		DEFINE_CARD(CSunblastAngelCard);
		DEFINE_CARD(CSunspearShikariCard);
		DEFINE_CARD(CSwordOfBodyAndMindCard);
		DEFINE_CARD(CSylvokReplicaCard);
		DEFINE_CARD(CSylvokLifestaffCard);
		DEFINE_CARD(CTaintedStrikeCard);
		DEFINE_CARD(CTelJiladDefianceCard);
		DEFINE_CARD(CTelJiladFallenCard);
		DEFINE_CARD(CTemperedSteelCard);
		DEFINE_CARD(CThroneofGethCard);
		DEFINE_CARD(CThrummingbirdCard);
		DEFINE_CARD(CTowerofCalamitiesCard);
		DEFINE_CARD(CTrigonofCorruptionCard);
		DEFINE_CARD(CTrigonofInfestationCard);
		DEFINE_CARD(CTrigonofRageCard);
		DEFINE_CARD(CTrigonofThoughtCard);
		DEFINE_CARD(CTrigonofMendingCard);
		DEFINE_CARD(CTrueConvictionCard);
		DEFINE_CARD(CTunnelIgnusCard);
		DEFINE_CARD(CTumbleMagnetCard);
		DEFINE_CARD(CTurnAsideCard);
		DEFINE_CARD(CTwistedImageCard);
		DEFINE_CARD(CUntamedMightCard);
		DEFINE_CARD(CVaultSkywardCard);
		DEFINE_CARD(CVectorAspCard);
		DEFINE_CARD(CVedalkenCertarchCard);
		DEFINE_CARD(CVensertheSojournerCard);
		DEFINE_CARD(CVensersJournalCard);
		DEFINE_CARD(CViridianRevelCard);
		DEFINE_CARD(CVolitionReinsCard);
		DEFINE_CARD(CVulshokHeartstokerCard);
		DEFINE_CARD(CVulshokReplicaCard);
		DEFINE_CARD(CWallofTanglecordCard);
		DEFINE_CARD(CWhitesunsPassageCard);
		DEFINE_CARD(CWithstandDeathCard);
		DEFINE_CARD(CWurmcoilEngineCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CSwordOfBodyAndMindCard::CSwordOfBodyAndMindCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of Body and Mind"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSwordOfBodyAndMindCard::OnResolutionCompleted))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCardKeywordModifier* pModifier1 = new CCardKeywordModifier;
			pModifier1->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
			pModifier1->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier1);

		CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
			pModifier2->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
			pModifier2->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->AddCardModifier(pModifier2);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
	
		cpAbility->SetRevealCount(10);
		cpAbility->SetReorder(true, ZoneId::Graveyard);
	
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
void CSwordOfBodyAndMindCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Wolf G"), 2900, 1);

	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CIchorRatsCard::CIchorRatsCard(CGame* pGame, UINT nID)
: CCreatureCard(pGame, _T("Ichor Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddInfect(false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CPoisonModifier(GetGame(), 1, FALSE, TRUE));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CPoisonModifier(GetGame(), 1, FALSE, FALSE));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CEzurisBrigadeCard::CEzurisBrigadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ezuri's Brigade"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+4), Life(+4)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CVensertheSojournerCard::CVensertheSojournerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Venser, the Sojourner"), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT,
		PlaneswalkerType::Venser, 3)	
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
 		&CVensertheSojournerCard::OnResolutionCompleted1))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CVensertheSojournerCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());		
		
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardOwnerComparer(this));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::UnblockableCreatures);	

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

		pmodifier->LinkPlayerModifier(pModifier2);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier);		

		cpAbility->SetAbilityName(_T("Creatures you control are unblockable this turn"));
		cpAbility->SetAbilityText(_T("Creatures you control are unblockable this turn"));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);
		
		AddAbility(cpAbility.GetPointer());			
	}
	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Venser, the Sojourner Emblem"), 61007, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - Whenever you cast a spell, exile target permanent."));
		cpAbility->SetAbilityText(_T("You get an emblem with - Whenever you cast a spell, exile target permanent."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);

		AddAbility(cpAbility.GetPointer());			
	}
}

void CVensertheSojournerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CThrummingbirdCard::CThrummingbirdCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thrummingbird"), CardType::Creature, CREATURE_TYPE2(Bird, Horror), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CThrummingbirdCard::OnResolutionCompleted1))
		, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CThrummingbirdCard::OnProliferateSelected))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
	cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);
	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CThrummingbirdCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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

void CThrummingbirdCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CContagionClaspCard::CContagionClaspCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Contagion Clasp"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	   &CContagionClaspCard::OnResolutionCompleted1))
		, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CContagionClaspCard::OnProliferateSelected))
{
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
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("4")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		cpAbility->SetAbilityName(_T("Proliferate."));
		cpAbility->SetAbilityText(_T("Proliferate."));

		cpAbility->AddTapCost();

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

void CContagionClaspCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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

void CContagionClaspCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CPlagueStingerCard::CPlagueStingerCard(CGame* pGame, UINT nID)
: CFlyingCreatureCard(pGame, _T("Plague Stinger"), CardType::Creature, CREATURE_TYPE2(Insect, Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddInfect(false);
}

//____________________________________________________________________________
//
CElspethTirelCard::CElspethTirelCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Elspeth Tirel"), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Elspeth, 4)	
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Soldier J"), 2976,
				3)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);	
		cpAbility->SetAbilityText(_T("Remove two loyalty counters: Put three 1/1 white Soldier creature tokens onto the battlefield."));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeBySurveySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeBySurveySpell>>(this,
				_T(""))); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);		
		cpAbility->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

		cpAbility->SetAbilityText(_T("Put two loyalty counters: You gain 1 life for each creature you control."));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T(""), 
			new TrueCardComparer, 
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -5);	
		cpAbility->GetGlobalCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGlobalCardFilter().AddNegateComparer(new AlsoCardTypeComparer(CardType::_Land, false));
		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetGlobalCardFilter().AddNegateComparer(new AlsoCardTypeComparer(CardType::Token, false));

	cpAbility->SetAbilityText(_T("Remove five loyalty counters: Destroy all other permanents except for lands and tokens."));
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoxOpalCard::CMoxOpalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Opal"), CardType::_LegendaryArtifact, nID,
		_T(""), AbilityType::Artifact)
{
	{
        counted_ptr<CManaProductionAbility> cpAbility(
            ::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

        cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
	        ::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMoxOpalCard::CanPlay)));

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
				&CMoxOpalCard::CanPlay)));

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
				&CMoxOpalCard::CanPlay)));

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
				&CMoxOpalCard::CanPlay)));

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
				&CMoxOpalCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

    	AddAbility(cpAbility.GetPointer());
    }
}

BOOL CMoxOpalCard::CanPlay(BOOL bIncludeTricks)
{
 	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= 3;
}

//____________________________________________________________________________
//
CKothoftheHammerCard::CKothoftheHammerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Koth of the Hammer"), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT,
		PlaneswalkerType::Koth, 3)	
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
	  	   &CKothoftheHammerCard::OnResolutionCompleted1))

{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::Mountain, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());		
	cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

	/*cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier);
	cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier2);*/

	AddAbility(cpAbility.GetPointer());	
	}
	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Koth of the Hammer Emblem"), 61009, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - Mountains you control have T: This land deals 1 damage to target creature or player."));
		cpAbility->SetAbilityText(_T("You get an emblem with - Mountains you control have T: This land deals 1 damage to target creature or player."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -5);

		AddAbility(cpAbility.GetPointer());			
	}
	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->SetAbilityText(_T("add {R} to your mana pool for each Mountain you control with"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKothoftheHammerCard::BeforeResolution));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKothoftheHammerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Mountain, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

void CKothoftheHammerCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier( _T("Elemental AA"), 64031, pAbilityAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	if (bResult)
	{
		pModifier->ApplyTo(pCard);
		pModifier2.ApplyTo(pCard);
	}
}

//____________________________________________________________________________
//
CThroneofGethCard::CThroneofGethCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Throne of Geth"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	&CThroneofGethCard::OnResolutionCompleted1))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CThroneofGethCard::OnProliferateSelected))
{	
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		cpAbility->SetAbilityName(_T("Proliferate."));
		cpAbility->SetAbilityText(_T("Proliferate."));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

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
void CThroneofGethCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
void CThroneofGethCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CMoltenTailMasticoreCard::CMoltenTailMasticoreCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Molten-Tail Masticore"), CardType::_ArtifactCreature, CREATURE_TYPE(Masticore), nID,
		_T("4"), Power(4), Life(4),
		_T("2"))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("4"),
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpAbility->GetCost().AddExileGraveyardCardCost(1,CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkithiryxtheBlightDragonCard::CSkithiryxtheBlightDragonCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Skithiryx, the Blight Dragon"), CardType::_LegendaryCreature, CREATURE_TYPE2(Dragon, Skeleton), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4),
		BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddInfect(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Haste));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWurmcoilEngineCard::CWurmcoilEngineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wurmcoil Engine"), CardType::_ArtifactCreature, CREATURE_TYPE(Wurm), nID,
		_T("6"), Power(6), Life(6))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);

	typedef TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, true, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWurmcoilEngineCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CWurmcoilEngineCard::BeforeResolution(CAbilityAction* pAction) const
{
	CTokenCreationModifier modifier1(GetGame(), _T("Wurm D"), 2892, 1);
	CTokenCreationModifier modifier2(GetGame(), _T("Wurm E"), 2893, 1);

	modifier1.ApplyTo(pAction->GetController());
	modifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CMemniteCard::CMemniteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Memnite"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T(""), Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CCarapaceForgerCard::CCarapaceForgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carapace Forger"), CardType::Creature, CREATURE_TYPE2(Elf, Artificer), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
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
CPalladiumMyrCard::CPalladiumMyrCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Palladium Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(2), Life(2),
		_T("2"))
{
}

//____________________________________________________________________________
//
CKuldothaForgemasterCard::CKuldothaForgemasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kuldotha Forgemaster"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("5"), Power(3), Life(5))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			CCardFilter::GetFilter(_T("artifact cards")),		
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->GetCost().AddSacrificeCardCost(3, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIchorclawMyrCard::CIchorclawMyrCard(CGame* pGame, UINT nID)
: CCreatureCard(pGame, _T("Ichorclaw Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1))
{

	{
		GetCardKeyword()->AddInfect(false);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMyrGalvanizerCard::CMyrGalvanizerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Galvanizer"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(2), Life(2))

{
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Myr), false),
			Power(+1), Life(+1), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetAffectControllerCardsOnly();
	AddAbility(cpAbility.GetPointer());
}
{
	counted_ptr<CGlobalUntapSpell> cpAbility(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Activated,
			_T("1"),
			new CreatureTypeComparer(CREATURE_TYPE(Myr), false)));

	cpAbility->SetToActivatedAbility();
	
	cpAbility->AddTapCost();
	cpAbility->GetGlobalCardFilter().AddNegateComparer(new SpecificCardComparer(this)); //not this
	cpAbility->SetAffectControllerCardsOnly();
	AddAbility(cpAbility.GetPointer());
	
}
}

//____________________________________________________________________________
//
COriginSpellbombCard::COriginSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Origin Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1"),
			_T("Myr B"), 62008,
			1));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);
	AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CTumbleMagnetCard::CTumbleMagnetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tumble Magnet"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE,	// tap
			FALSE,	// untap
			new CardTypeComparer(CardType::Artifact | CardType::Creature, false)));

	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);
	AddAbility(cpAbility.GetPointer());	
	}
}

//_________________________________________________________________________________
//
CTrigonofInfestationCard::CTrigonofInfestationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trigon of Infestation"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2"),
			_T("Insect (D)"), TOKEN_ID_BY_NAME,
			1));

	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);
	AddAbility(cpAbility.GetPointer());	
	}
}
//_________________________________________________________________________
//
CTemperedSteelCard::CTemperedSteelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tempered Steel"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_ArtifactCreature, true),
			Power(+2), Life(+2)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKembasSkyguardCard::CKembasSkyguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kemba's Skyguard"), CardType::Creature, CREATURE_TYPE2(Cat, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
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

//____________________________________________________________________________
//
CDarksteelAxeCard::CDarksteelAxeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Darksteel Axe"), CardType::Artifact  | CardType::Equipment, nID,
		_T("1"), AbilityType::Artifact)
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2"), new AnyCreatureComparer));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//________________________________________________________________________________
//
CSylvokReplicaCard::CSylvokReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvok Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Shaman), nID,
		_T("3"), Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPainsmithCard::CPainsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Painsmith"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CContagionEngineCard::CContagionEngineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Contagion Engine"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	   &CContagionEngineCard::OnResolutionCompleted1))
		, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	   &CContagionEngineCard::OnResolutionCompleted2))
		, m_cpEventListener3(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		  	   &CContagionEngineCard::OnResolutionCompleted3))
		, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CContagionEngineCard::OnProliferateSelected))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());
		
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);		
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("4")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));

		cpAbility->SetAbilityName(_T("Proliferate."));
		cpAbility->SetAbilityText(_T("Proliferate."));

		cpAbility->AddTapCost();

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener3.GetPointer());
		

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
void CContagionEngineCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
void CContagionEngineCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
void CContagionEngineCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("-1/-1"), +1)));

	pModifier.ApplyTo(pAbilityAction->GetAssociatedPlayer());
}
void CContagionEngineCard::OnResolutionCompleted3(const CAbilityAction* pAbilityAction, BOOL bResult)
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

//____________________________________________________________________________
//
CSteadyProgressCard::CSteadyProgressCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Steady Progress"), CardType::Instant, nID)		
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CSteadyProgressCard::OnProliferateSelected))
{
	{
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Instant,
            _T("2") BLUE_MANA_TEXT));

	cpSpell->GetResolutionModifier().CCardModifiers::push_back(new CSpecialEffectModifier((CCard*)this, 1));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSteadyProgressCard::BeforeResolution));

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

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
	}
}

bool CSteadyProgressCard::BeforeResolution(CAbilityAction* pAction)
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

	return true;
}

void CSteadyProgressCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
			else if (i == 2)
			{
				CPoisonModifier pModifier1 = CPoisonModifier(m_pGame,1);
				pModifier1.ApplyTo(pSelectionPlayer);
			}
			else if (i==3)
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
CStoicRebuttalCard::CStoicRebuttalCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Stoic Rebuttal"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->GetCost().AddReductionCost(_T("1"));

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CStoicRebuttalCard::CanPlay1)));

	m_pCounterSpell->Add(cpTrait.GetPointer());

	{
		counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant, _T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, new TrueCardComparer));

	counted_ptr<CPlayableIfTrait> cpTrait1(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CStoicRebuttalCard::CanPlay2)));

	cpSpell->Add(cpTrait1.GetPointer());

	AddSpell(cpSpell.GetPointer());
	}
}

BOOL CStoicRebuttalCard::CanPlay1(BOOL bIncludeTricks)
{
	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= 3;
}

BOOL CStoicRebuttalCard::CanPlay2(BOOL bIncludeTricks)
{
	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) < 3;
}

//____________________________________________________________________________
//
CShapeAnewCard::CShapeAnewCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shape Anew"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject <CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShapeAnewCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CShapeAnewCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();

	CMoveCardModifier pModifier1(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration, pAction->GetController());
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
			if (pLibrary->GetAt(i)->GetCardType().IsArtifact())
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier2.ApplyTo(pPlayer);
	pLibrary->Shuffle();

	return false;
}

//____________________________________________________________________________
//
CSemblanceAnvilCard::CSemblanceAnvilCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Semblance Anvil"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_pCard(NULL)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSemblanceAnvilCard::OnZoneChanged))		
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this, &CSemblanceAnvilCard::CreateReductionAbility));

	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer( new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();		
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSemblanceAnvilCard::BeforeResolveSelection));
	cpAbility->SetAbilityName(_T("Imprint"));

	AddAbility(cpAbility.GetPointer());
}

bool CSemblanceAnvilCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	m_pCard = const_cast<CCard*>(((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetFirstCardSubject());

	CCard* pAnvil = (CCard*)this;

	if (m_pCard)
	{
	m_pModifier->ApplyTo(this);

	for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
	{
		CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(pAnvil->GetAbilities().GetAt(i).GetPointer());
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->StartEnchantment();
		}
	}

	}

	return TRUE;
}

void CSemblanceAnvilCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	{
	m_pCard = NULL;
	CCard* pAnvil = (CCard*)this;

	for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
	{
		CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(pAnvil->GetAbilities().GetAt(i).GetPointer());
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->EndEnchantment();
		}
	}

	m_pModifier->RemoveFrom(this);
	}	
	else
	if ((pFromZone->GetZoneId() == ZoneId::Battlefield) && 
					(pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
	{
		CConsLessManaEnchantment* pEnchantSpell = dynamic_cast<CConsLessManaEnchantment*>(GetAbilities().GetAt(i).GetPointer());
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->EndEnchantment();
			pEnchantSpell->StartEnchantment();
		}
	}
	}
}

counted_ptr<CAbility> CSemblanceAnvilCard::CreateReductionAbility(CCard* pCard)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
	::CreateObject<CConsLessManaEnchantment>(pCard,
		new CardSharingCardTypeComparer(m_pCard),
		_T("2")));

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetAbilityName(_T("Semblance Anvil Reduction"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSeachromeCoastCard::CSeachromeCoastCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Seachrome Coast"), nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSeachromeCoastCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

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

void CSeachromeCoastCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 3))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CGlintHawkCard::CGlintHawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glint Hawk"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("") WHITE_MANA_TEXT, Power(2), Life(2))
{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
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
CIndomitableArchangelCard::CIndomitableArchangelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Indomitable Archangel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT , Power(4), Life(4))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				//new NegateCardComparer(new SpecificCardComparer(this)),	// Not this card
				new CardTypeComparer(CardType::Artifact, false),
				Power(+0), Life(+0)));

		//cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMyrsmithCard::CMyrsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myrsmith"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Myr B"), 62008, 1);
	cpAbility->SetResolutionCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSunblastAngelCard::CSunblastAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sunblast Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT , Power(4), Life(5))

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
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(
		new TappedComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrueConvictionCard::CTrueConvictionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("True Conviction"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+0), Life(+0),
			CreatureKeyword::DoubleStrike));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMyrPropagatorCard::CMyrPropagatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Propagator"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMyrPropagatorCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CMyrPropagatorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this);
	pModifier.ApplyTo((CCard*)this);
	return true;
}
//____________________________________________________________________________
//
CGolemsHeartCard::CGolemsHeartCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golem's Heart"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpikeshotElderCard::CSpikeshotElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spikeshot Elder"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		 RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell3>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell3>>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));
	ATLASSERT(cpAbility);	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHandofthePraetorsCard::CHandofthePraetorsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hand of the Praetors"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
		, m_CardFilter(_T("a creature spell with infec"), _T("creature spells with infect"), new CardKeywordComparer(CardKeyword::Infect,false))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
 				&CHandofthePraetorsCard::OnResolutionCompleted1))
{
	GetCardKeyword()->AddInfect(FALSE);
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardKeywordComparer(CardKeyword::Infect,false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{		
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());	

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}
void CHandofthePraetorsCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPoisonModifier pModifier = CPoisonModifier(GetGame(), +1);
	pModifier.ApplyTo(pAbilityAction->GetAssociatedPlayer());
}

//____________________________________________________________________________
//
CDarkslickShoresCard::CDarkslickShoresCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Darkslick Shores"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDarkslickShoresCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CDarkslickShoresCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 3))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CBlackcleaveCliffsCard::CBlackcleaveCliffsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Blackcleave Cliffs"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBlackcleaveCliffsCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CBlackcleaveCliffsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 3))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CCopperlineGorgeCard::CCopperlineGorgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Copperline Gorge"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCopperlineGorgeCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CCopperlineGorgeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 3))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CRazorvergeThicketCard::CRazorvergeThicketCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Razorverge Thicket"), nID)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CRazorvergeThicketCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

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

void CRazorvergeThicketCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield &&
		(CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 3))
	{
		this->GetOrientation()->Tap();
	}
}

//____________________________________________________________________________
//
CLiquimetalCoatingCard::CLiquimetalCoatingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Liquimetal Coating"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new TrueCardComparer));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Artifact, CardType::Null, TRUE, _T("artifact permanent"));	

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CBlightMambaCard::CBlightMambaCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Blight Mamba"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1),
		_T("1") GREEN_MANA_TEXT)
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CPutrefaxCard::CPutrefaxCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Putrefax"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCardKeyword()->AddInfect(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDarkslickDrakeCard::CDarkslickDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Darkslick Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
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
CVolitionReinsCard::CVolitionReinsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Volition Reins"), CardType::EnchantPermanent, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpSpell->SetUntapTargetOnEnchant(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRiddlesmithCard::CRiddlesmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riddlesmith"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") BLUE_MANA_TEXT , Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));	

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoxodonWayfarerCard::CLoxodonWayfarerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loxodon Wayfarer"), CardType::Creature, CREATURE_TYPE2(Elephant, Monk), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(5))
{
}

//____________________________________________________________________________
//
CAuriokEdgewrightCard::CAuriokEdgewrightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Edgewright"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
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
}
//____________________________________________________________________________
//
CVedalkenCertarchCard::CVedalkenCertarchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Certarch"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("") BLUE_MANA_TEXT, Power(1), Life(1))
{
    counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
	::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
		_T(""),
		TRUE, FALSE,
		new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

    cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
	    ::CreateObject<CPlayableIfTrait>(
	        m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CVedalkenCertarchCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

    AddAbility(cpAbility.GetPointer());
}

BOOL CVedalkenCertarchCard::CanPlay(BOOL bIncludeTricks)
{
	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= 3;
}

//____________________________________________________________________________
//
CArgentSphinxCard::CArgentSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Argent Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(3))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CArgentSphinxCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLUE_MANA_TEXT));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CArgentSphinxCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	ATLASSERT(cpAbility);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CArgentSphinxCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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

BOOL CArgentSphinxCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) >= 3)
		return true;

	return false;
}

//____________________________________________________________________________
//
CLumengridDrakeCard::CLumengridDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lumengrid Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	    cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLumengridDrakeCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLumengridDrakeCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLumengridDrakeCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

bool CLumengridDrakeCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

//____________________________________________________________________________
//
CChromeSteedCard::CChromeSteedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chrome Steed"), CardType::_ArtifactCreature, CREATURE_TYPE(Horse), nID,
		_T("4"), Power(2), Life(2))
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
CCarrionCallCard::CCarrionCallCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Carrion Call"), CardType::Instant, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT,
				_T("Insect (D)"), TOKEN_ID_BY_NAME,
				2));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CBlackcleaveGoblinCard::CBlackcleaveGoblinCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Blackcleave Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CContagiousNimCard::CContagiousNimCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Contagious Nim"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CMoriokReaverCard::CMoriokReaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moriok Reaver"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
{	
}

//____________________________________________________________________________
//
CCarnifexDemonCard::CCarnifexDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Carnifex Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	GetCounterContainer()->ScheduleCounter(_T("-1/-1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	m_CardFilter.SetComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLACK_MANA_TEXT));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("-1/-1")), -1);
		
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("-1/-1"), +1)));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),pModifier));


		AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CCystbearerCard::CCystbearerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cystbearer"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddInfect(FALSE);
}

//____________________________________________________________________________
//
CGalvanicBlastCard::CGalvanicBlastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Galvanic Blast"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGalvanicBlastCard::BeforeResolution));
}

bool CGalvanicBlastCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 2 && pAction->GetAssociatedPlayer())
		{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -4;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
		}

		return TRUE;
		}
	if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 2 && pAction->GetAssociatedCard())
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -4;

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
CDarksteelMyrCard::CDarksteelMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darksteel Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("3"), Power(0), Life(1))
{
	GetCardKeyword()->AddIndestructible(FALSE);
}

//____________________________________________________________________________
//
CDarksteelSentinelCard::CDarksteelSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darksteel Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("6"), Power(3), Life(3))
{
	GetCardKeyword()->AddIndestructible(FALSE);
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CDarksteelJuggernautCard::CDarksteelJuggernautCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darksteel Juggernaut"), CardType::_ArtifactCreature, CREATURE_TYPE(Juggernaut), nID,
		_T("5"), Power(0), Life(0))
{
	GetCardKeyword()->AddIndestructible(FALSE);
	GetCreatureKeyword()->AddMustAttack(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Artifact, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlamebornHellionCard::CFlamebornHellionCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Flameborn Hellion"), CardType::Creature, CREATURE_TYPE(Hellion), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(4))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CKuldothaRebirthCard::CKuldothaRebirthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Kuldotha Rebirth"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			_T("Goblin K"), 62022,
			3));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COxiddaDaredevilCard::COxiddaDaredevilCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oxidda Daredevil"), CardType::Creature, CREATURE_TYPE2(Goblin, Artificer), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0), CreatureKeyword::Haste));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScoriaElementalCard::CScoriaElementalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scoria Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") RED_MANA_TEXT, Power(6), Life(1))
{
}

//____________________________________________________________________________
//
CBladeTribeBerserkersCard::CBladeTribeBerserkersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blade-Tribe Berserkers"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBladeTribeBerserkersCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBladeTribeBerserkersCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CBladeTribeBerserkersCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

bool CBladeTribeBerserkersCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

//____________________________________________________________________________
//
CDrossHopperCard::CDrossHopperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dross Hopper"), CardType::Creature, CREATURE_TYPE2(Insect, Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T(""), Power(+0), Life(+0), CreatureKeyword::Flying));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInstillInfectionCard::CInstillInfectionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Instill Infection"), CardType::Instant, nID, AbilityType::Instant,
	    _T("3") BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CGraspOfDarknessCard::CGraspOfDarknessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Grasp of Darkness"), CardType::Instant, nID, AbilityType::Instant,
	    BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(-4), Life(-4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
}

//____________________________________________________________________________
//
CAssaultStrobeCard::CAssaultStrobeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Assault Strobe"), CardType::Sorcery, nID, AbilityType::Sorcery,
	    RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CMoriokReplicaCard::CMoriokReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moriok Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Warrior), nID,
		_T("3"), Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			2));

	cpAbility->AddSacrificeCost();
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-2), this,PreventableType::NotPreventable, DamageType::NotDealingDamage));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRazorfieldThresherCard::CRazorfieldThresherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Razorfield Thresher"), CardType::Creature, CREATURE_TYPE(Construct), nID,
		_T("7"), Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CFerrovoreCard::CFerrovoreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ferrovore"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+3), Life(+0), CreatureKeyword::Null));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlphaTyrranaxCard::CAlphaTyrranaxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alpha Tyrranax"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
}

//____________________________________________________________________________
//

CInfiltrationLensCard::CInfiltrationLensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Infiltration Lens"), CardType::Artifact  | CardType::Equipment, nID,
		_T("1"), AbilityType::Artifact)
{	
	{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1"), new AnyCreatureComparer));	

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenAttackedBlocked,
		CWhenAttackedBlocked::BlockedByEventCallback, &CWhenAttackedBlocked::SetBlockedEachTimeEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	
	cpAbility->SetDrawCount(2);
	
	cpAbility->GetTrigger().GetBlockedFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetBlockedFilter().GetCustomFilter().SetComparer(new EquippedByComparer(this));

	AddAbility(cpAbility.GetPointer());
	}
}

//________________________________________________________________________________
//
CSaberclawGolemCard::CSaberclawGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Saberclaw Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(4), Life(2))
{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike));
		ATLASSERT(cpAbility);		

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFurnaceCelebrationCard::CFurnaceCelebrationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Furnace Celebration"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));

	cpAbility->SetResolutionCost(_T("2"));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFurnaceCelebrationCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CFurnaceCelebrationCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::Battlefield) && (pByPlayer == GetController()) && (moveType == MoveType::Sacrifice);
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
CArgentumArmorCard::CArgentumArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Argentum Armor"), CardType::Artifact | CardType::Equipment, nID, 
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("6")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+6), this, 
	PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+6), FALSE));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CArgentumArmorCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CArgentumArmorCard::CreateEquipmentAbility(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CAuriokReplicaCard::CAuriokReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Cleric), nID,
		_T("3"), Power(2), Life(2))
{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				_T("")	WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::_AllSources, TRUE));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CBarbedBattlegearCard::CBarbedBattlegearCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Barbed Battlegear"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+4), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(-1), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBladedPinionsCard::CBladedPinionsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bladed Pinions"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));


	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier1->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier1);

	CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorpseCurCard::CCorpseCurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corpse Cur"), CardType::_ArtifactCreature, CREATURE_TYPE(Hound), nID,
		_T("4"), Power(2), Life(2))
{
	GetCardKeyword()->AddInfect(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardKeywordComparer(CardKeyword::Infect, false)); // only creatures with infect

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTunnelIgnusCard::CTunnelIgnusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tunnel Ignus"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTunnelIgnusCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CTunnelIgnusCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{	
	return pToZone->GetPlayer()->GetCertainTypeEnteredBattlefieldCount(CardType::_Land) > 1;
}

//____________________________________________________________________________
//
CLuxCannonCard::CLuxCannonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lux Cannon"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();		
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNecrogenCenserCard::CNecrogenCenserCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necrogen Censer"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-2), PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::NotDealingDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNecrogenScudderCard::CNecrogenScudderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Necrogen Scudder"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRelicPutrescenceCard::CRelicPutrescenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Relic Putrescence"), CardType::EnchantArtifact, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CRelicPutrescenceCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRelicPutrescenceCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, 
							&CWhenSelfOrientationChanged::SetTapEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	cpAbility->GetTriggeredPlayerModifiers().push_back(new CPoisonModifier(GetGame(), 1));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkinrenderCard::CSkinrenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skinrender"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +3, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTaintedStrikeCard::CTaintedStrikeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Tainted Strike"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+1), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)	
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Infect);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
}

//____________________________________________________________________________
//
CWithstandDeathCard::CWithstandDeathCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Withstand Death"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)	
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
}

//____________________________________________________________________________
//
CRatchetBombCard::CRatchetBombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ratchet Bomb"), CardType::Artifact, nID, 
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
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
CSnapsailGliderCard::CSnapsailGliderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Snapsail Glider"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CSolitonCard::CSolitonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soliton"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("5"), Power(3), Life(4))
{
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
		::CreateObject<CSelfUntapAbility>(this,
			BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CStriderHarnessCard::CStriderHarnessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Strider Harness"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTowerofCalamitiesCard::CTowerofCalamitiesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tower of Calamities"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("8"),
				new AnyCreatureComparer,
				FALSE,
				Life(-12), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CBleakCovenVampiresCard::CBleakCovenVampiresCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bleak Coven Vampires"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+4), this, PreventableType::NotPreventable));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBleakCovenVampiresCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBleakCovenVampiresCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CBleakCovenVampiresCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

bool CBleakCovenVampiresCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

//____________________________________________________________________________
//
CBarrageOgreCard::CBarrageOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barrage Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				TRUE,
				Life(-2), PreventableType::Preventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CEchoCircletCard::CEchoCircletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Echo Circlet"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	cpAbility->AddCreatureModifier(new CCreatureCanBlockAdditionModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlatinumEmperionCard::CPlatinumEmperionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Platinum Emperion"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("8"), Power(8), Life(8))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
		PlayerEffectType::CantChangeLife));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CGethLordoftheVaultCard::CGethLordoftheVaultCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Geth, Lord of the Vault"), CardType::_LegendaryCreature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
 			&CGethLordoftheVaultCard::OnResolutionCompleted1))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	
	{
		counted_ptr<CActivatedAbility<CTargetExtraMoveCardSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetExtraMoveCardSpell>>(this,
				BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature, false),
				ZoneId::Graveyard, ZoneId::Graveyard, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CGethLordoftheVaultCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CCard* cTarget = pAbilityAction->GetAssociatedCard();
		CPlayer* cPlayer = cTarget->GetController();
		int cCost = cTarget->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, cCost, CZoneModifier::RoleType::PrimaryPlayer);

		pModifier.AddSelection(MinimumValue(cCost), MaximumValue(cCost), // select cards to bootom
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cTarget->GetOrientation()->Tap();
		cTarget->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield),pAbilityAction->GetController(), MoveType::Others);

		pModifier.ApplyTo(cPlayer);
	}
}

//____________________________________________________________________________
//
CInexorableTideCard::CInexorableTideCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Inexorable Tide"), CardType::GlobalEnchantment, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CInexorableTideCard::OnResolutionCompleted1))
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CInexorableTideCard::OnProliferateSelected))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredProliferateAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardAnyCountersComparer);
	cpAbility->GetGatherer().SetSubjectCount(0, SpecialNumber::Any);
	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}
void CInexorableTideCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
void CInexorableTideCard::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CEzuriRenegadeLeaderCard::CEzuriRenegadeLeaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ezuri, Renegade Leader"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
		, m_CardFilter(_T("an elf"), _T("elf cards"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			GREEN_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Elf), false)));
	
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Power(+3), Life(+3),
			new AnyCreatureComparer));

	cpAbility->SetToActivatedAbility();
	cpAbility->GetGlobalCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), false));

	cpAbility->SetAffectControllerCardsOnly();

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetOneTurnOnly(TRUE);
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::Trample);

	CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(pModifier1));

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CNihilSpellbombCard::CNihilSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Nihil Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CTargetPlayerCardsSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerCardsSpell>>(this,
			_T(""),
			ZoneId::Graveyard,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddCardModifier(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE));
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionCost(BLACK_MANA_TEXT);
	AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CHorizonSpellbombCard::CHorizonSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Horizon Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"), 
			CCardFilter::GetFilter(_T("basic lands")), 
			ZoneId::Hand, TRUE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionCost(GREEN_MANA_TEXT);
	AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CFlightSpellbombCard::CFlightSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flight Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionCost(BLUE_MANA_TEXT);
	AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CPanicSpellbombCard::CPanicSpellbombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Panic Spellbomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionCost(RED_MANA_TEXT);
	AddAbility(cpAbility.GetPointer());
	}	
}

//____________________________________________________________________________
//
CNeurokReplicaCard::CNeurokReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Neurok Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Wizard), nID,
		_T("3"), Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVulshokReplicaCard::CVulshokReplicaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vulshok Replica"), CardType::_ArtifactCreature, CREATURE_TYPE(Berserker), nID,
		_T("3"), Power(3), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				FALSE_CARD_COMPARER,
				TRUE,
				Life(-3), PreventableType::Preventable));

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWallofTanglecordCard::CWallofTanglecordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Tanglecord"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("2"), Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	{			
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Reach));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CVensersJournalCard::CVensersJournalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Venser's Journal"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoMaximumHandSize));

	cpAbility->SetAffectControllerOnly();
	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVensersJournalCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
	}
}
bool CVensersJournalCard::BeforeResolution(CVensersJournalCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pHand = m_pGame->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() == 0)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(pHand->GetSize()));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CVectorAspCard::CVectorAspCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vector Asp"), CardType::_ArtifactCreature, CREATURE_TYPE(Snake), nID,
		_T("1"), Power(1), Life(1))
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
}

//____________________________________________________________________________
//
CTrigonofThoughtCard::CTrigonofThoughtCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trigon of Thought"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);	

	{
	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"),
			1));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
	
}
//_________________________________________________________________________
//
CTrigonofRageCard::CTrigonofRageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trigon of Rage"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);	

	{
	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+3), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));


	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
	
}
//_________________________________________________________________________
//
CTrigonofMendingCard::CTrigonofMendingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trigon of Mending"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);	

	{
	
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("2"),
				FALSE_CARD_COMPARER,
				TRUE,
				Life(+3), PreventableType::Preventable));


	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
	
}
//_________________________________________________________________________
//
CTrigonofCorruptionCard::CTrigonofCorruptionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trigon of Corruption"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);	

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"),1));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
	
}
//_________________________________________________________________________
//
CPerilousMyrCard::CPerilousMyrCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Perilous Myr"), CardType::_ArtifactCreature, CREATURE_TYPE(Myr), nID,
		_T("2"), Power(1), Life(1))
{	
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}
//_________________________________________________________________________
//
CArcTrailCard::CArcTrailCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Arc Trail"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(2,2);
}

//____________________________________________________________________________
//
CNecropedeCard::CNecropedeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necropede"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("2"), Power(1), Life(1))
{
	GetCardKeyword()->AddInfect(FALSE);
	{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);	

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKuldothaPhoenixCard::CKuldothaPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kuldotha Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID, 
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("4"),
				ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
			FALSE,	// opponent's turn only
			TRUE);	// your turn only

		counted_ptr<CPlayableIfTrait> cpTrait(
	        ::CreateObject<CPlayableIfTrait>(
	            m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CKuldothaPhoenixCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CKuldothaPhoenixCard::CanPlay(BOOL bIncludeTricks)
{
	return CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= 3;
}

//____________________________________________________________________________
//
CSylvokLifestaffCard::CSylvokLifestaffCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sylvok Lifestaff"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)

	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+0), this, 
			PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE));

	cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CSylvokLifestaffCard::CreateEquipmentAbility)));

	AddAbility(cpAbility.GetPointer());
	}
	
	counted_ptr<CAbility> CSylvokLifestaffCard::CreateEquipmentAbility(CCard* pCard)
	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
	}

//_______________________________________________________________________________________
//
/*  Chimeric Mass\n{X}\nArtifact\nSOM,R\nChimeric Mass enters the battlefield with X charge counters on it.\r{1}: Until end of turn, Chimeric Mass becomes a Construct artifact creature with "This creature's power and toughness are each equal to the number of charge counters on it."*/
CChimericMassCard::CChimericMassCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Chimeric Mass"), CardType::Artifact, nID, 
		_T(""), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CChimericMassCard::OnZoneChanged))
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1"),
				_T("Construct AD"), 64024));

		AddAbility(cpAbility.GetPointer());
	}
}

void CChimericMassCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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
CMimicVatCard::CMimicVatCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mimic Vat"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMimicVatCard::OnZoneChanged))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CMimicVatCard::OnSelected))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMimicVatCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMimicVatCard::BeforeResolveSelection));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));
		
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMimicVatCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());			
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMimicVatCard::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMimicVatCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CMimicVatCard::BeforeResolveSelection(CMimicVatCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (!pCard->IsInGraveyard()) return true;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Do nothing"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)pCard;
		selectionEntry.cpAssociatedCard = pCard;
		selectionEntry.strText.Format(_T("Imprint %s"), pCard->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), (DWORD)pCard);

	return true;
}

void CMimicVatCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't exile %s"), pSelectionPlayer->GetPlayerName(), ((CCard*)dwContext1)->GetCardName(TRUE));
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
					strMessage.Format(_T("%s imprints %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Exile, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = pExiled.GetSize() - 1; i >= 0; --i)
				{
					CCard* pCard2 = pExiled.GetAt(i);
					pExiled.RemoveCard(pCard2);
					pModifier2.ApplyTo(pCard2);
				}

				if (pCard->GetZoneId() == ZoneId::Exile)
					pExiled.AddCard(pCard, CardPlacement::Top);

				return;
			}
		}
}

void CMimicVatCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

bool CMimicVatCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pExiled.GetSize() == 0) return true;

	CCountedCardContainer pTokens; 

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
	CCardCopyModifier pModifier2 = CCardCopyModifier(GetGame(), (CCard*)this, NULL, pModifier1, &pTokens);

	pModifier2.ApplyTo(pExiled.GetAt(0));

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier3.ApplyTo(pAction->GetController());

	return true;
}

bool CMimicVatCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pExiled.GetSize() == 0) return false;
	if (!pExiled.HasCard(pCard)) return false;

	pExiled.RemoveCard(pCard);

	return false;
}

//_______________________________________________________________________________________
//
CGrindclockCard::CGrindclockCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grindclock"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			 _T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 0));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetRevealCardsToOthers(true);
		cpAbility->SetReorder(true, ZoneId::Graveyard);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrindclockCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrindclockCard::BeforeResolution(CAbilityAction* pAction)
{
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = GetCounterContainer()->GetCounter(CHARGE_COUNTER)->GetCount();

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CGenesisWaveCard::CGenesisWaveCard(CGame* pGame, UINT nID)
    : CCard(pGame, _T("Genesis Wave"), CardType::Sorcery, nID)
	, m_CardFilter(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment | CardType::Creature | CardType::_Land | CardType::Planeswalker, false))
{
    counted_ptr<CGenesisWaveSpell> cpSpell(
        ::CreateObject<CGenesisWaveSpell>(this, AbilityType::Sorcery,
            GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, &m_CardFilter));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

    AddSpell(cpSpell.GetPointer());		
}

//____________________________________________________________________________
//
CSeizeTheInitiativeCard::CSeizeTheInitiativeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Seize the Initiative"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::FirstStrike, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CRevokeExistenceCard::CRevokeExistenceCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Revoke Existence"), CardType::Sorcery, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CMemoricideCard::CMemoricideCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Memoricide"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardNameSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardNameSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			ZoneId::Exile, TRUE, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEtchedChampionCard::CEtchedChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Etched Champion"), CardType::_ArtifactCreature, CREATURE_TYPE(Soldier), nID,
		_T("3"), Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite | CardKeyword::ProtectionFromBlue | CardKeyword::ProtectionFromBlack | CardKeyword::ProtectionFromRed | CardKeyword::ProtectionFromGreen);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);
		

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CAuriokSunchaserCard::CAuriokSunchaserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auriok Sunchaser"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->SetConditionValue(3);
		

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CAbunaAcolyteCard::CAbunaAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Abuna Acolyte"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(1), SourceColor::Null));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_ArtifactCreature, true), FALSE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
	}
}
	
//____________________________________________________________________________
//
CAcidWebSpiderCard::CAcidWebSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Acid Web Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Equipment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAsceticismCard::CAsceticismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Asceticism"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
		::CreateObject<CCardKeywordEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false)));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::Hexproof);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBondsOfQuicksilverCard::CBondsOfQuicksilverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Bonds of Quicksilver"), nID,
		_T("3") BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	GetCardKeyword()->AddFlash(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
}

//____________________________________________________________________________
//
CBlistergrubCard::CBlistergrubCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Blistergrub"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),CreatureKeyword::Swampwalk)
{
	typedef
        TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

    counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCorruptedHarvesterCard::CCorruptedHarvesterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Corrupted Harvester"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(3))
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
CEzurisArchersCard::CEzurisArchersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ezuri's Archers"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		GREEN_MANA_TEXT, Power(1), Life(2))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEzurisArchersCard::SetTriggerContext));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("flying creatures")));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

bool CEzurisArchersCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CFumeSpitterCard::CFumeSpitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fume Spitter"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhalmasWardenCard::CGhalmasWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghalma's Warden"), CardType::Creature, CREATURE_TYPE2(Elephant, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
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
CGolemArtisanCard::CGolemArtisanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Golem Artisan"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+1), Life(+1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_ArtifactCreature, true)));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_ArtifactCreature, true)));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_ArtifactCreature, true)));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				CreatureKeyword::Haste, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_ArtifactCreature, true)));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
CGolemFoundryCard::CGolemFoundryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golem Foundry"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(CHARGE_COUNTER, +1));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Golem D"), 2902, 1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -3);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHaltOrderCard::CHaltOrderCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Halt Order"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact , false))
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::Add(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CLifesmithCard::CLifesmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lifesmith"), CardType::Creature, CREATURE_TYPE2(Human,Artificer), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMeltTerrainCard::CMeltTerrainCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Melt Terrain"), CardType::Sorcery, nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCardControllerModifier().push_back(
		new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::NotDealingDamage));
}

//____________________________________________________________________________
//
CNeurokInvisimancerCard::CNeurokInvisimancerCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Neurok Invisimancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Unblockable);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COxiddaScrapmelterCard::COxiddaScrapmelterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oxidda Scrapmelter"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
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
CPlatedSeastriderCard::CPlatedSeastriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plated Seastrider"), CardType::Creature, CREATURE_TYPE(Beast), nID,
	 _T("") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(4))
{
}

//____________________________________________________________________________
//
CMolderBeastCard::CMolderBeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Molder Beast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(6), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSalvageScoutCard::CSalvageScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Salvage Scout"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScrapdiverSerpentCard::CScrapdiverSerpentCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Scrapdiver Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddUnblockableWalk(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CSkyEelSchoolCard::CSkyEelSchoolCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sky-Eel School"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSliceInTwainCard::CSliceInTwainCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Slice in Twain"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CSoulParryCard::CSoulParryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Soul Parry"), CardType::Instant, nID)
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargeting()->SetSubjectCount(1, 2);

		AddSpell(cpSpell.GetPointer());
	}

//____________________________________________________________________________
//
CTelJiladFallenCard::CTelJiladFallenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tel-Jilad Fallen"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddInfect(FALSE);
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CTurnAsideCard::CTurnAsideCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Turn Aside"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
	, m_CardFilter (_T("card you control") , _T("card you control"), new CardControllerComparer(this))
{
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));
	m_pCounterSpell->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	
}

//____________________________________________________________________________
//
CTwistedImageCard::CTwistedImageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twisted Image"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), 
				CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CUntamedMightCard::CUntamedMightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Untamed Might"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(1, 1));
}

//____________________________________________________________________________
//
CVulshokHeartstokerCard::CVulshokHeartstokerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vulshok Heartstoker"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhitesunsPassageCard::CWhitesunsPassageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whitesun's Passage"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Life(+5), PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCopperhornScoutCard::CCopperhornScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Copperhorn Scout"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBluntTheAssaultCard::CBluntTheAssaultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blunt the Assault"), CardType::Instant, nID)
{
	{
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT, 
				TRUE, //Opponent Zones
				TRUE)); //Controller Zones

		cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

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
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Effects));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);


		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DealNoCombatDamage);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CKembaKhaRegentCard::CKembaKhaRegentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kemba, Kha Regent"), CardType::_LegendaryCreature, CREATURE_TYPE2(Cat, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetCreateTokenOption(TRUE, _T("Cat C"), 2913, 1);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKembaKhaRegentCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}
bool CKembaKhaRegentCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pContBattle = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new EquippedOnComparer(this));

	int nCount = temp.CountIncluded(pContBattle->GetCardContainer());

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = nCount;
	pAction->SetTriggerContext(triggerContext);

	return (nCount>0);
}
//____________________________________________________________________________
//
CGraftedExoskeletonCard::CGraftedExoskeletonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grafted Exoskeleton"), CardType::Artifact | CardType::Equipment, nID, 
		_T("4"), AbilityType::Artifact)
{
	{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+2), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::Infect);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCardModifier(pModifier);

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenEquipped > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetOnUnequip();
		
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraftedExoskeletonCard::SetTriggerContext));		

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGraftedExoskeletonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pEquipCard, CCard* pFromCard, CCard* pToCard) const
{
	if (pFromCard)
	{
	triggerContext.m_pCard = pFromCard;
	return TRUE;
	}
	else
	return FALSE;
}


//____________________________________________________________________________
//
CSunspearShikariCard::CSunspearShikariCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunspear Shikari"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CEquipPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CEquipPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));		

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);	

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CGlimmerpointStagCard::CGlimmerpointStagCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glimmerpoint Stag"), CardType::Creature, CREATURE_TYPE(Elk), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT , Power(3), Life(3))
		, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGlimmerpointStagCard::OnResolutionCompleted1))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

void CGlimmerpointStagCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CViridianRevelCard::CViridianRevelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Viridian Revel"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEmbersmithCard::CEmbersmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Embersmith"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifact cards")));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetResolutionCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEngulfingSlagwurmCard::CEngulfingSlagwurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Engulfing Slagwurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEngulfingSlagwurmCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CEngulfingSlagwurmCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CEngulfingSlagwurmCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCard = pCreature2;
	return true;
}

bool CEngulfingSlagwurmCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(triggerContext.m_pCard);
	if (!pCreature) return false;

	CLifeModifier* pModifier = new CLifeModifier(Life(pCreature->GetToughness()), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier->ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CBellowingTanglewurmCard::CBellowingTanglewurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bellowing Tanglewurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+0), Life(+0), CreatureKeyword::Intimidate));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTelJiladDefianceCard::CTelJiladDefianceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Tel-Jilad Defiance"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CTelJiladDefianceCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CTelJiladDefianceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	if (bResult) pCard->GetCardKeyword()->AddSpecialProtection(TRUE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CHeavyArbalestCard::CHeavyArbalestCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heavy Arbalest"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("4")));

	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCardModifier(pModifier);

	cpAbility->AddCardModifier(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHeavyArbalestCard::CreateEquipmentAbility)));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CHeavyArbalestCard::CreateEquipmentAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));

	cpEquipAbility->AddTapCost();

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

//____________________________________________________________________________
//
CVaultSkywardCard::CVaultSkywardCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Vault Skyward"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
}

//____________________________________________________________________________
//
CGlimmerpostCard::CGlimmerpostCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Glimmerpost"), nID, CardType::_LocusLand)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
			&CGlimmerpostCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGlimmerpostCard::BeforeResolution(CGlimmerpostCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppBattle = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Locus, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer()) + m_CardFilter_temp.CountIncluded(pOppBattle->GetCardContainer());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(n));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CGlintHawkIdolCard::CGlintHawkIdolCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Glint Hawk Idol"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				WHITE_MANA_TEXT,
				_T("Bird AA"), 64003));
		cpAbility->SetAbilityText(_T("Glint Hawk Idol becomes a 2/2 Bird artifact creature. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

		CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier( _T("Bird E"), 2927, GetController());
		cpAbility->GetTriggeredCardModifiers().push_back(new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, true,  CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFleshAllergyCard::CFleshAllergyCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Flesh Allergy"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CFleshAllergyCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CFleshAllergyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	Life nDamage = Life(-GetGame()->GetCertainTypeDiedCount(CardType::Creature));
	CLifeModifier* pModifier = new CLifeModifier(nDamage, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier->ApplyTo(pAbilityAction->GetAssociatedCard()->GetController());
}

//____________________________________________________________________________
//
CRazorHippogriffCard::CRazorHippogriffCard(CGame* pGame, UINT nID)
: CFlyingCreatureCard(pGame, _T("Razor Hippogriff"), CardType::Creature, CREATURE_TYPE2(Insect, Horror), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRazorHippogriffCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRazorHippogriffCard::BeforeResolution(CAbilityAction* pAction) const
{
	Life nCMC = Life(pAction->GetAssociatedCard()->GetConvertedManaCost());
	CLifeModifier modifier = CLifeModifier(nCMC, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	modifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CDispenseJusticeCard::CDispenseJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dispense Justice"), CardType::Instant, nID)	
	, m_CardFilter(_T("an attacking creature"), _T("attacking creatures"), new AttackingCreatureComparer)
{
	{
		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Instant,					
				_T("2") WHITE_MANA_TEXT,
				&m_CardFilter));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDispenseJusticeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CDispenseJusticeCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 2 && pAction->GetAssociatedPlayer())
	{
			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All,
				CZoneModifier::RoleType::PrimaryPlayer,
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
		
		pModifier.ApplyTo(pAction->GetAssociatedPlayer());
		return false;
	}
	return true;
}
//____________________________________________________________________________
//
CScreechingSilcawCard::CScreechingSilcawCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Screeching Silcaw"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScreechingSilcawCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScreechingSilcawCard::BeforeResolution));

	cpAbility->SetRevealCount(4);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

bool CScreechingSilcawCard::SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
 									CPlayer* pToPlayer, Damage damage) const
{	
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}

bool CScreechingSilcawCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pInplay->GetCardContainer()) > 2);
}
//____________________________________________________________________________
//
CPainfulQuandaryCard::CPainfulQuandaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Painful Quandary"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPainfulQuandaryCard::OnPunisherSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPainfulQuandaryCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CPainfulQuandaryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new TrueCardComparer);

	if (m_CardFilter.CountIncluded(pHand->GetCardContainer()) > 0)
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
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				SelectionEntry entry;
					entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
								
				entry.strText.Format(_T("Discard %s"),
					pCard->GetCardName(TRUE));
					entries.push_back(entry);
			}
					
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
	}
	else
	{
		CLifeModifier pModifier = CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pPlayer);
	}
	
	return true;
}

void CPainfulQuandaryCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier pModifier = CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pSelectionPlayer);

				pModifier.ApplyTo(pCard);

				return;
			}
		}
}

//____________________________________________________________________________
//
CExsanguinateCard::CExsanguinateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exsanguinate"), CardType::Sorcery, nID)	// Preventable?
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->AddAbilityTag(AbilityTag::LifeLost);
	cpSpell->AddAbilityTag(AbilityTag::LifeGain);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExsanguinateCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CExsanguinateCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	if (n > 0)
	{
		CLifeModifier pModifier1 = CLifeModifier(Life(-n), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

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
CMyrBattlesphereCard::CMyrBattlesphereCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Myr Battlesphere"), CardType::_ArtifactCreature, CREATURE_TYPE2(Myr, Construct), nID,
		_T("7"), Power(4), Life(7))
  , m_MyrSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMyrBattlesphereCard::OnMyrSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Myr B"), 62008, 4);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
									 CWhenSelfAttackedBlocked::AttackEventCallback,
									 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMyrBattlesphereCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMyrBattlesphereCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Myr), false));
	m_CardFilter.AddComparer(new UntappedComparer);

	pMyr.RemoveAll();
	pRemainingMyr.RemoveAll();
	
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				pRemainingMyr.AddCard(pCard, CardPlacement::Top);
			}
		}
		MyrSelection(pController);
	}

	return true;
}

void CMyrBattlesphereCard::MyrSelection(CPlayer* pPlayer)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop tapping Myr"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pRemainingMyr.GetSize(); ++i)
	{
		CCard* pCard = pRemainingMyr.GetAt(i);
		{
			SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
								
			entry.strText.Format(_T("Tap %s"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
		}
					
	}
	m_MyrSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CMyrBattlesphereCard::OnMyrSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops tapping Myr"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pMyr.GetSize() > 0)
					Finale();
				
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
				pMyr.AddCard(pCard, CardPlacement::Top);
				pRemainingMyr.RemoveCard(pCard);

				MyrSelection(pSelectionPlayer);

				return;
			}
		}
}

void CMyrBattlesphereCard::Finale()
{
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	int nNumber = pMyr.GetSize();

	for (int i = 0; i < nNumber; ++i)
	{
		CCard* pCard = pMyr.GetAt(i);
		pModifier1.ApplyTo(pCard);
	}
	
	CPowerModifier pModifier2 = CPowerModifier(Power(nNumber));
	CLifeModifier pModifier3 = CLifeModifier(Life(-nNumber), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

	pModifier2.ApplyTo(this);
	pModifier3.ApplyTo(GetGame()->GetNextPlayer(GetGame()->GetActivePlayer()));
}

//____________________________________________________________________________
//
CCerebralEruptionCard::CCerebralEruptionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cerebral Eruption"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCerebralEruptionCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CCerebralEruptionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	if (pTarget->GetZoneById(ZoneId::Library)->GetSize() > 0)
	{
		CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier1.ApplyTo(pTarget);

		CCard* pCard = pTarget->GetZoneById(ZoneId::Library)->GetTopCard();

		int nCMC = pCard->GetConvertedManaCost();

		if (nCMC > 0)
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
			CZoneCreatureModifier pModifier3 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
				std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

			pModifier2.ApplyTo(pTarget);
			pModifier3.ApplyTo(pTarget);
		}

		if (pCard->GetCardType().IsLand())
		{
			CMoveCardModifier pModifier4 = CMoveCardModifier(ZoneId::Stack, ZoneId::Hand, TRUE, MoveType::Others);
			pModifier4.ApplyTo(this);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CHoardSmelterDragonCard::CHoardSmelterDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hoard-Smelter Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false), false));
	ATLASSERT(cpAbility);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHoardSmelterDragonCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CHoardSmelterDragonCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	int nBonus = pTarget->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
	pModifier1.ApplyTo(pTarget);

	CPowerModifier pModifier2 = CPowerModifier(Power(+nBonus));
	pModifier2.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CGoldenUrnCard::CGoldenUrnCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Golden Urn"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CGoldenUrnCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoldenUrnCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CGoldenUrnCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CGoldenUrnCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(+m_nCounterCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

void CGoldenUrnCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CCloneShellCard::CCloneShellCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clone Shell"), CardType::_ArtifactCreature, CREATURE_TYPE(Shapeshifter), nID,
	_T("5"), Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCloneShellCard::OnZoneChanged))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCloneShellCard::OnCardSelected))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::_ExileFaceDown));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCloneShellCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Battlefield));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloneShellCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCloneShellCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_ExileFaceDown, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloneShellCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCloneShellCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CCloneShellCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) return false;
	if (pCard != pExiled.GetAt(0)) return false;
	return true;
}

bool CCloneShellCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	pExiled.RemoveAll();
	return true;
}

bool CCloneShellCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int n = 4;
	int nLibrarySize = pLibrary->GetSize();
	if (n > nLibrarySize)
		n = nLibrarySize;

	if (n > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.ApplyTo(pController);

		std::vector<SelectionEntry> entries;
		for (int i = 1; i <= n; ++i)
		{
			CCard* pCard = pLibrary->GetAt(nLibrarySize - i);

			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Imprint %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

bool CCloneShellCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pExiled.GetSize() == 0) triggerContext.nValue1 = 0;
	else triggerContext.nValue1 = (DWORD)pExiled.GetAt(0);
	return true;
}

bool CCloneShellCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.nValue1 != 0)
	{
		CCard* pCard = (CCard*)triggerContext.nValue1;
		
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s reveals %s"), pController->GetPlayerName(), pExiled.GetAt(0)->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				m_pGame->GetPlayer(j)->MemorizeCard(pExiled.GetAt(0));
			}
		}

		if (pCard->GetCardType().IsCreature())
			pCard->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		else
		{
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Exile, TRUE, MoveType::Others, pController);
			pModifier.ApplyTo(pCard);
		}
	}
	
	return true;
}

void CCloneShellCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

void CCloneShellCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			pExiled.AddCard(pCard, CardPlacement::Top);

			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pSelectionPlayer);
			pModifier1.ApplyTo(pCard);
			
			int n = 3;
			CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);
			int nLibrarySize = pLibrary->GetSize();
			if (n > nLibrarySize)
				n = nLibrarySize;

			if (n > 0)
			{
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier2.AddSelection(MinimumValue(0), MaximumValue(0), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // what cards
					ZoneId::Library, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier2.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
				pModifier2.ApplyTo(pSelectionPlayer);
			}

			return;
		}
}

//____________________________________________________________________________
//
CCullingDaisCard::CCullingDaisCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Culling Dais"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CCullingDaisCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCullingDaisCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CCullingDaisCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CCullingDaisCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(m_nCounterCount), MaximumValue(m_nCounterCount));
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

void CCullingDaisCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != CHARGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CSteelHellkiteCard::CSteelHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Steel Hellkite"), CardType::_ArtifactCreature, CREATURE_TYPE(Dragon), nID,
		_T("6"), Power(5), Life(5))
	, pDamagedPlayers(2)
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, _T("2"), Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
		cpAbility->SetMaxTurnUsageCount(1);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSteelHellkiteCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>,  CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSteelHellkiteCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSteelHellkiteCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSteelHellkiteCard::BeforeResolutionAux));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSteelHellkiteCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip) == pPlayer)
		{
			pDamagedPlayers[ip] = 1;
			break;
		}

	return false;
}

bool CSteelHellkiteCard::BeforeResolutionAux(CAbilityAction* pAction)
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pDamagedPlayers[ip] = 0;

	return false;
}

bool CSteelHellkiteCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCMC = pAction->GetCostConfigEntry().GetExtraValue();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nCMC));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pDamagedPlayers[ip] == 1)
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

//____________________________________________________________________________
//
