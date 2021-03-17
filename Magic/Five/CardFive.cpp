#include "stdafx.h"
#include "CardFive.h"
#include <math.h>

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

		DEFINE_CARD(CAbbeyGargoylesCard);
		DEFINE_CARD(CAbyssalSpecterCard);
		DEFINE_CARD(CAdarkarWastesCard);
		DEFINE_CARD(CAshnodsTransmograntCard);
		DEFINE_CARD(CAkronLegionnaireCard);
		DEFINE_CARD(CAmbushPartyCard);
		DEFINE_CARD(CAnHavvaConstableCard);
		DEFINE_CARD(CArensonSAuraCard);
		DEFINE_CARD(CArmorOfFaithCard);
		DEFINE_CARD(CAshnodsAltarCard);
		DEFINE_CARD(CAurochsCard);
		DEFINE_CARD(CAysenBureaucratsCard);
		DEFINE_CARD(CAzureDrakeCard);
		DEFINE_CARD(CBarbedSextantCard);
		DEFINE_CARD(CBarlsCageCard);
		DEFINE_CARD(CBindingGraspCard);
		DEFINE_CARD(CBlinkingSpiritCard);
		DEFINE_CARD(CBlessedWineCard);
		DEFINE_CARD(CBogRatsCard);
		DEFINE_CARD(CBoomerangCard);
		DEFINE_CARD(CBottomlessVaultCard);
		DEFINE_CARD(CBrainstormCard);
		DEFINE_CARD(CBrassclawOrcsCard);
		DEFINE_CARD(CBreedingPitCard);
		DEFINE_CARD(CBrokenVisageCard);
		DEFINE_CARD(CBrushlandCard);
		DEFINE_CARD(CCarapaceCard);
		DEFINE_CARD(CCaribouRangeCard);
		DEFINE_CARD(CCatWarriorsCard);
		DEFINE_CARD(CChubToadCard);
		DEFINE_CARD(CCityOfBrassCard);
		DEFINE_CARD(CClockworkSteedCard);
		DEFINE_CARD(CConquerCard);
		DEFINE_CARD(CCrawGiantCard);
		DEFINE_CARD(CDandanCard);
		DEFINE_CARD(CDarkMazeCard);
		DEFINE_CARD(CDAvenantArcherCard);
		DEFINE_CARD(CDeathSpeakersCard);
		DEFINE_CARD(CDeflectionCard);
		DEFINE_CARD(CDerelorCard);
		DEFINE_CARD(CDivineOfferingCard);
		DEFINE_CARD(CDustToDustCard);
		DEFINE_CARD(CDwarvenCatapultCard);
		DEFINE_CARD(CDwarvenHoldCard);
		DEFINE_CARD(CDwarvenRuinsCard);
		DEFINE_CARD(CDwarvenSoldierCard);
		DEFINE_CARD(CEbonStrongholdCard);
		DEFINE_CARD(CElderDruidCard);
		DEFINE_CARD(CEnervateCard);
		DEFINE_CARD(CEvilEyeOfOrmsByGoreCard);
		DEFINE_CARD(CFallenAngelCard);
		DEFINE_CARD(CFeldonsCaneCard);
		DEFINE_CARD(CFerozsBanCard);
		DEFINE_CARD(CFireDrakeCard);
		DEFINE_CARD(CFlameSpiritCard);
		DEFINE_CARD(CFlareCard);
		DEFINE_CARD(CForceSpikeCard);
		DEFINE_CARD(CForgetCard);
		DEFINE_CARD(CFountainOfYouthCard);
		DEFINE_CARD(CFoxfireCard);
		DEFINE_CARD(CFuneralMarchCard);
		DEFINE_CARD(CFyndhornElderCard);
		DEFINE_CARD(CGameOfChaosCard);
		DEFINE_CARD(CGauntletsOfChaosCard);
		DEFINE_CARD(CGhazbanOgreCard);
		DEFINE_CARD(CGlacialWallCard);
		DEFINE_CARD(CGoblinDiggingTeamCard);
		DEFINE_CARD(CGoblinHeroCard);
		DEFINE_CARD(CGoblinWarDrumsCard);
		DEFINE_CARD(CGoblinWarrensCard);
		DEFINE_CARD(CGreaterRealmOfPreservationCard);
		DEFINE_CARD(CGreaterWerewolfCard);
		DEFINE_CARD(CHavenwoodBattlegroundCard);
		DEFINE_CARD(CHealCard);
		DEFINE_CARD(CHecatombCard);
		DEFINE_CARD(CHollowTreesCard);
		DEFINE_CARD(CHomaridWarriorCard);
		DEFINE_CARD(CHungryMistCard);
		DEFINE_CARD(CHydroblastCard);
		DEFINE_CARD(CIcatianScoutCard);
		DEFINE_CARD(CIcatianStoreCard);
		DEFINE_CARD(CIcatianTownCard);
		DEFINE_CARD(CImposingVisageCard);
		DEFINE_CARD(CIncinerateCard);
		DEFINE_CARD(CInitiatesOfTheEbonHandCard);
		DEFINE_CARD(CIvoryGuardiansCard);
		DEFINE_CARD(CJalumTomeCard);
		DEFINE_CARD(CJestersCapCard);
		DEFINE_CARD(CJohtullWurmCard);
		DEFINE_CARD(CJokulhaupsCard);
		DEFINE_CARD(CJovensToolsCard);
		DEFINE_CARD(CJusticeCard);
		DEFINE_CARD(CJuxtaposeCard);
		DEFINE_CARD(CKarplusanForestCard);
		DEFINE_CARD(CKjeldoranDeadCard);
		DEFINE_CARD(CKjeldoranRoyalGuardCard);
		DEFINE_CARD(CKnightOfStromgaldCard);
		DEFINE_CARD(CKrovikanFetishCard);
		DEFINE_CARD(CKrovikanSorcererCard);
		DEFINE_CARD(CLabyrinthMinotaurCard);
		DEFINE_CARD(CLeshracsRiteCard);
		DEFINE_CARD(CLhurgoyfCard);
		DEFINE_CARD(CMemoryLapseCard);
		DEFINE_CARD(CMesaFalconCard);
		DEFINE_CARD(CMindRavelCard);
		DEFINE_CARD(CMindstabThrullCard);
		DEFINE_CARD(CMindWarpCard);
		DEFINE_CARD(CMountainGoatCard);
		DEFINE_CARD(CNatureSLoreCard);
		DEFINE_CARD(CNecriteCard);
		DEFINE_CARD(CNecropotenceCard);
		DEFINE_CARD(CObeliskOfUndoingCard);
		DEFINE_CARD(COrcishCaptainCard);
		DEFINE_CARD(COrderOfTheSacredTorchCard);
		DEFINE_CARD(COrderOfTheWhiteShieldCard);
		DEFINE_CARD(COrggCard);
		DEFINE_CARD(CPanicCard);
		DEFINE_CARD(CPentagramOfTheAgesCard);
		DEFINE_CARD(CPortentCard);
		DEFINE_CARD(CPoxCard);
		DEFINE_CARD(CPrimalOrderCard);
	//	DEFINE_CARD(CPrimordialOozeCard);
		DEFINE_CARD(CPyroblastCard);
		DEFINE_CARD(CRabidWombatCard);
		DEFINE_CARD(CRecallCard);
		DEFINE_CARD(CReefPiratesCard);
		DEFINE_CARD(CRemoveSoulCard);
		DEFINE_CARD(CRepentantBlacksmithCard);
		DEFINE_CARD(CRuinsOfTrokairCard);
		DEFINE_CARD(CSabretoothTigerCard);
		DEFINE_CARD(CSandSilosCard);
		DEFINE_CARD(CScaledWurmCard);
		DEFINE_CARD(CScavengerFolkCard);
		DEFINE_CARD(CSeaSpiritCard);
		DEFINE_CARD(CSeaSpriteCard);
		DEFINE_CARD(CSengirAutocratCard);
		DEFINE_CARD(CSeraphCard);
		DEFINE_CARD(CSerpentGeneratorCard);
		DEFINE_CARD(CSerraBestiaryCard);
		DEFINE_CARD(CSerraPaladinCard);
		DEFINE_CARD(CShieldWallCard);
		DEFINE_CARD(CShrinkCard);
		DEFINE_CARD(CSibilantSpiritCard);
		DEFINE_CARD(CSkullCatapultCard);
		DEFINE_CARD(CStampedeCard);
		DEFINE_CARD(CStoneSpiritCard);
		DEFINE_CARD(CStromgaldCabalCard);
		DEFINE_CARD(CSoulBarrierCard);
		DEFINE_CARD(CSulfurousSpringsCard);
		DEFINE_CARD(CSvyeluniteTempleCard);
		DEFINE_CARD(CTarpanCard);
		DEFINE_CARD(CTortureCard);
		DEFINE_CARD(CTouchOfDeathCard);
		DEFINE_CARD(CThrullRetainerCard);
		DEFINE_CARD(CTimeBombCard);
		DEFINE_CARD(CUndergroundRiverCard);
		DEFINE_CARD(CUpdraftCard);
		DEFINE_CARD(CUrzasBaubleCard);
		DEFINE_CARD(CUrzasMineCard);
		DEFINE_CARD(CUrzasPowerPlantCard);
		DEFINE_CARD(CUrzasTowerCard);
		DEFINE_CARD(CVodalianSoldiersCard);
		DEFINE_CARD(CWindSpiritCard);
		DEFINE_CARD(CWolverinePackCard);
		DEFINE_CARD(CWordOfBlastingCard);
		DEFINE_CARD(CWyluliWolfCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CGreaterRealmOfPreservationCard::CGreaterRealmOfPreservationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Greater Realm of Preservation"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Life(PreventionType::PreventNextDamage),
			SourceColor::BlackSource | SourceColor::RedSource, TRUE));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJusticeCard::CJusticeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Justice"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	AddUpkeepCost(WHITE_MANA_TEXT WHITE_MANA_TEXT);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
								CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJusticeCard::SetTriggerContext));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJusticeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(damage.m_nLifeDelta);
	return true;
}

//____________________________________________________________________________
//
CObeliskOfUndoingCard::CObeliskOfUndoingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Obelisk of Undoing"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("6"),
			new CardOwnerComparer(this),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbbeyGargoylesCard::CAbbeyGargoylesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Abbey Gargoyles"), CardType::Creature, CREATURE_TYPE(Gargoyle), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CAkronLegionnaireCard::CAkronLegionnaireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akron Legionnaire"), CardType::Creature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("6") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(8), Life(4))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantAttack));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
		new CardNameComparer(_T("Akron Legionnaire")));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Artifact, false));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmbushPartyCard::CAmbushPartyCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ambush Party"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CAnHavvaConstableCard::CAnHavvaConstableCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("An-Havva Constable"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Creature | CardType::Green, true)));

	cpAbility->SetListenToAllPlayersZones();

	cpAbility->SetChangeToughnessOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArensonSAuraCard::CArensonSAuraCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arenson's Aura"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("enchantments")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAysenBureaucratsCard::CAysenBureaucratsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aysen Bureaucrats"), CardType::Creature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE,	// tap
			FALSE,	// untap
			new CreaturePowerComparer<std::less<int>>(3)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CBrainstormCard::CBrainstormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brainstorm"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 3));

	cpSpell->SetDiscard(2, FALSE, MoveType::Others, ZoneId::Library, TRUE, CardPlacement::Top);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBrassclawOrcsCard::CBrassclawOrcsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brassclaw Orcs"), CardType::Creature, CREATURE_TYPE(Orc), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddCantBlock(FALSE, CCardFilter::GetFilter(_T("creatures with power less than 2")));
}

//____________________________________________________________________________
//
CBreedingPitCard::CBreedingPitCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Breeding Pit"), CardType::GlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	AddUpkeepCost(BLACK_MANA_TEXT BLACK_MANA_TEXT);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Thrull A"), 2731, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChubToadCard::CChubToadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chub Toad"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDandanCard::CDandanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dandân"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(1))
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDandanCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDandanCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CDandanCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDandanCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CDandanCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CDandanCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CDarkMazeCard::CDarkMazeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dark Maze"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("4") BLUE_MANA_TEXT, Power(4), Life(5))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDarkMazeCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T(""),
				Power(+0), Life(+0), CreatureKeyword::DefenderMayAttack));

		cpAbility->SetMaxTurnUsageCount(2);// Added to avoid infinite AI activation 
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CDarkMazeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CDeathSpeakersCard::CDeathSpeakersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Death Speakers"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CDustToDustCard::CDustToDustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dust to Dust"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetTargeting()->SetSubjectCount(2, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenSoldierCard::CDwarvenSoldierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Soldier"), CardType::Creature, CREATURE_TYPE2(Dwarf, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))

	, m_CardFilter(_T("an Orc"), _T("Orcs"), new CreatureTypeComparer(CREATURE_TYPE(Orc), false))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(&m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireDrakeCard::CFireDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fire Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));

	cpAbility->SetMaxTurnUsageCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHungryMistCard::CHungryMistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hungry Mist"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(2))
{
	AddUpkeepCost(GREEN_MANA_TEXT GREEN_MANA_TEXT);
}

//____________________________________________________________________________
//
CHydroblastCard::CHydroblastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hydroblast"), CardType::Instant, nID)
{
	{
		//Counter target spell if it's red.
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->SetAbilityText(_T("Counter target spell if it's red. Casts"));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHydroblastCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target permanent if it's red.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy target permanent if it's red. Casts"));
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHydroblastCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CHydroblastCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	return ((target->GetCardType() & CardType::Red).Any());
}

//____________________________________________________________________________
//
CPyroblastCard::CPyroblastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pyroblast"), CardType::Instant, nID)
{
	{
		//Counter target spell if it's blue.
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new TrueCardComparer));

		cpSpell->SetAbilityText(_T("Counter target spell if it's blue. Casts"));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPyroblastCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target permanent if it's blue.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("Destroy target permanent if it's blue. Casts"));
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPyroblastCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CPyroblastCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target = pAction->GetAssociatedCard();
	return ((target->GetCardType() & CardType::Blue).Any());
}

//____________________________________________________________________________
//
CIcatianScoutCard::CIcatianScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Icatian Scout"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Scout), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CImposingVisageCard::CImposingVisageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Imposing Visage"), nID,
		RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1)
{
}

//____________________________________________________________________________
//
CJovensToolsCard::CJovensToolsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Joven's Tools"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("4"),	// No mana cost
			Power(+0), Life(+0),
			CreatureKeyword::Unblockable, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost(); // tap this card
	cpAbility->GetCreatureKeywordMod().GetModifier().
		SetAdditionData((DWORD)CCardFilter::GetFilter(_T("Walls")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnightOfStromgaldCard::CKnightOfStromgaldCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Knight of Stromgald"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1),
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(+1), Life(+0))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrovikanSorcererCard::CKrovikanSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krovikan Sorcerer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddTapCost();

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("non-black cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 2));

		cpAbility->SetDiscard(1, TRUE, MoveType::Discard);
		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("black cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNatureSLoreCard::CNatureSLoreCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Nature's Lore"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("Forests")),
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
COrderOfTheWhiteShieldCard::COrderOfTheWhiteShieldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of the White Shield"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Power(+1), Life(+0)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPrimalOrderCard::CPrimalOrderCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Primal Order"), CardType::GlobalEnchantment, nID,
		_T("2")	GREEN_MANA_TEXT	GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
			&CPrimalOrderCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CPrimalOrderCard::BeforeResolution(CPrimalOrderCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = m_pGame->GetCurrentNode()->GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(
		m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CRepentantBlacksmithCard::CRepentantBlacksmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Repentant Blacksmith"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CSeaSpiritCard::CSeaSpiritCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Sea Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(3),
		BLUE_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CSeaSpriteCard::CSeaSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sea Sprite"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CSerraPaladinCard::CSerraPaladinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serra Paladin"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
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
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Vigilance, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShrinkCard::CShrinkCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shrink"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			Power(-5), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStampedeCard::CStampedeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stampede"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+1), Life(+0), CreatureKeyword::Trample));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStoneSpiritCard::CStoneSpiritCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Stone Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(3),
		CCardFilter::GetFilter(_T("non-flying creatures"))) //can't be blocked except by "this"
{
}

//____________________________________________________________________________
//
CTarpanCard::CTarpanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tarpan"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAbyssalSpecterCard::CAbyssalSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Abyssal Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
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
CAdarkarWastesCard::CAdarkarWastesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Adarkar Wastes"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

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
}

//____________________________________________________________________________
//
CAshnodsAltarCard::CAshnodsAltarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ashnod's Altar"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CManaProductionAbility> cpAbility( 
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAzureDrakeCard::CAzureDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Azure Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CBlinkingSpiritCard::CBlinkingSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blinking Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBogRatsCard::CBogRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bog Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("non-Walls")));
}

//____________________________________________________________________________
//
CBoomerangCard::CBoomerangCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Boomerang"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CBrushlandCard::CBrushlandCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Brushland"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

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
		ATLASSERT(cpAbility);

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
CCatWarriorsCard::CCatWarriorsCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Cat Warriors"), CardType::Creature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Forestwalk)
{
}

//____________________________________________________________________________
//
CCityOfBrassCard::CCityOfBrassCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("City of Brass"), nID)
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
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CConquerCard::CConquerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Conquer"), CardType::EnchantLand, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDAvenantArcherCard::CDAvenantArcherCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("D'Avenant Archer"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Archer), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2),
		_T(""),
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CDeflectionCard::CDeflectionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Deflection"), CardType::Instant, nID)
{
	counted_ptr<CDeflectionSpell> cpSpell(
		::CreateObject<CDeflectionSpell>(this, AbilityType::Instant, 
			_T("3") BLUE_MANA_TEXT, 
			new TrueCardComparer));

	//cpSpell->SetDeflectAbilities(TRUE); for testing only

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDerelorCard::CDerelorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Derelor"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Black, false),
			BLACK_MANA_TEXT));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenRuinsCard::CDwarvenRuinsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dwarven Ruins"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEbonStrongholdCard::CEbonStrongholdCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ebon Stronghold"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CElderDruidCard::CElderDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elder Druid"), CardType::Creature, CREATURE_TYPE3(Elf, Cleric, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("3") GREEN_MANA_TEXT,
			TRUE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEvilEyeOfOrmsByGoreCard::CEvilEyeOfOrmsByGoreCard(CGame* pGame, UINT nID)
	: CFearCreatureCard(pGame, _T("Evil Eye of Orms-by-Gore"), CardType::Creature, CREATURE_TYPE(Eye), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(6),
		CCardFilter::GetFilter(_T("Walls"))) //can't be blocked except by "this"
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, 
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::CantAttack));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Eye), false)); // Exclude all Eyes
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFallenAngelCard::CFallenAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fallen Angel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+2), Life(+1)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFerozsBanCard::CFerozsBanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Feroz's Ban"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new AnyCreatureComparer,
			_T("2")));
	ATLASSERT(cpAbility);

	//cpAbility->SetDisableWhenTapped();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlameSpiritCard::CFlameSpiritCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flame Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(3),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CForceSpikeCard::CForceSpikeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Force Spike"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));
}

//____________________________________________________________________________
//
CForgetCard::CForgetCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forget"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			2, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetDrawCount(SpecialNumber::Any, false); // target player draws

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFountainOfYouthCard::CFountainOfYouthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fountain of Youth"), CardType::Artifact, nID,
		_T(""), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("2"),
			Life(+1), PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFyndhornElderCard::CFyndhornElderCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Fyndhorn Elder"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1),
		GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CGlacialWallCard::CGlacialWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Glacial Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") BLUE_MANA_TEXT, Power(0), Life(7))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CGoblinDiggingTeamCard::CGoblinDiggingTeamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Digging Team"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CreatureTypeComparer(CREATURE_TYPE(Wall), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinHeroCard::CGoblinHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Hero"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CGoblinWarDrumsCard::CGoblinWarDrumsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin War Drums"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1)); 

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinWarrensCard::CGoblinWarrensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Goblin Warrens"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") RED_MANA_TEXT,
			_T("Goblin E"), 2853,
			3));

	cpAbility->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHavenwoodBattlegroundCard::CHavenwoodBattlegroundCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Havenwood Battleground"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHecatombCard::CHecatombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hecatomb"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
										CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().SetSubjectCount(4, 4);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("Swamps")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIcatianTownCard::CIcatianTownCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Icatian Town"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("5") WHITE_MANA_TEXT,
			_T("Citizen B"), 2780,
			4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIncinerateCard::CIncinerateCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Incinerate"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage | DamageType::NoRegeneration);
}

//____________________________________________________________________________
//
CJalumTomeCard::CJalumTomeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jalum Tome"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJestersCapCard::CJestersCapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jester's Cap"), CardType::Artifact, nID, 
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetPlayerSearchLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerSearchLibraryCardSpell>>(this,
			_T("2"),
			MinimumValue(3), MaximumValue(3),
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeThisCardCost(this);
	cpAbility->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJokulhaupsCard::CJokulhaupsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Jokulhaups"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJuxtaposeCard::CJuxtaposeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Juxtapose"), CardType::Sorcery, nID)
{
	counted_ptr<CExchangeControlSpell> cpSpell(
		::CreateObject<CExchangeControlSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKarplusanForestCard::CKarplusanForestCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Karplusan Forest"), nID)
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
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

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
CKjeldoranDeadCard::CKjeldoranDeadCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Kjeldoran Dead"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		BLACK_MANA_TEXT, Power(3), Life(1),
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
CKjeldoranRoyalGuardCard::CKjeldoranRoyalGuardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kjeldoran Royal Guard"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(5))
{
	counted_ptr<CDamageRedirectionEnchantment> cpAbility(
		::CreateObject<CDamageRedirectionEnchantment>(this, AbilityType::Activated,
			_T(""), 
			DamageType::CombatDamage,
			this));

	cpAbility->SetToActivatedAbility();
	cpAbility->AddTapCost();
	cpAbility->SetAffectControllerOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLeshracsRiteCard::CLeshracsRiteCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Leshrac's Rite"), nID,
		BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Swampwalk)
{
}

//____________________________________________________________________________
//
CLhurgoyfCard::CLhurgoyfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lhurgoyf"), CardType::Creature, CREATURE_TYPE(Lhurgoyf), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMemoryLapseCard::CMemoryLapseCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Memory Lapse"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Library, TRUE);
}

//____________________________________________________________________________
//
CMesaFalconCard::CMesaFalconCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Mesa Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1),
		_T("1") WHITE_MANA_TEXT, Power(+0), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CMindWarpCard::CMindWarpCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Warp"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->SetExtraActionValueVector(ContextValue(1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMountainGoatCard::CMountainGoatCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Mountain Goat"), CardType::Creature, CREATURE_TYPE(Goat), nID,
		RED_MANA_TEXT, Power(1), Life(1),
		CreatureKeyword::Mountainwalk)
{
}

//____________________________________________________________________________
//
COrderOfTheSacredTorchCard::COrderOfTheSacredTorchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of the Sacred Torch"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Black, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPentagramOfTheAgesCard::CPentagramOfTheAgesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pentagram of the Ages"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(this,
			_T("4"),
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources, TRUE));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRecallCard::CRecallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Recall"), CardType::Sorcery, nID)
{
	// Discard X cards, then return a card from your graveyard to your hand for each card discarded this way. 
	// Remove Recall from the game.

	counted_ptr<CDiscardCardSpell> cpSpell(
		::CreateObject<CDiscardCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			0, MoveType::Discard, 
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE);
	cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
	cpSpell->SetSearchCards(
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Graveyard,
		SpecialNumber::Any,
		TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRemoveSoulCard::CRemoveSoulCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Remove Soul"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer)
{
}

//____________________________________________________________________________
//
CRuinsOfTrokairCard::CRuinsOfTrokairCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Ruins of Trokair"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, WHITE_MANA_TEXT WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSabretoothTigerCard::CSabretoothTigerCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Sabretooth Tiger"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CScaledWurmCard::CScaledWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scaled Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("7") GREEN_MANA_TEXT, Power(7), Life(6))
{
}

//____________________________________________________________________________
//
CScavengerFolkCard::CScavengerFolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scavenger Folk"), CardType::Creature, CREATURE_TYPE(Human), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSengirAutocratCard::CSengirAutocratCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sengir Autocrat"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Serf"), TOKEN_ID_BY_NAME, 3);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	//{
	//	//Only exiles tokens which have the name "Serf".
	//	typedef
	//		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
	//							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	//	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	//	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	//	cpAbility->SetCreateTokenOption(FALSE, _T("Serf"), TOKEN_ID_BY_NAME, SpecialNumber::All);

	//	AddAbility(cpAbility.GetPointer());
	//}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Serf), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShieldWallCard::CShieldWallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shield Wall"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+2)));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSibilantSpiritCard::CSibilantSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sibilant Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") BLUE_MANA_TEXT, Power(5), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkullCatapultCard::CSkullCatapultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Skull Catapult"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStromgaldCabalCard::CStromgaldCabalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stromgald Cabal"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::White, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddPayLifeDeltaCost(Life(-1));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSulfurousSpringsCard::CSulfurousSpringsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sulfurous Springs"), nID)
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
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable,
																	   DamageType::AbilityDamage | DamageType::NonCombatDamage));

		cpAbility->SetAbilityName(_T("Take 1 damage from"));
		cpAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

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
CSvyeluniteTempleCard::CSvyeluniteTempleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Svyelunite Temple"), nID)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionBySacificeAbility> cpAbility(
			::CreateObject<CManaProductionBySacificeAbility>(this, BLUE_MANA_TEXT BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUndergroundRiverCard::CUndergroundRiverCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Underground River"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

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
}

//____________________________________________________________________________
//
CUrzasMineCard::CUrzasMineCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urza's Mine"), nID, CardType::_UrzasMineLand)
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Urzas, false));
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::PowerPlant, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Urzas, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Tower, false));

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrzasMineCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CUrzasMineCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if ((m_CardFilter1.CountIncluded(pBattlefield->GetCardContainer()) > 0) && (m_CardFilter2.CountIncluded(pBattlefield->GetCardContainer()) > 0))
	{
		CManaPoolModifier pModifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("2")));
		pModifier.ApplyTo(pController);
	}
	else
	{
		CManaPoolModifier pModifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
		pModifier.ApplyTo(pController);
	}
	
	return true;
}

//____________________________________________________________________________
//
CUrzasPowerPlantCard::CUrzasPowerPlantCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urza's Power Plant"), nID, CardType::_UrzasPowerPlantLand)
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Urzas, false));
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Mine, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Urzas, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Tower, false));

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrzasPowerPlantCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CUrzasPowerPlantCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if ((m_CardFilter1.CountIncluded(pBattlefield->GetCardContainer()) > 0) && (m_CardFilter2.CountIncluded(pBattlefield->GetCardContainer()) > 0))
	{
		CManaPoolModifier pModifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("2")));
		pModifier.ApplyTo(pController);
	}
	else
	{
		CManaPoolModifier pModifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
		pModifier.ApplyTo(pController);
	}
	
	return true;
}

//____________________________________________________________________________
//
CUrzasTowerCard::CUrzasTowerCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urza's Tower"), nID, CardType::_UrzasTowerLand)
{
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Urzas, false));
	m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Mine, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Urzas, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::PowerPlant, false));

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrzasTowerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CUrzasTowerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if ((m_CardFilter1.CountIncluded(pBattlefield->GetCardContainer()) > 0) && (m_CardFilter2.CountIncluded(pBattlefield->GetCardContainer()) > 0))
	{
		CManaPoolModifier pModifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("3")));
		pModifier.ApplyTo(pController);
	}
	else
	{
		CManaPoolModifier pModifier = CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
		pModifier.ApplyTo(pController);
	}
	
	return true;
}

//____________________________________________________________________________
//
CVodalianSoldiersCard::CVodalianSoldiersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vodalian Soldiers"), CardType::Creature, CREATURE_TYPE2(Merfolk, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
}

//____________________________________________________________________________
//
CWindSpiritCard::CWindSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wind Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);
}

//____________________________________________________________________________
//
CWyluliWolfCard::CWyluliWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wyluli Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTortureCard::CTortureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Torture"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLACK_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this, &CTortureCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CTortureCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CGlobalChgPwrTghSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CGlobalChgPwrTghSpell>>(pEnchantCard,
			_T("1") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			new SpecificCardComparer(pEnchantedCard)));

	cpEnchantAbility->GetSubjectModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("-1/-1"), +1));

	cpEnchantAbility->SetAbilityText(_T("Put a -1/-1 counter on enchanted creature. Activates"));
	cpEnchantAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaribouRangeCard::CCaribouRangeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Caribou Range"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CCaribouRangeCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantedCard));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardControllerComparer(this));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Token, false));
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Caribou), false));

		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+1), PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CCaribouRangeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pEnchantedCard,
			WHITE_MANA_TEXT WHITE_MANA_TEXT,
			_T("Caribou"), TOKEN_ID_BY_NAME,
			1));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CReefPiratesCard::CReefPiratesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Reef Pirates"), CardType::Creature, CREATURE_TYPE2(Zombie, Pirate), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetRevealCount(1);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIvoryGuardiansCard::CIvoryGuardiansCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ivory Guardians"), CardType::Creature, CREATURE_TYPE2(Giant, Cleric), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
    GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardNameComparer(_T("Ivory Guardians")),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CIvoryGuardiansCard::CreateAbility)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CIvoryGuardiansCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pCard,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Red, false)));

	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

	cpAbility->StartListening(GetController());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrawGiantCard::CCrawGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Craw Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCrawGiantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
	}
}

bool CCrawGiantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 2;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CWolverinePackCard::CWolverinePackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wolverine Pack"), CardType::Creature, CREATURE_TYPE(Wolverine), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWolverinePackCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CWolverinePackCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 2;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CJohtullWurmCard::CJohtullWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Johtull Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CJohtullWurmCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CJohtullWurmCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampagePower = -2;
	int nRampageToughness = -1;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampageToughness*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampagePower*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CAurochsCard::CAurochsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aurochs"), CardType::Creature, CREATURE_TYPE(Aurochs), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(3))

	, m_CardFilter(_T("an Aurochs"), _T("Aurochs"), new CreatureTypeComparer(CREATURE_TYPE(Aurochs), false))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		m_CardFilter.AddComparer(new AttackingCreatureComparer);
		m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		m_CardFilter.SetFilterName(_T("another attacking Aurochs"), _T("other attacking Aurochs"));

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAurochsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAurochsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	//triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	//triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CAshnodsTransmograntCard::CAshnodsTransmograntCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ashnod's Transmogrant"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			false));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));
	cpAbility->SetAbilityText(_T("Target creature becomes an artifact and gets a +1/+1 counter. Activates"));

	cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardTypeModifier(CardType::Artifact));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarlsCageCard::CBarlsCageCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Barl's Cage"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3"),
			new AnyCreatureComparer, FALSE));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->GetTargetModifier().CCardModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBarbedSextantCard::CBarbedSextantCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Barbed Sextant"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaFilterAbility> cpAbility(
			::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT, _T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrovikanFetishCard::CKrovikanFetishCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Krovikan Fetish"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+1), Life(+1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlessedWineCard::CBlessedWineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blessed Wine"), CardType::Instant, nID)
{
	counted_ptr<CChgLifeSpell> cpSpell(
		::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Life(+1), PreventableType::NotPreventable));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CEnervateCard::CEnervateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Enervate"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			TRUE, FALSE,	// Tap, Untap
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFlareCard::CFlareCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flare"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CFoxfireCard::CFoxfireCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Foxfire"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new AttackingCreatureComparer)
{
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CHealCard::CHealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Heal"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT, 
			new AnyCreatureComparer, TRUE,
			Life(1), SourceColor::Null));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUpdraftCard::CUpdraftCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Updraft"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CMindRavelCard::CMindRavelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Ravel"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTouchOfDeathCard::CTouchOfDeathCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Touch of Death"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetReverseLifeDeltaToController();

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));
}

//____________________________________________________________________________
//
CPoxCard::CPoxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pox"), CardType::Sorcery, nID)

	, m_CardFilter1(_T("creature"), _T("creatures"), new AnyCreatureComparer)
	, m_CardFilter2(_T("a land"), _T("lands"), new CardTypeComparer(CardType::_Land, false))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPoxCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,	// Cost
			Life(0),		// life delta
			new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false)),	// Affects creatures without flying
			TRUE,	// Affects players
			PreventableType::Preventable,	// Preventable
			DamageType::NotDealingDamage | DamageType::NoRegeneration)); //No regeneration

	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
	AddSpell(cpSpell.GetPointer());

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
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoxCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoxCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoxCard::SetTriggerContext3));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoxCard::SetTriggerContext4));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility2 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility2);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoxCard::SetTriggerContext5));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility3 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility3);
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);		

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoxCard::SetTriggerContext6));

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		m_pTriggeredAbility4 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility4);
	}
}

bool CPoxCard::SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pHand = GetController()->GetZoneById(ZoneId::Hand);
	int n = 0;
	n =  (int)ceil((float)pHand->GetSize() / 3.0);

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CPoxCard::SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand);
			
	int n = 0;
	n =  (int)ceil((float)pHand->GetSize() / 3.0);

	triggerContext.m_nDiscardCount = n;

	return n > 0;
}

bool CPoxCard::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
	
	n =  (int)ceil((float)m_CardFilter1.CountIncluded(pBat->GetCardContainer()) / 3.0);	
	
	m_pTriggeredAbility1->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CPoxCard::SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
	
	n =  (int)ceil((float)m_CardFilter1.CountIncluded(pBat->GetCardContainer()) / 3.0);	
	
	m_pTriggeredAbility2->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CPoxCard::SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = GetController()->GetZoneById(ZoneId::Battlefield);
	int n = 0;
	
	n =  (int)ceil((float)m_CardFilter2.CountIncluded(pBat->GetCardContainer()) / 3.0);		
	
	m_pTriggeredAbility3->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

bool CPoxCard::SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pBat = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);	
	int n = 0;
		
	n =  (int)ceil((float)m_CardFilter2.CountIncluded(pBat->GetCardContainer()) / 3.0);	
	
	m_pTriggeredAbility4->GetGatherer().SetSubjectCount(
		n, // minimum
		n, // maximum
		TRUE);
	return true;
}

void CPoxCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* cont = GetController();
	CPlayer* opp = m_pGame->GetNextPlayer(GetController());
	int cont_l_m = 0;
	int opp_l_m = 0;
	cont_l_m = (int)ceil((float)GET_INTEGER(cont->GetLife())/3.0);
	opp_l_m = (int)ceil((float)GET_INTEGER(opp->GetLife())/3.0);
    CLifeModifier* pModifier1 = new CLifeModifier(Life(-cont_l_m), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CLifeModifier* pModifier2 = new CLifeModifier(Life(-opp_l_m), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1->ApplyTo(cont);
	pModifier2->ApplyTo(opp);
}

//____________________________________________________________________________
//
CNecriteCard::CNecriteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Necrite"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecriteCard::SetTriggerContext));

	cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CNecriteCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CMindstabThrullCard::CMindstabThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindstab Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::DeclareBlockersStep2));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CMindstabThrullCard::SetTriggerContext));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetDiscardCount(3);
		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CMindstabThrullCard::SetTriggerContext));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMindstabThrullCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}
bool CMindstabThrullCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
											  CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	return (toCardKeyword == CardKeyword::Flash);
}

//____________________________________________________________________________
//
CLabyrinthMinotaurCard::CLabyrinthMinotaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Labyrinth Minotaur"), CardType::Creature, CREATURE_TYPE(Minotaur), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;
	
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLabyrinthMinotaurCard::SetTriggerContext));
	
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CLabyrinthMinotaurCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;
	return (IsBlocking() == TRUE);
}

//____________________________________________________________________________
//
CPanicCard::CPanicCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Panic"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CPanicCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}

BOOL CPanicCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2);
}

//____________________________________________________________________________
//
CHomaridWarriorCard::CHomaridWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Homarid Warrior"), CardType::Creature, CREATURE_TYPE2(Homarid, Warrior), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0)));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
		pModifier2->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier2->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier2);

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));//To tap this card on resolution.

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInitiatesOfTheEbonHandCard::CInitiatesOfTheEbonHandCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Initiates of the Ebon Hand"), CardType::Creature, CREATURE_TYPE(Cleric), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CInitiatesOfTheEbonHandCard::OnResolutionCompleted))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT, _T("1")));

	m_pAbility = cpAbility.GetPointer();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(m_pAbility);
}

void CInitiatesOfTheEbonHandCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult || (m_pAbility->GetTurnUsageCount() < 4)) return;

	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Sacrifice Effect"), 61058, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
COrggCard::COrggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orgg"), CardType::Creature, CREATURE_TYPE(Orgg), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	m_CardFilter1.AddComparer(new CreaturePowerComparer<std::less<int>>(3));

	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddCantBlock(FALSE, &m_CardFilter1);

	{
		m_CardFilter.AddComparer(new UntappedComparer);
		m_CardFilter.AddComparer(new AnyCreatureComparer);
		m_CardFilter.AddComparer(new CreaturePowerComparer<std::greater<int>>(2));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&COrggCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL COrggCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CDivineOfferingCard::CDivineOfferingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Divine Offering"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDivineOfferingCard::BeforeResolution));
}

bool CDivineOfferingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CWordOfBlastingCard::CWordOfBlastingCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Word of Blasting"), CardType::Instant, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Instant,
		new CreatureTypeComparer(CREATURE_TYPE(Wall), false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWordOfBlastingCard::BeforeResolution));
}

bool CWordOfBlastingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* TargetsController=pAction->GetAssociatedCard()->GetController();

	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(-converted), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	pModifier.ApplyTo(TargetsController);

	return true;
}

//____________________________________________________________________________
//
CFeldonsCaneCard::CFeldonsCaneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Feldon's Cane"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 0));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeldonsCaneCard::BeforeResolution));
	cpAbility->AddExileCost();

	AddAbility(cpAbility.GetPointer());
}

bool CFeldonsCaneCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others)));

	pModifier.ApplyTo(GetController());
	GetController()->GetZoneById(ZoneId::Library)->Shuffle();

	return true;
}

//____________________________________________________________________________
//
CSerpentGeneratorCard::CSerpentGeneratorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Serpent Generator"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("4"),
			_T("Snake B"), 2887,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSerraBestiaryCard::CSerraBestiaryCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Serra Bestiary"), nID,
		 WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	AddUpkeepCost(WHITE_MANA_TEXT WHITE_MANA_TEXT);
	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().LinkCardModifier(pModifier);
}

//____________________________________________________________________________
//
CRabidWombatCard::CRabidWombatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rabid Wombat"), CardType::Creature, CREATURE_TYPE(Wombat), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(1))
{
	{
		counted_ptr<CPwrTghAttrEnchantmentCount> cpAbility(
			::CreateObject<CPwrTghAttrEnchantmentCount>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));		

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmorOfFaithCard::CArmorOfFaithCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Armor of Faith"), nID, 
		WHITE_MANA_TEXT,
		Power(+1), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CArmorOfFaithCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CArmorOfFaithCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+1), CreatureKeyword::Null,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCarapaceCard::CCarapaceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Carapace"), nID, 
		GREEN_MANA_TEXT,
		Power(+0), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CCarapaceCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CCarapaceCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T(""),
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrullRetainerCard::CThrullRetainerCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Thrull Retainer"), nID, 
		BLACK_MANA_TEXT,
		Power(+1), Life(+1))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CThrullRetainerCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CThrullRetainerCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T(""),
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBottomlessVaultCard::CBottomlessVaultCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bottomless Vault"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetAbilityType(AbilityType::Untap);
		cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBottomlessVaultCard::SetTriggerContext));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBottomlessVaultCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBottomlessVaultCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CBottomlessVaultCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CBottomlessVaultCard::BeforeResolution1(CAbilityAction* pAction)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CBottomlessVaultCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CDwarvenHoldCard::CDwarvenHoldCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Dwarven Hold"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetAbilityType(AbilityType::Untap);
		cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDwarvenHoldCard::SetTriggerContext));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenHoldCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenHoldCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CDwarvenHoldCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CDwarvenHoldCard::BeforeResolution1(CAbilityAction* pAction)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CDwarvenHoldCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CHollowTreesCard::CHollowTreesCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Hollow Trees"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetAbilityType(AbilityType::Untap);
		cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHollowTreesCard::SetTriggerContext));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHollowTreesCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHollowTreesCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CHollowTreesCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CHollowTreesCard::BeforeResolution1(CAbilityAction* pAction)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CHollowTreesCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CIcatianStoreCard::CIcatianStoreCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Icatian Store"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetAbilityType(AbilityType::Untap);
		cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIcatianStoreCard::SetTriggerContext));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIcatianStoreCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIcatianStoreCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CIcatianStoreCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CIcatianStoreCard::BeforeResolution1(CAbilityAction* pAction)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CIcatianStoreCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSandSilosCard::CSandSilosCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Sand Silos"), nID, CardType::NonbasicLand)
{
	SetIntoPlayTapped();
	GetCardKeyword()->AddCanChooseNotUntap(FALSE);
	{
		counted_ptr<CSelfUntapNonstackAbility> cpAbility(
		::CreateObject<CSelfUntapNonstackAbility>(this,
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetMaxTurnUsageCount(1);
		cpAbility->SetAbilityType(AbilityType::Untap);
		cpAbility->SetUseInSpecificNode(NodeId::UntapStep, FALSE, TRUE);	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(STORAGE_COUNTER, +1, false));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandSilosCard::SetTriggerContext));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSandSilosCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->AddTapCost();
		cpAbility->SetAbilityText(_T("Remove 0 charge counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(STORAGE_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->AddTapCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSandSilosCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CSandSilosCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CSandSilosCard::BeforeResolution1(CAbilityAction* pAction)
{
	return (GetOrientation()->IsTapped() == TRUE);
}

bool CSandSilosCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CGauntletsOfChaosCard::CGauntletsOfChaosCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gauntlets of Chaos"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CGauntletsOfChaosCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CExhangeControllSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CExhangeControllSpell>>(this,
				_T("5"),
				new CardTypeComparer(CardType::Artifact, false),
				new CardTypeComparer(CardType::Artifact, false)));

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGauntletsOfChaosCard::BeforeResolution));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CExhangeControllSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CExhangeControllSpell>>(this,
				_T("5"),
				new CardTypeComparer(CardType::Creature, false),
				new CardTypeComparer(CardType::Creature, false)));

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGauntletsOfChaosCard::BeforeResolution));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CExhangeControllSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CExhangeControllSpell>>(this,
				_T("5"),
				new CardTypeComparer(CardType::_Land, false),
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGauntletsOfChaosCard::BeforeResolution));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGauntletsOfChaosCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	m_pCard1 = pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	m_pCard2 = pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject();

	if ((m_pCard1->GetCardType().IsArtifact() && m_pCard2->GetCardType().IsArtifact()) ||
		(m_pCard1->GetCardType().IsCreature() && m_pCard2->GetCardType().IsCreature()) ||
		(m_pCard1->GetCardType().IsLand() && m_pCard2->GetCardType().IsLand()))
			return true;

	return false;
}

void CGauntletsOfChaosCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	if (m_pCard1->GetZoneId() != ZoneId::Battlefield && m_pCard2->GetZoneId() != ZoneId::Battlefield) return;
	
	CCardFilter cfilter(new CardTypeComparer(CardType::_Aura, false));
	cfilter.AddChildFilter(new CCardFilter(new EnchantedOnComparer(m_pCard1)));
	cfilter.AddChildFilter(new CCardFilter(new EnchantedOnComparer(m_pCard2)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}
}

//____________________________________________________________________________
//
CBindingGraspCard::CBindingGraspCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Binding Grasp"), CardType::EnchantCreature, nID)
{
	AddUpkeepCost(_T("1") BLUE_MANA_TEXT);

	counted_ptr<CControlPumpEnchant> cpSpell(
		::CreateObject<CControlPumpEnchant>(this,
			_T("3") BLUE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFuneralMarchCard::CFuneralMarchCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Funeral March"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFuneralMarchCard::SetTriggerContext));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);

	m_pTriggeredAbility = cpAbility.GetPointer();
	AddAbility(m_pTriggeredAbility);
}

bool CFuneralMarchCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	m_pTriggeredAbility->GetGatherer().SetIncludeThisPlayersCardsOnly(pCard->GetController());
	return true;
}

//____________________________________________________________________________
//
CGhazbanOgreCard::CGhazbanOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghazbán Ogre"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		GREEN_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGhazbanOgreCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGhazbanOgreCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
	AddAbility(cpAbility.GetPointer());
}

bool CGhazbanOgreCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetController()->GetLife() != m_pGame->GetNextPlayer(GetController())->GetLife());
}

void CGhazbanOgreCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
CGameOfChaosCard::CGameOfChaosCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Game of Chaos"), CardType::Sorcery, nID)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGameOfChaosCard::OnFlipSelected))
	, m_Continue(pGame, CSelectionSupport::SelectionCallback(this, &CGameOfChaosCard::OnContinueSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE));
	
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGameOfChaosCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CGameOfChaosCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	FlipCount = 1;
	FlipFunction(pController, pTarget);
	return true;
}

void CGameOfChaosCard::FlipFunction (CPlayer* pController, CPlayer* pTarget)
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
		strMessage.Format(_T("%s loses the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CLifeModifier* pModifier1 = new CLifeModifier(Life(-FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier1->ApplyTo(pController);
		pModifier2->ApplyTo(pTarget);
		FlipCount = 2 * FlipCount;

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("continue flipping"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("stop flipping"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_Continue.AddSelectionRequest(entries, 1, 1, NULL, pTarget, (DWORD)pController, (DWORD)pTarget);
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
		CLifeModifier* pModifier1 = new CLifeModifier(Life(FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		CLifeModifier* pModifier2 = new CLifeModifier(Life(-FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier1->ApplyTo(pController);
		pModifier2->ApplyTo(pTarget);
		FlipCount = 2 * FlipCount;

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("continue flipping"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("stop flipping"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_Continue.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pController, (DWORD)pTarget);

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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(), (DWORD)pController, (DWORD)pTarget);
	}
	return;
}

void CGameOfChaosCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier* pModifier1 = new CLifeModifier(Life(FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CLifeModifier* pModifier2 = new CLifeModifier(Life(-FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier1->ApplyTo((CPlayer*)dwContext1);
				pModifier2->ApplyTo((CPlayer*)dwContext2);
				FlipCount = 2 * FlipCount;

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("continue flipping"), this->GetCardName());
			
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 2;
					selectionEntry.strText.Format(_T("stop flipping"), this->GetCardName());

					entries.push_back(selectionEntry);
				}
				m_Continue.AddSelectionRequest(entries, 1, 1, NULL, (CPlayer*)dwContext1, dwContext1, dwContext2);

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
				CLifeModifier* pModifier1 = new CLifeModifier(Life(-FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CLifeModifier* pModifier2 = new CLifeModifier(Life(FlipCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier1->ApplyTo((CPlayer*)dwContext1);
				pModifier2->ApplyTo((CPlayer*)dwContext2);
				FlipCount = 2 * FlipCount;

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				std::vector<SelectionEntry> entries;
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 1;
					selectionEntry.strText.Format(_T("continue flipping"), this->GetCardName());
			
					entries.push_back(selectionEntry);
				}
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = 2;
					selectionEntry.strText.Format(_T("stop flipping"), this->GetCardName());

					entries.push_back(selectionEntry);
				}
				m_Continue.AddSelectionRequest(entries, 1, 1, NULL, (CPlayer*)dwContext2, dwContext1, dwContext2);

				return;
			}
		}
}

void CGameOfChaosCard::OnContinueSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s decides to continue flipping"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				FlipFunction((CPlayer*)dwContext1, (CPlayer*)dwContext2);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s decides to stop flipping"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				return;
			}
		}
}
//____________________________________________________________________________
//
COrcishCaptainCard::COrcishCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orcish Captain"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &COrcishCaptainCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1"),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Orc), false));
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrcishCaptainCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool COrcishCaptainCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
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
		CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier->ApplyTo(pTarget);
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
		CPowerModifier* pModifier = new CPowerModifier(Power(+2));
		pModifier->ApplyTo(pTarget);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget);
	}
	return true;
}

void COrcishCaptainCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CPowerModifier* pModifier = new CPowerModifier(Power(+2));
				pModifier->ApplyTo((CCreatureCard*)dwContext1);
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
				CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier->ApplyTo((CCreatureCard*)dwContext1);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				return;
			}
		}
}

//____________________________________________________________________________
//
CDwarvenCatapultCard::CDwarvenCatapultCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dwarven Catapult"), CardType::Instant, nID)	// Preventable?
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->AddAbilityTag(AbilityTag::DamageSource);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenCatapultCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDwarvenCatapultCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pTarget->GetZoneById(ZoneId::Battlefield);
	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer());
	int damage = n / nCreatures;

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-damage), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CPortentCard::CPortentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Portent"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CPortentCard::OnResolutionCompleted))
	, m_ShuffleSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPortentCard::OnShuffleSelected))
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			3));

	cpSpell->SetReorder(TRUE, ZoneId::Library);

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CPortentCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Shuffle the library"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Don't shuffle"));

		entries.push_back(selectionEntry);
	}

	m_ShuffleSelection.AddSelectionRequest(entries, 1, 1, this, pAbilityAction->GetController(),(DWORD)pAbilityAction->GetAssociatedPlayer());
}

void CPortentCard::OnShuffleSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				((CPlayer*)dwContext1)->GetZoneById(ZoneId::Library)->Shuffle();

				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);
				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		return;
		}
}

//____________________________________________________________________________
//
CUrzasBaubleCard::CUrzasBaubleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Urza's Bauble"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUrzasBaubleCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CUrzasBaubleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		int nRand;

		if (m_pGame->IsThinking())
			nRand = 0;
		else
			nRand = pController->GetRand() % pHand->GetSize();

		CCard* pCard = pHand->GetAt(nRand);

		if (!m_pGame->IsThinking() && (!pTarget->IsComputer() || !pController->IsComputer()))
		{

			CString strMessage;
			if (pTarget != pController)
				strMessage.Format(_T("%s reveals %s to %s"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE), pController->GetPlayerName());
			else
				strMessage.Format(_T("%s notices %s in his hand"), pTarget->GetPlayerName(), pCard->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);

			pController->MemorizeCard(pCard);
		}
	}

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CSoulBarrierCard::CSoulBarrierCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soul Barrier"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("2"));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTimeBombCard::CTimeBombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Time Bomb"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CTimeBombCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(TIME_COUNTER, +1));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTimeBombCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CTimeBombCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}


bool CTimeBombCard::BeforeResolution(CAbilityAction* pAction) const
{
	CLifeModifier* pModifier1 = new CLifeModifier(Life(-m_nCounterCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	CZoneCreatureModifier pModifier2 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier1));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier1->ApplyTo(GetGame()->GetPlayer(ip));

	return true;
}

void CTimeBombCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != TIME_COUNTER)) return;
	m_nCounterCount = n_value;
}

//_________________________________________________________________________
//
CNecropotenceCard::CNecropotenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Necropotence"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//Skip your draw step
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecropotenceCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CNecropotenceCard::BeforeResolution1));
		
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNecropotenceCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CNecropotenceCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											CPlayer* pPlayer1, CCard* pCard, CPlayer* pByPlayer) const
{
	triggerContext.nValue1 = (DWORD)pCard;
	triggerContext.nValue2 = (int)pCard->IsInGraveyard();

	return true;
}

bool CNecropotenceCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	if (triggerContext.nValue2)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo((CCard*)triggerContext.nValue1);
	}

	return true;
}

bool CNecropotenceCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);
	
	if (pLibrary->GetSize() > 0)
	{
		CCard* pCard = pLibrary->GetTopCard();
		
		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pController);
		pModifier1.ApplyTo(pCard);

		CCountedCardContainer pSubjects;
		if (pCard->GetZoneId() == ZoneId::_ExileFaceDown)
			pSubjects.AddCard(pCard, CardPlacement::Top);

		CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Necropotence Effect"), 61084, &pSubjects);
		pModifier.ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CBrokenVisageCard::CBrokenVisageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Broken Visage"), CardType::Instant, nID)	// Preventable?
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT,
			new AttackingCreatureComparer, false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

	cpSpell->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	cpSpell->AddAbilityTag(AbilityTag::TokenCreation);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrokenVisageCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBrokenVisageCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();

	Power nPower = pTarget->GetLastKnownPower();
	Life nToughness = pTarget->GetLastKnownToughness();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration, pController);
	pModifier1.ApplyTo(pTarget);

	CCountedCardContainer pTokens;

	int nTokenCount = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, _T("Spirit N"), 2717));		

		if (!m_pGame->IsThinking())
		{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(2717); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(_T("Spirit N")); }

		pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		
		CCreatureCard* pCreature = (CCreatureCard*)cpToken.GetPointer();

		pCreature->SetPrintedPower(nPower);
		pCreature->SetPrintedToughness(nToughness);		

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

		pTokens.AddCard(cpToken.GetPointer(), CardPlacement::Top);
	}

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CClockworkSteedCard::CClockworkSteedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Clockwork Steed"), CardType::_ArtifactCreature, CREATURE_TYPE(Horse), nID,
		_T("4"), Power(0), Life(3))
	, bAttackedOrBlocked(FALSE)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CClockworkSteedCard::OnNumberSelected))
	, m_CardFilter(new NegateCardComparer(new CardTypeComparer(CardType::Artifact, false)))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+0"), 4, true, ZoneId::_AllZones, ZoneId::Battlefield, false);
	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSteedCard::SetTriggerContext));
		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+0"), -1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, FALSE, FALSE);
		cpAbility->AddTapCost();
		
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CClockworkSteedCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSteedCard::SetTriggerContextAux1));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSteedCard::SetTriggerContextAux2));
		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CClockworkSteedCard::SetTriggerContextAux3));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CClockworkSteedCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCreatureCard* pCreatureCard)
{
	bAttackedOrBlocked = TRUE;

	return false;
}

bool CClockworkSteedCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	bAttackedOrBlocked = FALSE;

	return false;
}

bool CClockworkSteedCard::SetTriggerContextAux3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	bAttackedOrBlocked = FALSE;

	return false;
}

bool CClockworkSteedCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return bAttackedOrBlocked == TRUE;
}

bool CClockworkSteedCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounters = GetCounterContainer()->GetCounter(_T("+1/+0"))->GetCount();
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	if (!IsInplay() || GetCardKeyword()->HasCantGetCounters() || (nCounters >= 4) || (nValue == 0))
		return true;
	
	int nCount = 1;
	int nMultiplier = 0;
	if (pAction->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE));
		nCount <<= nMultiplier;
	bool bMaxReached = false;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't add counters"));

		entries.push_back(selectionEntry);
	}
	for (int i = 1; i <= nValue; i++)
	{
		int nToPut = i * nCount;
		if (nCounters + nToPut >= 4)
		{
			nToPut = 4 - nCounters;
			bMaxReached = true;
		}

		SelectionEntry selectionEntry;

		selectionEntry.dwContext = nToPut;
		if (nToPut == 1)
			selectionEntry.strText.Format(_T("Put %d +1/+0 counter on %s"), nToPut, GetCardName(TRUE));
		else
			selectionEntry.strText.Format(_T("Put %d +1/+0 counters on %s"), nToPut, GetCardName(TRUE));

		entries.push_back(selectionEntry);

		if (bMaxReached) break;
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	
	return true;
}

void CClockworkSteedCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext;
			
			if (n > 0)
			{
				CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+0"), +n);
				pModifier.SetDoubling(false);
				pModifier.ApplyTo(this);
			}
		}
}

//____________________________________________________________________________
//
CSeraphCard::CSeraphCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Seraph"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("6") WHITE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSeraphCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CSeraphCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.nValue1 = (DWORD)pCard;

	return true;
}

bool CSeraphCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	if (pCard->IsInGraveyard())
		pSubjects1.AddCard(pCard, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Seraph First Effect"), 61091, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGreaterWerewolfCard::CGreaterWerewolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greater Werewolf"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGreaterWerewolfCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGreaterWerewolfCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!IsInplay()) return true;

	CCardCounterModifier pModifier = CCardCounterModifier(_T("-0/-2"), +1);

	for (int i = 0; i < GetBlockedBy().GetSize(); ++i)
		pModifier.ApplyTo((CCreatureCard*)GetBlockedBy().GetAt(i));

	for (int i = 0; i < GetBlocking().GetSize(); ++i)
		pModifier.ApplyTo((CCreatureCard*)GetBlocking().GetAt(i));

	return true;
}

//____________________________________________________________________________
//