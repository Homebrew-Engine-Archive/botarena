#include "stdafx.h"
#include "CardStronghold.h"

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

		DEFINE_CARD(CAcidicSliverCard);
		DEFINE_CARD(CAwakeningCard);
		DEFINE_CARD(CBottomlessPitCard);
		DEFINE_CARD(CBrushWithDeathCard);
		DEFINE_CARD(CBullwhipCard);
		DEFINE_CARD(CBurgeoningCard);
		DEFINE_CARD(CCarnassidCard);
		DEFINE_CARD(CChangeOfHeartCard);
		DEFINE_CARD(CConstantMistsCard);
		DEFINE_CARD(CContemplationCard);
		DEFINE_CARD(CContemptCard);
		DEFINE_CARD(CConvictionCard);
		DEFINE_CARD(CCrossbowAmbushCard);
		DEFINE_CARD(CCrovaxTheCursedCard);
		DEFINE_CARD(CCrystallineSliverCard);
		DEFINE_CARD(CDauthiTrapperCard);
		DEFINE_CARD(CDeathStrokeCard);
		DEFINE_CARD(CDreamHallsCard);
		DEFINE_CARD(CDungeonShadeCard);
		DEFINE_CARD(CElvenRiteCard);
		DEFINE_CARD(CEndangeredArmodonCard);
		DEFINE_CARD(CFanningTheFlamesCard);
		DEFINE_CARD(CFlowstoneBladeCard);
		DEFINE_CARD(CFlowstoneHellionCard);
		DEFINE_CARD(CFlowstoneMaulerCard);
		DEFINE_CARD(CFurnaceSpiritCard);
		DEFINE_CARD(CHammerheadSharkCard);
		DEFINE_CARD(CHeatOfBattleCard);
		DEFINE_CARD(CHermitDruidCard);
		DEFINE_CARD(CHesitationCard);
		DEFINE_CARD(CHibernationSliverCard);
		DEFINE_CARD(CHornetCannonCard);
		DEFINE_CARD(CHornOfGreedCard);
		DEFINE_CARD(CJinxedRingCard);
		DEFINE_CARD(CLabRatsCard);
		DEFINE_CARD(CLancersEnKorCard);
		DEFINE_CARD(CLeapCard);
		DEFINE_CARD(CLowlandBasiliskCard);
		DEFINE_CARD(CMaskOfTheMimicCard);
		DEFINE_CARD(CMindGamesCard);
		DEFINE_CARD(CMindPeelCard);
		DEFINE_CARD(CMindwarperCard);
		DEFINE_CARD(CMobJusticeCard);
		DEFINE_CARD(CMoggBombersCard);
		DEFINE_CARD(CMoggInfestationCard);
		DEFINE_CARD(CMoggManiacCard);
		DEFINE_CARD(CMorgueThrullCard);
		DEFINE_CARD(CMortuaryCard);
		DEFINE_CARD(CMoxDiamondCard);
		DEFINE_CARD(CMulchCard);
		DEFINE_CARD(CNomadsEnKorCard);
		DEFINE_CARD(CRabidRatsCard);
		DEFINE_CARD(CRansackCard);
		DEFINE_CARD(CReinsOfPowerCard);
		DEFINE_CARD(CRuinationCard);
		DEFINE_CARD(CSamiteBlessingCard);
		DEFINE_CARD(CScapegoatCard);
		DEFINE_CARD(CSeethingAngerCard);
		DEFINE_CARD(CShamanEnKorCard);
		DEFINE_CARD(CShiftingWallCard);
		DEFINE_CARD(CSkyshroudArcherCard);
		DEFINE_CARD(CSkyshroudTroopersCard);
		DEFINE_CARD(CSliverQueenCard);
		DEFINE_CARD(CSmiteCard);
		DEFINE_CARD(CSoltariChampionCard);
		DEFINE_CARD(CSpikeBreederCard);
		DEFINE_CARD(CSpikeColonyCard);
		DEFINE_CARD(CSpikeFeederCard);
		DEFINE_CARD(CSpikeSoldierCard);
		DEFINE_CARD(CSpikeWorkerCard);
		DEFINE_CARD(CSpindriftDrakeCard);
		DEFINE_CARD(CSpinedSliverCard);
		DEFINE_CARD(CSpiritEnKorCard);
		DEFINE_CARD(CSpittingHydraCard);
		DEFINE_CARD(CStrongholdTaskmasterCard);
		DEFINE_CARD(CSwordOfTheChosenCard);
		DEFINE_CARD(CThalakosDeceiverCard);
		DEFINE_CARD(CTidalWarriorCard);
		DEFINE_CARD(CTormentCard);
		DEFINE_CARD(CTorturedExistenceCard);
		DEFINE_CARD(CVerdantTouchCard);
		DEFINE_CARD(CVictualSliverCard);
		DEFINE_CARD(CVolrathsGardensCard);
		DEFINE_CARD(CVolrathsLaboratoryCard);
		DEFINE_CARD(CVolrathsStrongholdCard);
		//DEFINE_CARD(CWalkingDreamCard);
		DEFINE_CARD(CWallOfBlossomsCard);
		DEFINE_CARD(CWallOfRazorsCard);
		DEFINE_CARD(CWallOfSoulsCard);
		DEFINE_CARD(CWallOfTearsCard);
		DEFINE_CARD(CWarriorAngelCard);
		DEFINE_CARD(CWarriorEnKorCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CCrystallineSliverCard::CCrystallineSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crystalline Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneHellionCard::CFlowstoneHellionCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Hellion"), CardType::Creature, CREATURE_TYPE2(Hellion, Beast), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3),
		_T("0"), Power(+1), Life(-1))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CRuinationCard::CRuinationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ruination"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHornOfGreedCard::CHornOfGreedCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Horn of Greed"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter3);	// To zone's controller

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHornOfGreedCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CHornOfGreedCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (moveType == MoveType::Play);
}

//____________________________________________________________________________
//
CWallOfBlossomsCard::CWallOfBlossomsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Blossoms"), CardType::Creature, CREATURE_TYPE2(Plant, Wall), nID,
		_T("1") GREEN_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CConstantMistsCard::CConstantMistsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Constant Mists"), CardType::Instant, nID)
{
	{
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Buyback cost
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				PlayerEffectType::PreventAllCombatDamage, TRUE));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands"))); // sacrifice card Buyback cost

		cpSpell->SetAbilityText(_T("Buyback. Casts"));

		cpSpell->SetToZoneIfSuccess(ZoneId::Hand, TRUE);//Return to hand if the spell is success

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFanningTheFlamesCard::CFanningTheFlamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fanning the Flames"), CardType::Sorcery, nID)
	, m_BuybackCost(_T("3"))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this,
				AbilityType::Sorcery,
				RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(0),
				PreventableType::Preventable));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpSpell->SetExtraActionValueVector(ContextValue(-1));

		cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

void CFanningTheFlamesCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CCarnassidCard::CCarnassidCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Carnassid"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(4),
		_T("1") GREEN_MANA_TEXT)
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CDungeonShadeCard::CDungeonShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dungeon Shade"), CardType::Creature, CREATURE_TYPE2(Shade, Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CFlowstoneMaulerCard::CFlowstoneMaulerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Mauler"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(5),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CFurnaceSpiritCard::CFurnaceSpiritCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Furnace Spirit"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CHammerheadSharkCard::CHammerheadSharkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hammerhead Shark"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(3))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this, &CHammerheadSharkCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CHammerheadSharkCard::CanAttack(BOOL bIncludeTricks)
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
CLancersEnKorCard::CLancersEnKorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lancers en-Kor"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	
	{
		counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
				_T("0"),
				new AnyCreatureComparer, FALSE,
				SourceColor::Null, TRUE));

		cpAbility->SetRedirectValue(Life(1));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMorgueThrullCard::CMorgueThrullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Morgue Thrull"), CardType::Creature, CREATURE_TYPE(Thrull), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T(""), 3));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetRevealCardsToOthers(TRUE, FALSE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CNomadsEnKorCard::CNomadsEnKorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nomads en-Kor"), CardType::Creature, CREATURE_TYPE3(Kor, Nomad, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
			_T("0"),
			new AnyCreatureComparer, FALSE,
			SourceColor::Null, TRUE));

	cpAbility->SetRedirectValue(Life(1));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CRabidRatsCard::CRabidRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rabid Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new BlockingCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyshroudArcherCard::CSkyshroudArcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Archer"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSkyshroudTroopersCard::CSkyshroudTroopersCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Skyshroud Troopers"), CardType::Creature, CREATURE_TYPE3(Elf, Druid, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3),
		GREEN_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSliverQueenCard::CSliverQueenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sliver Queen"), CardType::_LegendaryCreature, CREATURE_TYPE(Sliver), nID,
		ALL_MANA_TEXT, Power(7), Life(7))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2"),
			_T("Sliver A"), 2730,
			1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpindriftDrakeCard::CSpindriftDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spindrift Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		BLUE_MANA_TEXT, Power(2), Life(1))
{
	AddUpkeepCost(BLUE_MANA_TEXT);
}

//____________________________________________________________________________
//
CSpiritEnKorCard::CSpiritEnKorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Spirit en-Kor"), CardType::Creature, CREATURE_TYPE2(Kor, Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
			_T("0"),
			new AnyCreatureComparer, FALSE,
			SourceColor::Null, TRUE));

	cpAbility->SetRedirectValue(Life(1));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CStrongholdTaskmasterCard::CStrongholdTaskmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stronghold Taskmaster"), CardType::Creature, CREATURE_TYPE2(Giant, Minion), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			Power(-1), Life(-1)));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(
		new SpecificCardComparer(this));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTidalWarriorCard::CTidalWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tidal Warrior"), CardType::Creature, CREATURE_TYPE2(Merfolk, Warrior), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false)));

	cpAbility->AddTapCost();

	cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWallOfRazorsCard::CWallOfRazorsCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Wall of Razors"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfTearsCard::CWallOfTearsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Tears"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWallOfTearsCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWallOfTearsCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfTearsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return (IsBlocking() == TRUE);
}

bool CWallOfTearsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Bounce Effect"), 61040, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CWarriorAngelCard::CWarriorAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Warrior Angel"), CardType::Creature, CREATURE_TYPE2(Angel, Warrior), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarriorAngelCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CWarriorAngelCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CWarriorEnKorCard::CWarriorEnKorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Warrior en-Kor"), CardType::Creature, CREATURE_TYPE3(Kor, Warrior, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
			_T("0"),
			new AnyCreatureComparer, FALSE,
			SourceColor::Null, TRUE));

	cpAbility->SetRedirectValue(Life(1));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CVolrathsStrongholdCard::CVolrathsStrongholdCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Volrath's Stronghold"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Library, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBullwhipCard::CBullwhipCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bullwhip"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, FALSE, 
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier();
	pModifier->GetModifier().SetToAdd(CreatureKeyword::MustAttack);
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddTapCost();
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargetModifier().CCreatureModifiers::Add(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSwordOfTheChosenCard::CSwordOfTheChosenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sword of the Chosen"), CardType::_LegendaryArtifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new CardTypeComparer(CardType::_LegendaryCreature, true)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAwakeningCard::CAwakeningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Awakening"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);//all players are affected

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Land, false));//affect only creatures and lands

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBottomlessPitCard::CBottomlessPitCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bottomless Pit"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetDiscardCount(1);
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);//FALSE = discards at random

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurgeoningCard::CBurgeoningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Burgeoning"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(
		CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBurgeoningCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

	AddAbility(cpAbility.GetPointer());
}

bool CBurgeoningCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return  (moveType == MoveType::Play);
}

//____________________________________________________________________________
//
CContemplationCard::CContemplationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Contemplation"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CConvictionCard::CConvictionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Conviction"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+3))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			WHITE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneBladeCard::CFlowstoneBladeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flowstone Blade"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this, &CFlowstoneBladeCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CFlowstoneBladeCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CPumpAbility> cpEnchantAbility(
		::CreateObject<CPumpAbility>(pEnchantCard,
			RED_MANA_TEXT,
			Power(+1), Life(-1), CreatureKeyword::Null,
			(CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeatOfBattleCard::CHeatOfBattleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Heat of Battle"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTormentCard::CTormentCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Torment"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(-3), Life(+0))
{
}

//____________________________________________________________________________
//
CTorturedExistenceCard::CTorturedExistenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tortured Existence"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVolrathsGardensCard::CVolrathsGardensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Volrath's Gardens"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T("2"),
			Life(+2), PreventableType::NotPreventable));

	cpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChangeOfHeartCard::CChangeOfHeartCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Change of Heart"), CardType::Instant, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::CantAttack, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CChangeOfHeartCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CCrossbowAmbushCard::CCrossbowAmbushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crossbow Ambush"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Reach));

			cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CLeapCard::CLeapCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Leap"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CMindGamesCard::CMindGamesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Games"), CardType::Instant, nID)

	, m_BuybackCost(_T("2") BLUE_MANA_TEXT)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			TRUE, FALSE,	// Tap, Untap
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CMindGamesCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CScapegoatCard::CScapegoatCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Scapegoat"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);

	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	m_pTargetMoveCardSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CSmiteCard::CSmiteCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Smite"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new BlockedCreatureComparer);
}

//____________________________________________________________________________
//
CBrushWithDeathCard::CBrushWithDeathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brush with Death"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			FALSE_CARD_COMPARER,
			TRUE,
			Life(-2), PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	cpSpell->SetDamageType(DamageType::NotDealingDamage);

	AddSpell(cpSpell.GetPointer());
}

void CBrushWithDeathCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CDeathStrokeCard::CDeathStrokeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Death Stroke"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new TappedComparer);
}

//____________________________________________________________________________
//
CLabRatsCard::CLabRatsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lab Rats"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("4"))
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			_T("Rat C"), 2888,
			1));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CLabRatsCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CMindPeelCard::CMindPeelCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Peel"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CMindPeelCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CMobJusticeCard::CMobJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mob Justice"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, //no comparer=no creatures can be targeted
			TRUE, //target player?
			ZoneId::Battlefield,
			TRUE, //TRUE = spells controller zone
			new CardTypeComparer(CardType::Creature, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMulchCard::CMulchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mulch"), CardType::Sorcery, nID)
{
	//Old/current: "Reveal the top four cards of your library. Put all land cards revealed this way into your hand and all other cards revealed this way into your graveyard."
	//Worldwake rules update: "Reveal the top four cards of your library. Put all land cards revealed this way into your hand and the rest into your graveyard."
	//You have to put all lands into your hand, you can't decide. But if I use "MinimumValue(4), MaximumValue(4)" and I reveal a non-land card all four cards go to the graveyard, but only the non-land card should do that.
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT,
			4));

	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);	
	cpSpell->SetSelectionOptions(MinimumValue(SpecialNumber::All), MaximumValue(SpecialNumber::Any), ZoneId::Hand, CardPlacement::NotApplicable, 
		CCardFilter::GetFilter(_T("lands")));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSeethingAngerCard::CSeethingAngerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Seething Anger"), CardType::Sorcery, nID)

	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			Power(+3), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

void CSeethingAngerCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CShamanEnKorCard::CShamanEnKorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shaman en-Kor"), CardType::Creature, CREATURE_TYPE3(Kor, Shaman, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(this,
				_T("0"),
				new AnyCreatureComparer, FALSE,
				SourceColor::Null, TRUE));

		cpAbility->SetRedirectValue(Life(1));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell3>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell3>>(this,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				SourceColor::_AllSources, TRUE));

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CMoggManiacCard::CMoggManiacCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Maniac"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMoggManiacCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CMoggManiacCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CAcidicSliverCard::CAcidicSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Acidic Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CAcidicSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CAcidicSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T("2"),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHibernationSliverCard::CHibernationSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hibernation Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHibernationSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CHibernationSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(pCard,
			_T(""),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	cpAbility->SetAbilityText(_T("Return this permanent to its owner's hand. Activates"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpinedSliverCard::CSpinedSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spined Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSpinedSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSpinedSliverCard::CreateAbility(CCard* pCard)
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
CVictualSliverCard::CVictualSliverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Victual Sliver"), CardType::Creature, CREATURE_TYPE(Sliver), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CVictualSliverCard::CreateAbility)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CVictualSliverCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(pCard,
			_T("2"),
			Life(+4), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLowlandBasiliskCard::CLowlandBasiliskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lowland Basilisk"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLowlandBasiliskCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLowlandBasiliskCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CLowlandBasiliskCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool CLowlandBasiliskCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
CWallOfSoulsCard::CWallOfSoulsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Souls"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWallOfSoulsCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfSoulsCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CHornetCannonCard::CHornetCannonCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hornet Cannon"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("3")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHornetCannonCard::BeforeResolution1));
	AddAbility(cpAbility.GetPointer());
}

bool CHornetCannonCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Hornet"), 2827, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CSamiteBlessingCard::CSamiteBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Samite Blessing"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSamiteBlessingCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSamiteBlessingCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpEnchantAbility( 
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(pEnchantedCard, 
			_T(""),
			new AnyCreatureComparer,
			FALSE,
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvenRiteCard::CElvenRiteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Elven Rite"), CardType::Sorcery, nID)
{
	{
		//One target.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());	
	}
	{
		//Two targets.
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpSpell->GetTargeting()->SetSubjectCount(2, 2);

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());	
	}
}

//____________________________________________________________________________
//
CMortuaryCard::CMortuaryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mortuary"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(TRUE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMortuaryCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

bool CMortuaryCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier.SetToPlayer(GetController()); 
	return true;
}

//___________________________________________________________________________________________
//
CSpikeBreederCard::CSpikeBreederCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Breeder"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2"),
				_T("Spike"), TOKEN_ID_BY_NAME,
				1));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeColonyCard::CSpikeColonyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Colony"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("4") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeFeederCard::CSpikeFeederCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Feeder"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+2), PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeSoldierCard::CSpikeSoldierCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Spike Soldier"), CardType::Creature, CREATURE_TYPE2(Spike, Soldier), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0),
		_T(""), Power(+2), Life(+2), CreatureKeyword::Null)
{
	m_pPumpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpikeWorkerCard::CSpikeWorkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spike Worker"), CardType::Creature, CREATURE_TYPE(Spike), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpittingHydraCard::CSpittingHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spitting Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMindwarperCard::CMindwarperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mindwarper"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T("2") BLACK_MANA_TEXT,
				1, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShiftingWallCard::CShiftingWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shifting Wall"), CardType::_ArtifactCreature, CREATURE_TYPE(Wall), nID,
		_T("0"), Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CShiftingWallCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	GetCreatureKeyword()->AddDefender(FALSE);
}

void CShiftingWallCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nColorCount = GetLastCastingExtraValue();

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount);

		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CHermitDruidCard::CHermitDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hermit Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CHermitDruidCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			GREEN_MANA_TEXT, 0));

	cpAbility->AddTapCost();

	cpAbility->SetRevealCardsToOthers(TRUE, TRUE);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CHermitDruidCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int reveal=0;
	int stop=0;
	for (int i = 0; i < pLib->GetSize(); i++)

	{
		CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
		if ((stop<1))
			++reveal;
		if ((ppCard->GetCardType() & CardType :: BasicLand).Any())
			++stop;
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("basic lands")), // what cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.SetReorderInformation(
		true, 
		ZoneId::Graveyard, 
		CZoneModifier::RoleType::PrimaryPlayer, // this player's library
		CardPlacement::Top);
	pmodifier2.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CDauthiTrapperCard::CDauthiTrapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dauthi Trapper"), CardType::Creature, CREATURE_TYPE2(Dauthi, Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Shadow, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoltariChampionCard::CSoltariChampionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Soltari Champion"), CardType::Creature, CREATURE_TYPE2(Soltari, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddShadow(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThalakosDeceiverCard::CThalakosDeceiverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thalakos Deceiver"), CardType::Creature, CREATURE_TYPE2(Thalakos, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("this card"), _T("these cards"), new SpecificCardComparer(this))
	/* , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CThalakosDeceiverCard::OnResolutionCompleted)) */
{
	GetCreatureKeyword()->AddShadow(FALSE);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(
				::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThalakosDeceiverCard::SetTriggerContext));

		cpAbility->SetSacrificeResolutionCost(1, &m_CardFilter);

		CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

		cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		//cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
	}
}

bool CThalakosDeceiverCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

/* void CThalakosDeceiverCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* getCard = pAbilityAction->GetAssociatedCard();    // getting targeted card
	CPlayer* controller = getCard->GetController();			// getting targeted card controller
	CZone* pOppInplay = controller->GetZoneById(ZoneId::Battlefield); // getting zone from which we remove targeted card
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield); // getting zone to which we add targeted card
	CGainControlModifier pModifier = CGainControlModifier(GetGame(),(CCard*)this);
		
	pModifier.ApplyTo(getCard);     // Should be moved to Activated ability
} */
/* 	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));
		
		cpAbility->AddSacrificeCost();

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CThalakosDeceiverCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CThalakosDeceiverCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return ((pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2) && (IsAttacking() == TRUE && IsBlocked() == FALSE));
} */

//____________________________________________________________________________
//
CRansackCard::CRansackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ransack"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			5));

	cpSpell->SetSelectionOptions(MaximumValue(SpecialNumber::Any), ZoneId::Library, CardPlacement::Bottom, CCardFilter::GetFilter(_T("cards")), MinimumValue(0));
	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Top);	

	cpSpell->SetRevealCardsToOthers(TRUE);	

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCrovaxTheCursedCard::CCrovaxTheCursedCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Crovax the Cursed"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0),
		BLACK_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 4, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), -1, false));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEndangeredArmodonCard::CEndangeredArmodonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Endangered Armodon"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(5))
	, m_CardFilter(new CreatureToughnessComparer<std::less_equal<int>>(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndangeredArmodonCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndangeredArmodonCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndangeredArmodonCard::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndangeredArmodonCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CEndangeredArmodonCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0;
}

bool CEndangeredArmodonCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return m_CardFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0;
}

bool CEndangeredArmodonCard::BeforeResolution(CAbilityAction* pAction) const
{
	return m_CardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
//"Walking Dream\n{3U}\nCreature - Illusion\nSTH,U\nWalking Dream is unblockable.\rWalking Dream doesn't untap during your untap step if an opponent controls two or more creatures.\n3/3"
//CWalkingDreamCard::CWalkingDreamCard(CGame* pGame, UINT nID)
//	: CUnblockableCreatureCard(pGame, _T("Walking Dream"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
//		_T("3") BLUE_MANA_TEXT, Power(3), Life(3))
//{
//	m_CardFilter.AddComparer(new AnyCreatureComparer);
//
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
//							   CWhenSelfInplay::EventCallback,
//							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
//		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkingDreamCard::SetTriggerContext1));
//		cpAbility->SetSkipStack(TRUE);
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
//							   CWhenSelfInplay::EventCallback,
//							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::NoUntapInUntapPhase);
//		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//		cpAbility->SetSkipStack(TRUE);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
//			ZoneId::_AllZones, ZoneId::Battlefield));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
//		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
//		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
//		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkingDreamCard::SetTriggerContext2));
//		cpAbility->SetSkipStack(TRUE);
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
//			ZoneId::Battlefield, ZoneId::_AllZones));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::NoUntapInUntapPhase);
//		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
//		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
//		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkingDreamCard::SetTriggerContext3));
//		cpAbility->SetSkipStack(TRUE);
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardTypeChanged > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);
//		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkingDreamCard::SetTriggerContext4));
//		cpAbility->SetSkipStack(TRUE);
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardTypeChanged > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::NoUntapInUntapPhase);
//		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkingDreamCard::SetTriggerContext5));
//		cpAbility->SetSkipStack(TRUE);
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//bool CWalkingDreamCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
//{
//	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
//	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
//	int n = 0;
//
//	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
//
//	return n > 1;
//}
//
//bool CWalkingDreamCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
//{
//	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
//	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
//	int n = 0;
//
//	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
//
//	return (n == 2 &&  m_CardFilter.IsCardIncluded(pCard));
//}
//
//bool CWalkingDreamCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
//{
//	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
//	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
//	int n = 0;
//
//	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
//
//	return (n == 1 &&  m_CardFilter.IsCardIncluded(pCard));
//}
//
//bool CWalkingDreamCard::SetTriggerContext4(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										  CCard* pCard, CardType fromCardType, CardType toCardType) const
//{
//	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
//	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
//	int n = 0;
//
//	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
//
//	return n > 1;
//}
//
//bool CWalkingDreamCard::SetTriggerContext5(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										  CCard* pCard, CardType fromCardType, CardType toCardType) const
//{
//	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
//	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
//	int n = 0;
//
//	n = m_CardFilter.CountIncluded(pInplay->GetCardContainer());
//
//	return (n == 1 &&  m_CardFilter.IsCardIncluded(pCard));
//}
//
////____________________________________________________________________________
////
CMoxDiamondCard::CMoxDiamondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mox Diamond"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
	, m_CardFilter(_T("a land card"), _T("land cards"), new CardTypeComparer(CardType::_Land, false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("doesn't matter"), &m_CardFilter);

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
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CJinxedRingCard::CJinxedRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jinxed Ring"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, TRUE));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetTargetModifier().CPlayerModifiers::Add(new CTransferControlModifier(GetGame(), this, this));

		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMoggBombersCard::CMoggBombersCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Mogg Bombers"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
        _T("3") RED_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(true);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReinsOfPowerCard::CReinsOfPowerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reins of Power"), CardType::Instant, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CReinsOfPowerCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CReinsOfPowerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer contCreatures;
	CCountedCardContainer oppCreatures;
	CPlayer* pController = GetController();
	CPlayer* pTarget = pAbilityAction->GetAssociatedPlayer();
	
	CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pController->GetZoneById(ZoneId::Battlefield), contCreatures);
	CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pTarget->GetZoneById(ZoneId::Battlefield), oppCreatures);
	
	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(false)));

	pModifier1.ApplyTo(pController);
	pModifier1.ApplyTo(pTarget);
	
	if (contCreatures.GetSize())
	for (int i = 0; i < contCreatures.GetSize(); ++i)
	{
		CTransferControlModifier* pModifier2 = new CTransferControlModifier(GetGame(), (CCard*)contCreatures.GetAt(i), (CCard*)contCreatures.GetAt(i));
		CTransferControlModifier* pModifier2_return = new CTransferControlModifier(GetGame(), (CCard*)contCreatures.GetAt(i), (CCard*)contCreatures.GetAt(i), true);
		CScheduledPlayerModifier* pModifier3 = new CScheduledPlayerModifier(
			GetGame(), pModifier2_return, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToLater);
		pModifier2->ApplyTo(pTarget);
		pModifier3->ApplyTo(pTarget);
	}
	
	if (oppCreatures.GetSize())
	for (int i = 0; i < oppCreatures.GetSize(); ++i)
	{
		CTransferControlModifier* pModifier4 = new CTransferControlModifier(GetGame(), (CCard*)oppCreatures.GetAt(i), (CCard*)oppCreatures.GetAt(i));
		CTransferControlModifier* pModifier4_return = new CTransferControlModifier(GetGame(), (CCard*)oppCreatures.GetAt(i), (CCard*)oppCreatures.GetAt(i), true);
		CScheduledPlayerModifier* pModifier5 = new CScheduledPlayerModifier(
			GetGame(), pModifier4_return, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToLater);
		pModifier4->ApplyTo(pController);
		pModifier5->ApplyTo(pController);
	}
	
	CZoneCreatureModifier pModifier6 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::Haste, true, true)));

	pModifier6.ApplyTo(pController);
	pModifier6.ApplyTo(pTarget);
}

//____________________________________________________________________________
//
CDreamHallsCard::CDreamHallsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dream Halls"), CardType::GlobalEnchantment, nID,
	_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new TrueCardComparer,	
			Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Battlefield);

	CCardFlagModifier* pModifier = new CCardFlagModifier;
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	pModifier->GetModifier().SetToAdd(CardFlag::PaymentReplacement);
	pModifier->GetModifier().SetAdditionData(3);

	cpAbility->GetOtherCardModifiers().push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMaskOfTheMimicCard::CMaskOfTheMimicCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mask of the Mimic"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMaskOfTheMimicCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMaskOfTheMimicCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	CPlayer* pController = pAction->GetController();

	CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController,
		MinimumValue(0), MaximumValue(1),
		pController, ZoneId::Library,
		&m_CardFilter,
		ZoneId::Battlefield);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CVerdantTouchCard::CVerdantTouchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Verdant Touch"), CardType::Sorcery, nID)
	, m_BuybackCost(_T("3"))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("1") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVerdantTouchCard::BeforeResolution));

	cpSpell->GetCost().AddOptionalManaCost(m_BuybackCost);

	AddSpell(cpSpell.GetPointer());
}

bool CVerdantTouchCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier = CCardIsAlsoAModifier( _T("Animated Land B"), 64008, pAction->GetController());

	pModifier.ApplyTo(pCard);

	return true;
}

void CVerdantTouchCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	if ((GetZoneId() == ZoneId::Stack) &&
		(pToZone->GetZoneId() == ZoneId::Graveyard) &&
		(moveType == MoveType::Cast) &&
		(GetLastCastingCostConfigEntry().HasOptionalManaCost(m_BuybackCost)))
	{
		cardPlacement = CardPlacement::Top;
		pToZone = GetOwner()->GetZoneById(ZoneId::Hand);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CMoggInfestationCard::CMoggInfestationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mogg Infestation"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT RED_MANA_TEXT, 
			FALSE_CARD_COMPARER, true));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoggInfestationCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CMoggInfestationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();

	int nCreatures1 = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pController)));
	pModifier1.ApplyTo(pTarget);

	int nCreatures2 = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	if (nCreatures2 > nCreatures1)
	{
		CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Goblin G"), 62018, 2*(nCreatures2 - nCreatures1));
		pModifier2.ApplyTo(pTarget);
	}
	return true;
}

//____________________________________________________________________________
//
CVolrathsLaboratoryCard::CVolrathsLaboratoryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Volrath's Laboratory"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CVolrathsLaboratoryCard::OnColorSelected))
	, m_CreatureTypeSelection(pGame,CSelectionSupport::SelectionCallback(this, &CVolrathsLaboratoryCard::OnCreatureTypeSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("5")));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVolrathsLaboratoryCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

void CVolrathsLaboratoryCard::Move(CZone* pToZone,
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

void CVolrathsLaboratoryCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

void CVolrathsLaboratoryCard::OnCreatureTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			return;
		}
}

bool CVolrathsLaboratoryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nUID = 62037;
	CString strTokenName = _T("Blank F");

	if (cWhite)
	{
		nUID = 62032;
		strTokenName = _T("Blank A");
	}
	if (cBlue)
	{
		nUID = 62033;
		strTokenName = _T("Blank B");
	}
	if (cBlack)
	{
		nUID = 62034;
		strTokenName = _T("Blank C");
	}
	if (cRed)
	{
		nUID = 62035;
		strTokenName = _T("Blank D");
	}
	if (cGreen)
	{
		nUID = 62036;
		strTokenName = _T("Blank E");
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

		cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

//____________________________________________________________________________
//
CContemptCard::CContemptCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Contempt"), CardType::EnchantCreature, nID,
		_T("1") BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	AddAbility(cpAbility.GetPointer());

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CContemptCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CContemptCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CContemptCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	if (pCreature != m_pEnchantSpell->GetEnchantedOnCard()) return false;

	triggerContext.nValue1 = (DWORD)m_pEnchantSpell->GetEnchantedOnCard();

	return true;
}

bool CContemptCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (pCard->IsInplay())
		pSubjects1.AddCard(pCard, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);
	
	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Contempt Effect"), 61105, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}


//____________________________________________________________________________
//
CHesitationCard::CHesitationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hesitation"), CardType::GlobalEnchantment, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef 
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHesitationCard::SetTriggerContext));		
		
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHesitationCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::Counterspell);

	AddAbility(cpAbility.GetPointer());
}

bool CHesitationCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	
	return true;
}

bool CHesitationCard::BeforeResolution(CAbilityAction* pAction)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
