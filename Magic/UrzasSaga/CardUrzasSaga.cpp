#include "stdafx.h"
#include "CardUrzasSaga.h"

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

		DEFINE_CARD(CAbsoluteGraceCard);
		DEFINE_CARD(CAbsoluteLawCard);
		DEFINE_CARD(CAcidicSoilCard);
		DEFINE_CARD(CAcridianCard);
		DEFINE_CARD(CAlbinoTrollCard);
		DEFINE_CARD(CAnnulCard);
		DEFINE_CARD(CAntagonismCard);
		DEFINE_CARD(CArcLightningCard);
		DEFINE_CARD(CArgothianElderCard);
		DEFINE_CARD(CArgothianEnchantressCard);
		DEFINE_CARD(CArgothianSwineCard);
		DEFINE_CARD(CArgothianWurmCard);
		DEFINE_CARD(CAttunementCard);
		DEFINE_CARD(CBackToBasicsCard);
		DEFINE_CARD(CBarrinsCodexCard);
		DEFINE_CARD(CBarrinMasterWizardCard);
		DEFINE_CARD(CBlanchwoodTreefolkCard);
		DEFINE_CARD(CBlastedLandscapeCard);
		DEFINE_CARD(CBloodVassalCard);
		DEFINE_CARD(CBrandCard);
		DEFINE_CARD(CBravadoCard);
		DEFINE_CARD(CBreachCard);
		DEFINE_CARD(CBrilliantHaloCard);
		DEFINE_CARD(CCacklingFiendCard);
		DEFINE_CARD(CCarpetOfFlowersCard);
		DEFINE_CARD(CCarrionBeetlesCard);
		DEFINE_CARD(CCatastropheCard);
		DEFINE_CARD(CCathodionCard);
		DEFINE_CARD(CCaveTigerCard);
		DEFINE_CARD(CChildOfGaeaCard);
		DEFINE_CARD(CCitanulCentaursCard);
		DEFINE_CARD(CCitanulHierophantsCard);
		DEFINE_CARD(CClawsOfGixCard);
		DEFINE_CARD(CClearCard);
		DEFINE_CARD(CCloakOfMistsCard);
		DEFINE_CARD(CCopperGnomesCard);
		DEFINE_CARD(CCradleGuardCard);
		DEFINE_CARD(CCraterHellionCard);
		DEFINE_CARD(CCrazedSkirgeCard);
		DEFINE_CARD(CCrosswindsCard);
		DEFINE_CARD(CCrystalChimesCard);
		DEFINE_CARD(CCurfewCard);
		DEFINE_CARD(CDarkHatchlingCard);
		DEFINE_CARD(CDespondencyCard);
		DEFINE_CARD(CDestructiveUrgeCard);
		DEFINE_CARD(CDiabolicServitudeCard);
		DEFINE_CARD(CDiscipleOfGraceCard);
		DEFINE_CARD(CDiscipleOfLawCard);
		DEFINE_CARD(CDiscordantDirgeCard);
		DEFINE_CARD(CDisruptiveStudentCard);
		DEFINE_CARD(CDouseCard);
		DEFINE_CARD(CDragonBloodCard);
		DEFINE_CARD(CDriftingDjinnCard);
		DEFINE_CARD(CDriftingMeadowCard);
		DEFINE_CARD(CDromosaurCard);
		DEFINE_CARD(CElectryteCard);
		DEFINE_CARD(CElvishHerderCard);
		DEFINE_CARD(CEndlessWurmCard);
		DEFINE_CARD(CExhumeCard);
		DEFINE_CARD(CExplorationCard);
		DEFINE_CARD(CExpungeCard);
		DEFINE_CARD(CFaithHealerCard);
		DEFINE_CARD(CFalterCard);
		DEFINE_CARD(CFaultLineCard);
		DEFINE_CARD(CFieryMantleCard);
		DEFINE_CARD(CFireAntsCard);
		DEFINE_CARD(CFleshReaverCard);
		DEFINE_CARD(CFortitudeCard);
		DEFINE_CARD(CGaeasBountyCard);
		DEFINE_CARD(CGaeasCradleCard)
		DEFINE_CARD(CGaeasEmbraceCard);
		DEFINE_CARD(CGambleCard);
		DEFINE_CARD(CGoblinCadetsCard);
		DEFINE_CARD(CGoblinLackeyCard);
		DEFINE_CARD(CGoblinOffensiveCard);
		DEFINE_CARD(CGoblinPatrolCard);
		DEFINE_CARD(CGoblinWarBuggyCard);
		DEFINE_CARD(CGreatWhaleCard);
		DEFINE_CARD(CGreenerPasturesCard);
		DEFINE_CARD(CGumaCard);
		DEFINE_CARD(CHawkeaterMothCard);
		DEFINE_CARD(CHeadlongRushCard);
		DEFINE_CARD(CHeatRayCard);
		DEFINE_CARD(CHeraldOfSerraCard);
		DEFINE_CARD(CHermeticStudyCard);
		DEFINE_CARD(CHoppingAutomatonCard);
		DEFINE_CARD(CHushCard);
		DEFINE_CARD(CIllGottenGainsCard);
		DEFINE_CARD(CKarnSilverGolemCard);
		DEFINE_CARD(CLaunchCard);
		DEFINE_CARD(CLayWasteCard);
		DEFINE_CARD(CLifelineCard);
		DEFINE_CARD(CLightningDragonCard);
		//DEFINE_CARD(CLiltingRefrainCard);
		DEFINE_CARD(CLingeringMirageCard);
		DEFINE_CARD(CLotusBlossomCard);
		DEFINE_CARD(CLullCard);
		DEFINE_CARD(CMeltdownCard);
		DEFINE_CARD(CMetrognomeCard);
		DEFINE_CARD(CMidsummerRevelCard);
		DEFINE_CARD(CMishrasHelixCard);
		DEFINE_CARD(CMobileFortCard);
		DEFINE_CARD(CMonkIdealistCard);
		DEFINE_CARD(CMonkRealistCard);
		DEFINE_CARD(CMorphlingCard);
		DEFINE_CARD(COrderOfYawgmothCard);
		DEFINE_CARD(COutmaneuverCard);
		DEFINE_CARD(CParasiticBondCard);
		DEFINE_CARD(CPendrellDrakeCard);
		DEFINE_CARD(CPeregrineDrakeCard);
		DEFINE_CARD(CPhyrexianGhoulCard);
		DEFINE_CARD(CPhyrexianProcessorCard);
		DEFINE_CARD(CPhyrexianTowerCard);
		DEFINE_CARD(CPlanarBirthCard);
		DEFINE_CARD(CPlanarVoidCard);
		DEFINE_CARD(CPollutedMireCard);
		DEFINE_CARD(CPouncingJaguarCard);
		DEFINE_CARD(CPowerTaintCard);
		DEFINE_CARD(CPriestOfGixCard);
		DEFINE_CARD(CPriestOfTitaniaCard);
		DEFINE_CARD(CRainOfFilthCard);
		DEFINE_CARD(CRavenousSkirgeCard);
		DEFINE_CARD(CRazeCard);
		DEFINE_CARD(CReclusiveWightCard);
		DEFINE_CARD(CRejuvenateCard);
		DEFINE_CARD(CRemembranceCard);
		DEFINE_CARD(CRemoteIsleCard);
		DEFINE_CARD(CRescindCard);
		DEFINE_CARD(CRetaliationCard);
		DEFINE_CARD(CRetromancerCard);
		DEFINE_CARD(CRuneOfProtectionBlackCard);
		DEFINE_CARD(CRuneOfProtectionBlueCard);
		DEFINE_CARD(CRuneOfProtectionGreenCard);
		DEFINE_CARD(CRuneOfProtectionRedCard);
		DEFINE_CARD(CRuneOfProtectionWhiteCard);
		DEFINE_CARD(CSanctumCustodianCard);
		DEFINE_CARD(CSandbarMerfolkCard);
		DEFINE_CARD(CSandbarSerpentCard);
		DEFINE_CARD(CSanguineGuardCard);
		DEFINE_CARD(CScaldCard);
		DEFINE_CARD(CScrapCard);
		DEFINE_CARD(CSerrasSanctumCard);
		DEFINE_CARD(CSerraZealotCard);
		DEFINE_CARD(CShimmeringBarrierCard);
		DEFINE_CARD(CShivanGorgeCard);
		DEFINE_CARD(CShivanRaptorCard);
		DEFINE_CARD(CShowandTellCard);
		DEFINE_CARD(CShowerOfSparksCard);
		DEFINE_CARD(CSickenCard);
		DEFINE_CARD(CSilentAttendantCard);
		DEFINE_CARD(CSkirgeFamiliarCard);
		DEFINE_CARD(CSkitteringSkirgeCard);
		DEFINE_CARD(CSlipperyKarstCard);
		DEFINE_CARD(CSmokestackCard);
		DEFINE_CARD(CSmolderingCraterCard);
		DEFINE_CARD(CSneakAttackCard);
		DEFINE_CARD(CSongstitcherCard);
		DEFINE_CARD(CSpinedFlukeCard);
		DEFINE_CARD(CSpireOwlCard);
		DEFINE_CARD(CSporogenesisCard);
		DEFINE_CARD(CSteamBlastCard);
		DEFINE_CARD(CSternProctorCard);
		DEFINE_CARD(CStrokeOfGeniusCard);
		DEFINE_CARD(CSunderCard);
		DEFINE_CARD(CSymbiosisCard);
		DEFINE_CARD(CThranQuarryCard);
		DEFINE_CARD(CTimeSpiralCard);
		DEFINE_CARD(CTitaniasBoonCard);
		DEFINE_CARD(CTitaniasChosenCard);
		DEFINE_CARD(CTolarianAcademyCard);
		DEFINE_CARD(CTorchSongCard);
		DEFINE_CARD(CTreetopRangersCard);
		DEFINE_CARD(CTurnaboutCard);
		DEFINE_CARD(CUmbilicusCard);
		DEFINE_CARD(CUnnerveCard);
		DEFINE_CARD(CUnworthyDeadCard);
		DEFINE_CARD(CVampiricEmbraceCard);
		DEFINE_CARD(CVebulidCard);
		DEFINE_CARD(CVenomousFangsCard);
		DEFINE_CARD(CViashinoOutriderCard);
		DEFINE_CARD(CViashinoSandswimmerCard);
		DEFINE_CARD(CViashinoWeaponsmithCard);
		DEFINE_CARD(CVictimizeCard);
		DEFINE_CARD(CVoiceOfGraceCard);
		DEFINE_CARD(CVoiceOfLawCard);
		DEFINE_CARD(CVugLizardCard);
		DEFINE_CARD(CWallOfJunkCard);
		DEFINE_CARD(CWarDanceCard);
		DEFINE_CARD(CWaylayCard);
		DEFINE_CARD(CWhetstoneCard);
		DEFINE_CARD(CWhirlwindCard);
		DEFINE_CARD(CWildDogsCard);
		DEFINE_CARD(CWindfallCard);
		DEFINE_CARD(CWindingWurmCard);
		DEFINE_CARD(CWirecatCard);
		DEFINE_CARD(CWitchEngineCard);
		DEFINE_CARD(CWizardMentorCard);
		DEFINE_CARD(CWornPowerstoneCard);
		DEFINE_CARD(CYawgmothsWillCard);
		DEFINE_CARD(CZephidCard);
		DEFINE_CARD(CZephidsEmbraceCard);

	} while (false);

	return cpCard;
}
//____________________________________________________________________________
//
CBloodVassalCard::CBloodVassalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Vassal"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			BLACK_MANA_TEXT BLACK_MANA_TEXT));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCatastropheCard::CCatastropheCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Catastrophe"), CardType::Sorcery, nID)

	, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCatastropheCard::OnTargetZoneSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCatastropheCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCatastropheCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Destroy all lands"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Destroy all creatures"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, this, GetController());
	return false;
}

void CCatastropheCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
	{
		if ((int)it->dwContext == 1)
		{
			{
				m_CardFilter1.AddComparer(new CardTypeComparer(CardType::_Land, false));
				m_CardFilter1.AddNegateComparer(new CardTypeComparer(CardType::Creature, false));

				CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter1,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

				pModifier1.ApplyTo(GetController());
				pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));
				return;
			}
			{
				m_CardFilter2.AddComparer(new CardTypeComparer(CardType::_Land | CardType::Creature, true));

				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter2,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

				pModifier2.ApplyTo(GetController());
				pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));
				return;
			}
		}
		if ((int)it->dwContext == 2)
		{
			m_CardFilter3.AddComparer(new CardTypeComparer(CardType::Creature, false));

			CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter3,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

			pModifier3.ApplyTo(GetController());
			pModifier3.ApplyTo(m_pGame->GetNextPlayer(GetController()));
			return;
		}
		return;
	}
}

//____________________________________________________________________________
//
CCloakOfMistsCard::CCloakOfMistsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cloak of Mists"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
}

//____________________________________________________________________________
//
CExplorationCard::CExplorationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Exploration"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
		::CreateObject<CPlayExtraLandEnchantment>(this, +1));

	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGaeasEmbraceCard::CGaeasEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Gaea's Embrace"), nID, 
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(+3), Life(+3), CreatureKeyword::Trample)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CGaeasEmbraceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CGaeasEmbraceCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			GREEN_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMorphlingCard::CMorphlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Morphling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID, 
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::Flying));

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

//____________________________________________________________________________
//
COrderOfYawgmothCard::COrderOfYawgmothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of Yawgmoth"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFear(FALSE);
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrokeOfGeniusCard::CStrokeOfGeniusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stroke of Genius"), CardType::Instant, nID)
{
	counted_ptr<CTargetDrawCardSpell> cpSpell(
		::CreateObject<CTargetDrawCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT, 0));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CWhirlwindCard::CWhirlwindCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Whirlwind"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CArgothianElderCard::CArgothianElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Argothian Elder"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetSubjectCount(2, 2);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CArgothianEnchantressCard::CArgothianEnchantressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Argothian Enchantress"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(1))
{
	GetCardKeyword()->AddShroud(FALSE);

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("enchantments")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArgothianSwineCard::CArgothianSwineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Argothian Swine"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CBarrinMasterWizardCard::CBarrinMasterWizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barrin, Master Wizard"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2"),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlanchwoodTreefolkCard::CBlanchwoodTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blanchwood Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CCacklingFiendCard::CCacklingFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cackling Fiend"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarrionBeetlesCard::CCarrionBeetlesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carrion Beetles"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("2") BLACK_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetSubjectCount(0, 3);
	cpAbility->GetTargeting()->SetSingleSourceZone(true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaveTigerCard::CCaveTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cave Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChildOfGaeaCard::CChildOfGaeaCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Child of Gaea"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7),
		_T("1") GREEN_MANA_TEXT)
{
	AddUpkeepCost(GREEN_MANA_TEXT GREEN_MANA_TEXT);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CCrazedSkirgeCard::CCrazedSkirgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Crazed Skirge"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CDarkHatchlingCard::CDarkHatchlingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dark Hatchling"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiscipleOfGraceCard::CDiscipleOfGraceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Grace"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

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
CDiscipleOfLawCard::CDiscipleOfLawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Law"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

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
CDisruptiveStudentCard::CDisruptiveStudentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disruptive Student"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new TrueCardComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDriftingDjinnCard::CDriftingDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drifting Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	AddUpkeepCost(_T("1") BLUE_MANA_TEXT);
	
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
CDromosaurCard::CDromosaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dromosaur"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishHerderCard::CElvishHerderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elvish Herder"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Trample, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEndlessWurmCard::CEndlessWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Endless Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(9), Life(9))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFireAntsCard::CFireAntsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fire Ants"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(-1),	// life delta
			new AnyCreatureComparer, FALSE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	cpAbility->GetGlobalCardFilter().AddNegateComparer(
		new SpecificCardComparer(this));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinLackeyCard::CGoblinLackeyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Lackey"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback,
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGumaCard::CGumaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guma"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);
}

//____________________________________________________________________________
//
CHawkeaterMothCard::CHawkeaterMothCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Hawkeater Moth"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("3") GREEN_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CMonkIdealistCard::CMonkIdealistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Monk Idealist"), CardType::Creature, CREATURE_TYPE3(Human, Monk, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
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
CMonkRealistCard::CMonkRealistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Monk Realist"), CardType::Creature, CREATURE_TYPE3(Human, Monk, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPendrellDrakeCard::CPendrellDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pendrell Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
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
CPhyrexianGhoulCard::CPhyrexianGhoulCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Phyrexian Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+2))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CPriestOfGixCard::CPriestOfGixCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Priest of Gix"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTriggeredPlayerModifiers().Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRavenousSkirgeCard::CRavenousSkirgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ravenous Skirge"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSanctumCustodianCard::CSanctumCustodianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sanctum Custodian"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CSandbarMerfolkCard::CSandbarMerfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandbar Merfolk"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
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
CSandbarSerpentCard::CSandbarSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandbar Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(4))
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
CSanguineGuardCard::CSanguineGuardCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Sanguine Guard"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2),
		_T("1") BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSerraZealotCard::CSerraZealotCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Serra Zealot"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CShimmeringBarrierCard::CShimmeringBarrierCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Shimmering Barrier"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

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
CSilentAttendantCard::CSilentAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silent Attendant"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(2))
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
CSkirgeFamiliarCard::CSkirgeFamiliarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skirge Familiar"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkitteringSkirgeCard::CSkitteringSkirgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skittering Skirge"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSongstitcherCard::CSongstitcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Songstitcher"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new AttackingCreatureComparer);
	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpinedFlukeCard::CSpinedFlukeCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Spined Fluke"), CardType::Creature, CREATURE_TYPE2(Worm, Horror), nID,
		_T("2") BLACK_MANA_TEXT, Power(5), Life(1),
		BLACK_MANA_TEXT)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpireOwlCard::CSpireOwlCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spire Owl"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetRevealCount(4);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSternProctorCard::CSternProctorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stern Proctor"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTitaniasChosenCard::CTitaniasChosenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Titania's Chosen"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green cards")));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTreetopRangersCard::CTreetopRangersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treetop Rangers"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("flying creatures")));
}

//____________________________________________________________________________
//
CUnworthyDeadCard::CUnworthyDeadCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Unworthy Dead"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CViashinoWeaponsmithCard::CViashinoWeaponsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Weaponsmith"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoiceOfGraceCard::CVoiceOfGraceCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of Grace"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CVoiceOfLawCard::CVoiceOfLawCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of Law"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CZephidCard::CZephidCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Zephid"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddShroud(FALSE);
}

//____________________________________________________________________________
//
CCathodionCard::CCathodionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cathodion"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("3"))));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCopperGnomesCard::CCopperGnomesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Copper Gnomes"), CardType::_ArtifactCreature, CREATURE_TYPE(Gnome), nID,
		_T("2"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("4"),
			CCardFilter::GetFilter(_T("artifact cards")),//new CardTypeComparer(CardType::Artifact, false), 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHoppingAutomatonCard::CHoppingAutomatonCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Hopping Automaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2),
		_T("0"), Power(-1), Life(-1), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CMobileFortCard::CMobileFortCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Mobile Fort"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("4"), Power(0), Life(6),
		_T("3"), Power(+3), Life(-1), CreatureKeyword::DefenderMayAttack)
{
	m_pPumpAbility->SetMaxTurnUsageCount(1);
	
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfJunkCard::CWallOfJunkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Junk"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("2"), Power(0), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWallOfJunkCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CWallOfJunkCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Bounce Effect"), 61040, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CBlastedLandscapeCard::CBlastedLandscapeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Blasted Landscape"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
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
CDriftingMeadowCard::CDriftingMeadowCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Drifting Meadow"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CPhyrexianTowerCard::CPhyrexianTowerCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Phyrexian Tower"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPollutedMireCard::CPollutedMireCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Polluted Mire"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CRemoteIsleCard::CRemoteIsleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Remote Isle"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CShivanGorgeCard::CShivanGorgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Shivan Gorge"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T("2") RED_MANA_TEXT,
			Life(-1),
			FALSE_CARD_COMPARER,
			TRUE,
			PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddTapCost();

	cpAbility->SetTargetOpponentPlayerOnly();

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSlipperyKarstCard::CSlipperyKarstCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Slippery Karst"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CSmolderingCraterCard::CSmolderingCraterCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Smoldering Crater"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
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
CThranQuarryCard::CThranQuarryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Thran Quarry"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThranQuarryCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CThranQuarryCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThranQuarryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = 0;

	for (int i = 0; i < pSurvey->GetSize(); ++i)
	{
		CCard* pCard = pSurvey->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 1)
			return false;
		}
	}

	return true;
}

bool CThranQuarryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = 0;

	for (int i = 0; i < pSurvey->GetSize(); ++i)
	{
		CCard* pCard = pSurvey->GetAt(i);
		if (pCard->GetCardType().IsCreature())
		{
			++nCount;
			if (nCount >= 1)
			return false;
		}
	}

	return true;
}

//____________________________________________________________________________
//
CClawsOfGixCard::CClawsOfGixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Claws of Gix"), CardType::Artifact, nID, 
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("1"),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("permanents")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrystalChimesCard::CCrystalChimesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crystal Chimes"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("3"),
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Hand, TRUE, MoveType::Others, ZoneId::Graveyard));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonBloodCard::CDragonBloodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dragon Blood"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3"),
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMetrognomeCard::CMetrognomeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Metrognome"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Hand, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Gnome"), 2775, 4);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMetrognomeCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("4"),
				_T("Gnome"), 2775,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMetrognomeCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	return true;
}

//____________________________________________________________________________
//
CMishrasHelixCard::CMishrasHelixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mishra's Helix"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, FALSE,	// Tap, Untap
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->AdjustTargetCountWithExtraCostValue();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWornPowerstoneCard::CWornPowerstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Worn Powerstone"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbsoluteGraceCard::CAbsoluteGraceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Absolute Grace"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbsoluteLawCard::CAbsoluteLawCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Absolute Law"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBackToBasicsCard::CBackToBasicsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Back to Basics"), CardType::GlobalEnchantment, nID)
{
	counted_ptr<CCardKeywordEnchantment> cpSpell(
		::CreateObject<CCardKeywordEnchantment>(this,
			_T("2") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	cpSpell->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBrilliantHaloCard::CBrilliantHaloCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Brilliant Halo"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2))
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

//____________________________________________________________________________
//
CCrosswindsCard::CCrosswindsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crosswinds"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureKeywordComparer(CreatureKeyword::Flying, false),
			Power(-2), Life(+0), CreatureKeyword::Null));

	cpAbility->SetListenToKeyword();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDespondencyCard::CDespondencyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Despondency"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-2), Life(+0))
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

//____________________________________________________________________________
//
CDouseCard::CDouseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Douse"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Red, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFieryMantleCard::CFieryMantleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fiery Mantle"), CardType::EnchantCreature, nID)
{
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
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") RED_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CFieryMantleCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CFieryMantleCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0), CreatureKeyword::Null,
			(CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CFortitudeCard::CFortitudeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fortitude"), CardType::EnchantCreature, nID)
{
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
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("1") GREEN_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CFortitudeCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CFortitudeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CRegenerationAbility> cpEnchantAbility(
		::CreateObject<CRegenerationAbility>(pEnchantCard, _T(""), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Forests")));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CLaunchCard::CLaunchCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Launch"), nID,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
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

//____________________________________________________________________________
//
CLingeringMirageCard::CLingeringMirageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lingering Mirage"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CCardTypeEnchant> cpSpell(
			::CreateObject<CCardTypeEnchant>(this,
				_T("1") BLUE_MANA_TEXT, 
				new CardTypeComparer(CardType::_Land, false)));

		cpSpell->AddCardTypeToAdd(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, _T("Island"));

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
CParasiticBondCard::CParasiticBondCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Parasitic Bond"), CardType::EnchantCreature, nID,
		_T("3") BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CParasiticBondCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CParasiticBondCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CRuneOfProtectionBlackCard::CRuneOfProtectionBlackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rune of Protection: Black"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::BlackSource, TRUE));

		AddAbility(cpAbility.GetPointer());
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
CRuneOfProtectionBlueCard::CRuneOfProtectionBlueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rune of Protection: Blue"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::BlueSource, TRUE));

		AddAbility(cpAbility.GetPointer());
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
CRuneOfProtectionGreenCard::CRuneOfProtectionGreenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rune of Protection: Green"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::GreenSource, TRUE));

		AddAbility(cpAbility.GetPointer());
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
CRuneOfProtectionRedCard::CRuneOfProtectionRedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rune of Protection: Red"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::RedSource, TRUE));

		AddAbility(cpAbility.GetPointer());
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
CRuneOfProtectionWhiteCard::CRuneOfProtectionWhiteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rune of Protection: White"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
				WHITE_MANA_TEXT,
				Life(PreventionType::PreventNextDamage),
				SourceColor::WhiteSource, TRUE));

		AddAbility(cpAbility.GetPointer());
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
CScaldCard::CScaldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scald"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenTappedForMana > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSickenCard::CSickenCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sicken"), nID,
		BLACK_MANA_TEXT,
		Power(-1), Life(-1))
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
CZephidsEmbraceCard::CZephidsEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Zephid's Embrace"), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Flying)
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CAnnulCard::CAnnulCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Annul"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false))
{
}

//____________________________________________________________________________
//
CBreachCard::CBreachCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Breach"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		Power(+2), Life(+0),
		CreatureKeyword::Fear, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CClearCard::CClearCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Clear"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
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
CExpungeCard::CExpungeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Expunge"), CardType::Instant, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Exclude artifact OR black cards

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
CFalterCard::CFalterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Falter"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Falter Effect"), 61021, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFaultLineCard::CFaultLineCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Fault Line"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT RED_MANA_TEXT,
		Life(0),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pGlobalChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CHeadlongRushCard::CHeadlongRushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Headlong Rush"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHeatRayCard::CHeatRayCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Heat Ray"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE, // Target player?
		Life(0), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
}

//____________________________________________________________________________
//
CLullCard::CLullCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lull"), CardType::Instant, nID)
{
	{
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
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
COutmaneuverCard::COutmaneuverCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Outmaneuver"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CanAssignCombatDamageToDefPlayer, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new BlockedCreatureComparer);

	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost();
	m_pTargetChgPwrTghAttrSpell->AdjustTargetCountWithExtraCostValue();
}

//____________________________________________________________________________
//
CRescindCard::CRescindCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rescind"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
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
CScrapCard::CScrapCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Scrap"), CardType::Instant, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
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
CSunderCard::CSunderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sunder"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSymbiosisCard::CSymbiosisCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Symbiosis"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+2), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CAcidicSoilCard::CAcidicSoilCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Acidic Soil"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
		::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			PreventableType::Preventable));

	cpSpell->SetMultiplier(-1);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CArcLightningCard::CArcLightningCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Arc Lightning"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-3),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
}

//____________________________________________________________________________
//
CGaeasBountyCard::CGaeasBountyCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Gaea's Bounty"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("Forests")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
}

//____________________________________________________________________________
//
CGoblinOffensiveCard::CGoblinOffensiveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Goblin Offensive"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			_T("Goblin D"), 2704,
			0));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetExtraActionValueVector();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHushCard::CHushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hush"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

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
CLayWasteCard::CLayWasteCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Lay Waste"), CardType::Sorcery, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
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
CRazeCard::CRazeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Raze"), CardType::Sorcery, nID,
		RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CRejuvenateCard::CRejuvenateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rejuvenate"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				Life(+6), PreventableType::NotPreventable));

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
CSteamBlastCard::CSteamBlastCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Steam Blast"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		Life(-2),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CTitaniasBoonCard::CTitaniasBoonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Titania's Boon"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTitaniasBoonCard::BeforeResolution));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

bool CTitaniasBoonCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CAcridianCard::CAcridianCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Acridian"), CardType::Creature, CREATURE_TYPE(Insect), nID,
        _T("1") GREEN_MANA_TEXT, Power(2), Life(4))
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CAcridianCard::CreateTemporaryAbility),
                _T("1") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CAcridianCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAcridianCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CAcridianCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CAcridianCard::CreateTemporaryAbility()
{
    return this;
}

void CAcridianCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CAlbinoTrollCard::CAlbinoTrollCard(CGame* pGame, UINT nID)
    : CRegenerationCreatureCard (pGame, _T("Albino Troll"), CardType::Creature, CREATURE_TYPE(Troll), nID,
        _T("1") GREEN_MANA_TEXT, Power(3), Life(3), _T("1") GREEN_MANA_TEXT)
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CAlbinoTrollCard::CreateTemporaryAbility),
                _T("1") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CAlbinoTrollCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAlbinoTrollCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CAlbinoTrollCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CAlbinoTrollCard::CreateTemporaryAbility()
{
    return this;
}

void CAlbinoTrollCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CCitanulCentaursCard::CCitanulCentaursCard(CGame* pGame, UINT nID)
    : CCreatureCard (pGame, _T("Citanul Centaurs"), CardType::Creature, CREATURE_TYPE(Centaur), nID,
        _T("3") GREEN_MANA_TEXT, Power(6), Life(3))
{
		GetCardKeyword()->AddShroud(FALSE);
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CCitanulCentaursCard::CreateTemporaryAbility),
                _T("3") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CCitanulCentaursCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCitanulCentaursCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CCitanulCentaursCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CCitanulCentaursCard::CreateTemporaryAbility()
{
    return this;
}

void CCitanulCentaursCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CCradleGuardCard::CCradleGuardCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Cradle Guard"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
        _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CCradleGuardCard::CreateTemporaryAbility),
                _T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CCradleGuardCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCradleGuardCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CCradleGuardCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CCradleGuardCard::CreateTemporaryAbility()
{
    return this;
}

void CCradleGuardCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CCraterHellionCard::CCraterHellionCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Crater Hellion"), CardType::Creature, CREATURE_TYPE2(Hellion, Beast), nID,
        _T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	//CIP ability
	{
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this)); //"to each other creature"

		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	//Echo ability
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CCraterHellionCard::CreateTemporaryAbility),
                _T("4") RED_MANA_TEXT RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CCraterHellionCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCraterHellionCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CCraterHellionCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CCraterHellionCard::CreateTemporaryAbility()
{
    return this;
}

void CCraterHellionCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CGambleCard::CGambleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gamble"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGambleCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGambleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerSearchModifier modifier1 = CPlayerSearchModifier(pAction->GetController(),
										MinimumValue(0), MaximumValue(1),
										pAction->GetController());

	CRandomDiscardModifier modifier2 = CRandomDiscardModifier(1);

	modifier1.ApplyTo(pAction->GetController());
	modifier2.ApplyTo(pAction->GetController());

	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CGoblinPatrolCard::CGoblinPatrolCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Goblin Patrol"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(2), Life(1))
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CGoblinPatrolCard::CreateTemporaryAbility),
				RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CGoblinPatrolCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinPatrolCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CGoblinPatrolCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CGoblinPatrolCard::CreateTemporaryAbility()
{
    return this;
}

void CGoblinPatrolCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CGoblinWarBuggyCard::CGoblinWarBuggyCard(CGame* pGame, UINT nID)
    : CHasteCreatureCard(pGame, _T("Goblin War Buggy"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
        _T("1") RED_MANA_TEXT, Power(2), Life(2))
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CGoblinWarBuggyCard::CreateTemporaryAbility),
                _T("1") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CGoblinWarBuggyCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinWarBuggyCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CGoblinWarBuggyCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CGoblinWarBuggyCard::CreateTemporaryAbility()
{
    return this;
}

void CGoblinWarBuggyCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CHeraldOfSerraCard::CHeraldOfSerraCard(CGame* pGame, UINT nID)
    : CFlyingCreatureCard(pGame, _T("Herald of Serra"), CardType::Creature, CREATURE_TYPE(Angel), nID,
        _T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CHeraldOfSerraCard::CreateTemporaryAbility),
                _T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CHeraldOfSerraCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHeraldOfSerraCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CHeraldOfSerraCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CHeraldOfSerraCard::CreateTemporaryAbility()
{
    return this;
}

void CHeraldOfSerraCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CLightningDragonCard::CLightningDragonCard(CGame* pGame, UINT nID)
    : CFlyingCreatureCard(pGame, _T("Lightning Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
        _T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
	}
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CLightningDragonCard::CreateTemporaryAbility),
                _T("2") RED_MANA_TEXT RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CLightningDragonCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLightningDragonCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CLightningDragonCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CLightningDragonCard::CreateTemporaryAbility()
{
    return this;
}

void CLightningDragonCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CPouncingJaguarCard::CPouncingJaguarCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Pouncing Jaguar"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		GREEN_MANA_TEXT, Power(2), Life(2))
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CPouncingJaguarCard::CreateTemporaryAbility),
				GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CPouncingJaguarCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPouncingJaguarCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CPouncingJaguarCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CPouncingJaguarCard::CreateTemporaryAbility()
{
    return this;
}

void CPouncingJaguarCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CShivanRaptorCard::CShivanRaptorCard(CGame* pGame, UINT nID)
    : CHasteCreatureCard(pGame, _T("Shivan Raptor"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
        _T("2") RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CShivanRaptorCard::CreateTemporaryAbility),
                _T("2") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CShivanRaptorCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShivanRaptorCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CShivanRaptorCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CShivanRaptorCard::CreateTemporaryAbility()
{
    return this;
}

void CShivanRaptorCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CViashinoOutriderCard::CViashinoOutriderCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Viashino Outrider"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
        _T("2") RED_MANA_TEXT, Power(4), Life(3))
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CViashinoOutriderCard::CreateTemporaryAbility),
                _T("2") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CViashinoOutriderCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CViashinoOutriderCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CViashinoOutriderCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CViashinoOutriderCard::CreateTemporaryAbility()
{
    return this;
}

void CViashinoOutriderCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CVugLizardCard::CVugLizardCard(CGame* pGame, UINT nID)
    : CLandwalkCreatureCard(pGame, _T("Vug Lizard"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
        _T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4),
		CreatureKeyword::Mountainwalk)
{
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CVugLizardCard::CreateTemporaryAbility),
                _T("1") RED_MANA_TEXT RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CVugLizardCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVugLizardCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CVugLizardCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CVugLizardCard::CreateTemporaryAbility()
{
    return this;
}

void CVugLizardCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CWindingWurmCard::CWindingWurmCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Winding Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
        _T("4") GREEN_MANA_TEXT, Power(6), Life(6))
{

    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CWindingWurmCard::CreateTemporaryAbility),
                _T("4") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CWindingWurmCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWindingWurmCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
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
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CWindingWurmCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CWindingWurmCard::CreateTemporaryAbility()
{
    return this;
}

void CWindingWurmCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CTolarianAcademyCard::CTolarianAcademyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tolarian Academy"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {U} to your mana pool for each artifact you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTolarianAcademyCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTolarianAcademyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Artifact, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CGaeasCradleCard::CGaeasCradleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gaea's Cradle"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {G} to your mana pool for each creature you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGaeasCradleCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGaeasCradleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CSerrasSanctumCard::CSerrasSanctumCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Serra's Sanctum"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {W} to your mana pool for each enchantment you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSerrasSanctumCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSerrasSanctumCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::_Enchantment, false));

	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CGreatWhaleCard::CGreatWhaleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Great Whale"), CardType::Creature, CREATURE_TYPE(Whale), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetSubjectCount(0, 7);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPeregrineDrakeCard::CPeregrineDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Peregrine Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetSubjectCount(0, 5);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWaylayCard::CWaylayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Waylay"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWaylayCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CWaylayCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Knight B"), 2777, 3, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(GetGame(),
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others),
				TurnNumberDelta(-1),
				NodeId::CleanupStep2,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToLater);

	for (int i = 0; i < pTokens.GetSize(); ++i)
		pModifier2->ApplyTo(pTokens.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CUnnerveCard::CUnnerveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unnerve"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT));
	ATLASSERT(cpSpell);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUnnerveCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CUnnerveCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = GetController();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			
	pModifier.AddSelection(MinimumValue(2), MaximumValue(2), // select 2 cards
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pController != pPlayer)
			pModifier.ApplyTo(pPlayer);
	}

	return false;
}

//____________________________________________________________________________
//
CTimeSpiralCard::CTimeSpiralCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Time Spiral"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalDrawCardSpell> cpSpell(
			::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, 7, 7));

		cpSpell->SetMergeGraveyard(TRUE);
		cpSpell->SetMergeHand(TRUE);

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
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetSubjectCount(0, 6);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAttunementCard::CAttunementCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Attunement"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 3));

	cpAbility->GetCost().AddReturnThisCardCost(this);
	cpAbility->SetDiscard(4, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlanarVoidCard::CPlanarVoidCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planar Void"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CPlanarVoidCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

bool CPlanarVoidCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController()); 
	return true;
}

//_________________________________________________________________________
//

CCitanulHierophantsCard::CCitanulHierophantsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Citanul Hierophants"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CCitanulHierophantsCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CCitanulHierophantsCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBravadoCard::CBravadoCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Bravado"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBravadoCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CBravadoCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBravadoCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Battlefield,
			new CardTypeComparer(CardType::Creature, false), (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->GetSurveyCardFilter().AddNegateComparer(new SpecificCardComparer(pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CBravadoCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CDestructiveUrgeCard::CDestructiveUrgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Destructive Urge"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CDestructiveUrgeCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDestructiveUrgeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectCount(1, 1);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHermeticStudyCard::CHermeticStudyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hermetic Study"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CHermeticStudyCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CHermeticStudyCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
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
CRetaliationCard::CRetaliationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Retaliation"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRetaliationCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRetaliationCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVenomousFangsCard::CVenomousFangsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Venomous Fangs"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("2") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CVenomousFangsCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CVenomousFangsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVenomousFangsCard::SetTriggerContext));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CVenomousFangsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = pToCreature;
	return true;
}

//____________________________________________________________________________
//
CSmokestackCard::CSmokestackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Smokestack"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(SOOT_COUNTER, 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->ScheduleCounter(SOOT_COUNTER, 0, true, ZoneId::Battlefield, ~ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SOOT_COUNTER, +1, false));

		cpAbility->SetAbilityName(_T("counter ability"));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}/* 
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSmokestackCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetAbilityName(_T("sacrifice ability"));

		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	} */
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSmokestackCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);
		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetAbilityName(_T("sacrifice ability"));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSmokestackCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (toCardKeyword != CardKeyword::Flash) return false;

	int nCounterCount = GetCounterContainer()->GetCounter(SOOT_COUNTER)->GetCount();
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(nCounterCount, nCounterCount, TRUE);

	if (m_pGame->GetActivePlayer() == GetController())
	{
		m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		return true;
	}

	m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	return true;
}

//____________________________________________________________________________
//
CVebulidCard::CVebulidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vebulid"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		BLACK_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked, 
								CWhenSelfAttackedBlocked::EventCallback, 
								&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetScheduledNode(NodeId::EndOfCombatStep);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPriestOfTitaniaCard::CPriestOfTitaniaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Priest of Titania"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("add {G} to your mana pool for each Elf you control with"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPriestOfTitaniaCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CPriestOfTitaniaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elf), true));
	
	int n = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());
	
	CManaPoolModifier pModifier =  CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT) // operation which is applied to mana pool (add/empty
	); // mana color

	if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CSneakAttackCard::CSneakAttackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sneak Attack"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSneakAttackCard::OnCardSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			RED_MANA_TEXT));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSneakAttackCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSneakAttackCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);
	
	if (pHand->GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't put anything onto the battlefield"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);

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
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CSneakAttackCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't put anything on the battlefield"), pSelectionPlayer->GetPlayerName());
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
				CCreatureCard* pCard = (CCreatureCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
				pModifier2.ApplyTo(pCard);

				CCountedCardContainer pSubjects;
				if (pCard->IsInplay())
					pSubjects.AddCard(pCard, CardPlacement::Top);

				CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
				pModifier3.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CVampiricEmbraceCard::CVampiricEmbraceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Vampiric Embrace"), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Flying)
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CVampiricEmbraceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CVampiricEmbraceCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWizardMentorCard::CWizardMentorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wizard Mentor"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReclusiveWightCard::CReclusiveWightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reclusive Wight"), CardType::Creature, CREATURE_TYPE2(Zombie, Minion), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddComparer(new TrueCardComparer);

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CReclusiveWightCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReclusiveWightCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CReclusiveWightCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

bool CReclusiveWightCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	
	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CAntagonismCard::CAntagonismCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Antagonism"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAntagonismCard::SetTriggerContext));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

bool CAntagonismCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	Life nDamage = Life(0);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) == pToNode->GetGraph()->GetPlayer()) continue;
		nDamage += GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn();
	}

	return nDamage > Life(0);
}

//____________________________________________________________________________
//
CFleshReaverCard::CFleshReaverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flesh Reaver"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("1") BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::CreatureEventCallback,
								&CWhenSelfDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFleshReaverCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFleshReaverCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFleshReaverCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

bool CFleshReaverCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CPlayer* pToPlayer, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CRainOfFilthCard::CRainOfFilthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rain of Filth"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			BLACK_MANA_TEXT, 
			new CardTypeComparer(CardType::_Land, false),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CRainOfFilthCard::CreateAbility)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CRainOfFilthCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(pCard,
			BLACK_MANA_TEXT));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShowerOfSparksCard::CShowerOfSparksCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shower of Sparks"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

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
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVictimizeCard::CVictimizeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Victimize"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);

	m_pTargetMoveCardSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));
}

//____________________________________________________________________________
//
CWirecatCard::CWirecatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirecat"), CardType::_ArtifactCreature, CREATURE_TYPE(Cat), nID,
		_T("4"), Power(4), Life(3))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Enchantment, false));
	
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CWirecatCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CWirecatCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CWirecatCard::CanAttack(BOOL bIncludeTricks)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
		if (m_CardFilter.CountIncluded(pSurvey->GetCardContainer()) > 0)
			return false;
	}

	return true;
}

BOOL CWirecatCard::CanBlock(BOOL bIncludeTricks)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pSurvey = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pSurvey->GetSize(); ++j)
		if (m_CardFilter.CountIncluded(pSurvey->GetCardContainer()) > 0)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CYawgmothsWillCard::CYawgmothsWillCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Yawgmoth's Will"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT));

	CPlayerEffectModifier* pmodifier1 = new CPlayerEffectModifier(PlayerEffectType::ExileInsteadGraveyard);	

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pmodifier1, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);

	CPlayerEffectModifier* pmodifier3 = new CPlayerEffectModifier(PlayerEffectType::PlayCardsFromGraveyard,
			(int)CCardFilter::GetFilter(_T("cards")));	

	CScheduledPlayerModifier* pModifier4 = new CScheduledPlayerModifier(
		GetGame(), pmodifier3, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	

	pmodifier3->LinkPlayerModifier(pModifier4);
	pModifier2->LinkPlayerModifier(pmodifier3);
	pmodifier1->LinkPlayerModifier(pModifier2);
	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier1);		

	cpSpell->SetAbilityName(_T("Casts"));
	cpSpell->SetAbilityText(_T("Casts"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFaithHealerCard::CFaithHealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Faith Healer"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+0), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFaithHealerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFaithHealerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pCard->GetCardType().IsEnchantment())
	return false;

	int converted = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CRetromancerCard::CRetromancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Retromancer"), CardType::Creature, CREATURE_TYPE2(Viashino, Shaman), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExhumeCard::CExhumeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exhume"), CardType::Sorcery, nID)
{
	m_CardFilter.SetComparer(new AnyCreatureComparer);

		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT));	

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CExhumeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	
}

bool CExhumeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}
//____________________________________________________________________________
//
CShowandTellCard::CShowandTellCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Show and Tell"), CardType::Sorcery, nID)
	, m_CardFilter(new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Enchantment | CardType::_Land, false))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT));	

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShowandTellCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CShowandTellCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}
//____________________________________________________________________________
//
CWitchEngineCard::CWitchEngineCard(CGame* pGame, UINT nID)
    : CLandwalkCreatureCard(pGame, _T("Witch Engine"), CardType::Creature, CREATURE_TYPE(Horror), nID,
        _T("5") BLACK_MANA_TEXT, Power(4), Life(4),
		CreatureKeyword::Swampwalk)
{
	counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
			
	cpAbility->GetTargetModifier().CPlayerModifiers::Add(new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));
	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT)));

	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIllGottenGainsCard::CIllGottenGainsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ill-Gotten Gains"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier->AddSelection(MinimumValue(SpecialNumber::All), MaximumValue(SpecialNumber::All), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("cards")), // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Discard, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier->SetReorderInformation(
			true, 
			ZoneId::Graveyard,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top,
			MoveType::Discard);

		CZoneModifier* pModifier2 =new CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2->AddSelection(MinimumValue(0), MaximumValue(3), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("cards")), // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),pModifier));
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),pModifier2));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CWindfallCard::CWindfallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Windfall"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CWindfallCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpSpell->SetAbilityName(_T("Each player discards his or her hand, then draws cards equal to the greatest number of cards a player discarded this way. Casts"));
	cpSpell->SetAbilityText(_T("Each player discards his or her hand, then draws cards equal to the greatest number of cards a player discarded this way. Casts"));
	
	AddSpell(cpSpell.GetPointer());
}

void CWindfallCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer;
	int nCards = 0;

	CZoneCardModifier pDiscardModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		nCards = std::max(nCards, pPlayer->GetZoneById(ZoneId::Hand)->GetSize());
		pDiscardModifier.ApplyTo(pPlayer);
	}
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(),  MinimumValue(nCards), MaximumValue(nCards));
		pDrawModifier.ApplyTo(pPlayer);

	}
}

//____________________________________________________________________________
//
CGoblinCadetsCard::CGoblinCadetsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Cadets"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->GetTriggeredPlayerModifiers().Add(new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
	cpAbility->SetAbilityName(_T("gain control ability"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWhetstoneCard::CWhetstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Whetstone"), CardType::Artifact, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGlobalRevealLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalRevealLibrarySpell>>(this,
			_T("3"), 2));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(true, false);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDiabolicServitudeCard::CDiabolicServitudeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Diabolic Servitude"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_pCard(NULL)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this, &CDiabolicServitudeCard::OnResolutionCompleted1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDiabolicServitudeCard::OnZoneChanged))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDiabolicServitudeCard::SetTriggerContext2));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility3> cpAbility(::CreateObject<TriggeredAbility3>(this));

		cpAbility->SetOptionalType(TriggeredAbility3::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility3::ContextFunction(this, &CDiabolicServitudeCard::SetTriggerContext3));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility3::BeforeResolveSelectionCallback(this, &CDiabolicServitudeCard::BeforeResolveSelection));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

void CDiabolicServitudeCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	m_pCard = pAbilityAction->GetAssociatedCard();
	m_pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

bool CDiabolicServitudeCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (pCard != m_pCard) return false; // m_pCard=NULL is also checked here

	triggerContext.m_pCard = m_pCard;
	return true;
}

bool CDiabolicServitudeCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = m_pCard; // Can be NULL
	return true;
}

bool CDiabolicServitudeCard::BeforeResolveSelection(TriggeredAbility3::TriggeredActionType* pAction) const
{
	TriggeredAbility3::TriggerContextType triggerContext(pAction->GetTriggerContext());
	return (triggerContext.m_pCard != NULL);
}

void CDiabolicServitudeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	{
		m_pCard = NULL;
		m_cpAListener.GetPointer()->RemoveAllEventSources();
	}
}

//____________________________________________________________________________
//
CPowerTaintCard::CPowerTaintCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Power Taint"), CardType::EnchantEnchantment, nID,
		_T("1") BLUE_MANA_TEXT,
		new CardTypeComparer(CardType::_Enchantment, false))
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPowerTaintCard::SetTriggerContext));

		cpAbility->SetResolutionCost(_T("2"));
		cpAbility->GetOptionalModifier().CPlayerModifiers::Add(
			new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		AddAbility(cpAbility.GetPointer());
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

bool CPowerTaintCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
CTurnaboutCard::CTurnaboutCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Turnabout"), CardType::Instant, nID)
{
	counted_ptr<CTurnaboutSpell> cpSpell(
		::CreateObject<CTurnaboutSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CTurnaboutCard::CTurnaboutSpell::CTurnaboutSpell(CCard* pCard, AbilityType abilityType,
												LPCTSTR strManaCost)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTurnaboutCard::CTurnaboutSpell::OnSelectionDone))
{
}

void CTurnaboutCard::CTurnaboutSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("artifact cards"));
		selectionEntry.strText = (_T("Tap all artifacts"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("lands"));
		selectionEntry.strText = (_T("Tap all lands"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("creatures"));
		selectionEntry.strText = (_T("Tap all creatures"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("artifact cards"));
		selectionEntry.strText = (_T("Untap all artifacts"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("lands"));
		selectionEntry.strText = (_T("Untap all lands"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)CCardFilter::GetFilter(_T("creatures"));
		selectionEntry.strText = (_T("Untap all creatures"));

		entries.push_back(selectionEntry);
	}
	
	CPlayer* pCaster = pAction->GetController();

	m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pCaster, (DWORD)pPlayer);
}

void CTurnaboutCard::CTurnaboutSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			bool bToTap = it->strText.GetAt(0) == 'T'; // "Tap" OR "Untap"
			CZoneCardModifier modifier = CZoneCardModifier(ZoneId::Battlefield, (const CCardFilter*)(it->dwContext),
										std::auto_ptr<CCardModifier>(new CCardOrientationModifier(bToTap)));

			modifier.ApplyTo((CPlayer*)dwContext1);
								
			return;
		}
}

//____________________________________________________________________________
//
CWildDogsCard::CWildDogsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Dogs"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		GREEN_MANA_TEXT, Power(2), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CWildDogsCard::OnResolutionCompleted))
{
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWildDogsCard::SetTriggerContext));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CWildDogsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetController()->GetLife() != m_pGame->GetNextPlayer(GetController())->GetLife());
}

void CWildDogsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	int nContLife = GET_INTEGER(GetController()->GetLife());
	int nOppLife = GET_INTEGER(m_pGame->GetNextPlayer(GetController())->GetLife());

	if (nContLife == nOppLife) return;
	CTransferControlModifier* pModifier = new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this);
	
	if (nContLife > nOppLife)
	{
		pModifier->ApplyTo(GetController());
		return;
	}

	if (nContLife < nOppLife)
	{
		pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
}

//____________________________________________________________________________
//
CPlanarBirthCard::CPlanarBirthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Planar Birth"), CardType::Sorcery, nID)
	, m_CardFilter(_T("a basic land"), _T("basic lands"), new CardTypeComparer(CardType::BasicLand, false))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::BasicLand, false), ZoneId::Graveyard, TRUE,
			MoveType::Others, ZoneId::Graveyard));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlanarBirthCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPlanarBirthCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(TRUE)));
	CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others)));
	pModifier1->ApplyTo(GetController());
	pModifier1->ApplyTo(m_pGame->GetNextPlayer(GetController()));
	pModifier2->ApplyTo(GetController());
	pModifier2->ApplyTo(m_pGame->GetNextPlayer(GetController()));
	
	return true;
}
//____________________________________________________________________________
//
CBrandCard::CBrandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brand"), CardType::Instant, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrandCard::BeforeResolution));

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

bool CBrandCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pController)
		{
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (pCard->GetOwner() == pController)
					pCard->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
			}
		}
	}

	return true;
}

//____________________________________________________________________________
//
CMeltdownCard::CMeltdownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Meltdown"), CardType::Sorcery, nID)
{
	counted_ptr<CPerniciousDeedSpell> cpSpell(
		::CreateObject<CPerniciousDeedSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			 CCardFilter::GetFilter(_T("artifact cards"))));	

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetExtraActionValueVector();		

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CViashinoSandswimmerCard::CViashinoSandswimmerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Sandswimmer"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(2))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CViashinoSandswimmerCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			RED_MANA_TEXT));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViashinoSandswimmerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CViashinoSandswimmerCard::BeforeResolution(CAbilityAction* pAction)
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);
		pModifier->ApplyTo(this);
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
		CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pController);
		pModifier->ApplyTo(this);
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

void CViashinoSandswimmerCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pSelectionPlayer);
				pModifier->ApplyTo(this);
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
				CMoveCardModifier* pModifier = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CArgothianWurmCard::CArgothianWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Argothian Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("3") GREEN_MANA_TEXT, Power(6), Life(6))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CArgothianWurmCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArgothianWurmCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CArgothianWurmCard::BeforeResolution(CAbilityAction* pAction)
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
	PunisherFunction(pActivePlayerID);

	return true;
}

void CArgothianWurmCard::PunisherFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
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

void CArgothianWurmCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer);
	else if (bSomeonePaid == 1)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others);
		pModifier.ApplyTo(this);
	}
}

void CArgothianWurmCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				bSomeonePaid = 1;
				Advance(dwContext1);
				return;
			}
		}
}
//____________________________________________________________________________
//
CUmbilicusCard::CUmbilicusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Umbilicus"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_PaymentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CUmbilicusCard::OnPaymentSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CUmbilicusCard::BeforeResolveSelection));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CUmbilicusCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	
	std::vector<SelectionEntry> entries;
	if ((pPlayer->GetLife() > Life(1)) && (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)))
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Pay 2 life"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Return a permanent you control to its owner's hand"));

		entries.push_back(selectionEntry);
	}
	m_PaymentSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);

	return true;
}

void CUmbilicusCard::OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s pays 2 life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s returns a permanent he controls to its owner's hand"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardFilter temp;
				temp.SetComparer(new TrueCardComparer);

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Hand, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}
//____________________________________________________________________________
//
CRemembranceCard::CRemembranceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Remembrance"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_YesNoSelection(pGame,CSelectionSupport::SelectionCallback(this, &CRemembranceCard::OnYesNoSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRemembranceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRemembranceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CRemembranceCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CRemembranceCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = triggerContext.m_pCard;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Search your library for a card named %s"), pCard->GetPrintedCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Ignore the ability of %s"), this->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	 m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pCard);
	 
	 return true;
}

void CRemembranceCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				CCard* pCard = (CCard*)dwContext1;

				CCardFilter m_CardFilter;
				m_CardFilter.SetFilterName(_T("card with the same name"), _T("cards with the same name"));
				m_CardFilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));

				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(1),
					pSelectionPlayer, ZoneId::Library,
					&m_CardFilter);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if (it->dwContext == 1)
			{
				return;
			}
		}
}

//____________________________________________________________________________
//
CCarpetOfFlowersCard::CCarpetOfFlowersCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Carpet of Flowers"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CCarpetOfFlowersCard::OnColorSelected))
	, m_NumberSelection(pGame,CSelectionSupport::SelectionCallback(this, &CCarpetOfFlowersCard::OnNumberSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCarpetOfFlowersCard::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCarpetOfFlowersCard::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCarpetOfFlowersCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CCarpetOfFlowersCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		bUsed = false;
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CCarpetOfFlowersCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	bUsed = false;

	return false;
}

bool CCarpetOfFlowersCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	return !bUsed;
}

bool CCarpetOfFlowersCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	int nIslands = CCardFilter::GetFilter(_T("Islands"))->CountIncluded(pTarget->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("add no mana"));
		
		entries.push_back(selectionEntry);
	}
	for (int i = 1; i <= nIslands; ++i)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = i;
		selectionEntry.strText.Format(_T("add %d mana"), i);

		entries.push_back(selectionEntry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return true;
}

void CCarpetOfFlowersCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				return;
			}
			else
			{
				int nAmount = (int)it->dwContext;

				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 0;
					selectionEntry.strText.Format(_T("white"));
		
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("blue"));
		
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 2;
					selectionEntry.strText.Format(_T("black"));
		
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 3;
					selectionEntry.strText.Format(_T("red"));
		
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 4;
					selectionEntry.strText.Format(_T("green"));
		
					entries.push_back(selectionEntry);
				}
				m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer, nAmount);
				return;
			}
		}
}

void CCarpetOfFlowersCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				int nAmount = dwContext1;

				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

				for (int i = 0; i < nAmount; ++i) pModifier.ApplyTo(pSelectionPlayer);
				
				bUsed = true;

				return;
			}
			if (it->dwContext == 1)
			{
				int nAmount = dwContext1;

				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

				for (int i = 0; i < nAmount; ++i) pModifier.ApplyTo(pSelectionPlayer);
				
				bUsed = true;

				return;
			}
			if (it->dwContext == 2)
			{
				int nAmount = dwContext1;

				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

				for (int i = 0; i < nAmount; ++i) pModifier.ApplyTo(pSelectionPlayer);
				
				bUsed = true;

				return;
			}
			if (it->dwContext == 3)
			{
				int nAmount = dwContext1;

				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

				for (int i = 0; i < nAmount; ++i) pModifier.ApplyTo(pSelectionPlayer);
				
				bUsed = true;

				return;
			}
			if (it->dwContext == 4)
			{
				int nAmount = dwContext1;

				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

				for (int i = 0; i < nAmount; ++i) pModifier.ApplyTo(pSelectionPlayer);
				
				bUsed = true;

				return;
			}
		}
}

//____________________________________________________________________________
//
CDiscordantDirgeCard::CDiscordantDirgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Discordant Dirge"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CDiscordantDirgeCard::OnCounterMoved))
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDiscordantDirgeCard::OnNumberSelected))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(VERSE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, true));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiscordantDirgeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CDiscordantDirgeCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CDiscordantDirgeCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	CDiscardCardCommon::ResolveDiscardCards(pTarget, pController, pController, 0, MoveType::Discard, ZoneId::Hand, TRUE, CCardFilter::GetFilter(_T("cards")));

	int nMax = pTarget->GetZoneById(ZoneId::Hand)->GetSize();

	if (m_nCounterCount < nMax)
		nMax = m_nCounterCount;

	if (nMax > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i <= nMax; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			if (i == 0)
				entry.strText.Format(_T("Have %s discard no cards"),
					pTarget->GetPlayerName());
			else if (i == 1)
				entry.strText.Format(_T("Have %s discard %d card"),
					pTarget->GetPlayerName(), i);
			else
				entry.strText.Format(_T("Have %s discard %d cards"),
					pTarget->GetPlayerName(), i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}

	return true;
}

void CDiscordantDirgeCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't have %s discard anything"), pSelectionPlayer->GetPlayerName(), ((CPlayer*)dwContext1)->GetPlayerName());
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
				int nValue = it->dwContext;
				CPlayer* pTarget = (CPlayer*)dwContext1;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						strMessage.Format(_T("%s has %s discard %d card"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s has %s discard %d cards"), pSelectionPlayer->GetPlayerName(), pTarget->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CDiscardCardCommon::ResolveDiscardCards(pTarget, pSelectionPlayer, pSelectionPlayer, nValue, MoveType::Discard, ZoneId::Hand, TRUE, CCardFilter::GetFilter(_T("cards")));

				return;
			}
		}
}

void CDiscordantDirgeCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != VERSE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CMidsummerRevelCard::CMidsummerRevelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Midsummer Revel"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CMidsummerRevelCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(VERSE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMidsummerRevelCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CMidsummerRevelCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CMidsummerRevelCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Beast H"), 2989, m_nCounterCount);

		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

void CMidsummerRevelCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != VERSE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CTorchSongCard::CTorchSongCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Torch Song"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CTorchSongCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(VERSE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, true));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTorchSongCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CTorchSongCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CTorchSongCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CLifeModifier pModifier(Life(-m_nCounterCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
		CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();

		if (pTargetCreature)
			pModifier.ApplyTo(pTargetCreature);
		else
			pModifier.ApplyTo(pTargetPlayer);
	}

	return true;
}

void CTorchSongCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != VERSE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CWarDanceCard::CWarDanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("War Dance"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CWarDanceCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(VERSE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWarDanceCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CWarDanceCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CWarDanceCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

		CPowerModifier pModifier1 = CPowerModifier(Power(+m_nCounterCount));
		CLifeModifier pModifier2 = CLifeModifier(Life(+m_nCounterCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

		pModifier1.ApplyTo(pTarget);
		pModifier2.ApplyTo(pTarget);
	}

	return true;
}

void CWarDanceCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != VERSE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CKarnSilverGolemCard::CKarnSilverGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karn, Silver Golem"), CardType::_LegendaryCreature | CardType::Artifact, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(4), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-4));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+4));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
			new CardTypeComparer(CardType::Artifact, false), false));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKarnSilverGolemCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKarnSilverGolemCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Artifact B"), 64058, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(nCMC);
	pCreature->SetPrintedToughness(nCMC);

	return true;
}

//____________________________________________________________________________
//
/*
CLiltingRefrainCard::CLiltingRefrainCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lilting Refrain"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CLiltingRefrainCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(VERSE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CLiltingRefrainAbility> cpAbility(
		::CreateObject<CLiltingRefrainAbility>(this, _T("")));

		cpAbility->AddSacrificeCost();

		cpAbility->GetDenialCost().SetManaCost(_T("9999"));
		cpAbility->SetCanBeDenied();
		cpAbility->SetSpecialDenialCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CLiltingRefrainCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


void CLiltingRefrainCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != VERSE_COUNTER)) return;
	m_nCounterCount = n_value;
}

CLiltingRefrainCard::CLiltingRefrainAbility::CLiltingRefrainAbility(CCard* pCard, LPCTSTR strManaCost)
	: CCounterSpell(pCard, AbilityType::Activated, strManaCost,
		new TrueCardComparer)
{	
}

CCost CLiltingRefrainCard::CLiltingRefrainAbility::GetSpecialDenialCost(CPlayer* pPlayer)
{
	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, ((CLiltingRefrainCard*)this->GetCard())->m_nCounterCount);

	CCost& newCost = this->GetDenialCost();

	newCost.SetManaCost(mCost.ToString());

	return newCost;
}
*/
//_________________________________________________________________________
//
CBarrinsCodexCard::CBarrinsCodexCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Barrin's Codex"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CBarrinsCodexCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(PAGE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("4")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBarrinsCodexCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CBarrinsCodexCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CBarrinsCodexCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(m_nCounterCount), MaximumValue(m_nCounterCount));
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

void CBarrinsCodexCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != PAGE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CLotusBlossomCard::CLotusBlossomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lotus Blossom"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CLotusBlossomCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(PETAL_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetAbilityText(_T("Add no mana. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLotusBlossomCard::CanPlay1)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLotusBlossomCard::BeforeResolution1));
		cpAbility->SetAbilityText(_T("Add white mana. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLotusBlossomCard::CanPlay2)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLotusBlossomCard::BeforeResolution2));
		cpAbility->SetAbilityText(_T("Add blue mana. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLotusBlossomCard::CanPlay2)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLotusBlossomCard::BeforeResolution3));
		cpAbility->SetAbilityText(_T("Add black mana. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLotusBlossomCard::CanPlay2)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLotusBlossomCard::BeforeResolution4));
		cpAbility->SetAbilityText(_T("Add red mana. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLotusBlossomCard::CanPlay2)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLotusBlossomCard::BeforeResolution5));
		cpAbility->SetAbilityText(_T("Add green mana. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLotusBlossomCard::CanPlay2)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CLotusBlossomCard::CanPlay1(BOOL bIncludeTricks)
{
	return (m_nCounterCount == 0);
}

BOOL CLotusBlossomCard::CanPlay2(BOOL bIncludeTricks)
{
	return (m_nCounterCount > 0);
}

void CLotusBlossomCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

bool CLotusBlossomCard::BeforeResolution1(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CPlayer* pController = pAction->GetController();
		CManaPoolModifier pModifier = CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

		for (int i = 0; i < m_nCounterCount; i++) pModifier.ApplyTo(pController);

	}

	return true;
}

bool CLotusBlossomCard::BeforeResolution2(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CPlayer* pController = pAction->GetController();
		CManaPoolModifier pModifier = CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

		for (int i = 0; i < m_nCounterCount; i++) pModifier.ApplyTo(pController);

	}

	return true;
}

bool CLotusBlossomCard::BeforeResolution3(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CPlayer* pController = pAction->GetController();
		CManaPoolModifier pModifier = CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

		for (int i = 0; i < m_nCounterCount; i++) pModifier.ApplyTo(pController);

	}

	return true;
}

bool CLotusBlossomCard::BeforeResolution4(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CPlayer* pController = pAction->GetController();
		CManaPoolModifier pModifier = CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

		for (int i = 0; i < m_nCounterCount; i++) pModifier.ApplyTo(pController);

	}

	return true;
}

bool CLotusBlossomCard::BeforeResolution5(CAbilityAction* pAction) const
{
	if (m_nCounterCount > 0)
	{
		CPlayer* pController = pAction->GetController();
		CManaPoolModifier pModifier = CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

		for (int i = 0; i < m_nCounterCount; i++) pModifier.ApplyTo(pController);

	}

	return true;
}

void CLotusBlossomCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != PETAL_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CGreenerPasturesCard::CGreenerPasturesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Greener Pastures"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling D"), 2907, 1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGreenerPasturesCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGreenerPasturesCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CGreenerPasturesCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pBattlefield->GetCardContainer());

	bool bMaximum = true;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer2 = GetGame()->GetPlayer(ip);
		if (pPlayer2 != pPlayer && (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pPlayer2->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > nCount))
		{
			bMaximum = false;
			break;
		}
	}

	return bMaximum;
}

bool CGreenerPasturesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pPlayer = GetGame()->GetActivePlayer();
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pBattlefield->GetCardContainer());

	bool bMaximum = true;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer2 = GetGame()->GetPlayer(ip);
		if (pPlayer2 != pPlayer && (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pPlayer2->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > nCount))
		{
			bMaximum = false;
			break;
		}
	}

	return bMaximum;
}

//____________________________________________________________________________
//
CSporogenesisCard::CSporogenesisCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sporogenesis"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(FUNGUS_COUNTER, +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Saproling D"), 2907, 0);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSporogenesisCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSporogenesisCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSporogenesisCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	int nCounters = ((CCreatureCard*)pCard)->GetLastKnownFungusCounters();

	triggerContext.nValue1 = nCounters;

	return nCounters > 0;
}

bool CSporogenesisCard::BeforeResolution(CAbilityAction* pAction) const
{
	pAction->GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	CCardCounterModifier pModifier = CCardCounterModifier(FUNGUS_COUNTER, 0, true);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (pCard->GetCardType().IsCreature() && pCard->GetCounterContainer()->GetCounter(FUNGUS_COUNTER)->GetCount() > 0)
				pModifier.ApplyTo(pCard);
		}
	}

	return true;
}


//____________________________________________________________________________
//
CPhyrexianProcessorCard::CPhyrexianProcessorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Processor"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CPhyrexianProcessorCard::OnSelectionDone))
	, m_nLifePaid(0)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("4")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianProcessorCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CPhyrexianProcessorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Minion A"), 62028));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(62028); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Minion A")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(Power(m_nLifePaid));
		pCreature->SetPrintedToughness(Life(m_nLifePaid));		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

void CPhyrexianProcessorCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		m_nLifePaid = 0;

		if ((GetController()->GetLife() > 0) && !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
		{
			int n = GET_INTEGER(GetController()->GetLife());

			std::vector<SelectionEntry> entries;
			for (int i = 0; i <= n; ++i)
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)i;
			
				entry.strText.Format(_T("Pay %d life"),
						i);

				entries.push_back(entry);
			}
			m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
		}
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CPhyrexianProcessorCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			m_nLifePaid = it->dwContext;

			CLifeModifier pModifier = CLifeModifier(Life(-m_nLifePaid), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier.ApplyTo(pSelectionPlayer);

			return;
		}
}

//____________________________________________________________________________
//
CElectryteCard::CElectryteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Electryte"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new BlockingCreatureComparer);
	
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CElectryteCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CElectryteCard::BeforeResolution(CElectryteCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nPower = GET_INTEGER(GetLastKnownPower());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nPower));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CLifelineCard::CLifelineCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lifeline"), CardType::Artifact, nID, 
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLifelineCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLifelineCard::BeforeResolution));		

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CLifelineCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pCard));

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0)
		{
			bFound = true;
			break;
		}

	triggerContext.nValue1 = (DWORD)pCard;

	return bFound;
}

bool CLifelineCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pCard));

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0)
		{
			bFound = true;
			break;
		}

	if (!bFound) return true;

	CCountedCardContainer pSubjects;
	if (pCard->IsInGraveyard())
		pSubjects.AddCard(pCard, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Reanimate Effect"), 61072, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CCurfewCard::CCurfewCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Curfew"), CardType::Instant, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCurfewCard::OnCardSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT));	

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCurfewCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCurfewCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	pReturned.RemoveAll();
	ReturnFunction(pActivePlayerID);

	return true;
}

void CCurfewCard::ReturnFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	CCardFilter m_CardFilter;

	m_CardFilter.SetComparer(new AnyCreatureComparer);

	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
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
									
				entry.strText.Format(_T("Return %s to your hand"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
	}
	else
		Advance(PlayerID);
}

void CCurfewCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s returns %s to his hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pReturned.AddCard(pCard, CardPlacement::Top);

			Advance(dwContext1);
				
			return;
		}
}

void CCurfewCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		ReturnFunction(NextPlayer);
	else
	{
		for (int i = 0; i < pReturned.GetSize(); ++i)
		{
			CCard* pCard = pReturned.GetAt(i);

			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others, pCard->GetController());
			pModifier.ApplyTo(pCard);
		}
	}
}

//____________________________________________________________________________
//