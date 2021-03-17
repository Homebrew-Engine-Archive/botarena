#include "stdafx.h"
#include "CardPlanechase2.h"

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

		DEFINE_CARD(CAkoumCard);
		DEFINE_CARD(CBalefulStrixCard);
		DEFINE_CARD(CBeetlebackChiefCard);
		DEFINE_CARD(CBloodhillBastionCard);
		DEFINE_CARD(CBrindleShoatCard);
		DEFINE_CARD(CChaoticAEtherCard);
		DEFINE_CARD(CDragonlairSpiderCard);
		DEFINE_CARD(CDreampodDruidCard);
		DEFINE_CARD(CEtheriumHornSorcererCard);
		DEFINE_CARD(CFracturedPowerstoneCard);
		DEFINE_CARD(CGlenElendraCard);
		DEFINE_CARD(CGroveOfTheDreampodsCard);
		DEFINE_CARD(CIllusoryAngelCard);
		DEFINE_CARD(CIndrikUmbraCard);
		DEFINE_CARD(CInterplanarTunnelCard);
		DEFINE_CARD(CKrondTheDawnCladCard);
		DEFINE_CARD(CMaelstromWandererCard);
		DEFINE_CARD(CMassMutinyCard);
		DEFINE_CARD(CMorphicTideCard);
		DEFINE_CARD(CMutualEpiphanyCard);
		DEFINE_CARD(COnakkeCatacombCard);
		DEFINE_CARD(CPlanewideDisasterCard);
		DEFINE_CARD(CPreyseizerDragonCard);
		DEFINE_CARD(CRealityShapingCard);
		DEFINE_CARD(CSaiOfTheShinobiCard);
		DEFINE_CARD(CShardlessAgentCard);
		DEFINE_CARD(CSilentBladeOniCard);
		DEFINE_CARD(CSpatialMergingCard);
		DEFINE_CARD(CStairstoInfinityCard);
		DEFINE_CARD(CThromokTheInsatiableCard);
		DEFINE_CARD(CVelaTheNightCladCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CIllusoryAngelCard::CIllusoryAngelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Illusory Angel"), CardType::Creature, CREATURE_TYPE2(Angel, Illusion), nID,
		_T("2") BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CIllusoryAngelCard::CanPlay)));

	this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
}

BOOL CIllusoryAngelCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainAntiTypeCastedCount(CardType::_Land) > 0);
}

//____________________________________________________________________________
//
CBalefulStrixCard::CBalefulStrixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Baleful Strix"), CardType::_ArtifactCreature, CREATURE_TYPE(Bird), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

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
CBeetlebackChiefCard::CBeetlebackChiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Beetleback Chief"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Goblin C"), 2702, 2);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrindleShoatCard::CBrindleShoatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brindle Shoat"), CardType::Creature, CREATURE_TYPE(Boar), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Boar"), 2752, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonlairSpiderCard::CDragonlairSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragonlair Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(6))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
    	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		
		cpAbility->SetCreateTokenOption(TRUE, _T("Insect B"), 2723, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CDreampodDruidCard::CDreampodDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dreampod Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling B"), 2712, 1);

    cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDreampodDruidCard::BeforeResolution));
    cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDreampodDruidCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}
bool CDreampodDruidCard::BeforeResolution(CTriggeredCreateTokenAbility::TriggeredActionType* pAction) const
{
	return GetEnchantCount() > 0;
}
bool CDreampodDruidCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return GetEnchantCount() > 0;
}
//____________________________________________________________________________
//
CEtheriumHornSorcererCard::CEtheriumHornSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Etherium-Horn Sorcerer"), CardType::_ArtifactCreature, CREATURE_TYPE2(Minotaur, Wizard), nID,
		_T("4") BLUE_MANA_TEXT RED_MANA_TEXT, Power(3), Life(6))
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") BLUE_MANA_TEXT RED_MANA_TEXT, 
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CIndrikUmbraCard::CIndrikUmbraCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Indrik Umbra"), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::FirstStrike | CreatureKeyword::Lure)
{
	GetCardKeyword()->AddTotemArmor(FALSE);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::TotemArmor);
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//

CMaelstromWandererCard::CMaelstromWandererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maelstrom Wanderer"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(5))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPreyseizerDragonCard::CPreyseizerDragonCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Preyseizer Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPreyseizerDragonCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	GetCreatureKeyword()->AddFlying(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPreyseizerDragonCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPreyseizerDragonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	int nCounterCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nCounterCount));
	pAction->SetTriggerContext(triggerContext);

	return (nCounterCount>0);
}

void CPreyseizerDragonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSaiOfTheShinobiCard::CSaiOfTheShinobiCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sai of the Shinobi"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this,
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSaiOfTheShinobiCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSaiOfTheShinobiCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSaiOfTheShinobiCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CSaiOfTheShinobiCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CShardlessAgentCard::CShardlessAgentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shardless Agent"), CardType::_ArtifactCreature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCascadeAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);				
		cpAbility->SetManaSourcesBeforeSelection(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThromokTheInsatiableCard::CThromokTheInsatiableCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Thromok the Insatiable"), CardType::_LegendaryCreature, CREATURE_TYPE(Hellion), nID,
		_T("3") GREEN_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CThromokTheInsatiableCard::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);
}

void CThromokTheInsatiableCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nDevourCount = GetDevouredCount();
	int nColorCount = nDevourCount * nDevourCount;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVelaTheNightCladCard::CVelaTheNightCladCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vela the Night-Clad"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddIntimidate(FALSE);
	
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, true),
				Power(+0), Life(+0), CreatureKeyword::Intimidate));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportSelfMoves(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrondTheDawnCladCard::CKrondTheDawnCladCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Krond the Dawn-Clad"), CardType::_LegendaryCreature, CREATURE_TYPE(Archon), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));
	
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKrondTheDawnCladCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKrondTheDawnCladCard::SetTriggerContext));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrondTheDawnCladCard::BeforeResolution(CTriggeredMoveCardAbility::TriggeredActionType* pAction) const
{
	return GetEnchantCount() > 0;
}

bool CKrondTheDawnCladCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											   AttackSubject attacked) const
{
	return GetEnchantCount() > 0;
}

//____________________________________________________________________________
//
CMutualEpiphanyCard::CMutualEpiphanyCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Mutual Epiphany"), PlaneType::Phenomenon, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Planes, ZoneId::_Effects));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4)));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CDrawCardModifier(GetGame(), MinimumValue(4), MaximumValue(4))));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), TRUE, TRUE));


		AddAbility(cpAbility.GetPointer());
	}
}
//__________________________________________________________________________
//
CChaoticAEtherCard::CChaoticAEtherCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Chaotic AEther"), PlaneType::Phenomenon, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Planes, ZoneId::_Effects));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CPlayerEffectModifier(PlayerEffectType::EachBlankRollisChaosRoll, FALSE));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CPlayerEffectModifier(PlayerEffectType::EachBlankRollisChaosRoll, FALSE)));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), TRUE, TRUE));


		AddAbility(cpAbility.GetPointer());
	}
}
//__________________________________________________________________________
//
CSpatialMergingCard::CSpatialMergingCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Spatial Merging"), PlaneType::Phenomenon, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSpatialMergingCard::OnResolutionCompleted))
	, m_CardFilter(_T("a plane card"), _T("plane cards"), new TrueCardComparer)
{

	m_CardFilter.AddNegateComparer(new PlaneTypeComparer(PlaneType::Phenomenon));

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Planes, ZoneId::_Effects));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
void CSpatialMergingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	if (pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes)->GetSize())
	{
		CZone* pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes);
		int reveal=1;
		int stop=0;
		for (int i = 0; i < pLib->GetSize(); i++)

		{
			CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);

			if (m_CardFilter.IsCardIncluded(ppCard) && (stop<2))
			{
				++reveal;			//one more card to reveal
			    ++stop;
			}
			else
			{
				if (stop<2) ++reveal;
			}
		}
		CZoneModifier* planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, reveal-1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalkmodifier->AddSelection(MinimumValue(2), MaximumValue(2), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				&m_CardFilter, // what cards
				ZoneId::_Effects, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
		planeswalkmodifier->SetReorderInformation(
			true, 
			ZoneId::_Planes, 
			CZoneModifier::RoleType::PrimaryPlayer, // this player's library
			CardPlacement::Bottom);

		CCardPlaneswalkModifier* pModifier = new CCardPlaneswalkModifier(GetGame(), TRUE, TRUE, planeswalkmodifier);
		pModifier->ApplyTo(this);
	}
	else
	{
		CZone* pLib = m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes);
		int reveal=1;
		int stop=0;
		for (int i = 0; i < pLib->GetSize(); i++)

		{
			CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);

			if (m_CardFilter.IsCardIncluded(ppCard) && (stop<2))
			{
				++reveal;			//one more card to reveal
			    ++stop;
			}
			else
			{
				if (stop<2) ++reveal;
			}
		}

		int k = 0;

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			k++;
			if (k< reveal  )
			{
				if (((CPlaneCard*)pLib->GetAt(i))->GetPlaneType() != PlaneType::Phenomenon)
				pLib->GetAt(i)->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::_Effects),pAbilityAction->GetController(), MoveType::Others);
				else
				pLib->GetAt(i)->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others);
			}
		}

		CZoneModifier* planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, reveal-1-2, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalkmodifier->AddSelection(MinimumValue(reveal-1-2), MaximumValue(reveal-1-2), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				&m_CardFilter, // what cards
				ZoneId::_Planes, // if selected, move cards to
				CZoneModifier::RoleType::SecondaryPlayer, // select by this player
				CardPlacement::Bottom, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
		planeswalkmodifier->SetSecondaryPlayer(pAbilityAction->GetController());
		planeswalkmodifier->SetReorderInformation(
			true, 
			ZoneId::_Planes, 
			CZoneModifier::RoleType::PrimaryPlayer, // this player's library
			CardPlacement::Bottom);

		planeswalkmodifier->ApplyTo((pAbilityAction->GetController()));

		pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes);

	

	//	pLib->GetTopCard()->Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others
		//												, CardPlacement::Bottom);

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			pLib->GetAt(i)->Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others
														, CardPlacement::Bottom);
		}
		
		Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others, CardPlacement::Bottom);
	}
}
//__________________________________________________________________________
//
CStairstoInfinityCard::CStairstoInfinityCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Stairs to Infinity"), PlaneType::Xerex, nID)
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

		CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::_Planes, 1 , CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			
		pModifier->AddSelection(MinimumValue(0), MaximumValue(1), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // any cards
		ZoneId::_Planes, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally reorder the last one to the bottom of library
		pModifier->SetReorderInformation(
			true, 
			ZoneId::_Planes,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
		TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(PLANAR_DIE_ROLL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		AddAbility(cpAbility.GetPointer());
	}	
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
//__________________________________________________________________________
//
CAkoumCard::CAkoumCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Akoum"), PlaneType::Zendikar, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Enchantment, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new EnchantedCardComparer);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}	
}
//____________________________________________________________________________
//
CInterplanarTunnelCard::CInterplanarTunnelCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Interplanar Tunnel"), PlaneType::Phenomenon, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CInterplanarTunnelCard::OnResolutionCompleted))
	, m_CardFilter(_T("a plane card"), _T("plane cards"), new TrueCardComparer)
{

	m_CardFilter.AddNegateComparer(new PlaneTypeComparer(PlaneType::Phenomenon));

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Planes, ZoneId::_Effects));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}
void CInterplanarTunnelCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
	if (pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes)->GetSize())
	{
		CZone* pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes);
		int reveal=1;
		int stop=0;
		for (int i = 0; i < pLib->GetSize(); i++)

		{
			CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);

			if (m_CardFilter.IsCardIncluded(ppCard) && (stop<5))
			{
				++reveal;			//one more card to reveal
			    ++stop;
			}
			else
			{
				if (stop<5) ++reveal;
			}
		}
		CZoneModifier* planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, reveal-1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalkmodifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				&m_CardFilter, // what cards
				ZoneId::_Effects, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
		planeswalkmodifier->SetReorderInformation(
			true, 
			ZoneId::_Tokens, 
			CZoneModifier::RoleType::PrimaryPlayer, // this player's library
			CardPlacement::Bottom);

		CCardPlaneswalkModifier* pModifier = new CCardPlaneswalkModifier(GetGame(), TRUE, TRUE, planeswalkmodifier);
		pModifier->ApplyTo(this);

		pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Tokens);

		pLib->Shuffle();

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			if (pLib->GetAt(i)->GetCardType().IsPlane());
			pLib->GetAt(i)->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others
														, CardPlacement::Bottom);
		}
	}
	else
	{
		CZone* pLib = m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes);
		int reveal=1;
		int stop=0;
		for (int i = 0; i < pLib->GetSize(); i++)

		{
			CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);

			if (m_CardFilter.IsCardIncluded(ppCard) && (stop<5))
			{
				++reveal;			//one more card to reveal
			    ++stop;
			}
			else
			{
				if (stop<5) ++reveal;
			}
		}

		int k = 0;

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			k++;
			if (k< reveal  )
			{
				pLib->GetAt(i)->Move(pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others);
			}
		}

		CZoneModifier* planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, reveal-1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalkmodifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				&m_CardFilter, // what cards
				ZoneId::_Effects, // if selected, move cards to
				CZoneModifier::RoleType::SecondaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
		planeswalkmodifier->SetSecondaryPlayer(pAbilityAction->GetController());
		//planeswalkmodifier->SetReorderInformation(
	//		true, 
		//	ZoneId::_Planes, 
		//	CZoneModifier::RoleType::PrimaryPlayer, // this player's library
		//	CardPlacement::Bottom);

		planeswalkmodifier->ApplyTo((pAbilityAction->GetController()));

		pLib = pAbilityAction->GetController()->GetZoneById(ZoneId::_Planes);

		Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others, CardPlacement::Bottom);

	//	pLib->GetTopCard()->Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others
		//												, CardPlacement::Bottom);
		pLib->Shuffle();

		for (int i = pLib->GetSize() - 1 ; i > -1; i--)
		{
			pLib->GetAt(i)->Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others
														, CardPlacement::Bottom);
		}
		
		Move(m_pGame->GetNextPlayer(pAbilityAction->GetController())->GetZoneById(ZoneId::_Planes),pAbilityAction->GetController(), MoveType::Others, CardPlacement::Bottom);
	}
}
//__________________________________________________________________________
//
CPlanewideDisasterCard::CPlanewideDisasterCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Planewide Disaster"), PlaneType::Phenomenon, nID)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPlanewideDisasterCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Planes, ZoneId::_Effects));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());


		AddAbility(cpAbility.GetPointer());
	}
}
void CPlanewideDisasterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer creatures;
	CZone* pZone;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, creatures);
	}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pAbilityAction->GetController());

	for (int ic = 0; ic < creatures.GetSize(); ++ic)
		modifier.ApplyTo(creatures.GetAt(ic));

	CCardPlaneswalkModifier pModifier = CCardPlaneswalkModifier(GetGame(), TRUE, TRUE);
	pModifier.ApplyTo(this);
}
//__________________________________________________________________________
//
CRealityShapingCard::CRealityShapingCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Reality Shaping"), PlaneType::Phenomenon, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRealityShapingCard::OnResolutionCompleted))
			, m_CardFilter(new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Enchantment | CardType::_Land | CardType::Planeswalker, false))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_Planes, ZoneId::_Effects));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());


		AddAbility(cpAbility.GetPointer());
	}
}
void CRealityShapingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	
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
	pModifier.ApplyTo(pAbilityAction->GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(pAbilityAction->GetController()));

	CCardPlaneswalkModifier pModifier1 = CCardPlaneswalkModifier(GetGame(), TRUE, TRUE);
	pModifier1.ApplyTo(this);
}
//__________________________________________________________________________
//
CMorphicTideCard::CMorphicTideCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Morphic Tide"), PlaneType::Phenomenon, nID)
{
	{

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromZoneId(ZoneId::_Planes);
		cpAbility->GetTrigger().SetToZoneId(ZoneId::_Effects);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionCost(_T(""));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), TRUE, TRUE));

		AddAbility(cpAbility.GetPointer());
	}
}
//__________________________________________________________________________
//
CGlenElendraCard::CGlenElendraCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Glen Elendra"), PlaneType::Lorwyn, nID)
	, m_cpDListener(VAR_NAME(m_cpDListener), 
					DamageDealEventSource::Listener::EventCallback(this, &CGlenElendraCard::OnDamageDealt))
	,m_WhenNodeChanged1(this, NodeId::BeginningStep, FALSE)
	,m_WhenNodeChanged2(this, NodeId::BeginningOfCombatStep, FALSE)
{
	m_WhenNodeChanged1.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CGlenElendraCard::OnNodeChanged));
	m_WhenNodeChanged2.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CGlenElendraCard::OnNodeChanged));

	if (pGame)
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{		
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpDListener.GetPointer());
	}
	{
			typedef
		TTriggeredDoubleTargetAbility< CTriggeredExchangeControlAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	
	cpAbility->GetTargeting1().GetSubjectCardFilter().AddComparer(new  ContainedinComparer(&m_AffectedCards));
	cpAbility->GetTargeting1().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting1().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->GetTargeting2().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting2().SetIncludeNonControllerCardsOnly();
	cpAbility->GetTargeting2().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlenElendraCard::SetTriggerContextE));

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
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardOwnerComparer(this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
	
		cpAbility->GetCardModifiers().Add(new CGainControlModifier(GetGame(), (CCard*)this));

		AddAbility(cpAbility.GetPointer());
	}	
}
void CGlenElendraCard::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_AffectedCards.RemoveAll();
	
}
void CGlenElendraCard::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	if (!(damage.m_DamageType & DamageType::CombatDamage).Any())
		return;

	if (pToPlayer) m_AffectedCards.AddCard(pFromCard, CardPlacement::Top);
}
bool CGlenElendraCard::SetTriggerContextE(CTriggeredExchangeControlAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
	return GetZone()->GetZoneId() == ZoneId::_Effects;
}
//__________________________________________________________________________
//
CFracturedPowerstoneCard::CFracturedPowerstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fractured Powerstone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Roll a planar die"));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), TRUE));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFracturedPowerstoneCard::BeforeResolution));


		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Roll a planar die"));
		cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardPlaneswalkModifier(GetGame(), FALSE));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFracturedPowerstoneCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFracturedPowerstoneCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pEffects = GetController()->GetZoneById(ZoneId::_Effects);
	CZone* pOppEffects = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::_Effects);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardNameComparer(_T("Planechase")));
	
	int nDomainCount = (m_CardFilter_temp.CountIncluded(pEffects->GetCardContainer())) + (m_CardFilter_temp.CountIncluded(pOppEffects->GetCardContainer()));

	return nDomainCount > 0;
}

//____________________________________________________________________________
//
CBloodhillBastionCard::CBloodhillBastionCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Bloodhill Bastion"), PlaneType::Equilor, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CBloodhillBastionCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DoubleStrike | CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodhillBastionCard::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialChaosTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}	
}
bool CBloodhillBastionCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = (CCreatureCard*)pCard;
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}
void CBloodhillBastionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCard* target = pAbilityAction->GetAssociatedCard();
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(this->GetSpells().GetAt(0)->GetInstanceID());

	CCardFlagModifier* m_CardFlagModifier3= new CCardFlagModifier();

	m_CardFlagModifier1.ApplyTo(target);

	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	m_CardFilter_temp.SetComparer(new TrueCardComparer);
	m_CardFilter_temp.AddComparer(pComparer);
	
	CZoneCardModifier* pModifier1 = new CZoneCardModifier(ZoneId::Exile, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CGainControlModifier(GetGame(), (CCard*)this)));

	pModifier1->ApplyTo(target->GetOwner());
	//pModifier2->ApplyTo(target->GetOwner());
}

//____________________________________________________________________________
//

CSilentBladeOniCard::CSilentBladeOniCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silent-Blade Oni"), CardType::Creature, CREATURE_TYPE2(Demon, Ninja), nID,
	_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(5))
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredFreeCastAbility1, CWhenSelfDamageDealt, 
			CWhenSelfDamageDealt::PlayerEventCallback, 
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetGatherer().SetIncludeNonControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(),new CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COnakkeCatacombCard::COnakkeCatacombCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Onakke Catacomb"), PlaneType::Shandalar, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCardTypeEnchantment> cpAbility(
			::CreateObject<CCardTypeEnchantment>(this,
				new AnyCreatureComparer,
				CardType::Black, CardType::_ColorMask));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
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
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	} 

}

//____________________________________________________________________________
//
CGroveOfTheDreampodsCard::CGroveOfTheDreampodsCard(CGame* pGame, UINT nID)
	: CPlaneCard(pGame, _T("Grove of the Dreampods"), PlaneType::Fabacin, nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
			ZoneId::_Planes, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGroveOfTheDreampodsCard::SetTriggerContextAux));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGroveOfTheDreampodsCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGroveOfTheDreampodsCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGroveOfTheDreampodsCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialChaosTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required); 

		cpAbility->GetTrigger().SetTriggerIndex(CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().SetForceTriggerIndex(FORCE_CHAOS_SYMBOL_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer());
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
		
		AddAbility(cpAbility.GetPointer());
	} 
}

bool CGroveOfTheDreampodsCard::SetTriggerContextAux(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if ((GetGame()->GetGameTurnNumber() == 1) && (GetGame()->GetCurrentNode()->GetNodeId() == NodeId::BeginningStep))
		return false;
		
	return true;
}

bool CGroveOfTheDreampodsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CGroveOfTheDreampodsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
	CCountedCardContainer pOtherRevealed;
	pOtherRevealed.RemoveAll();
				
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

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
			else
				pOtherRevealed.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
		}
	}

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
	pModifier.ApplyTo(pController);

	pOtherRevealed.Shuffle(pController);
	
	for (int i = 0; i < pOtherRevealed.GetSize(); ++i)
		pOtherRevealed.GetAt(i)->Move(pLibrary, pController, MoveType::Others, CardPlacement::Bottom);

	return true;
}

//____________________________________________________________________________
//
CMassMutinyCard::CMassMutinyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mass Mutiny"), CardType::Sorcery, nID)
{
	// Will need an update if/when we get multiplayer.
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
		pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifier->GetModifier().SetOneTurnOnly(TRUE);

		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

		cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
