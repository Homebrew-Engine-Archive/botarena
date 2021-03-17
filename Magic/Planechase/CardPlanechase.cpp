#include "stdafx.h"
#include "CardPlanechase.h"

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
			DEFINE_CARD(CAcademyAtTolariaWestCard);
			DEFINE_CARD(CBantCard);
		    DEFINE_CARD(CFeedingGroundsCard);
		    DEFINE_CARD(CFieldsOfSummerCard);
		    DEFINE_CARD(CGoldmeadowCard);
			DEFINE_CARD(CIsleOfVesuvaCard);
			DEFINE_CARD(CKrosaCard);
			DEFINE_CARD(CLlanowarCard);
			DEFINE_CARD(CMurasaCard);
			DEFINE_CARD(CPlanechaseCard);
			DEFINE_CARD(CPoolsofBecomingCard);
			DEFINE_CARD(CShivCard);
			DEFINE_CARD(CSkybreenCard);
			DEFINE_CARD(CTheAEtherFluesCard);
			DEFINE_CARD(CTheGreatForestCard);
			DEFINE_CARD(CTheHippodromeCard);
			DEFINE_CARD(CVelisVelCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here
CPlanechaseCard::CPlanechaseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Planechase"), CardType::Null,nID)
	, m_cpCListener(VAR_NAME(m_cpAListener), 
		CounterMovedEventSource::Listener::EventCallback(this, &CPlanechaseCard::OnCounterMoved))
	,CastingTimes(0)
	,m_WhenNodeChanged(this, NodeId::EndStep, FALSE)
	, m_CardFilter(_T("plane card"), _T("planes"), new CardTypeComparer(CardType::Plane, false))
{
	GetCardKeyword()->AddEmblem(FALSE);
	GetCounterContainer()->SetActiveZones(ZoneId::_Effects);
	GetCounterMovedEventSource()->AddListener(m_cpCListener.GetPointer());
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CPlanechaseCard::OnNodeChanged));

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,_T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(SYSTEM_COUNTER, +1));
		cpAbility->SetAbilityText(_T("Roll a planar die"));
	
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated & AbilityType::_ProduceMana & ~AbilityType::ManaSource) | AbilityType::AsSorcery );

		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), TRUE));

		m_pAbility1 = cpAbility;

		AddAbility(cpAbility.GetPointer());
	}

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated,_T("")));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(SYSTEM_COUNTER, +1));
		cpAbility->SetAbilityText(_T("Roll a planar die"));
		
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated & AbilityType::_ProduceMana & ~AbilityType::ManaSource) | AbilityType::AsSorcery );

		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), FALSE));

		m_pAbility2 = cpAbility;

		AddAbility(cpAbility.GetPointer());
	}
}
void CPlanechaseCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard == this)
	{
		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);
		mCost.AddCost(CManaCost::Color::Generic, ((CastingTimes)));

		CManaCost mCost1;
		mCost1.AddCost(CManaCost::Color::Generic, 0);
		mCost1.AddCost(CManaCost::Color::Generic, ((n_value)));

		for (int i = 0; i < GetAbilities().GetSize(); ++i)
		{
		GetAbilities().GetAt(i)->GetCost().RemoveIncreasedCost(mCost);
		GetAbilities().GetAt(i)->GetCost().AddIncreasedCost(mCost1);
		}
		
		CastingTimes = n_value;
	}
}
void CPlanechaseCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	if (pToNode->GetGraph()->GetPlayer() != GetController())
		return;

	CCardCounterModifier pModifier = CCardCounterModifier(SYSTEM_COUNTER, 0, true);
	pModifier.ApplyTo(this);
}
//____________________________________________________________________________
//
CLlanowarCard::CLlanowarCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Llanowar"), PlaneType::Dominaria, nID)
{
	{
		typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);


		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}	
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CLlanowarCard::CreateAbility)));	

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
counted_ptr<CAbility> CLlanowarCard::CreateAbility(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CTheGreatForestCard::CTheGreatForestCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("The Great Forest"), PlaneType::Lorwyn, nID)
{
	{
		typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);


		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+0));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ToughnessCombatDamage));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
//__________________________________________________________________________
//
CFeedingGroundsCard::CFeedingGroundsCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Feeding Grounds"), PlaneType::Muraganda, nID)
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::Red, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CardTypeComparer(CardType::Green, false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeedingGroundsCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
}
bool CFeedingGroundsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	if (!pCard->GetCardType().IsCreature()) return false;

	int nCMC = pAction->GetAssociatedCard()->GetConvertedManaCost();

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nCMC);
	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CGoldmeadowCard::CGoldmeadowCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Goldmeadow"), PlaneType::Lorwyn, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoldmeadowCard::SetTriggerContext));

		cpAbility->SetCreateTokenOption(TRUE, _T("Goat A"), 2847, 3);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->SetCreateTokenOption(TRUE, _T("Goat A"), 2847, 1);


		AddAbility(cpAbility.GetPointer());
	}	
}
bool CGoldmeadowCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CFieldsOfSummerCard::CFieldsOfSummerCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Fields of Summer"), PlaneType::Moag, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFieldsOfSummerCard::SetTriggerContext));		

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CSpecialChaosTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+10));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);


		AddAbility(cpAbility.GetPointer());
	} 

	}
bool CFieldsOfSummerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}
//____________________________________________________________________________
//
CPoolsofBecomingCard::CPoolsofBecomingCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Pools of Becoming"), PlaneType::BolassMeditationRealm, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPoolsofBecomingCard::OnResolutionCompleted))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPoolsofBecomingCard::OnResolutionCompleted1))
{
	{
		typedef
		TTriggeredAbility< CTriggeredAbility<>, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}	
	{
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPoolsofBecomingCard::SetTriggerContextE));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CPoolsofBecomingCard::SetTriggerContextE(CTriggeredAbility<>::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
	return GetZone()->GetZoneId() == ZoneId::_Effects;
}
void CPoolsofBecomingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	if (pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes)->GetSize())
	{
		CZoneModifier* planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, 3, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		planeswalkmodifier->ApplyTo(pAbilityAction->GetController());

		CZone* pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes);

		int k = 0;

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			k++;
			if (k<4)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(pLib->GetAt(i), FORCE_CHAOS_SYMBOL_TRIGGER_ID);       
				pModifier.ApplyTo(pLib->GetAt(i));
			}
		}

		CZoneModifier planeswalk_from =  CZoneModifier(GetGame(), ZoneId::_Planes , 3 , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalk_from.AddSelection(MinimumValue(3), MaximumValue(3), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::_Planes, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer);

		planeswalk_from.ApplyTo(pAbilityAction->GetController());
	}
	else
	{
		CZone* pLib = m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes);

		int k = 0;

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
		//	k++;
		//	if (k<4)
			{
				pLib->GetAt(i)->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others);
			}
		}


		CZoneModifier* planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, 3, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

		planeswalkmodifier->ApplyTo(pAbilityAction->GetController());

		k = 0;

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			k++;
			if (k<4)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(pLib->GetAt(i), FORCE_CHAOS_SYMBOL_TRIGGER_ID);       
				pModifier.ApplyTo(pLib->GetAt(i));
			}
		}

		CZoneModifier planeswalk_from =  CZoneModifier(GetGame(), ZoneId::_Planes , 3 , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalk_from.AddSelection(MinimumValue(3), MaximumValue(3), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::_Planes, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer);

		planeswalk_from.ApplyTo(pAbilityAction->GetController());

		pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes);

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			pLib->GetAt(i)->Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others
														, CardPlacement::Bottom);
		}
	}

}
void CPoolsofBecomingCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int size = pAbilityAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize();

	CZoneModifier pModifier1 =  CZoneModifier(GetGame(), ZoneId::Hand , size , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier1.AddSelection(MinimumValue(size), MaximumValue(size), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer);

	CDrawCardModifier pModifier2 =  CDrawCardModifier(GetGame(), MinimumValue(size), MaximumValue(size));

	pModifier1.ApplyTo(pAbilityAction->GetController());
	pModifier2.ApplyTo(pAbilityAction->GetController());
}
//__________________________________________________________________________
//
CBantCard::CBantCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Bant"), PlaneType::Alara, nID)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
	CounterMovedEventSource::Listener::EventCallback(this, &CBantCard::OnCounterMoved))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBantCard::OnResolutionCompleted))
	, m_cpCListener(VAR_NAME(m_cpCListener), CardMovementEventSource::Listener::EventCallback(this, &CBantCard::OnZoneChanged))
{
	{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
		&CBantCard::CreateAbility), CCardAbilityModifier::PostAdditionCallback(this, &CBantCard::ForceStart));

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

	cpAbility->GetOtherCardModifiers().push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Blue | CardType::White | CardType::Green, false));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::Indestructible);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(DIVINITY_COUNTER, +1));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->GetCardModifiers().Add(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
}
void CBantCard::ForceStart(CAbility* pAbility) const
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility;

	
	((TriggeredAbility*)pAbility)->GetTrigger().ForceStart();
}
counted_ptr<CAbility> CBantCard::CreateAbility(CCard* pCard)
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
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBantCard::SetTriggerContext));

	cpAbility->SetAbilityName(_T("Exalted ability"));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
bool CBantCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}
void CBantCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	pAbilityAction->GetAssociatedCard()->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	pAbilityAction->GetAssociatedCard()->GetMovedEventSource()->AddListener(m_cpCListener.GetPointer());
	m_AffectedCards.Add(pAbilityAction->GetAssociatedCard());
}
void CBantCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (!n_value && !pFromCard->GetCounterContainer()->GetCounter(DIVINITY_COUNTER)->GetCount())
	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pFromCard == pCard1)
		{
			CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Indestructible);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
			pModifier->RemoveFrom(pCard1);
			pCard1->GetCounterMovedEventSource()->RemoveListener(m_cpAListener.GetPointer());
			pCard1->GetMovedEventSource()->RemoveListener(m_cpCListener.GetPointer());
		}
	}

	m_AffectedCards.Remove(pFromCard);
}
void CBantCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pCard == pCard1)
		{
			CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Indestructible);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
			pModifier->RemoveFrom(pCard1);
			pCard1->GetCounterMovedEventSource()->RemoveListener(m_cpAListener.GetPointer());
			pCard1->GetMovedEventSource()->RemoveListener(m_cpCListener.GetPointer());
		}
	}

	m_AffectedCards.Remove(pCard);
}
//____________________________________________________________________________
//
CSkybreenCard::CSkybreenCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Skybreen"), PlaneType::Kaldheim, nID)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSkybreenCard::OnZoneChanged))
	, m_CardFilter(_T("card which share a cardtype with library top"), _T("card which share a cardtype with library top"), new CardSharingCardTypeWithLibraryTopComparer())
{

	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{		
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)&m_CardFilter));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkybreenCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
}
bool CSkybreenCard::BeforeResolution(CSkybreenCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Hand)->GetSize()));
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NotDealingDamage);

	pAction->SetTriggerContext(triggerContext);

	return true;
}
void CSkybreenCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::_Effects && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
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

	if (pToZone->GetZoneId() == ZoneId::_Effects && m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			m_pGame->GetNextPlayer(GetController())->GetPlayerName(), m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			m_pGame->GetNextPlayer(GetController())->GetPlayerName(),
			m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			m_pGame->GetNextPlayer(GetController())->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetTopCard());
	}
}
//__________________________________________________________________________
//
CVelisVelCard::CVelisVelCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Velis Vel"), PlaneType::Lorwyn, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment2> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment2>(this,
			new AnyCreatureComparer));

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::Changeling);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetCardModifiers().Add(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}	
}
//__________________________________________________________________________
//
CTheHippodromeCard::CTheHippodromeCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("The Hippodrome"), PlaneType::Segovia, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(-5), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
		new CreaturePowerComparer<std::greater<int>>(1));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}	
}
//____________________________________________________________________________
//
CAcademyAtTolariaWestCard::CAcademyAtTolariaWestCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Academy at Tolaria West"), PlaneType::Dominaria, nID)

{
	{
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAcademyAtTolariaWestCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcademyAtTolariaWestCard::BeforeResolution));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef

		TTriggeredAbility< CTriggeredDiscardCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->SetDiscardCount(SpecialNumber::All);
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CAcademyAtTolariaWestCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}
bool CAcademyAtTolariaWestCard::BeforeResolution(CAbilityAction* pAction) const
	{
	if (pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize()==0)
		{
		CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(7), MaximumValue(7));
		modifier1.ApplyTo(pAction->GetController());

		return true;
		}	
	return true;
	}


//____________________________________________________________________________
//
CKrosaCard::CKrosaCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Krosa"), PlaneType::Dominaria, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+2), Life(+2)));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CSpecialChaosTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional); 

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTriggeredPlayerModifiers().Add(new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT)));
		cpAbility->AddAbilityTag(AbilityTag::Mana);

		AddAbility(cpAbility.GetPointer());
	} 

	}
//____________________________________________________________________________
//
CShivCard::CShivCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Shiv"), PlaneType::Dominaria, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CShivCard::CreateAbility)));	

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->SetCreateTokenOption(TRUE, _T("Dragon F"), 2867, 1);


		AddAbility(cpAbility.GetPointer());
	}	
}

counted_ptr<CAbility> CShivCard::CreateAbility(CCard* pCard)
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(pCard,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);
	
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTheAEtherFluesCard::CTheAEtherFluesCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("The AEther Flues"), PlaneType::Iquatana, nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTheAEtherFluesCard::OnCardSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
			ZoneId::_Planes, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTheAEtherFluesCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTheAEtherFluesCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTheAEtherFluesCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTheAEtherFluesCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CSpecialChaosTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
		
		AddAbility(cpAbility.GetPointer());
	} 
}

bool CTheAEtherFluesCard::SetTriggerContextAux(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if ((GetGame()->GetGameTurnNumber() == 1) && (GetGame()->GetCurrentNode()->GetNodeId() == NodeId::BeginningStep))
		return false;
		
	return true;
}

bool CTheAEtherFluesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CTheAEtherFluesCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) > 0)
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
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CTheAEtherFluesCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't sacrifice anything"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier1.ApplyTo(pCard);

				int n = 0;
				bool bSearch = true;
				CCard* pFound;
				CCountedCardContainer pOtherRevealed;
				
				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
				{		
					if (!bSearch)
						break;
					else
					{
						++n;
						if (pLibrary->GetAt(i)->GetCardType().IsCreature())
						{
							bSearch = false;
							pFound = pLibrary->GetAt(i);
						}
					}
				}

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);

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
		
				pModifier2.ApplyTo(pSelectionPlayer);

				pLibrary->Shuffle();				
				return;
			}
		}
}

//____________________________________________________________________________
//
CIsleOfVesuvaCard::CIsleOfVesuvaCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Isle of Vesuva"), PlaneType::Dominaria, nID)
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this,
				ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CIsleOfVesuvaCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CIsleOfVesuvaCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialChaosTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIsleOfVesuvaCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	} 
}

bool CIsleOfVesuvaCard::SetTriggerContext(TriggeredAbility1::TriggerContextType& triggerContext, CCard* pCard,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.m_pCard = pCard;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CIsleOfVesuvaCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	TriggeredAbility1::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CCard* pCard = triggerContext.m_pCard;
	
	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), pCard);
	pModifier.ApplyTo(pCard);

	return true;
}

bool CIsleOfVesuvaCard::BeforeResolution2(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new CardNameComparer(pTarget->GetPrintedCardName()));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(pTarget));

	CCountedCardContainer cards;

	cards.AddCard(pTarget, CardPlacement::Top);
	
	CZone* pFromZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	CCardFilter m_FinalFilter;
	m_FinalFilter.SetComparer(new ContainedinComparer(&cards));
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &m_FinalFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAction->GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}
	return false;
}

//____________________________________________________________________________
//
CMurasaCard::CMurasaCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Murasa"), PlaneType::Zendikar, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetTapped(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMurasaCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMurasaCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CMurasaCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CMurasaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier pModifier = CCardIsAlsoAModifier( _T("Animated Land F"), 64051, pAction->GetController());

	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//