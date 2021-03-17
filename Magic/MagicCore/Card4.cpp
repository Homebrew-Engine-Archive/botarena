#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CPlaneswalkerCard::CPlaneswalkerCard(CGame* pGame, LPCTSTR strCardName, UINT uID,
					  LPCTSTR strCostText, 
					  const PlaneswalkerType& subtype, int nLoyaltyCounter,
					  CardType cardType, 
					  AbilityType abilityType)
	: CInPlaySpellCard(pGame, strCardName, cardType, uID, strCostText, abilityType)
	, m_Subtype(subtype)
	, m_pLoyaltyCounter(GetCounterContainer()->GetCounter(LOYALTY_COUNTER))
	, m_nLoyaltyCounter(nLoyaltyCounter)
	, m_bTurnAbilityUsed(FALSE)
{
	GetCounterContainer()->ScheduleCounter(LOYALTY_COUNTER, m_nLoyaltyCounter, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CPlaneswalkerCard::CanPlay)));
				this->GetSpells().GetAt(0)->Add(cpTrait.GetPointer());
}

CPlaneswalkerCard::~CPlaneswalkerCard()
{
}

const PlaneswalkerType& CPlaneswalkerCard::GetSubtype() const
{
	return m_Subtype;
}

Counter* CPlaneswalkerCard::GetLoyaltyCounter()
{
	return m_pLoyaltyCounter;
}

const Counter* CPlaneswalkerCard::GetLoyaltyCounter() const
{
	return m_pLoyaltyCounter;
}

void CPlaneswalkerCard::AddAbility(CAbility* pAbility)
{
	counted_ptr<CPlaneswalkerTrait> cpTrait(::CreateObject<CPlaneswalkerTrait>(pAbility));

	pAbility->Add(cpTrait.GetPointer());	
	pAbility->SetAbilityType((pAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);

	__super::AddAbility(pAbility);
}

int CPlaneswalkerCard::GetScore() const
{
	int nScore = __super::GetScore();

	/*
		For each loyalty counter: +600
	*/

	if (m_pGame && (!m_pGame->IsThinking() ||
		m_pGame->IsCardVisible(this)))
	{
		int nLoyaltyCounter = m_pLoyaltyCounter->GetCount();
		nScore += nLoyaltyCounter * 600;
	}

	return nScore;
}

void CPlaneswalkerCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{

	if (GetIsAlsoA() &&  (moveType == MoveType::Destroy || moveType == MoveType::DestroyWithoutRegeneration))
	{
		if ((GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructibleCreatures) || GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructiblePermanents) || GetIsAlsoA()->GetCardKeyword()->HasIndestructible()) && GetIsAlsoA()->GetCardType().IsCreature())
		return;
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	// Check for other planeswalker cards
	if (IsInplay())
		m_pGame->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);	
}

void CPlaneswalkerCard::ResetTurnPropertiesNoFlag()
{
	__super::ResetTurnPropertiesNoFlag();

	m_bTurnAbilityUsed = FALSE;
}

void CPlaneswalkerCard::ResetTurnProperties()
{
	__super::ResetTurnProperties();

	m_bTurnAbilityUsed = FALSE;
}

BOOL CPlaneswalkerCard::CanPlay(BOOL bIncludeTricks)
{
	if (!GetController()->IsComputer()) return true;

	CCardFilter cardfilter(new PlaneswalkerTypeComparer(m_Subtype));
	return cardfilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0;
}

//____________________________________________________________________________
//
CDoubleFacedPlaneswalkerCard::CDoubleFacedPlaneswalkerCard(CGame* pGame, LPCTSTR strCardName,  UINT uID,  LPCTSTR strCostText, const PlaneswalkerType& subtype, int nLoyaltyCounter,
										LPCTSTR nFlipCardName)
	: CPlaneswalkerCard(pGame, strCardName, uID, strCostText, subtype, nLoyaltyCounter)
	, m_strFlipCardName(nFlipCardName)
	, p_type(-1)
{
	SetDoubleNamed(TRUE);
}

void CDoubleFacedPlaneswalkerCard::Transform()
{
	GetOrientation()->IsSecondFaced() ? FirstFace() : SecondFace();
}

void CDoubleFacedPlaneswalkerCard::SecondFace()
{
	GetOrientation()->SecondFace();
	m_CardModifiers.ApplyTo(this);

	/*	for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
				pEnchantmentAbility->EndSecondaryEnchantment();

			if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
				pEnchantmentAbility->StartSecondaryEnchantment();
		}*/
}

void CDoubleFacedPlaneswalkerCard::FirstFace()
{
	GetOrientation()->FirstFace();
	m_CardModifiers.RemoveFrom(this);

	/*	for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
				pEnchantmentAbility->StartSecondaryEnchantment();

			if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
				pEnchantmentAbility->EndSecondaryEnchantment();
		}*/
}

CString CDoubleFacedPlaneswalkerCard::GetCardName(BOOL bIncludeDetails) const
{
	if (GetOrientation()->IsSecondFaced()) return this->GetPrintedCardName() + __super::GetCardName(bIncludeDetails).Mid(__super::GetOriginalPrintedCardName().GetLength());
	return __super::GetCardName(bIncludeDetails);
}

void CDoubleFacedPlaneswalkerCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	ZoneId fromZoneId = GetZoneId();
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (fromZoneId == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
			m_CardModifiers.RemoveFrom(this);

	/*if (pFromZone->GetZoneId() != ZoneId::Battlefield&&  pToZone->GetZoneId() == ZoneId::Battlefield && GetOrientation()->IsSecondFaced())
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
				pEnchantmentAbility->EndSecondaryEnchantment();

			if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
				pEnchantmentAbility->StartSecondaryEnchantment();
		}
	}*/

	/*if (pFromZone->GetZoneId() != ZoneId::Battlefield&&  pToZone->GetZoneId() == ZoneId::Battlefield && !GetOrientation()->IsSecondFaced())
	{
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			CAbility* pAbility = GetAbility(i);

			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if ( pEnchantmentAbility->GetAbilityName() == _T("First Face Enchantment"))
				pEnchantmentAbility->StartSecondaryEnchantment();

			if ( pEnchantmentAbility->GetAbilityName() == _T("Second Face Enchantment"))
				pEnchantmentAbility->EndSecondaryEnchantment();
		}
	}*/
}

BOOL CDoubleFacedPlaneswalkerCard::CanPlaySecondFace(BOOL bIncludeTricks) const
{
	return (GetOrientation()->IsSecondFaced() && !m_bTurnAbilityUsed);
}

BOOL CDoubleFacedPlaneswalkerCard::CanPlayFirstFace(BOOL bIncludeTricks) const
{
	return (!GetOrientation()->IsSecondFaced() && !m_bTurnAbilityUsed);
}

CString CDoubleFacedPlaneswalkerCard::GetPrintedCardName() const
{
	if (GetOrientation()->IsSecondFaced()) return m_strFlipCardName; 
	return __super::GetPrintedCardName();
}

CString CDoubleFacedPlaneswalkerCard::GetSecondPrintedCardName() const
{
	return m_strFlipCardName; 
}

DWORD CDoubleFacedPlaneswalkerCard::GetConvertedManaCost() const
{
	if (GetOrientation()->IsSecondFaced())
		return 0;
	return __super::GetConvertedManaCost();
}

DWORD CDoubleFacedPlaneswalkerCard::GetManaCost(CManaCostBase::Color manaCost, BOOL bMax)
{
	if (GetOrientation()->IsSecondFaced())
		return 0;
	return __super::GetManaCost(manaCost, bMax);
}

//____________________________________________________________________________
//