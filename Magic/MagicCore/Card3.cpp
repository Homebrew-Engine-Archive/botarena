#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CTargetChgLifeTCreatureCard::CTargetChgLifeTCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
											 LPCTSTR strCostText, Power nPower, Life nToughness,
											 LPCTSTR strChgLifeCost,
											 CardComparer* pComparer,
											 BOOL bTargetPlayer,
											 Life nLifeDelta,
											 PreventableType preventable)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, strChgLifeCost, pComparer, bTargetPlayer,
			nLifeDelta, preventable));

	m_pTargetChgLifeAbility = cpAbility.GetPointer();
	ATLASSERT(m_pTargetChgLifeAbility);

	m_pTargetChgLifeAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeAbility->AddTapCost();

	AddAbility(m_pTargetChgLifeAbility);
}

//____________________________________________________________________________
//
CPumpCreatureCard::CPumpCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 LPCTSTR strPumpCost,
									 Power nPowerDelta, Life nLifeDelta,
									 CreatureKeyword creatureKeywordToAdd)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	counted_ptr<CPumpAbility> cpAbility1(
		::CreateObject<CPumpAbility>(this, strPumpCost, nPowerDelta, nLifeDelta, creatureKeywordToAdd));
	ATLASSERT(cpAbility1);

	m_pPumpAbility = cpAbility1.GetPointer();

	AddAbility(m_pPumpAbility);
}

//____________________________________________________________________________
//

CRegenerationCreatureCard::CRegenerationCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
													 LPCTSTR strCostText, Power nPower, Life nToughness,
													 LPCTSTR strRegenerateCost)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	counted_ptr<CRegenerationAbility> cpAbility1(
		::CreateObject<CRegenerationAbility>(this, strRegenerateCost));
	ATLASSERT(cpAbility1);

	m_pRegenerationAbility = cpAbility1.GetPointer();

	AddAbility(m_pRegenerationAbility);
}

//____________________________________________________________________________
//
CFirstStrikeCreatureCard::CFirstStrikeCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
												   LPCTSTR strCostText, Power nPower, Life nToughness)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CFlyingCreatureCard::CFlyingCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
										 LPCTSTR strCostText, Power nPower, Life nToughness)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CHasteCreatureCard::CHasteCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									   LPCTSTR strCostText, Power nPower, Life nToughness)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	GetCreatureKeyword()->AddHaste(FALSE);

//	CAttackAbility* pAbility1 = (CAttackAbility*)GetAbility(_T("Attack"));
//	CTrait* pTrait1 = pAbility1->RemoveTraitById(BOT_CONTROLLER_TRAIT);
//	delete pTrait1;
}

//____________________________________________________________________________
//
CLandwalkCreatureCard::CLandwalkCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
											 LPCTSTR strCostText, Power nPower, Life nToughness,
											 CreatureKeyword landwalk)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	GetCreatureKeyword()->AddLandwalk(landwalk, FALSE);
}

//____________________________________________________________________________
//
CUnblockableCreatureCard::CUnblockableCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
												   LPCTSTR strCostText, Power nPower, Life nToughness)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	GetCreatureKeyword()->AddUnblockable(FALSE);
}

//____________________________________________________________________________
//
CManaProductionTCreatureCard::CManaProductionTCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
											   LPCTSTR strCostText, Power nPower, Life nToughness,
											   LPCTSTR strPoolText)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	counted_ptr<CManaProductionAbility> cpAbility1(
		::CreateObject<CManaProductionAbility>(this, _T("Tap"), AbilityType::Activated, strPoolText));

	cpAbility1->AddTapCost();

	AddAbility(cpAbility1.GetPointer());
}

//____________________________________________________________________________
//
CFearCreatureCard::CFearCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 const CCardFilter* pUnblockableCreatures)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
{
	GetCreatureKeyword()->AddUnblockable(FALSE, pUnblockableCreatures);
}
//____________________________________________________________________________
//

CDevourCreatureCard::CDevourCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 const CCardFilter* pDevourFilter)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	, m_nDevouredCount(0)
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("devour"), (CCardFilter*)pDevourFilter);
}

void CDevourCreatureCard::SetDevouredCount(int nDevouredCount)
{
	m_nDevouredCount = nDevouredCount;
}

int CDevourCreatureCard::GetDevouredCount() const
{
	return m_nDevouredCount;
}

//____________________________________________________________________________
//
CChancellorCreatureCard::CChancellorCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
										 LPCTSTR strCostText, Power nPower, Life nToughness)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	, bIsRevealed(FALSE)
{
}

void CChancellorCreatureCard::RevealAtBeginning()
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), EffectName, EffectUID, 1, FALSE, ZoneId::_Effects);
	pModifier.ApplyTo(GetController());

	bIsRevealed = TRUE;
}

//____________________________________________________________________________
//
CFlipCreatureCard::CFlipCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 Power nPower2, Life nToughness2, LPCTSTR nFlipCardName)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	, m_strFlipCardName(nFlipCardName)
{
	m_nPowerDelta = nPower2 - nPower;
	m_nLifeDelta = nToughness2 - nToughness;

	b_AddLegendary = !(GetCardType() & CardType::Legendary).Any();

	SetDoubleNamed(TRUE);
}

void CFlipCreatureCard::Flip()
{
	GetOrientation()->Flip();

	IncreasePermanentPower(m_nPowerDelta, TRUE);
	IncreasePower(m_nPowerDelta, TRUE);

	IncreasePermanentLife(m_nLifeDelta, TRUE);
	ChangeLife(Damage(this, m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage), TRUE);

	if (b_AddLegendary)	AddCardType(CardType::Legendary, CardType::Null, CardTypeEntry::Temporary);
	GetGame()->AddStatebasedHint(CGame::StatebasedHint::LegendaryCards);

	m_CardModifiers.ApplyTo(this);
	m_CreatureModifiers.ApplyTo(this);
}

CString CFlipCreatureCard::GetCardName(BOOL bIncludeDetails) const
{
	if (GetOrientation()->IsFlipped()) return this->GetPrintedCardName() + __super::GetCardName(bIncludeDetails).Mid(__super::GetOriginalPrintedCardName().GetLength());
	return __super::GetCardName(bIncludeDetails);
}

void CFlipCreatureCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	ZoneId fromZoneId = GetZoneId();
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (fromZoneId == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	{
		m_CardModifiers.RemoveFrom(this);
		m_CreatureModifiers.RemoveFrom(this);
	}
}

BOOL CFlipCreatureCard::CanPlayFlipped(BOOL bIncludeTricks)
{
	return (GetOrientation()->IsFlipped());
}

BOOL CFlipCreatureCard::CanPlayUnflipped(BOOL bIncludeTricks)
{
	return (!GetOrientation()->IsFlipped());
}

CString CFlipCreatureCard::GetPrintedCardName() const
{
	if (GetOrientation()->IsFlipped()) return m_strFlipCardName; 
	return __super::GetPrintedCardName();
}

CString CFlipCreatureCard::GetSecondPrintedCardName() const
{
	return m_strFlipCardName; 
}

//____________________________________________________________________________
//
CDoubleFacedCreatureCard::CDoubleFacedCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 Power nPower2, Life nToughness2, LPCTSTR nFlipCardName)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	, m_strDFCardName(nFlipCardName)
{
	m_nPowerDelta = nPower2 - nPower;
	m_nLifeDelta = nToughness2 - nToughness;

	SetDoubleNamed(TRUE);
}

void CDoubleFacedCreatureCard::Transform()
{
	GetOrientation()->IsSecondFaced() ? FirstFace() : SecondFace();
}

void CDoubleFacedCreatureCard::SecondFace()
{
	GetOrientation()->SecondFace();

	IncreasePermanentPower(m_nPowerDelta, TRUE);
	IncreasePower(m_nPowerDelta, TRUE);

	IncreasePermanentLife(m_nLifeDelta, TRUE);
	ChangeLife(Damage(this, m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage), TRUE);

	m_CardModifiers.ApplyTo(this);
	m_CreatureModifiers.ApplyTo(this);

	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CAbility* pAbility = GetAbility(i);

		CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
		if (!pEnchantmentAbility) 
			continue;
		if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
			pEnchantmentAbility->EndEnchantment();

		if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
			pEnchantmentAbility->StartEnchantment();
	}

	CSpecialEffectModifier modifier(this, TRANSFORM_TRIGGER_ID);
	modifier.ApplyTo(this);
}

void CDoubleFacedCreatureCard::FirstFace()
{
	GetOrientation()->FirstFace();

	DecreasePermanentPower(m_nPowerDelta, TRUE);
	DecreasePower(m_nPowerDelta, TRUE);

	DecreasePermanentLife(m_nLifeDelta, TRUE);
	ChangeLife(Damage(this, -m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage), TRUE);

	m_CardModifiers.RemoveFrom(this);
	m_CreatureModifiers.RemoveFrom(this);

	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CAbility* pAbility = GetAbility(i);

		CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
		if (!pEnchantmentAbility) 
			continue;
		if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
			pEnchantmentAbility->StartEnchantment();

		if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
			pEnchantmentAbility->EndEnchantment();
	}

	CSpecialEffectModifier modifier(this, TRANSFORM_TRIGGER_ID);
	modifier.ApplyTo(this);
}

CString CDoubleFacedCreatureCard::GetCardName(BOOL bIncludeDetails) const
{
	if (GetOrientation()->IsSecondFaced()) return this->GetPrintedCardName() + __super::GetCardName(bIncludeDetails).Mid(__super::GetOriginalPrintedCardName().GetLength());
	return __super::GetCardName(bIncludeDetails);
}

void CDoubleFacedCreatureCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	ZoneId fromZoneId = GetZoneId();
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (fromZoneId == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	{
		m_CardModifiers.RemoveFrom(this);
		m_CreatureModifiers.RemoveFrom(this);
	}

	if (fromZoneId != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && GetOrientation()->IsSecondFaced())
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
				pEnchantmentAbility->EndEnchantment();

			if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
				pEnchantmentAbility->StartEnchantment();
		}
	}

	if (fromZoneId != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && !GetOrientation()->IsSecondFaced())
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
				pEnchantmentAbility->StartEnchantment();

			if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
				pEnchantmentAbility->EndEnchantment();
		}
	}
}

BOOL CDoubleFacedCreatureCard::CanPlaySecondFace(BOOL bIncludeTricks) const
{
	return (GetOrientation()->IsSecondFaced());
}

BOOL CDoubleFacedCreatureCard::CanPlayFirstFace(BOOL bIncludeTricks) const
{
	return (!GetOrientation()->IsSecondFaced());
}

CString CDoubleFacedCreatureCard::GetPrintedCardName() const
{
	if (GetOrientation()->IsSecondFaced()) return m_strDFCardName; 
	return __super::GetPrintedCardName();
}

CString CDoubleFacedCreatureCard::GetSecondPrintedCardName() const
{
	return m_strDFCardName; 
}

DWORD CDoubleFacedCreatureCard::GetConvertedManaCost() const
{
	if (GetOrientation()->IsSecondFaced())
		return 0;
	return __super::GetConvertedManaCost();
}

DWORD CDoubleFacedCreatureCard::GetManaCost(CManaCostBase::Color manaCost, BOOL bMax)
{
	if (GetOrientation()->IsSecondFaced())
		return 0;
	return __super::GetManaCost(manaCost, bMax);
}

//____________________________________________________________________________
//
CMorphCreatureCard::CMorphCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness, LPCTSTR unMorphstrCardName)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	, m_strMorphCardName(_T("Morph"))
	, p_type(-1)
	, m_number(0)
{
	m_nPowerDelta = nPower - Power(2);
	m_nLifeDelta = nToughness - Life(2);

	SetDoubleNamed(TRUE);

	{
		counted_ptr<CSpell> cpSpell(
			::CreateObject<CSpell>(this, AbilityType::Creature, _T("3"), TRUE));

		cpSpell->SetMorph();

		AddSpell(cpSpell.GetPointer());
	}
	{			
		counted_ptr<CMorphAbility1> cpAbility(::CreateObject<CMorphAbility1>(this, unMorphstrCardName));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorphCreatureCard::CanPlayMorph)));
  
		cpAbility->Add(cpTrait.GetPointer());

		m_nMorphAbility = cpAbility.GetPointer();
		AddAbility(cpAbility.GetPointer());
	}
	
	m_number = 0;
}

void CMorphCreatureCard::AddCreatureType(SingleCreatureType pType)
{
	CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(pType, TRUE);
	m_CreatureModifiers.Add(pModifier);
}

void CMorphCreatureCard::AddCardKeyword(CardKeyword pKeyword)
{
	CCardKeywordModifier* pModifier = new CCardKeywordModifier(pKeyword, TRUE, FALSE);
	m_CardModifiers.Add(pModifier);
}

void CMorphCreatureCard::AddCreatureKeyword(CreatureKeyword pKeyword)
{
	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier(pKeyword, TRUE, FALSE);
	m_CreatureModifiers.Add(pModifier);
}

void CMorphCreatureCard::Morph()
{
	GetOrientation()->Morph();

	DecreasePermanentPower(m_nPowerDelta, TRUE);
	DecreasePower(m_nPowerDelta, TRUE);

	DecreasePermanentLife(m_nLifeDelta, TRUE);
	ChangeLife(Damage(this, -m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage), TRUE);

	p_type = this->AddCardType(CardType::Creature, CardType::_All, CardTypeEntry::Temporary);
	m_pGame->IncreaseGameMorphNumber();
	m_number = m_pGame->GetGameMorphNumber();

	if (GetZoneId() == ZoneId::Battlefield)
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if (pEnchantmentAbility->GetAbilityName() == _T("Morph Enchantment"))
				pEnchantmentAbility->EndEnchantment();
		}
}

void CMorphCreatureCard::RevertMorph()
{
	GetOrientation()->UnMorph();

	IncreasePermanentPower(m_nPowerDelta, TRUE);
	IncreasePower(m_nPowerDelta, TRUE);

	IncreasePermanentLife(m_nLifeDelta, TRUE);
	ChangeLife(Damage(this, m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage), TRUE);

	RemoveCardType(p_type);
	m_pGame->AddStatebasedHint(CGame::StatebasedHint::LegendaryCards);

	m_CardModifiers.ApplyTo(this);
	m_CreatureModifiers.ApplyTo(this);

	if (GetZoneId() == ZoneId::Battlefield)
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("Morph Enchantment"))
				pEnchantmentAbility->StartEnchantment();
		}
}

void CMorphCreatureCard::UnMorph()
{
	RevertMorph();
	CSpecialEffectModifier modifier(this, UNMORPH_TRIGGER_ID);
	modifier.ApplyTo(this);
}

CString CMorphCreatureCard::GetCardName(BOOL bIncludeDetails) const
{
	if (GetOrientation()->IsMorphed())
	{
		int k = m_number;  // Needed for getting correct text from int, because of int_ doesn't convert to string properly
		CString strTemp;
		strTemp.Format(_T("%d"), k);
		return this->GetPrintedCardName() + strTemp;
	}

	return __super::GetCardName(bIncludeDetails);
}

void CMorphCreatureCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	ZoneId fromZoneId = GetZoneId();
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if ((fromZoneId & (ZoneId::Battlefield | ZoneId::Stack)).Any() && !(pToZone->GetZoneId() & (ZoneId::Battlefield | ZoneId::Stack)).Any()
		&& GetOrientation()->IsMorphed())
	{
		RevertMorph();
	}

	if (fromZoneId == ZoneId::Stack && pToZone->GetZoneId() == ZoneId::Battlefield && GetOrientation()->IsMorphed())
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) continue;

			if ( pEnchantmentAbility->GetAbilityName() == _T("Morph Enchantment"))
				pEnchantmentAbility->EndEnchantment();
		}
	}
}

BOOL CMorphCreatureCard::CanPlayMorph(BOOL bIncludeTricks)
{
	return (GetOrientation()->IsMorphed());
}

BOOL CMorphCreatureCard::CanPlayUnMorph(BOOL bIncludeTricks)
{
	return (!GetOrientation()->IsMorphed());
}

CString CMorphCreatureCard::GetPrintedCardName() const
{
	if (GetOrientation()->IsMorphed()) return m_strMorphCardName; 
	return __super::GetPrintedCardName();
}

CString CMorphCreatureCard::GetSecondPrintedCardName() const
{
	return m_strMorphCardName; 
}

CString CMorphCreatureCard::GetSecondCardName(BOOL bIncludeDetails) const
{
	return m_strMorphCardName + __super::GetCardName(bIncludeDetails).Mid(__super::GetPrintedCardName().GetLength());	
}

DWORD CMorphCreatureCard::GetConvertedManaCost() const
{
	if (GetOrientation()->IsMorphed())
		return 0;
	return __super::GetConvertedManaCost();
}

DWORD CMorphCreatureCard::GetManaCost(CManaCostBase::Color manaCost, BOOL bMax)
{
	if (GetOrientation()->IsMorphed())
		return 0;

	return __super::GetManaCost(manaCost, bMax);
}

//____________________________________________________________________________
//