#include "stdafx.h"
#include "CardStarter1999.h"

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

		DEFINE_CARD(CAngelOfLightCard);
		DEFINE_CARD(CChampionLancerCard);
		DEFINE_CARD(CCinderStormCard);
		DEFINE_CARD(CDakmorGhoulCard);
		DEFINE_CARD(CDevoutMonkCard);
		DEFINE_CARD(CGoblinCommandoCard);
		DEFINE_CARD(CGoblinSettlerCard);
		DEFINE_CARD(CGrimTutorCard);
		DEFINE_CARD(CRoyalFalconCard);
		DEFINE_CARD(CRoyalTrooperCard);
		DEFINE_CARD(CShriekingSpecterCard);
		DEFINE_CARD(CStreamOfAcidCard);
		DEFINE_CARD(CThunderDragonCard);
		DEFINE_CARD(CWillowElfCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAngelOfLightCard::CAngelOfLightCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Light"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCinderStormCard::CCinderStormCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Cinder Storm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("6") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-7),	// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CDakmorGhoulCard::CDakmorGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dakmor Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
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
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevoutMonkCard::CDevoutMonkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devout Monk"), CardType::Creature, CREATURE_TYPE3(Human, Monk, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinCommandoCard::CGoblinCommandoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Commando"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("4") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinSettlerCard::CGoblinSettlerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Settler"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGrimTutorCard::CGrimTutorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grim Tutor"), CardType::Sorcery, nID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
		CCardFilter::GetFilter(_T("cards")),
		ZoneId::Hand, TRUE, TRUE, FALSE));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRoyalFalconCard::CRoyalFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Royal Falcon"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CRoyalTrooperCard::CRoyalTrooperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Royal Trooper"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShriekingSpecterCard::CShriekingSpecterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shrieking Specter"), CardType::Creature, CREATURE_TYPE(Specter), nID,
		_T("5") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStreamOfAcidCard::CStreamOfAcidCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Stream of Acid"), CardType::Sorcery, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Creature | CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));
}

//____________________________________________________________________________
//
CThunderDragonCard::CThunderDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thunder Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-flying creatures")));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWillowElfCard::CWillowElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Willow Elf"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CChampionLancerCard::CChampionLancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Champion Lancer"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddPreventAllCombatDamage(FALSE);
}

//____________________________________________________________________________
//
