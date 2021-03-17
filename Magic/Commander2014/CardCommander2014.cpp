#include "stdafx.h"
#include "CardCommander2014.h"

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
		DEFINE_CARD(CCreeperhulkCard);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CCreeperhulkCard::CCreeperhulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Creeperhulk"), CardType::Creature, CREATURE_TYPE2(Plant, Elemental), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(0), Life(0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(5));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	CLifeModifier* pLifeModifier = new CLifeModifier;
	pLifeModifier->SetLifeDelta(Life(5));
	pLifeModifier->SetPreventable(PreventableType::NotPreventable);
	pLifeModifier->SetToBase(TRUE);
	pLifeModifier->SetReplacement(TRUE);
	pLifeModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//