#include "stdafx.h"
#include "CardM13.h"

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

		DEFINE_CARD(CAjanisSunstrikerCard);
		DEFINE_CARD(CAjaniCallerOfThePrideCard);
		DEFINE_CARD(CAkromasMemorialCard);
		DEFINE_CARD(CAngelicBenedictionCard);
		DEFINE_CARD(CArborElfCard);
		DEFINE_CARD(CArchaeomancerCard);
		DEFINE_CARD(CArcticAvenCard);
		DEFINE_CARD(CArmsDealerCard);
		DEFINE_CARD(CAttendedKnightCard);
		DEFINE_CARD(CAugurOfBolasCard);
		DEFINE_CARD(CAvenSquireCard);
		DEFINE_CARD(CBattleflightEagleCard);
		DEFINE_CARD(CBladetuskBoarCard);
		DEFINE_CARD(CBloodReckoningCard);
		DEFINE_CARD(CBloodhunterBatCard);
		DEFINE_CARD(CBondBeetleCard);
		DEFINE_CARD(CBoundlessRealmsCard);
		DEFINE_CARD(CCaptainsCallCard);
		DEFINE_CARD(CCathedralOfWarCard);
		DEFINE_CARD(CChandrasFuryCard);
		DEFINE_CARD(CChronomatonCard);
		DEFINE_CARD(CCleaverRiotCard);
		DEFINE_CARD(CClockOfOmensCard);
		DEFINE_CARD(CCowerInFearCard);
		DEFINE_CARD(CCraterizeCard);
		DEFINE_CARD(CCrimsonMuckwaderCard);
		DEFINE_CARD(CCripplingBlightCard);
		DEFINE_CARD(CCrusaderOfOdricCard);
		DEFINE_CARD(CDiabolicRevelationCard);
		DEFINE_CARD(CDiscipleOfBolasCard);
		DEFINE_CARD(CDoorToNothingnessCard);
		DEFINE_CARD(CDownpourCard);
		DEFINE_CARD(CDragonHatchlingCard);
		DEFINE_CARD(CDuskmantleProwlerCard);
		DEFINE_CARD(CDutyBoundDeadCard);
		DEFINE_CARD(CElderscaleWurmCard);
		DEFINE_CARD(CEncrustCard);
		DEFINE_CARD(CEraseCard);
		DEFINE_CARD(CEvolvingWildsCard);
		DEFINE_CARD(CFaerieInvadersCard);
		DEFINE_CARD(CFarseekCard);
		DEFINE_CARD(CFirewingPhoenixCard);
		DEFINE_CARD(CFlamesOfTheFirebrandCard);
		DEFINE_CARD(CFlinthoofBoarCard);
		DEFINE_CARD(CFogBankCard);
		DEFINE_CARD(CFungalSproutingCard);
		DEFINE_CARD(CGemOfBecomingCard);
		DEFINE_CARD(CGiantScorpionCard);
		DEFINE_CARD(CGildedLotusCard);
		DEFINE_CARD(CGoblinBattleJesterCard);
		DEFINE_CARD(CGriffinProtectorCard);
		DEFINE_CARD(CGroundSealCard);
		DEFINE_CARD(CGuardianLionsCard);
		DEFINE_CARD(CGuardiansOfAkrasaCard);
		DEFINE_CARD(CHamletbackGoliathCard);
		DEFINE_CARD(CHarborBanditCard);
		DEFINE_CARD(CHealerOfThePrideCard);
		DEFINE_CARD(CHellionCrucibleCard);
		DEFINE_CARD(CHydrosurgeCard);
		DEFINE_CARD(CJacesPhantasmCard);
		DEFINE_CARD(CKitesailCard);
		DEFINE_CARD(CKnightOfGloryCard);
		DEFINE_CARD(CKnightOfInfamyCard);
		DEFINE_CARD(CKrakenHatchlingCard);
		DEFINE_CARD(CKrenkosCommandCard);
		DEFINE_CARD(CKrenkoMobBossCard);
		DEFINE_CARD(CLilianaoftheDarkRealmsCard);
		DEFINE_CARD(CLilianasShadeCard);
		DEFINE_CARD(CMagmaquakeCard);
		DEFINE_CARD(CMarkOfMutinyCard);
		DEFINE_CARD(CMarkOfTheVampireCard);
		DEFINE_CARD(CMasterOfThePearlTridentCard);
		DEFINE_CARD(CMindSculptCard);
		DEFINE_CARD(CMurderCard);
		DEFINE_CARD(CMutilateCard);
		DEFINE_CARD(CMwonvuliBeastTrackerCard);
		DEFINE_CARD(CNefaroxOverlordOfGrixisCard);
		DEFINE_CARD(CNicolBolasPlaneswalkerCard);
		DEFINE_CARD(CPillarfieldOxCard);
		DEFINE_CARD(CPreyUponCard);
		DEFINE_CARD(CPrizedElephantCard);
		DEFINE_CARD(CPrimalHuntbeastCard);
		DEFINE_CARD(CPublicExecutionCard);
		DEFINE_CARD(CRancorCard);
		DEFINE_CARD(CRangersPathCard);
		DEFINE_CARD(CRecklessBruteCard);
		DEFINE_CARD(CReliquaryTowerCard);
		DEFINE_CARD(CRingOfEvosIsleCard);
		DEFINE_CARD(CRingOfKaloniaCard);
		DEFINE_CARD(CRingOfThuneCard);
		DEFINE_CARD(CRingOfValkasCard);
		DEFINE_CARD(CRingOfXathridCard);
		DEFINE_CARD(CRhoxFaithmenderCard);
		DEFINE_CARD(CRoaringPrimadoxCard);
		DEFINE_CARD(CRummagingGoblinCard);
		DEFINE_CARD(CSandsOfDeliriumCard);
		DEFINE_CARD(CSearingSpearCard);
		DEFINE_CARD(CSentinelSpiderCard);
		DEFINE_CARD(CSerpentsGiftCard);
		DEFINE_CARD(CSerraAvatarCard);
		DEFINE_CARD(CSerraAvengerCard);
		DEFINE_CARD(CServantOfNefaroxCard);
		DEFINE_CARD(CShimianSpecterCard);
		DEFINE_CARD(CShowOfValorCard);
		DEFINE_CARD(CSlumberingDragonCard);
		DEFINE_CARD(CSmeltCard);
		DEFINE_CARD(CSpikedBalothCard);
		DEFINE_CARD(CStaffOfNinCard);
		DEFINE_CARD(CStuffyDollCard);
		DEFINE_CARD(CSublimeArchangelCard);
		DEFINE_CARD(CSwitcherooCard);
		DEFINE_CARD(CTalrandsInvocationCard);
		DEFINE_CARD(CTalrandSkySummonerCard);
		DEFINE_CARD(CThragtuskCard);
		DEFINE_CARD(CThundermawHellkiteCard);
		DEFINE_CARD(CTimberpackWolfCard);
		DEFINE_CARD(CTorchFiendCard);
		DEFINE_CARD(CTormodsCryptCard);
		DEFINE_CARD(CTouchOfTheEternalCard);
		DEFINE_CARD(CTradingPostCard);
		DEFINE_CARD(CTricksOfTheTradeCard);
		DEFINE_CARD(CTurnToSlagCard);
		DEFINE_CARD(CVampireNighthawkCard);
		DEFINE_CARD(CVedalkenEntrancerCard);
		DEFINE_CARD(CVeilbornGhoulCard);
		DEFINE_CARD(CVileRebirthCard);
		DEFINE_CARD(CWalkingCorpseCard);
		DEFINE_CARD(CWarFalconCard);
		DEFINE_CARD(CWarclampMastiffCard);
		DEFINE_CARD(CWatercourserCard);
		DEFINE_CARD(CWelkinTernCard);
		DEFINE_CARD(CWildGuessCard);
		DEFINE_CARD(CWitsEndCard);
		DEFINE_CARD(CWorldfireCard);
		DEFINE_CARD(CYevasForcemageCard);
		DEFINE_CARD(CYevaNaturesHeraldCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CSearingSpearCard::CSearingSpearCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Searing Spear"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CArchaeomancerCard::CArchaeomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Archaeomancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(2))
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
CDragonHatchlingCard::CDragonHatchlingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragon Hatchling"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("1") RED_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//

CFirewingPhoenixCard::CFirewingPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Firewing Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
{
    counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->SetGraveyardOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlamesOfTheFirebrandCard::CFlamesOfTheFirebrandCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flames of the Firebrand"), CardType::Sorcery, nID, AbilityType::Sorcery,
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

CServantOfNefaroxCard::CServantOfNefaroxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Servant of Nefarox"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CServantOfNefaroxCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CServantOfNefaroxCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CAngelicBenedictionCard::CAngelicBenedictionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Benediction"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngelicBenedictionCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAngelicBenedictionCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CAttendedKnightCard::CAttendedKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Attended Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Soldier A"), 2713, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenSquireCard::CAvenSquireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Squire"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
						   CWhenAttackedBlocked::PlayerEventCallback,
						   &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAvenSquireCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CAvenSquireCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CCrusaderOfOdricCard::CCrusaderOfOdricCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crusader of Odric"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGriffinProtectorCard::CGriffinProtectorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Griffin Protector"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

    cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}


//____________________________________________________________________________
//
CGuardiansOfAkrasaCard::CGuardiansOfAkrasaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardians of Akrasa"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGuardiansOfAkrasaCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGuardiansOfAkrasaCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CKnightOfGloryCard::CKnightOfGloryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of Glory"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
    typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKnightOfGloryCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKnightOfGloryCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CSerraAvatarCard::CSerraAvatarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Serra Avatar"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSerraAvatarCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CSerraAvatarCard::BeforeResolution1));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this,
			ZoneId::Battlefield, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CSerraAvatarCard::BeforeResolution2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSerraAvatarCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	Life p = GetController()->GetLife();
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);

	return true;
}

bool CSerraAvatarCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	Life p = GetController()->GetLife();
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(GET_INTEGER(p))-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);

	return true;
}

void CSerraAvatarCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(GET_INTEGER(GetController()->GetLife())));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(GetController()->GetLife()));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);

		pLifeModifier->ApplyTo(this); pPowerModifier->ApplyTo(this);
	}
}

//____________________________________________________________________________
//

CFaerieInvadersCard::CFaerieInvadersCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Faerie Invaders"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);
}

//____________________________________________________________________________
//
CMindSculptCard::CMindSculptCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mind Sculpt"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
		::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			7));

	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTalrandsInvocationCard::CTalrandsInvocationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Talrand's Invocation"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			_T("Drake B"), 2960,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTalrandSkySummonerCard::CTalrandSkySummonerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Talrand, Sky Summoner"), CardType::_LegendaryCreature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
	
	cpAbility->SetCreateTokenOption(TRUE, _T("Drake B"), 2960, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWelkinTernCard::CWelkinTernCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Welkin Tern"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CBloodhunterBatCard::CBloodhunterBatCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bloodhunter Bat"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
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

//____________________________________________________________________________
//
CDuskmantleProwlerCard::CDuskmantleProwlerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Duskmantle Prowler"), CardType::Creature, CREATURE_TYPE2(Vampire, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuskmantleProwlerCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDuskmantleProwlerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CDutyBoundDeadCard::CDutyBoundDeadCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Duty-Bound Dead"), CardType::Creature, CREATURE_TYPE(Skeleton), nID,
		BLACK_MANA_TEXT, Power(0), Life(2),
		_T("3") BLACK_MANA_TEXT)

{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDutyBoundDeadCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDutyBoundDeadCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CHarborBanditCard::CHarborBanditCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Harbor Bandit"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2),
		_T("1") BLUE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Unblockable)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Island, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKnightOfInfamyCard::CKnightOfInfamyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Knight of Infamy"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
    typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKnightOfInfamyCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CKnightOfInfamyCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CLilianasShadeCard::CLilianasShadeCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Liliana's Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT, Power(+1), Life(+1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Swamps")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMarkOfTheVampireCard::CMarkOfTheVampireCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Mark of the Vampire"), nID,
		_T("3") BLACK_MANA_TEXT,
		Power(+2), Life(+2))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
}

//____________________________________________________________________________
//
CMurderCard::CMurderCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Murder"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Creature, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
//____________________________________________________________________________
//
}
CNefaroxOverlordOfGrixisCard::CNefaroxOverlordOfGrixisCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nefarox, Overlord of Grixis"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
    {
        typedef
		    TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
		    					CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	    counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	    cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	    cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	    cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	    cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	    cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	    cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNefaroxOverlordOfGrixisCard::SetTriggerContext));

	    cpAbility->SetAbilityName(_T("Exalted ability"));

	    cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	    AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().SetSubjectCount(1, 1, true);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}

}
bool CNefaroxOverlordOfGrixisCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}
//____________________________________________________________________________
//
CVampireNighthawkCard::CVampireNighthawkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vampire Nighthawk"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CBladetuskBoarCard::CBladetuskBoarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bladetusk Boar"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
}
//____________________________________________________________________________________
//
CKrenkosCommandCard::CKrenkosCommandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Krenko's Command"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			_T("Goblin C"), 2702,
			2));

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________________
//
CRummagingGoblinCard::CRummagingGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rummaging Goblin"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->AddTapCost();
	
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSmeltCard::CSmeltCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Smelt"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CArborElfCard::CArborElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arbor Elf"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::Forest, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CBondBeetleCard::CBondBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bond Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		GREEN_MANA_TEXT, Power(0), Life(1))
{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFarseekCard::CFarseekCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Farseek"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter, 
		ZoneId::Battlefield, FALSE, TRUE, TRUE)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains | CardType::Island | CardType::Swamp | CardType::Mountain, false));

	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CPreyUponCard::CPreyUponCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Prey Upon"), CardType::Sorcery, nID)
{
	{
	counted_ptr<CPreyUponSpell> cpSpell(
		::CreateObject <CPreyUponSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
	}
}

CPreyUponCard::CPreyUponSpell::CPreyUponSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
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

void CPreyUponCard::CPreyUponSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
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
CRangersPathCard::CRangersPathCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Ranger's Path"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("Forests")), 
		ZoneId::Battlefield, FALSE, TRUE, TRUE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
}

//____________________________________________________________________________
//
CRoaringPrimadoxCard::CRoaringPrimadoxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Roaring Primadox"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, true));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYevasForcemageCard::CYevasForcemageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yeva's Forcemage"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEvolvingWildsCard::CEvolvingWildsCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Evolving Wilds"), nID)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNicolBolasPlaneswalkerCard::CNicolBolasPlaneswalkerCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Nicol Bolas, Planeswalker"), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
		PlaneswalkerType::Bolas, 5)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CNicolBolasPlaneswalkerCard::OnResolutionCompleted))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
				_T(""),
				7, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -9);

		AddAbility(cpAbility.GetPointer());
	}
}

void CNicolBolasPlaneswalkerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* target =  pAbilityAction->GetAssociatedPlayer();
		CZone* Battle = pAbilityAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);
		CLifeModifier pModifier1 = CLifeModifier(Life(-7), this, PreventableType::Preventable, DamageType::NonCombatDamage);
		CZoneModifier pModifier2 = CZoneModifier(GetGame(),
			ZoneId::Battlefield, SpecialNumber::All,
			CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier2.AddSelection(MinimumValue(7), MaximumValue(7), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			CCardFilter::GetFilter(_T("permanents")), // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Sacrifice, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("permanents")),
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice)));
		
		pModifier1.ApplyTo(target);
		if (Battle->GetSize() > 7)  pModifier2.ApplyTo(target);
		else pModifier3.ApplyTo(target);
	}
}

//____________________________________________________________________________
//
CAjanisSunstrikerCard::CAjanisSunstrikerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ajani's Sunstriker"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CRhoxFaithmenderCard::CRhoxFaithmenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhox Faithmender"), CardType::Creature, CREATURE_TYPE2(Rhino, Monk), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(5))
{
	GetCardKeyword()->AddLifelink(FALSE);
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::MultiplyLifeGain, 1));

		cpEnchantment->SetMultipleEffectType(TRUE);
		cpEnchantment->SetAffectControllerOnly();

		AddSpell(cpEnchantment.GetPointer());
	}
}

//____________________________________________________________________________
//
CPrimalHuntbeastCard::CPrimalHuntbeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primal Huntbeast"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CSentinelSpiderCard::CSentinelSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sentinel Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CHydrosurgeCard::CHydrosurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hydrosurge"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(-5), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTricksOfTheTradeCard::CTricksOfTheTradeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Tricks of the Trade"), nID,
		_T("3") BLUE_MANA_TEXT,
		Power(+2), Life(+0), CreatureKeyword::Unblockable)
{
}

//____________________________________________________________________________
//
CCowerInFearCard::CCowerInFearCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cower in Fear"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-1), Life(-1)));
	ATLASSERT(cpSpell);

	cpSpell->SetAffectOpponentCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCripplingBlightCard::CCripplingBlightCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Crippling Blight"), nID,
		BLACK_MANA_TEXT,
		Power(-1), Life(-1),
		CreatureKeyword::CantBlock)
{
}

//____________________________________________________________________________
//
CSpikedBalothCard::CSpikedBalothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spiked Baloth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
	_T("3") GREEN_MANA_TEXT, Power(4), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CYevaNaturesHeraldCard::CYevaNaturesHeraldCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yeva, Nature's Herald"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTormodsCryptCard::CTormodsCryptCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tormod's Crypt"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
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

//____________________________________________________________________________
//
CGuardianLionsCard::CGuardianLionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian Lions"), CardType::Creature, CREATURE_TYPE(Cat), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CPillarfieldOxCard::CPillarfieldOxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pillarfield Ox"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CKrenkoMobBossCard::CKrenkoMobBossCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krenko, Mob Boss"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Goblin C"), 2702,
			0));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKrenkoMobBossCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKrenkoMobBossCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

	int nCount = m_CardFilter_temp.CountIncluded(pBattle->GetCardContainer());

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CEncrustCard::CEncrustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Encrust"), CardType::EnchantPermanent, nID)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	counted_ptr<CCardKeywordEnchant> cpSpell(
		::CreateObject<CCardKeywordEnchant>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::Creature, false),
			CardKeyword::NoUntapInUntapPhase));

	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	cpSpell->GetCardKeywordMod().LinkCardModifier(pModifier);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CChandrasFuryCard::CChandrasFuryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Chandra's Fury"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		   &CChandrasFuryCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CChandrasFuryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
				std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)));

		pModifier.ApplyTo(pAbilityAction->GetAssociatedPlayer());
	}
}

//____________________________________________________________________________
//
CHealerOfThePrideCard::CHealerOfThePrideCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Healer of the Pride"), CardType::Creature, CREATURE_TYPE2(Cat, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarclampMastiffCard::CWarclampMastiffCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Warclamp Mastiff"), CardType::Creature, CREATURE_TYPE(Hound), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CKrakenHatchlingCard::CKrakenHatchlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kraken Hatchling"), CardType::Creature, CREATURE_TYPE(Kraken), nID,
	 BLUE_MANA_TEXT, Power(0), Life(4))
{
}

//____________________________________________________________________________
//
CVedalkenEntrancerCard::CVedalkenEntrancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vedalken Entrancer"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			BLUE_MANA_TEXT, 2));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->SetRevealCardsToOthers(TRUE);
	//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CWatercourserCard::CWatercourserCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Watercourser"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(3),
		BLUE_MANA_TEXT, Power(+1), Life(-1))
{
}

//____________________________________________________________________________
//
CGiantScorpionCard::CGiantScorpionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Scorpion"), CardType::Creature, CREATURE_TYPE(Scorpion), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CWalkingCorpseCard::CWalkingCorpseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Walking Corpse"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CCleaverRiotCard::CCleaverRiotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cleaver Riot"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("4") RED_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGoblinBattleJesterCard::CGoblinBattleJesterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Battle Jester"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("red cards")));
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWildGuessCard::CWildGuessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wild Guess"), CardType::Sorcery, nID)
	, m_CardFilter(new NegateCardComparer(new SpecificCardComparer(this)))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			RED_MANA_TEXT RED_MANA_TEXT, 2));

	cpSpell->GetCost().AddDiscardCardCost(1, &m_CardFilter);
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRancorCard::CRancorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Rancor"), nID,
		GREEN_MANA_TEXT,
		Power(+2), Life(+0), CreatureKeyword::Trample)
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
CCathedralOfWarCard::CCathedralOfWarCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cathedral of War"), nID)
{
	SetIntoPlayTapped();

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							   CWhenAttackedBlocked::PlayerEventCallback,
							   &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCathedralOfWarCard::SetTriggerContext));

		cpAbility->SetAbilityName(_T("Exalted ability"));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

bool CCathedralOfWarCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CThragtuskCard::CThragtuskCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thragtusk"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(5), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, 	&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Beast L"), 2897, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKitesailCard::CKitesailCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kitesail"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("2")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Flying);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCaptainsCallCard::CCaptainsCallCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Captain's Call"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			_T("Soldier A"), 2713,
			3));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBoundlessRealmsCard::CBoundlessRealmsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Boundless Realms"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("6") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("basic lands")),
			ZoneId::Battlefield,
			true, false, true));

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(0));
	cpSpell->SetRevealCards(true);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBoundlessRealmsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBoundlessRealmsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = pAction->GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer());

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = 0;
	Context.nValue2 = nCount;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CSandsOfDeliriumCard::CSandsOfDeliriumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sands of Delirium"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T(""), 0));
	ATLASSERT(cpAbility);
	
	cpAbility->GetCost().SetExtraManaCost();
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSandsOfDeliriumCard::BeforeResolution));
		
	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

bool CSandsOfDeliriumCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nExtraCount = pAction->GetCostConfigEntry().GetExtraValue();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	
	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nExtraCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstPlayerSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CSwitcherooCard::CSwitcherooCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Switcheroo"), CardType::Sorcery, nID)
{
	counted_ptr<CSwitcherooSpell> cpSpell(
		::CreateObject <CSwitcherooSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CSwitcherooCard::CSwitcherooSpell::CSwitcherooSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""), TRUE)
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Neutral);
	
}

void CSwitcherooCard::CSwitcherooSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
										const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) return;

	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		if (pCreature2)
		{
			CPlayer* player1 = pCreature1->GetController();
			CPlayer* player2 = pCreature2->GetController();
			CTransferControlModifier pModifier1 = CTransferControlModifier(GetGame(), (CCard*)pCreature1, (CCard*)pCreature1);
			CTransferControlModifier pModifier2 = CTransferControlModifier(GetGame(), (CCard*)pCreature2, (CCard*)pCreature2);
			pModifier1.ApplyTo(player2);
			pModifier2.ApplyTo(player1);
		}
	}
}

//____________________________________________________________________________
//
CAjaniCallerOfThePrideCard::CAjaniCallerOfThePrideCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Ajani, Caller of the Pride"), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Ajani, 4)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargeting()->SetSubjectCount(0, 1);
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);		

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(0), Life(0),
				CreatureKeyword::Flying | CreatureKeyword::DoubleStrike, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Cat D"), 2825,
				0)); 

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAjaniCallerOfThePrideCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAjaniCallerOfThePrideCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nLifeTotal = GET_INTEGER(GetController()->GetLife());

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nLifeTotal;
	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CAugurOfBolasCard::CAugurOfBolasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Augur of Bolas"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAugurOfBolasCard::BeforeResolution1));		

	AddAbility(cpAbility.GetPointer());
}

bool CAugurOfBolasCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction)
{

	CCardFilter m_CardFilter_temp;
		
	m_CardFilter_temp.AddComparer(new CardTypeComparer(CardType::Sorcery | CardType::Instant, false));

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, 3, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter_temp, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pmodifier2.SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);

		pmodifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CGemOfBecomingCard::CGemOfBecomingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gem of Becoming"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"), CCardFilter::GetFilter(_T("Mountains")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	cpAbility->SetAbilityText(_T("Search your library for an Island card, a Swamp card, and a Mountain card. Activates"));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGemOfBecomingCard::BeforeResolution));
	cpAbility->SetRevealCards(TRUE);
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	AddAbility(cpAbility.GetPointer());
}
bool CGemOfBecomingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Islands")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Swamps")),
		ZoneId::Hand, TRUE, CardPlacement::Top, TRUE, FALSE);

	pModifier1.ApplyTo(GetController());
	pModifier2.ApplyTo(GetController());
	
	return true;
}

//____________________________________________________________________________
//

CWitsEndCard::CWitsEndCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wit's End"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			SpecialNumber::Any, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards")))); //SpecialNumber::All would show "... discard 2147483646 cards" :D

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRecklessBruteCard::CRecklessBruteCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Reckless Brute"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CDownpourCard::CDownpourCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Downpour"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, 3);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVeilbornGhoulCard::CVeilbornGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Veilborn Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Swamp, false));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVeilbornGhoulCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVeilbornGhoulCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CSerraAvengerCard::CSerraAvengerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serra Avenger"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CSerraAvengerCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
}

BOOL CSerraAvengerCard::CanPlay(BOOL bIncludeTricks)
{
	if ((m_pGame->GetActivePlayer() == GetController()) && (GetController()->GetPlayerTurnNumber() < 4))
	return false;
	else return true;
}

//____________________________________________________________________________
//
CStaffOfNinCard::CStaffOfNinCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Staff of Nin"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE, 
				Life(-1),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CDoorToNothingnessCard::CDoorToNothingnessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Door to Nothingness"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				ALL_MANA_TEXT ALL_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE));

		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(new CPlayerLostModifier);

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMasterOfThePearlTridentCard::CMasterOfThePearlTridentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master of the Pearl Trident"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(+1), CreatureKeyword::Islandwalk));

	cpAbility->GetEnchantmentCardFilter().
	AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}



//____________________________________________________________________________
//
CAkromasMemorialCard::CAkromasMemorialCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Akroma's Memorial"), CardType::_LegendaryArtifact, nID,
		_T("7"), AbilityType::Artifact)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer, 
			Power(+0), Life(+0),
			CreatureKeyword::Flying | CreatureKeyword::FirstStrike | CreatureKeyword::Vigilance | CreatureKeyword::Trample | CreatureKeyword::Haste));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::ProtectionFromRed | CardKeyword::ProtectionFromBlack);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWarFalconCard::CWarFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("War Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		WHITE_MANA_TEXT, Power(2), Life(1))
	, m_CardFilter(_T("a Knight or a Soldier"), _T("Knights and Soldiers"), new CreatureTypeComparer(CREATURE_TYPE(Knight) | CREATURE_TYPE(Soldier), false))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CWarFalconCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CWarFalconCard::CanAttack(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0;
}

//____________________________________________________________________________
//
CFlinthoofBoarCard::CFlinthoofBoarCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flinthoof Boar"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Haste)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Mountain, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcticAvenCard::CArcticAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Arctic Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Plains, false)));

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrimsonMuckwaderCard::CCrimsonMuckwaderCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Crimson Muckwader"), CardType::Creature, CREATURE_TYPE(Lizard), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1),
		_T("2") BLACK_MANA_TEXT)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Swamp, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrizedElephantCard::CPrizedElephantCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Prized Elephant"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(3),
		GREEN_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Trample)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(1));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//

CFungalSproutingCard::CFungalSproutingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Fungal Sprouting"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			_T("Saproling B"), 2712,
			0));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFungalSproutingCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFungalSproutingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int p = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pContCard2 = pInplay->GetAt(i);
		if (pContCard2->GetCardType().IsCreature())
		{
			CCreatureCard* pContCreature2 = (CCreatureCard*)pContCard2;
			if (GET_INTEGER(pContCreature2->GetLastKnownPower()) > p)
			p = GET_INTEGER(pContCreature2->GetLastKnownPower());
		}
	}

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = p;

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CLilianaoftheDarkRealmsCard::CLilianaoftheDarkRealmsCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Liliana of the Dark Realms"), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Liliana, 3)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLilianaoftheDarkRealmsCard::OnResolutionCompleted))
, m_PlusMinusSelection(pGame,CSelectionSupport::SelectionCallback(this, &CLilianaoftheDarkRealmsCard::OnPlusMinusSelected))
{
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			CCardFilter::GetFilter(_T("Swamps")), 
			ZoneId::Hand, FALSE, TRUE, FALSE));
	
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);		

		AddAbility(cpAbility.GetPointer());
	}
	{
			counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Swamp Four Mana Emblem"), 2962, 1, FALSE, ZoneId::_Effects));

		cpAbility->SetAbilityName(_T("You get an emblem with - Swamps you control have 'T: Add BBBB to your mana pools."));
		cpAbility->SetAbilityText(_T("You get an emblem with - Swamps you control have 'T: Add BBBB to your mana pools."));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);

		AddAbility(cpAbility.GetPointer());			
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		AddAbility(cpAbility.GetPointer());
	}
		
}
void CLilianaoftheDarkRealmsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int i = CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("+X/+X"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("-X/-X"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (bResult) m_PlusMinusSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController(),(DWORD)pAbilityAction->GetAssociatedCard(), i);
}
void CLilianaoftheDarkRealmsCard::OnPlusMinusSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCreature = (CCreatureCard*)(CCard*)dwContext1;
			if ((int)it->dwContext == 1)
			{
				CPowerModifier pModifier1 = CPowerModifier(Power(dwContext2));
				CLifeModifier pModifier2 = CLifeModifier(Life(dwContext2));
				
				pModifier1.ApplyTo(pCreature);
				pModifier2.ApplyTo(pCreature);
				return;
			}
			
			if ((int)it->dwContext == 2)
			{

				CPowerModifier pModifier1 = CPowerModifier(-Power(GET_INTEGER((int)dwContext2)));
				CLifeModifier pModifier2 = CLifeModifier(-Life(GET_INTEGER((int)dwContext2)), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				
				pModifier1.ApplyTo(pCreature);
				pModifier2.ApplyTo(pCreature);

				return;
			}
		}
}

//____________________________________________________________________________
//
CTouchOfTheEternalCard::CTouchOfTheEternalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Touch of the Eternal"), CardType::GlobalEnchantment, nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetLifeModifier().SetReplacement(true);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTouchOfTheEternalCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTouchOfTheEternalCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	int nPermanentCount = pInplay->GetSize();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(Life(nPermanentCount));
	pAction->SetTriggerContext(triggerContext);

	return true;
}
//____________________________________________________________________________
//
CTradingPostCard::CTradingPostCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Trading Post"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T("1"),
				Life(+4), PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Goat B"), 2812,
				1));

		cpAbility->AddTapCost();
		cpAbility->AddPayLifeDeltaCost(Life(-1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("1"), 1));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
		cpAbility->AddTapCost();
		
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CMutilateCard::CMutilateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mutilate"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMutilateCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CMutilateCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nSwampCount = CCardFilter::GetFilter(_T("Swamps"))->CountIncluded(pInplay->GetCardContainer());

	if (nSwampCount > 0)
		{				
			CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);
			CZone* opponent = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

			CPowerModifier pModifier1 = CPowerModifier(Power(-nSwampCount), TRUE);
			CLifeModifier pModifier2 = CLifeModifier(Life(-nSwampCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

			for (int i = 0; i < controller->GetSize(); ++i)
				if (controller->GetAt(i)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)controller->GetAt(i));
					pModifier2.ApplyTo((CCreatureCard*)controller->GetAt(i));
					}

			for (int j = 0; j < opponent->GetSize(); ++j)
				if (opponent->GetAt(j)->GetCardType().IsCreature())
					{
					pModifier1.ApplyTo((CCreatureCard*)opponent->GetAt(j));
					pModifier2.ApplyTo((CCreatureCard*)opponent->GetAt(j));
					}

			return true;
		}

	return true;
}

//____________________________________________________________________________
//
CHellionCrucibleCard::CHellionCrucibleCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Hellion Crucible"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(PRESSURE_COUNTER, +1));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1") RED_MANA_TEXT,
			_T("Hellion A"), 2963, 1));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(PRESSURE_COUNTER), -2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGildedLotusCard::CGildedLotusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gilded Lotus"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFogBankCard::CFogBankCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fog Bank"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddDealNoCombatDamage(FALSE);
	GetCreatureKeyword()->AddPreventAllCombatDamage(FALSE);
}

//____________________________________________________________________________
//
CBattleflightEagleCard::CBattleflightEagleCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Battleflight Eagle"), CardType::Creature, CREATURE_TYPE(Bird	), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEraseCard::CEraseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Erase"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

//____________________________________________________________________________
//
CShowOfValorCard::CShowOfValorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Show of Valor"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") WHITE_MANA_TEXT,
		Power(+2), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CVileRebirthCard::CVileRebirthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vile Rebirth"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Zombie"), 2724, 1));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CArmsDealerCard::CArmsDealerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arms Dealer"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(-4), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCraterizeCard::CCraterizeCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Craterize"), CardType::Sorcery, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CMarkOfMutinyCard::CMarkOfMutinyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mark of Mutiny"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTorchFiendCard::CTorchFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Torch Fiend"), CardType::Creature, CREATURE_TYPE(Devil), nID,
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
CTurnToSlagCard::CTurnToSlagCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Turn to Slag"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		false,
		Life(-5),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTurnToSlagCard::BeforeResolution));
}

bool CTurnToSlagCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardFilter cfilter(new EquippedOnComparer(pCard));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CSerpentsGiftCard::CSerpentsGiftCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Serpent's Gift"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CChronomatonCard::CChronomatonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chronomaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("1"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1")));

	cpAbility->AddTapCost();

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CClockOfOmensCard::CClockOfOmensCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Clock of Omens"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->GetCost().AddTapCardCost(2, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReliquaryTowerCard::CReliquaryTowerCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Reliquary Tower"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,
				_T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTimberpackWolfCard::CTimberpackWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Timberpack Wolf"), CardType::Creature, CREATURE_TYPE(Wolf), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new NegateCardComparer(new SpecificCardComparer(this))));

		cpAbility->GetSurveyCardFilter().AddComparer(new CardNameComparer(_T("Timberpack Wolf")));
		cpAbility->GetSurveyCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSublimeArchangelCard::CSublimeArchangelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sublime Archangel"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(3))
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
		&CSublimeArchangelCard::CreateAbility), CCardAbilityModifier::PostAdditionCallback(this, &CSublimeArchangelCard::ForceStart));

	

	cpAbility->GetOtherCardModifiers().push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSublimeArchangelCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
	}
}
void CSublimeArchangelCard::ForceStart(CAbility* pAbility) const
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	
	((TriggeredAbility*)pAbility)->GetTrigger().ForceStart();
}

counted_ptr<CAbility> CSublimeArchangelCard::CreateAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSublimeArchangelCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
bool CSublimeArchangelCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}
//____________________________________________________________________________
//
CRingOfKaloniaCard::CRingOfKaloniaCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Kalonia"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Green, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CRingOfThuneCard::CRingOfThuneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Thune"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Vigilance);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::White, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CRingOfValkasCard::CRingOfValkasCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Valkas"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Red, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CRingOfXathridCard::CRingOfXathridCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Xathrid"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRingOfXathridCard::BeforeResolution));
		cpAbility->SetAbilityText(_T("Regenerate equipped creature. Activates"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Black, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRingOfXathridCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pFromZone;

	CCardFilter cfilter(new EquippedByComparer(this));
	
	CCreatureCard* pCreature;
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		if (cfilter.GetIncluded(*pFromZone, cards));
			for (int i = 0; i < cards.GetSize(); ++i)
			{
				pCreature = dynamic_cast<CCreatureCard*>(cards.GetAt(i));
				if (!pCreature) continue;
				pCreature->AddRegenerationShield();
			}
	}

	return true;
}
//____________________________________________________________________________
//
CDiabolicRevelationCard::CDiabolicRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Diabolic Revelation"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Hand,
			true, true, false));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(0));
	cpSpell->SetRevealCards(false);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiabolicRevelationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDiabolicRevelationCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = GetLastCastingExtraValue();

	ContextValue Context(pAction->GetValue());

	Context.nValue2 = n;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CDiscipleOfBolasCard::CDiscipleOfBolasCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Disciple of Bolas"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDiscipleOfBolasCard::BeforeResolveSelection));

	AddAbility(cpAbility.GetPointer());
}

bool CDiscipleOfBolasCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	const CCard* Sacrificed = ((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetFirstCardSubject();
	int n;

	if (Sacrificed->GetCardType().IsCreature()) 
	{CCreatureCard* pCreature = (CCreatureCard*)Sacrificed;
	  n=pCreature->GetLastKnownPower();
	}
	CLifeModifier pmodifier1 = CLifeModifier(Life(+n),this,PreventableType::NotPreventable, DamageType::NotDealingDamage);
	CDrawCardModifier pmodifier2 = CDrawCardModifier(GetGame(), MinimumValue(n), MaximumValue(n));
	
	pmodifier1.ApplyTo(GetController());
	pmodifier2.ApplyTo(GetController());
	
	return true;
}
//____________________________________________________________________________
//
CHamletbackGoliathCard::CHamletbackGoliathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hamletback Goliath"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("6") RED_MANA_TEXT, Power(6), Life(6))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHamletbackGoliathCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHamletbackGoliathCard::BeforeResolution));
        
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CHamletbackGoliathCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CHamletbackGoliathCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
    
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nValue = GET_INTEGER(pCreature->GetLastKnownPower());

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nValue, false);
	pModifier.ApplyTo((CCard*)this);
	return false;
}

//____________________________________________________________________________
//
CJacesPhantasmCard::CJacesPhantasmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Jace's Phantasm"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+4), Life(+4)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionCheckPlayer(CEnchantment::ConditionCheckPlayerType::CheckOpponentsOnly);
	cpAbility->SetConditionValue(10);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElderscaleWurmCard::CElderscaleWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elderscale Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::Worship, 7, TRUE));

		cpEnchantment->SetAffectControllerOnly();

		cpEnchantment->SetConditionWork();
		cpEnchantment->SetConditionCheckLife();
		cpEnchantment->SetConditionValue(7);

		cpEnchantment->SetMainSpell(FALSE);
		AddSpell(cpEnchantment.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CElderscaleWurmCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CElderscaleWurmCard::BeforeResolution));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(7));
		cpAbility->GetLifeModifier().SetReplacement(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CElderscaleWurmCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	CPlayer* pController = GetController();
	return (pController->GetLife() < 7);
}

bool CElderscaleWurmCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = GetController();
	return (pController->GetLife() < 7);
}
//____________________________________________________________________________
//
CThundermawHellkiteCard::CThundermawHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thundermaw Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CThundermawHellkiteCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CThundermawHellkiteCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("flying creatures")),
			std::auto_ptr<CCreatureModifier>(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) != pAction->GetController())
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}

	return true;
}
//____________________________________________________________________________
//
CWorldfireCard::CWorldfireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Worldfire"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CWorldfireCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("6") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT,
			new TrueCardComparer,
			ZoneId::Exile, TRUE, MoveType::Others));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CWorldfireCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
	}
	
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
	}

	CLifeModifier pModifier3 = CLifeModifier(Life(1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier3.SetReplacement(TRUE);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier3.ApplyTo(GetGame()->GetPlayer(ip));
	}
}
//____________________________________________________________________________
//
CGroundSealCard::CGroundSealCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ground Seal"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::GraveShroud));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMwonvuliBeastTrackerCard::CMwonvuliBeastTrackerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mwonvuli Beast Tracker"), CardType::Creature, CREATURE_TYPE2(Human, Scout), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	m_pCardFilter = new CCardFilter(new AnyCreatureComparer);
	m_pCardFilter->AddComparer(new CreatureKeywordComparer(CreatureKeyword::Reach | CreatureKeyword::Trample, false));
	
	typedef
	TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardKeywordComparer(CardKeyword::Deathtouch | CardKeyword::Hexproof, false));

	cpAbility->GetCardFilterHelper().GetCustomFilter().AddChildFilter(m_pCardFilter);
	cpAbility->SetToZone(ZoneId::Library);

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CRingOfEvosIsleCard::CRingOfEvosIsleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Evos Isle"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("1")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				_T("2"),
				new EquippedByComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetToActivatedAbility();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, TRUE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetModifyCardOption(TriggeredAbility::ModifyCardOption::ModifyAllPlayersCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::Blue, true));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CBloodReckoningCard::CBloodReckoningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blood Reckoning"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodReckoningCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBloodReckoningCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CBloodReckoningCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.nValue1 = (int)pCreature;
	return true;
}

bool CBloodReckoningCard::BeforeResolution(CBloodReckoningCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCard* pCard = (CCard*)triggerContext.nValue1;

	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(pCard->GetController());

	return true;
}

//____________________________________________________________________________
//
CSlumberingDragonCard::CSlumberingDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Slumbering Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		RED_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
			Power(+0), Life(+0)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::less_equal<int>>(_T("+1/+1"), 4));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantAttack | CreatureKeyword::CantBlock);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSlumberingDragonCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CSlumberingDragonCard::BeforeResolution(CSlumberingDragonCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), 1);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CStuffyDollCard::CStuffyDollCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stuffy Doll"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("5"), Power(0), Life(1))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CStuffyDollCard::OnSelectionDone))
{
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStuffyDollCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStuffyDollCard::BeforeResolution1));

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Stuffy Doll deals 1 damage to itself. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStuffyDollCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

void CStuffyDollCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedPlayer = NULL;

		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			SelectionEntry entry;
			entry.dwContext = ip;
			entry.strText.Format(_T("choose %s"), GetGame()->GetPlayer(ip)->GetPlayerName());
			entries.push_back(entry);
		}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CStuffyDollCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SelectedPlayer = GetGame()->GetPlayer(it->dwContext);
			return;
		}
}

bool CStuffyDollCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}


bool CStuffyDollCard::BeforeResolution1(CStuffyDollCard::TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CLifeModifier pModifier = triggerContext.m_LifeModifier;

	if (SelectedPlayer) pModifier.ApplyTo(SelectedPlayer);

	return false;
}

bool CStuffyDollCard::BeforeResolution2(CAbilityAction* pAction)
{
	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CShimianSpecterCard::CShimianSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shimian Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CShimianSpecterCard::OnCardSelected))
	, m_CardSelection2(pGame, CSelectionSupport::SelectionCallback(this, &CShimianSpecterCard::OnCardSelected2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShimianSpecterCard::BeforeResolveSelection));

	AddAbility(cpAbility.GetPointer());
}

bool CShimianSpecterCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);

	if (pHand->GetSize() > 0)
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.ApplyTo(pPlayer);

		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			CCard* pCard = pHand->GetAt(i);
			if (!pCard->GetCardType().IsLand())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Select %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pPlayer);
	}
	else
	{
		for (int i = 0; i < pPlayer->GetZoneById(ZoneId::Library)->GetSize(); ++i)
		{
			CCard* pCard = pPlayer->GetZoneById(ZoneId::Library)->GetAt(i);
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (pPlayer != pController)
					strMessage.Format(_T("%s reveals %s to %s"), pPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pController->GetPlayerName());
				else
					strMessage.Format(_T("%s notices %s in his library"), pPlayer->GetPlayerName(), pCard->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				pController->MemorizeCard(pCard);
			}
		}
	}	
	return true;
}

void CShimianSpecterCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			CPlayer* pPlayer = (CPlayer*)dwContext1;
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
			
			for (int i = 0; i < pPlayer->GetZoneById(ZoneId::Library)->GetSize(); ++i)
			{
				CCard* pCard = pPlayer->GetZoneById(ZoneId::Library)->GetAt(i);
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (pPlayer != pSelectionPlayer)
						strMessage.Format(_T("%s reveals %s to %s"), pPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pSelectionPlayer->GetPlayerName());
					else
						strMessage.Format(_T("%s notices %s in his library"), pPlayer->GetPlayerName(), pCard->GetCardName(TRUE));

					m_pGame->Message(
						strMessage,
						pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

					pSelectionPlayer->MemorizeCard(pCard);
				}
			}	

			SelectedCards.RemoveAll();
			HandLibrarySearch(pSelectionPlayer, pPlayer, pCard);

			return;
		}
}

void CShimianSpecterCard::HandLibrarySearch(CPlayer* pController, CPlayer* pPlayer, CCard* pSelectedCard)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry entry;

		entry.dwContext = 0;
									
		entry.strText.Format(_T("Stop selecting cards from hand/library"));

		entries.push_back(entry);
	}
	for (int i = 0; i < pPlayer->GetZoneById(ZoneId::Hand)->GetSize(); ++i)
	{
		CCard* pCard = pPlayer->GetZoneById(ZoneId::Hand)->GetAt(i);
		if (pCard->GetPrintedCardName() == pSelectedCard->GetPrintedCardName()  && !SelectedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Select %s from %s's hand"),
				pCard->GetCardName(TRUE), pPlayer->GetPlayerName());

			entries.push_back(entry);
		}
	}
	for (int i = 0; i < pPlayer->GetZoneById(ZoneId::Library)->GetSize(); ++i)
	{
		CCard* pCard = pPlayer->GetZoneById(ZoneId::Library)->GetAt(i);
		if (pCard->GetPrintedCardName() == pSelectedCard->GetPrintedCardName()  && !SelectedCards.HasCard(pCard))
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Select %s from %s's library"),
				pCard->GetCardName(TRUE), pPlayer->GetPlayerName());

			entries.push_back(entry);
		}
	}
	m_CardSelection2.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pPlayer, (DWORD)pSelectedCard);
}

void CShimianSpecterCard::OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CCard* pSelectedCard = (CCard*)dwContext2;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s stops selecting cards"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardFilter m_CardFilter1;
				m_CardFilter1.SetComparer(new CardNameComparer(pSelectedCard->GetPrintedCardName()));
				CCardFilter m_CardFilter2;
				m_CardFilter2.SetComparer(new ContainedinComparer(&SelectedCards));

				CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, &m_CardFilter1,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer)));
				CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, &m_CardFilter2,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer)));
				CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Library, &m_CardFilter2,
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer)));

				pModifier1.ApplyTo(pPlayer);
				pModifier2.ApplyTo(pPlayer);
				pModifier3.ApplyTo(pPlayer);
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;
				CPlayer* pPlayer = (CPlayer*)dwContext1;
				CCard* pSelectedCard = (CCard*)dwContext2;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (pCard->GetZoneId() == ZoneId::Hand)
						strMessage.Format(_T("%s selects %s from %s's hand"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pPlayer->GetPlayerName());
					else
						strMessage.Format(_T("%s selects %s from %s's library"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				SelectedCards.AddCard(pCard, CardPlacement::Top);

				HandLibrarySearch(pSelectionPlayer, pPlayer, pSelectedCard);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CMagmaquakeCard::CMagmaquakeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magmaquake"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMagmaquakeCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());	
}

bool CMagmaquakeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nLife = pAction->GetCostConfigEntry().GetExtraValue();

	CLifeModifier pModifier = CLifeModifier(Life(-nLife), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				if (!pCreature->GetCreatureKeyword()->Flying())
					pModifier.ApplyTo(pCreature);
			}
			else if (pCard->GetCardType().IsPlaneswalker())
			{
				CPlaneswalkerCard* pPlaneswalker = (CPlaneswalkerCard*) pCard;
				pModifier.ApplyTo(pPlaneswalker);
			}
		}
	}
	
	return true;
}

//____________________________________________________________________________
//
CPublicExecutionCard::CPublicExecutionCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Public Execution"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("5") BLACK_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPublicExecutionCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPublicExecutionCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pTargetController = pTarget->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pTarget));

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController());
	pModifier1.ApplyTo(pTarget);
	
	CZoneCreatureModifier* pModifier2 = new CZoneCreatureModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCreatureModifier>(new CPowerModifier(Power(-2))));

	pModifier2->ApplyTo(pTargetController);
	
	return true;
}

//____________________________________________________________________________
//
