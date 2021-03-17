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
		DEFINE_CARD(CKalonianTuskerCard);
		DEFINE_CARD(CRegathanFirecatCard);
		DEFINE_CARD(CShadowbornApostleCard);
		DEFINE_CARD(CShadowbornDemonCard);
		DEFINE_CARD(CStaffOfTheWildMagusCard);
		
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
