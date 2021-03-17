#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CTargetChgLifeSpellCard::CTargetChgLifeSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
									 AbilityType abilityType,
									 LPCTSTR strCostText,
									 CardComparer* pComparer,
									 BOOL bTargetPlayer,
									 Life nLifeDelta,
									 PreventableType preventable)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, abilityType, strCostText, pComparer, bTargetPlayer,
			nLifeDelta, preventable));
	
	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell = cpSpell.GetPointer();

	AddSpell(m_pTargetChgLifeSpell);
}

//____________________________________________________________________________
//
CChgPwrTghAttrSpellCard::CChgPwrTghAttrSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
												 AbilityType abilityType,
												 LPCTSTR strCostText,
												 Power nPowerDelta, Life nLifeDelta,
												 CreatureKeyword creatureKeywordToAdd, CreatureKeyword creatureKeywordToRemove,
												 BOOL bThisTurnOnly,
												 PreventableType preventable,
												 CardComparer* pComparer)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, abilityType, strCostText,
			nPowerDelta, nLifeDelta,
			creatureKeywordToAdd, creatureKeywordToRemove,
			bThisTurnOnly,
			preventable,
			pComparer));

	m_pTargetChgPwrTghAttrSpell = cpSpell.GetPointer();

	AddSpell(m_pTargetChgPwrTghAttrSpell);
}

//____________________________________________________________________________
//
CGlobalChgLifeSpellCard::CGlobalChgLifeSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
												 AbilityType abilityType,
												 LPCTSTR strCostText,
												 Life nLifeDelta,
												 CardComparer* pComparer,
												 BOOL bAffectPlayer,
												 PreventableType preventable,
												 DamageType damageType)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CGlobalChgLifeSpell> cpSpell(
		::CreateObject<CGlobalChgLifeSpell>(this, abilityType, strCostText, nLifeDelta,
			pComparer, bAffectPlayer, preventable, damageType));

	m_pGlobalChgLifeSpell = cpSpell.GetPointer();

	AddSpell(m_pGlobalChgLifeSpell);
}

//____________________________________________________________________________
//
CInPlaySpellCard::CInPlaySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
								   LPCTSTR strCostText, AbilityType abilityType)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CSpell> cpSpell(
		::CreateObject<CSpell>(this, abilityType, strCostText, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDoubleFacedInPlaySpellCard::CDoubleFacedInPlaySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
									 LPCTSTR strCostText, LPCTSTR nFlipCardName, AbilityType abilityType)
	: CInPlaySpellCard(pGame, strCardName, cardType, uID, strCostText, abilityType)
	, m_strDFCardName(nFlipCardName)
{
	SetDoubleNamed(TRUE);
}

void CDoubleFacedInPlaySpellCard::Transform()
{
	GetOrientation()->IsSecondFaced() ? FirstFace() : SecondFace();
}

void CDoubleFacedInPlaySpellCard::SecondFace()
{
	GetOrientation()->SecondFace();

	m_CardModifiers.ApplyTo(this);

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

void CDoubleFacedInPlaySpellCard::FirstFace()
{
	GetOrientation()->FirstFace();

	m_CardModifiers.RemoveFrom(this);

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

CString CDoubleFacedInPlaySpellCard::GetCardName(BOOL bIncludeDetails) const
{
	if (GetOrientation()->IsSecondFaced()) return this->GetPrintedCardName() + __super::GetCardName(bIncludeDetails).Mid(__super::GetOriginalPrintedCardName().GetLength());
	return __super::GetCardName(bIncludeDetails);
}

void CDoubleFacedInPlaySpellCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	ZoneId fromZoneId = GetZoneId();
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (fromZoneId == ZoneId::Battlefield && pToZone->GetZoneId() != ZoneId::Battlefield)
	{
		m_CardModifiers.RemoveFrom(this);
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

BOOL CDoubleFacedInPlaySpellCard::CanPlaySecondFace(BOOL bIncludeTricks) const
{
	return (GetOrientation()->IsSecondFaced());
}

BOOL CDoubleFacedInPlaySpellCard::CanPlayFirstFace(BOOL bIncludeTricks) const
{
	return (!GetOrientation()->IsSecondFaced());
}

CString CDoubleFacedInPlaySpellCard::GetPrintedCardName() const
{
	if (GetOrientation()->IsSecondFaced()) return m_strDFCardName; 
	return __super::GetPrintedCardName();
}

CString CDoubleFacedInPlaySpellCard::GetSecondPrintedCardName() const
{
	return m_strDFCardName; 
}

DWORD CDoubleFacedInPlaySpellCard::GetConvertedManaCost() const
{
	if (GetOrientation()->IsSecondFaced())
		return 0;
	return __super::GetConvertedManaCost();
}

DWORD CDoubleFacedInPlaySpellCard::GetManaCost(CManaCostBase::Color manaCost, BOOL bMax)
{
	if (GetOrientation()->IsSecondFaced())
		return 0;
	return __super::GetManaCost(manaCost, bMax);
}

//____________________________________________________________________________
//
/*
CString CContainerEffectCard::GetCardName(BOOL bIncludeDetails) const
{
	if (pCards.GetSize() > 0)
	{
		CString pExtra = _T("(") + pCards.GetAt(0)->GetCardName(TRUE);

		for (int i = 1; i < pCards.GetSize(); ++i)
			pExtra = pExtra + _T(", ") + pCards.GetAt(i)->GetCardName(TRUE);

		pExtra = pExtra + _T(")");

		return __super::GetCardName(bIncludeDetails) + pExtra;
	}
	else return __super::GetCardName(bIncludeDetails);
}

//____________________________________________________________________________
//
CString CDoubleContainerEffectCard::GetCardName(BOOL bIncludeDetails) const
{
	if (pCards1.GetSize() > 0)
	{
		CString pExtra1 = _T("(") + pCards1.GetAt(0)->GetCardName(TRUE);

		for (int i = 1; i < pCards1.GetSize(); ++i)
			pExtra1 = pExtra1 + _T(", ") + pCards1.GetAt(i)->GetCardName(TRUE);

		pExtra1 = pExtra1 + _T(")");

		if (pCards2.GetSize() > 0)
		{
			CString pExtra2 = _T(", (") + pCards2.GetAt(0)->GetCardName(TRUE);

			for (int i = 1; i < pCards2.GetSize(); ++i)
				pExtra2 = pExtra2 + _T(", ") + pCards2.GetAt(i)->GetCardName(TRUE);

			pExtra2 = pExtra2 + _T(")");

			return __super::GetCardName(bIncludeDetails) + pExtra1 + pExtra2;
		}
		else
			return __super::GetCardName(bIncludeDetails) + pExtra1;
	}
	else if (pCards2.GetSize() > 0)
	{
		CString pExtra2 = _T("(), (") + pCards2.GetAt(0)->GetCardName(TRUE);

		for (int i = 1; i < pCards2.GetSize(); ++i)
			pExtra2 = pExtra2 + _T(", ") + pCards2.GetAt(i)->GetCardName(TRUE);

		pExtra2 = pExtra2 + _T(")");

		return __super::GetCardName(bIncludeDetails) + pExtra2;
	}
	else return __super::GetCardName(bIncludeDetails);
}
*/
//____________________________________________________________________________
//
CBasicLandCard::CBasicLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID,
							   LPCTSTR strPoolText, CardType landType)
	: CCard(pGame, strCardName, landType, uID)
{
	counted_ptr<CLandAbility> cpBasicLandAbility(::CreateObject<CLandAbility>(this));
	m_pBasicLandAbility = cpBasicLandAbility.GetPointer();
	ATLASSERT(m_pBasicLandAbility);

	AddAbility(m_pBasicLandAbility);

	counted_ptr<CManaProductionAbility> cpBasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T("Tap"), AbilityType::Activated, strPoolText));
	m_pBasicLandManaAbility = cpBasicLandManaAbility.GetPointer();
	ATLASSERT(m_pBasicLandManaAbility);

	m_pBasicLandManaAbility->AddTapCost();

	AddAbility(m_pBasicLandManaAbility);
}

//____________________________________________________________________________
//
CNonbasicLandCard::CNonbasicLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID, CardType cardType)
	: CBasicLandCard(pGame, strCardName, uID, _T(""), cardType)
{
	// Disable basic land type to support change of cardType; see CCard::OnCardTypeChanged()

	m_pBasicLandManaAbility->SetEnabled(FALSE);
}

//____________________________________________________________________________
//
CDualLandCard::CDualLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID, CardType landType,
							 LPCTSTR strPoolText1,
							 LPCTSTR strPoolText2)
	: CNonbasicLandCard(pGame, strCardName, uID, landType)
{
	

	counted_ptr<CManaProductionAbility> cpManaAbility1(::CreateObject<CManaProductionAbility>(this, _T("Tap"), AbilityType::Activated, strPoolText1));
	m_pManaAbility1 = cpManaAbility1.GetPointer();
	ATLASSERT(m_pManaAbility1);
	m_pManaAbility1->AddTapCost();
	AddAbility(m_pManaAbility1);

	counted_ptr<CManaProductionAbility> cpManaAbility2(::CreateObject<CManaProductionAbility>(this, _T("Tap"), AbilityType::Activated, strPoolText2));
	m_pManaAbility2 = cpManaAbility2.GetPointer();
	ATLASSERT(m_pManaAbility2);	
	m_pManaAbility2->AddTapCost();
	AddAbility(m_pManaAbility2);
}

//____________________________________________________________________________
//
CTargetMoveCardSpellCard::CTargetMoveCardSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
									   LPCTSTR strManaCost, AbilityType abilityType,
									   CardComparer* pComparer,
									   ZoneId fromZoneId, ZoneId toZoneId, BOOL bToOwner, MoveType moveType)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, abilityType, strManaCost,
						   pComparer, fromZoneId, toZoneId, bToOwner, moveType));

	m_pTargetMoveCardSpell = cpSpell.GetPointer();
	AddSpell(m_pTargetMoveCardSpell);
}

//____________________________________________________________________________
//
CSearchLibrarySpellCard::CSearchLibrarySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
												 LPCTSTR strManaCost, AbilityType abilityType,
												 const CCardFilter* pSearchCardFilter,
												 ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, abilityType, strManaCost,
			pSearchCardFilter, toZoneId, bToOwnersZone, bToTop, bTapped));

	m_pSearchLibrarySpell = cpSpell.GetPointer();

	AddSpell(m_pSearchLibrarySpell);
}

//____________________________________________________________________________
//
CChgPwrTghAttrEnchantCard::CChgPwrTghAttrEnchantCard(CGame* pGame, LPCTSTR strCardName, UINT uID,
													 LPCTSTR strCostText,
													 Power nPowerDelta, Life nLifeDelta,
													 CreatureKeyword creatureKeywordToAdd)
	: CCard(pGame, strCardName, CardType::EnchantCreature, uID)
{
	counted_ptr<CChgPwrTghAttrEnchant> cpSpell(
		::CreateObject<CChgPwrTghAttrEnchant>(this, strCostText,
			nPowerDelta, nLifeDelta,
			creatureKeywordToAdd));

	m_pChgPwrTghAttrEnchant = cpSpell.GetPointer();

	AddSpell(m_pChgPwrTghAttrEnchant);
}

//____________________________________________________________________________
//
CEnchantCard::CEnchantCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
							LPCTSTR strCostText,
							CardComparer* pComparer)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CEnchant> cpSpell(
		::CreateObject<CEnchant>(this,
			strCostText,
			pComparer));

	m_pEnchantSpell = cpSpell.GetPointer();

	AddSpell(m_pEnchantSpell);
}

//____________________________________________________________________________
//
CCounterSpellCard::CCounterSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
									 LPCTSTR strCostText, AbilityType abilityType,
									 CardComparer* pComparer)
	: CCard(pGame, strCardName, cardType, uID)
{
	counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, abilityType, strCostText, pComparer));

	m_pCounterSpell = cpSpell.GetPointer();

	AddSpell(m_pCounterSpell);
}
//____________________________________________________________________________
//
CTribalCard::CTribalCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
												 const CreatureType& creatureType)
	: CCard(pGame, strCardName, cardType | CardType::Tribal, uID)
	, m_CreatureType(creatureType)
{
}

const CreatureType_& CTribalCard::GetCreatureType() const
{
	return m_CreatureType;
}

CreatureType_& CTribalCard::GetCreatureType()
{
    return m_CreatureType;
}
//____________________________________________________________________________
//
CInPlayTribalSpellCard::CInPlayTribalSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
								   LPCTSTR strCostText, AbilityType abilityType, const CreatureType& creatureType)
	: CTribalCard(pGame, strCardName, cardType, uID, creatureType)
{
	counted_ptr<CSpell> cpSpell(
		::CreateObject<CSpell>(this, abilityType, strCostText, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CVanguardCard::CVanguardCard(CGame* pGame, LPCTSTR strCardName, UINT uID, 
							int pHandModifier, int pStartingLifeModifier)
: CCard(pGame, strCardName, CardType::Vanguard, uID)
	, m_pHandModifier(pHandModifier)
	, m_pStartingLifeModifier(pStartingLifeModifier)
{
}
//____________________________________________________________________________
//
CSchemeCard::CSchemeCard(CGame* pGame, LPCTSTR strCardName, UINT uID)
: CCard(pGame, strCardName, CardType::Scheme, uID)
{
}
void CSchemeCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	if (pToZone->GetZoneId() == ZoneId::_Tokens) 
		__super::Move(GetController()->GetZoneById(ZoneId::_Schemes), pByPlayer, moveType, CardPlacement::Bottom, can_dredge);
	
	else

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CPlaneCard::CPlaneCard(CGame* pGame, LPCTSTR strCardName, const PlaneType& subtype, UINT uID)
: CCard(pGame, strCardName, CardType::Plane, uID)
,m_Subtype(subtype)
{
	GetCardKeyword()->AddEmblem(FALSE);
}
void CPlaneCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	if (pToZone->GetZoneId() == ZoneId::_Tokens) 
		__super::Move(GetController()->GetZoneById(ZoneId::_Planes), pByPlayer, moveType, CardPlacement::Bottom, can_dredge);
	
	else

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (this->GetZoneId() == ZoneId::_Effects) this->GetOrientation()->Tap();
}

//____________________________________________________________________________
//