#include "stdafx.h"
#include "CardFateReforged.h"

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
		DEFINE_CARD(CAleshasVanguardCard);
		DEFINE_CARD(CAncestralVengeanceCard);
		DEFINE_CARD(CArashinClericCard);
		DEFINE_CARD(CArchersOfQarsiCard);
		DEFINE_CARD(CAvenSkirmisherCard);
		DEFINE_CARD(CBatheInDragonfireCard);
		DEFINE_CARD(CBattleBrawlerCard);
		DEFINE_CARD(CCollateralDamageCard);
		DEFINE_CARD(CCruxOfFateCard);
		DEFINE_CARD(CDarkDealCard);
		DEFINE_CARD(CDiplomacyOfTheWastesCard);
		DEFINE_CARD(CDragonBellMonkCard);
		DEFINE_CARD(CGoblinHeelcutterCard);
		DEFINE_CARD(CGreatHornKrushokCard);
		DEFINE_CARD(CGurmagAnglerCard);
		DEFINE_CARD(CHewedStoneRetainersCard);
		DEFINE_CARD(CJeskaiBarricadeCard);
		DEFINE_CARD(CKolaghanTheStormsFuryCard);
		DEFINE_CARD(CLotusEyeMysticsCard);
		DEFINE_CARD(CLotusPathDjinnCard);
		DEFINE_CARD(CMarduScoutCard);
		DEFINE_CARD(CMarduShadowspearCard);
		DEFINE_CARD(CMarduStrikeLeaderCard);
		DEFINE_CARD(CMercilessExecutionerCard);
		DEFINE_CARD(CNoxiousDragonCard);
		DEFINE_CARD(CPilgrimOfTheFiresCard);
		DEFINE_CARD(CPressurePointCard);
		DEFINE_CARD(CRefocusCard);
		DEFINE_CARD(CRiteOfUndoingCard)
		DEFINE_CARD(CSandblastCard);
		DEFINE_CARD(CSibsigMuckdraggersCard);
		DEFINE_CARD(CTasigursCrueltyCard);
		DEFINE_CARD(CTemporalTrespassCard);
		DEFINE_CARD(CVaultbreakerCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CArashinClericCard::CArashinClericCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arashin Cleric"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenSkirmisherCard::CAvenSkirmisherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Skirmisher"), CardType::Creature, CREATURE_TYPE2(Bird, Warrior), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CGreatHornKrushokCard::CGreatHornKrushokCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Great-Horn Krushok"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(5))
{
}

//____________________________________________________________________________
//
CJeskaiBarricadeCard::CJeskaiBarricadeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jeskai Barricade"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCreatureKeyword()->AddDefender(FALSE);

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
CPressurePointCard::CPressurePointCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pressure Point"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPressurePointCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT, 
			new AnyCreatureComparer,
			FALSE));
	
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(TRUE));	// tap
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
	
	AddSpell(cpSpell.GetPointer());
}

void CPressurePointCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	if (bResult) 
		pModifier.ApplyTo(pAbilityAction->GetController());
}
//____________________________________________________________________________
//
CRefocusCard::CRefocusCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Refocus"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRefocusCard::OnResolutionCompleted))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, 
			new AnyCreatureComparer,
			FALSE));
	
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE)); // untap		
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
	
	AddSpell(cpSpell.GetPointer());
}

void CRefocusCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	if (bResult) 
		pModifier.ApplyTo(pAbilityAction->GetController());
}
//____________________________________________________________________________
//
CSandblastCard::CSandblastCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sandblast"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AttackingBlockingCreatureComparer,
			false,
			Life(-5), PreventableType::Preventable));
	ATLASSERT(cpSpell);

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	cpSpell->AddAbilityTag(AbilityTag::DamageSource);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDragonBellMonkCard::CDragonBellMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragon Bell Monk"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLotusPathDjinnCard::CLotusPathDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Lotus Path Djinn"), CardType::Creature, CREATURE_TYPE2(Djinn, Monk), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLotusEyeMysticsCard::CLotusEyeMysticsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lotus-Eye Mystics"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	{
		// prowess
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

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
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPilgrimOfTheFiresCard::CPilgrimOfTheFiresCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Pilgrim of the Fires"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("7"), Power(6), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CHewedStoneRetainersCard::CHewedStoneRetainersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hewed Stone Retainers"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(4), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CHewedStoneRetainersCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
}

BOOL CHewedStoneRetainersCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainAntiTypeCastedCount(CardType::_Land) > 0);
}

//____________________________________________________________________________
//
CAleshasVanguardCard::CAleshasVanguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alesha's Vanguard"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CAleshasVanguardCard::OnResolutionCompleted))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
}

void CAleshasVanguardCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}
//____________________________________________________________________________
//
CMarduShadowspearCard::CMarduShadowspearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Shadowspear"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CMarduShadowspearCard::OnResolutionCompleted))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
	{//Whenever Mardu Shadowspear attacks, each opponent loses 1 life.
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							   CWhenSelfAttackedBlocked::AttackEventCallback, 
							   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

void CMarduShadowspearCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}
//____________________________________________________________________________
//
CMarduStrikeLeaderCard::CMarduStrikeLeaderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Strike Leader"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CMarduStrikeLeaderCard::OnResolutionCompleted))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
	{//Whenever Mardu Strike Leader attacks, put a 2/1 black Warrior creature token onto the battlefield.
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Warrior C"), 55023, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

void CMarduStrikeLeaderCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}
//____________________________________________________________________________
//
CGoblinHeelcutterCard::CGoblinHeelcutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Heelcutter"), CardType::Creature, CREATURE_TYPE2(Goblin, Berserker), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CGoblinHeelcutterCard::OnResolutionCompleted))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
	{//Whenever Goblin Heelcutter attacks, target creature can't block this turn.
		typedef
			TTriggeredTargetAbility<CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::CantBlock);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CGoblinHeelcutterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}
//____________________________________________________________________________
//
CKolaghanTheStormsFuryCard::CKolaghanTheStormsFuryCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kolaghan, the Storm's Fury"), CardType::_LegendaryCreature, CREATURE_TYPE(Dragon), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CKolaghanTheStormsFuryCard::OnResolutionCompleted))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
	{//Whenever a Dragon you control attacks, creatures you control get +1/+0 until end of turn.
		typedef 
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							   CWhenAttackedBlocked::PlayerEventCallback,
							   &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKolaghanTheStormsFuryCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CKolaghanTheStormsFuryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}

bool CKolaghanTheStormsFuryCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
												   CCreatureCard* pCreature,
												   AttackSubject attacked) const
{
	if (pCreature->GetCreatureType().HasType(SingleCreatureType::Dragon) || pCreature->GetCardKeyword()->HasChangeling())
		return true;
	return false;
}

//____________________________________________________________________________
//
CMarduScoutCard::CMarduScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mardu Scout"), CardType::Creature, CREATURE_TYPE2(Goblin, Scout), nID,
		RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CMarduScoutCard::OnResolutionCompleted))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
}

void CMarduScoutCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}

//____________________________________________________________________________
//
CVaultbreakerCard::CVaultbreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vaultbreaker"), CardType::Creature, CREATURE_TYPE2(Orc, Rogue), nID,
		_T("3") RED_MANA_TEXT, Power(4), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					    &CVaultbreakerCard::OnResolutionCompleted))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CVaultbreakerCard::OnCardSelected))
{
	{//dash alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->SetMainSpell(FALSE);
		cpSpell->SetAbilityText(_T("Casts (using dash)"));
		AddSpell(cpSpell.GetPointer());
	}
	{//Whenever Vaultbreaker attacks, you may discard a card. If you do, draw a card.
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							   CWhenAttackedBlocked::PlayerEventCallback,
							   &CWhenAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVaultbreakerCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
}

void CVaultbreakerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier();
	pModifier1.GetModifier().SetToAdd(CreatureKeyword::Haste);			// had an issue when adding haste using SetOneTurnOnly(FALSE)
	pModifier1.GetModifier().SetOneTurnOnly(TRUE);						// where if spell was first cast using dash then later the same spell
	pModifier1.ApplyTo(this);											// was cast	without dash it incorrectly had haste.  As a work around									
																		// SetOneTurnOnly(TRUE) is used so haste is removed after one turn.
	// dash start------------------------------
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Bounce Effect"), 61059, &pSubjects);
	pModifier2.ApplyTo(pAbilityAction->GetController());
	// dash end--------------------------------
}

bool CVaultbreakerCard::BeforeResolution(CAbilityAction* pAction)
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

void CVaultbreakerCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
CGurmagAnglerCard::CGurmagAnglerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gurmag Angler"), CardType::Creature, CREATURE_TYPE2(Zombie, Fish), nID,
		_T("6") BLACK_MANA_TEXT, Power(5), Life(5))
{			
	{//delve mana cost [5B, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("5") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [4B, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3B, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2B, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 15; ++i)
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(6+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CTasigursCrueltyCard::CTasigursCrueltyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tasigur's Cruelty"), CardType::Sorcery, nID)
{
	{ //delve mana cost [5B]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("5") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [4B, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [3B, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [2B, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 16; ++i)
	{	
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("") BLACK_MANA_TEXT));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTasigursCrueltyCard::BeforeResolution));
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(5+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);
		cpSpell->SetMainSpell(FALSE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

bool CTasigursCrueltyCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = GetController();

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
											CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			
	pModifier.AddSelection(MinimumValue(2), MaximumValue(2),		// select 2 cards
						   CZoneModifier::RoleType::PrimaryPlayer,	// select by 
						   CZoneModifier::RoleType::PrimaryPlayer,	// reveal to
						   NULL,									// any cards
						   ZoneId::Graveyard,						// if selected, move cards to
						   CZoneModifier::RoleType::PrimaryPlayer,  // select by this player
						   CardPlacement::Top,						// put selected cards on top
						   MoveType::Discard,						// move type
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
CRiteOfUndoingCard::CRiteOfUndoingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rite of Undoing"), CardType::Instant, nID)
{
	{ //delve mana cost [4U]
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("4") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfUndoingCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [3U, <exile card>]
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfUndoingCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [2U, <exile card>, <exile card>]
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfUndoingCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [1U, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfUndoingCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [U, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfUndoingCard::BeforeResolution));
		
		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [U, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 17; ++i)
	{	
		//Delve mana cost
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject <CDoubleTargetSpell>(this, AbilityType::Instant,
				_T("") BLUE_MANA_TEXT,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)), false,
				_T("")));

		cpSpell->GetTargeting1()->SetIncludeControllerCardsOnly();
		cpSpell->GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
		cpSpell->GetTargeting2()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRiteOfUndoingCard::BeforeResolution));
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(4+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);
		cpSpell->SetMainSpell(FALSE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

bool CRiteOfUndoingCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);

	CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier1->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()));

	CMoveCardModifier* pModifier2 = new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others);
	pModifier2->ApplyTo((CCard*)(pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()));

	return true;
}

//____________________________________________________________________________
//
CSibsigMuckdraggersCard::CSibsigMuckdraggersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sibsig Muckdraggers"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("8") BLACK_MANA_TEXT, Power(3), Life(6))
{			
	{//delve mana cost [7B, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("7") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [6B, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("6") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [5B, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("5") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [4B, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [3B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [2B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [1B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(7, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->GetCost().AddExileGraveyardCardCost(8, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [B, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 13; ++i)
	{
		//Delve mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("") BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(8+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);
		cpSpell->SetMainSpell(FALSE);
		
		AddSpell(cpSpell.GetPointer());
	}
	{//When Sibsig Muckdraggers enters the battlefield, return target creature card from your graveyard to your hand.
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
}

//____________________________________________________________________________
//
CTemporalTrespassCard::CTemporalTrespassCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temporal Trespass"), CardType::Sorcery, nID)
{
	{ //delve mana cost [8UUU]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [7UUU, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("7") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(1, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [6UUU, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [5UUU, <exile card>, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(3, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [4UUU, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(4, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [3UUU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(5, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [2UUU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(6, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [1UUU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(7, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{ //delve mana cost [UUU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>]
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		cpSpell->GetCost().AddExileGraveyardCardCost(8, CCardFilter::GetFilter(_T("cards")));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	//delve mana cost [UUU, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>, <exile card>], .. upto 20x<exile card>
	/*
		!!! NOTE messages are often too long to be displayed in Action window list and are truncated. 
			This issue requires a fix !!!
		
		This code is required to correctly implement cost increase affects where colorless mana is added
		to the casting cost of this card.  Here the player can opt to reduce the entire colorless component
		of the casting cost.  Currently, this code allows for upto a total of 20 cards being exiled from the graveyard.

		For example
			Thorn of Amethyst is in play, now Noncreature spells cost {1} more to cast.  So the colorless cost of a 
		noncreature delve spell increases by {1}.  Murderous Cut which normally has a casting cost of 4B now has
		a casting cost of 5B.  The casting player can use the delve ability to reduce the colorless component of the
		casting cost {5} to {0} by exiling 5 cards from their graveyard.

		Note the Botarena code caters for colourless cost reduction affects already, so no additional code is required 
		for this.
	*/

	// Change loop termination condition for each card.  It is dependant on the colorless component of the card's casting cost.
	// number is calculated by (20 - colorless component of the card's casting cost) + 1
	for (int i = 1; i < 13; ++i)
	{	
		//Delve mana cost
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Sorcery,
				_T("") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
				PlayerEffectType::TimeWalk, FALSE, 1));

		cpSpell->SetAffectControllerOnly();
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		
		// Change "magic number" below.  To the colorless component of the card's casting cost.
		cpSpell->GetCost().AddExileGraveyardCardCost(8+i, CCardFilter::GetFilter(_T("cards")));

		cpSpell->GetCost().AddReductionCost(CManaCostBase::Color::Generic, i);
		cpSpell->SetMainSpell(FALSE);
		
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CArchersOfQarsiCard::CArchersOfQarsiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Archers of Qarsi"), CardType::Creature, CREATURE_TYPE2(Naga, Archer), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CBatheInDragonfireCard::CBatheInDragonfireCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Bathe in Dragonfire"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,							// Target player?
		Life(-4),						// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CCollateralDamageCard::CCollateralDamageCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Collateral Damage"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,							// Target player?
		Life(-3),						// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures"))); // sacrifice a creature in addition to cast
}

//____________________________________________________________________________
//
CMercilessExecutionerCard::CMercilessExecutionerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merciless Executioner"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNoxiousDragonCard::CNoxiousDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Noxious Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);			 // may
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller
		
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); // converted mana cost 3 or less
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CAncestralVengeanceCard::CAncestralVengeanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Ancestral Vengeance"), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		Power(-1), Life(-1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
}

//_______________________________________________________________________________________
//
CBattleBrawlerCard::CBattleBrawlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Battle Brawler"), CardType::Creature, CREATURE_TYPE2(Orc, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Red | CardType::White, false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCruxOfFateCard::CCruxOfFateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crux of Fate"), CardType::Sorcery, nID)
	, m_OptionSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCruxOfFateCard::OnOptionSelected))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCruxOfFateCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CCruxOfFateCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Destroy all Dragon creatures"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Destroy all non-Dragon creatures"));

		entries.push_back(selectionEntry);
	}
	m_OptionSelection.AddSelectionRequest(entries, 1, 1, this, GetController());
	return false;
}

void CCruxOfFateCard::OnOptionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
	{
		if ((int)it->dwContext == 1)
		{
			m_CardFilter1.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
			CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter1,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

			pModifier1.ApplyTo(GetController());
			pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));
			return;
		}
		if ((int)it->dwContext == 2)
		{
			m_CardFilter2.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
			CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter2,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

			pModifier2.ApplyTo(GetController());
			pModifier2.ApplyTo(m_pGame->GetNextPlayer(GetController()));
			return;
		}
		return;
	}
}

//____________________________________________________________________________
//
CDarkDealCard::CDarkDealCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dark Deal"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDarkDealCard::OnResolutionCompleted))
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddSpell(cpSpell.GetPointer());
}

void CDarkDealCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pController = GetController();
	CPlayer* pOpponent   = m_pGame->GetNextPlayer(GetController());

	int iHandSizeNewController = pController->GetZoneById(ZoneId::Hand)->GetSize() - 1; // draw one less card than "pre discard" hand size.                                        
	int iHandSizeNewOpponent   = pOpponent->GetZoneById(ZoneId::Hand)->GetSize()   - 1; // draw one less card than "pre discard" hand size.  

	CZoneCardModifier pModifierDiscardController = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pController)));
	CZoneCardModifier pModifierDiscardOpponent = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, pOpponent)));
	
	pModifierDiscardController.ApplyTo(pController);
	pModifierDiscardOpponent.ApplyTo(pOpponent);
	
	if (pController->GetZoneById(ZoneId::Library)->GetSize() < iHandSizeNewController)  // if library contains not enough cards
	{
		pController->SetDrawFailed();						 // can not draw a card to put into your hand, so draw has failed
		return;												 // no point continuing
	}
	if (pOpponent->GetZoneById(ZoneId::Library)->GetSize() < iHandSizeNewOpponent)		// if library contains not enough cards
	{
		pOpponent->SetDrawFailed();							 // can not draw a card to put into opponent's hand, so draw has failed
		return;												 // no point continuing
	}
	CDrawCardModifier pModifierDrawController = CDrawCardModifier(GetGame(), MinimumValue(iHandSizeNewController), MaximumValue(iHandSizeNewController));
	CDrawCardModifier pModifierDrawOpponent   = CDrawCardModifier(GetGame(), MinimumValue(iHandSizeNewOpponent),  MaximumValue(iHandSizeNewOpponent));
	
	pModifierDrawController.ApplyTo(pController);
	pModifierDrawOpponent.ApplyTo(pOpponent); 
}

//____________________________________________________________________________
//
CDiplomacyOfTheWastesCard::CDiplomacyOfTheWastesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Diplomacy of the Wastes"), CardType::Sorcery, nID)
	, m_CardFilter1(new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,
			&m_CardFilter1));
	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiplomacyOfTheWastesCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CDiplomacyOfTheWastesCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTarget	  = pAction->GetAssociatedPlayer();
	CPlayer* pController  = pAction->GetController();
	CZone*   pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	//If you control a Warrior, that player loses 2 life.
	CCardFilter m_CardFilter2;
	m_CardFilter2.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));
	int n = m_CardFilter2.CountIncluded(pBattlefield->GetCardContainer());
	if (n > 0)
	{
		CLifeModifier pModifier1 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier1.ApplyTo(pTarget);
	}
	return true;
}
//____________________________________________________________________________
//