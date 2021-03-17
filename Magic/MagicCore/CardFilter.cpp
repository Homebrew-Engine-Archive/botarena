#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
bool CardNameComparer::operator()(const CCard* pCard) const
{
	if (pCard->GetOrientation()->IsMorphed()) return false;
	return m_strPrintedCardName == pCard->GetPrintedCardName();
}

//____________________________________________________________________________
//
bool PlaneswalkerTypeComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsPlaneswalker()) return false;
	const CPlaneswalkerCard* pPlaneswalkerCard = dynamic_cast<CPlaneswalkerCard*>(const_cast<CCard*>(pCard));
	if (!pPlaneswalkerCard) return false;

	return pPlaneswalkerCard->GetSubtype() == m_PlaneswalkerType;
}

//____________________________________________________________________________
//
bool PlaneTypeComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsPlane()) return false;
	const CPlaneCard* pPlaneCard = dynamic_cast<CPlaneCard*>(const_cast<CCard*>(pCard));
	if (!pPlaneCard) return false;

	return pPlaneCard->GetPlaneType() == m_PlaneType;
}

//____________________________________________________________________________
//
bool ContainedinComparer::operator()(const CCard* pCard) const
{
	for (int j = 0; j < m_pContained->GetSize(); ++j)
	{
         if (m_pContained->GetAt(j) == pCard) return true;
	}
	return false;
}

//____________________________________________________________________________
//
bool LeylineCardNameComparer::operator()(const CCard* pCard) const
{
	return (_T("Leyline of Anticipation") == pCard->GetPrintedCardName() ||
		   _T("Leyline of Lifeforce") == pCard->GetPrintedCardName() ||
		   _T("Leyline of Lightning") == pCard->GetPrintedCardName() ||
		   _T("Leyline of Punishment") == pCard->GetPrintedCardName() ||
		   _T("Leyline of Sanctity") == pCard->GetPrintedCardName() ||
		   _T("Leyline of Singularity") == pCard->GetPrintedCardName() ||
		   _T("Leyline of Vitality") == pCard->GetPrintedCardName() ||
		   _T("Leyline of the Meek") == pCard->GetPrintedCardName() ||
		   _T("Leyline of the Void") == pCard->GetPrintedCardName())
		;
}

//____________________________________________________________________________
//
bool ChancellorCardNameComparer::operator()(const CCard* pCard) const
{
	return (_T("Chancellor of the Annex") == pCard->GetPrintedCardName() ||
		   _T("Chancellor of the Dross") == pCard->GetPrintedCardName() ||
		   _T("Chancellor of the Forge") == pCard->GetPrintedCardName() ||
		   _T("Chancellor of the Spires") == pCard->GetPrintedCardName() ||
		   _T("Chancellor of the Tangle") == pCard->GetPrintedCardName())
		;
}

//____________________________________________________________________________
//
bool PhasingCardNameComparer::operator()(const CCard* pCard) const
{
	return (_T("Breezekeeper") == pCard->GetPrintedCardName() ||
		   _T("Ertai's Familiar") == pCard->GetPrintedCardName() ||
		   _T("Katabatic Winds") == pCard->GetPrintedCardName() ||
		   _T("Merfolk Raiders") == pCard->GetPrintedCardName() ||
		   _T("Sandbar Corcodile") == pCard->GetPrintedCardName() ||
		   _T("Shimmering Efreet") == pCard->GetPrintedCardName() ||
		   _T("Taniwha") == pCard->GetPrintedCardName() ||
		   _T("Teferi's Drake") == pCard->GetPrintedCardName() ||
		   _T("Teferi's Imp") == pCard->GetPrintedCardName() ||
		   _T("Teferi's Isle") == pCard->GetPrintedCardName() ||
		   _T("Tolarian Drake") == pCard->GetPrintedCardName() ||
		   _T("Warping Wurm") == pCard->GetPrintedCardName() ||
		   _T("Cloak of Invisibility") == pCard->GetPrintedCardName() ||
		   _T("Shimmer") == pCard->GetPrintedCardName() ||
		   _T("Teferi's Curse") == pCard->GetPrintedCardName() ||
		   _T("Spatial Binding") == pCard->GetPrintedCardName() ||
		   _T("Time and Tide") == pCard->GetPrintedCardName() ||
		   _T("Crystal Golem") == pCard->GetPrintedCardName() ||
		   _T("Dream Fighter") == pCard->GetPrintedCardName() ||
		   _T("Equipoise") == pCard->GetPrintedCardName() ||
		    _T("Frenetic Efreet") == pCard->GetPrintedCardName() ||
		   _T("Mist Dragon") == pCard->GetPrintedCardName() ||
		   _T("Rainbow Efreet") == pCard->GetPrintedCardName() ||
		   _T("Reality Ripple") == pCard->GetPrintedCardName() ||
		   _T("Teferi's Honor Guard") == pCard->GetPrintedCardName() ||
		    _T("Teferi's Realm") == pCard->GetPrintedCardName() ||
		   _T("Teferi's Veil") == pCard->GetPrintedCardName() ||
		   _T("Vanishing") == pCard->GetPrintedCardName() ||
		   _T("Vaporous Djinn") == pCard->GetPrintedCardName() ||
		   _T("Vision Charm") == pCard->GetPrintedCardName() ||
		    _T("Vodalian Illusionist") == pCard->GetPrintedCardName())
		;
}

//____________________________________________________________________________
//
bool IndirectPhasingComparer::operator()(const CCard* pCard) const
{
	if ((pCard->GetCardType() & CardType::_Aura).Any())
	{
		CCard* tempCard;
		for (int i = 0; i < 1000; ++i)
		{
			tempCard = pCard->GetEnchantedOn();
			if (!tempCard) return FALSE;
			if (tempCard->GetCardKeyword()->HasPhasing()) return TRUE;
			
		}
	}
	return FALSE;

	if ((pCard->GetCardType() & CardType::Equipment).Any())
	{
		CCard* tempCard;
		for (int i = 0; i < 1000; ++i)
		{
			tempCard = pCard->GetEquippedOn();
			if (!tempCard) return FALSE;
			if (tempCard->GetCardKeyword()->HasPhasing()) return TRUE;
			
		}
	}
	return FALSE;
}

//____________________________________________________________________________
//
CardTypeComparer::CardTypeComparer(CardType cardType, bool bStrict)
	: m_CardType(cardType)
	, m_bStrict(bStrict)
{
}

bool CardTypeComparer::operator()(const CCard* pCard) const
{
	CardType cardType = pCard->GetCardType();

	if (m_bStrict)
		return (cardType & m_CardType) == m_CardType;

	return (cardType & m_CardType).Any();
}

//____________________________________________________________________________
//
AlsoCardTypeComparer::AlsoCardTypeComparer(CardType cardType, bool bStrict)
	: m_CardType(cardType)
	, m_bStrict(bStrict)
{
}

bool AlsoCardTypeComparer::operator()(const CCard* pCard) const
{
	CardType cardType1;
	CardType cardType2;
	if (pCard->GetIsAlsoA())  
	{
		cardType1 = pCard->GetIsAlsoA()->GetCardType();
	
	}
	if (pCard->GetIsAlsoOf()) 
	{ 
		cardType2 = pCard->GetIsAlsoOf()->GetCardType();
	}
	if (m_bStrict)
		return (  (pCard->GetIsAlsoA() && (cardType1 & m_CardType) == m_CardType)  || (pCard->GetIsAlsoOf() &&(cardType2 & m_CardType) == m_CardType));

	return ( (pCard->GetIsAlsoA() && (cardType1 & m_CardType).Any()) || (pCard->GetIsAlsoOf() && (cardType2 & m_CardType).Any()));
}

//____________________________________________________________________________
//
CardZoneComparer::CardZoneComparer(ZoneId zones)
	: m_Zones(zones)
{
}

bool CardZoneComparer::operator()(const CCard* pCard) const
{
	const CZone* pZone = pCard->GetZone();
	if (!pZone)
		return false;
	
	return (pZone->GetZoneId() & m_Zones).Any();
}

//____________________________________________________________________________
//
CardPresentinHistoryComparer::CardPresentinHistoryComparer(ZoneId toZone, ZoneId fromZone)
	: m_toZones(toZone)
	, m_fromZones(fromZone)
{
}

bool CardPresentinHistoryComparer::operator()(const CCard* pCard) const
{
	return pCard->GetOwner()->IsCertainCardPresentInHistory(const_cast<CCard*>(pCard), m_toZones, m_fromZones);
}

//____________________________________________________________________________
//
CardOwnerComparer::CardOwnerComparer(const CPlayer* pPlayer)
	: m_pPlayer(pPlayer)
	, m_pCard(NULL)
{
}

CardOwnerComparer::CardOwnerComparer(const CCard* pCard)
	: m_pPlayer(NULL)
	, m_pCard(pCard)
{
}

bool CardOwnerComparer::operator()(const CCard* pCard) const
{
	if (m_pPlayer)
		return pCard->GetOwner() == m_pPlayer;

	return m_pCard->GetController() == pCard->GetOwner();
}

//____________________________________________________________________________
//
CardControllerComparer::CardControllerComparer(const CPlayer* pPlayer)
	: m_pPlayer(pPlayer)
	, m_pCard(NULL)
{
}

CardControllerComparer::CardControllerComparer(const CCard* pCard)
	: m_pPlayer(NULL)
	, m_pCard(pCard)
{
}

bool CardControllerComparer::operator()(const CCard* pCard) const
{
	if (m_pPlayer)
		return pCard->GetController() == m_pPlayer;

	return m_pCard->GetController() == pCard->GetController();
}

//____________________________________________________________________________
//
bool AnyCreatureComparer::operator()(const CCard* pCard) const
{
	return pCard->GetCardType().IsCreature();
}

//____________________________________________________________________________
//
bool FaceDownMorphComparer::operator()(const CCard* pCard) const
{
	return pCard->GetOrientation()->IsMorphed() == TRUE;
}

//____________________________________________________________________________
//
CreatureTypeComparer::CreatureTypeComparer(const CreatureType& creatureType, bool bStrict)
	: m_CreatureType(creatureType)
	, m_bStrict(bStrict)
{
}

bool CreatureTypeComparer::operator()(const CCard* pCard) const
{
	if (pCard->GetCardType().IsCreature())
	{
		const CCreatureCard* pCreatureCard = (const CCreatureCard*)pCard;

		if (pCreatureCard->GetCardKeyword()->HasChangeling())
			return true;

		if (m_bStrict)
			return (pCreatureCard->GetCreatureType() & m_CreatureType) == m_CreatureType;

		return (pCreatureCard->GetCreatureType() & m_CreatureType).GetSize() > 0;
	}

	if (pCard->GetCardType().IsTribal())
	{
		const CTribalCard* pTribalCard = (const CTribalCard*)pCard;

		if (pTribalCard->GetCardKeyword()->HasChangeling())
			return true;

		if (m_bStrict)
			return (pTribalCard->GetCreatureType() & m_CreatureType) == m_CreatureType;

		return (pTribalCard->GetCreatureType() & m_CreatureType).GetSize() > 0;
	}
	
	return false;
}

//____________________________________________________________________________
//
bool LeastPowerCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	for (int i = 0; i < pCard->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pCard->GetGame()->GetPlayer(i);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CCard* pCard1 = pInplay->GetAt(j);
			if (pCard1->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard1 = (CCreatureCard*)pCard1;
				if (GET_INTEGER(pCreatureCard1->GetLastKnownPower()) < GET_INTEGER(((CCreatureCard*)pCard)->GetLastKnownPower()))
					return false;
			}
		}
	}
	return true;
}

//____________________________________________________________________________
//
SpecificCardComparer::SpecificCardComparer(const CCard* pCard1, const CCard* pCard2)
	: m_pCard1(pCard1)
	, m_pCard2(pCard2)
{
}

bool SpecificCardComparer::operator()(const CCard* pCard) const
{
	return (m_pCard1 && m_pCard1 == pCard) || (m_pCard2 && m_pCard2 == pCard);
}

//____________________________________________________________________________
//
bool AttackingCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);
	return pCreature->IsAttacking();
}

//____________________________________________________________________________
//
bool BlockingCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);
	return pCreature->IsBlocking();
}

//____________________________________________________________________________
//
bool BlockedCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);
	return pCreature->IsBlocked();
}

//____________________________________________________________________________
//
bool AttackingBlockingCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);
	return (pCreature->IsAttacking() || pCreature->IsBlocking());
}

//____________________________________________________________________________
//
bool BlockingThisCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);
	return pCreature->IsBlocking(m_pCreatureCard);
}

//____________________________________________________________________________
//
bool AttackingThisCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	return pCreature->IsAttacking(m_pCreatureCard);
}

//____________________________________________________________________________
//
bool AttackingBlockingThisCreatureComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	return pCreature->IsBlocking(m_pCreatureCard) || pCreature->IsAttacking(m_pCreatureCard);
}

//____________________________________________________________________________
//
bool TappedComparer::operator()(const CCard* pCard) const
{
	return pCard->GetOrientation()->IsTapped() ? true : false;
}

//____________________________________________________________________________
//
bool UntappedComparer::operator()(const CCard* pCard) const
{
	return pCard->GetOrientation()->IsUntapped() ? true : false;
}

//____________________________________________________________________________
//
bool FlippedComparer::operator()(const CCard* pCard) const
{
	return pCard->GetOrientation()->IsFlipped() ? true : false;
}

//____________________________________________________________________________
//
bool UnflippedComparer::operator()(const CCard* pCard) const
{
	return pCard->GetOrientation()->IsFlipped() ? false : true;
}

//____________________________________________________________________________
//
CardKeywordComparer::CardKeywordComparer(CardKeyword cardKeyword, bool bStrict)
	: m_CardKeyword(cardKeyword)
	, m_bStrict(bStrict)
{
}

bool CardKeywordComparer::operator()(const CCard* pCard) const
{
	if (m_bStrict)
		return (m_CardKeyword & pCard->GetCardKeyword()->Get()) == m_CardKeyword;

	return (m_CardKeyword & pCard->GetCardKeyword()->Get()).Any();
}

//____________________________________________________________________________
//
CardReplacementKeywordComparer::CardReplacementKeywordComparer(ReplacementKeyword cardKeyword, bool bStrict)
	: m_CardKeyword(cardKeyword)
	, m_bStrict(bStrict)
{
}

bool CardReplacementKeywordComparer::operator()(const CCard* pCard) const
{
	if (m_bStrict)
		return (m_CardKeyword & pCard->GetReplacementKeyword()->Get()) == m_CardKeyword;

	return (m_CardKeyword & pCard->GetReplacementKeyword()->Get()).Any();
}

//____________________________________________________________________________
//
CreatureKeywordComparer::CreatureKeywordComparer(CreatureKeyword creatureKeyword, bool bStrict)
	: m_CreatureKeyword(creatureKeyword)
	, m_bStrict(bStrict)
{
}

bool CreatureKeywordComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	if (m_bStrict)
		return (m_CreatureKeyword & pCreature->GetCreatureKeyword()->Get()) == m_CreatureKeyword;

	return (m_CreatureKeyword & pCreature->GetCreatureKeyword()->Get()).Any();
}

//____________________________________________________________________________
//
CardFlagComparer::CardFlagComparer(CardFlag cardFlag, bool bStrict)
	: m_CardFlag(cardFlag)
	, m_bStrict(bStrict)
	, m_dwData(0)
	, m_bCompareData(false)
{
}
CardFlagComparer::CardFlagComparer(CardFlag cardFlag, bool bStrict, DWORD dwData)
	: m_CardFlag(cardFlag)
	, m_bStrict(bStrict)
	, m_dwData(dwData)
	, m_bCompareData(false)
{
}

bool CardFlagComparer::operator()(const CCard* pCard) const
{
	if (m_bStrict)
	{
		if ((m_CardFlag & pCard->GetCardFlag()->Get()) != m_CardFlag)
			return false;
	}
	else
	if (!(m_CardFlag & pCard->GetCardFlag()->Get()).Any())
		return false;

	if (!m_bCompareData)
		return true;

	return pCard->GetCardFlag()->GetData(m_CardFlag) == m_dwData;
}

//____________________________________________________________________________
//
CardAbilityFlagComparer::CardAbilityFlagComparer(const CAbility* pAbility)
	: CardFlagComparer(CardFlag::AbilityFlag, false)
{
	SetData(pAbility->GetInstanceID());
}

//____________________________________________________________________________
//
CreatureFlagComparer::CreatureFlagComparer(CreatureFlag creatureFlag, bool bStrict)
	: m_CreatureFlag(creatureFlag)
	, m_bStrict(bStrict)
{
}

bool CreatureFlagComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	if (m_bStrict)
		return (m_CreatureFlag & pCreature->GetCreatureFlag()->Get()) == m_CreatureFlag;

	return (m_CreatureFlag & pCreature->GetCreatureFlag()->Get()).Any();
}

//____________________________________________________________________________
//
CreatureAttackedPlayerComparer::CreatureAttackedPlayerComparer(const CPlayer* pPlayer)
	: m_pPlayer(pPlayer)
	, m_pCard(NULL)
{
}

CreatureAttackedPlayerComparer::CreatureAttackedPlayerComparer(const CCard* pCard)
	: m_pPlayer(NULL)
	, m_pCard(pCard)
{
}

bool CreatureAttackedPlayerComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	if (!pCreature->AttackedThisTurn())
		return false;

	if (m_pPlayer)
		return pCreature->GetAttackedPlayer() == m_pPlayer;

	return m_pCard->GetController() == pCreature->GetAttackedPlayer();
}

//____________________________________________________________________________
//
CardExtraCostComparer::CardExtraCostComparer()	
{
}

bool CardExtraCostComparer::operator()(const CCard* pCard) const
{
	if (pCard->GetPrintedCardName() == "Engineered Explosives") return true;

	return (pCard->GetSpells().GetAt(0)->GetCost().GetExtraManaCost() != 0);
}
//____________________________________________________________________________
//
CardAbilityNameComparer::CardAbilityNameComparer(LPCTSTR abName)	
	:m_abName(abName)
{
}

bool CardAbilityNameComparer::operator()(const CCard* pCard) const
{
	CAbilityContainer spells(pCard->GetAbilities());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		if (spells.GetAt(i)->GetAbilityName() == m_abName) return true;
	}

	return false;
}
//____________________________________________________________________________
//
CardAnyCountersComparer::CardAnyCountersComparer()	
{
}

bool CardAnyCountersComparer::operator()(const CCard* pCard) const
{

	return (pCard->GetCounterContainer()->HasAnyCounters());
}
//____________________________________________________________________________
//
CardSpiritArcaneComparer::CardSpiritArcaneComparer() 
{
}

bool CardSpiritArcaneComparer::operator()(const CCard* pCard) const
{
	bool n=false;
	if (pCard->GetCardType().IsCreature())
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		if (pCreature->GetCreatureType().HasType(SingleCreatureType::Spirit) || pCreature->GetCardKeyword()->HasChangeling()) n=true;
	}
	if ((pCard->GetCardType() & CardType::Arcane).Any()) n=true;
	return n;
}
//____________________________________________________________________________
//
ControlledByCardComparer::ControlledByCardComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool ControlledByCardComparer::operator()(const CCard* pCard) const
{
//	return (m_pCard1->GetInstanceID() == pCard->GetControlledBy());
	return pCard->GetControlStack()->HasControl(m_pCard1);
}

//____________________________________________________________________________
//
AuraFitComparer::AuraFitComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool AuraFitComparer::operator()(const CCard* pCard) const
{
	if (m_pCard1->HasProtectionFrom(pCard, FALSE)) return false;
	if (m_pCard1->GetCardKeyword()->HasCantBeEnchanted()) return false;

	for (int i = 0; i < pCard->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pCard->GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;

		if (pEnchantSpell->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(m_pCard1)) 
			return true;		
	}

	return false;
}

//____________________________________________________________________________
//
EquipFitComparer::EquipFitComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EquipFitComparer::operator()(const CCard* pCard) const
{
 	if (pCard->HasProtectionFrom(m_pCard1, FALSE)) return false;
	if (!pCard->GetCardType().IsCreature()) return false;
	if (((CCreatureCard*)pCard)->GetCreatureKeyword()->CantBeEquipped()) return false;

	for (int i = 0; i < m_pCard1->GetAbilityCount(); ++i)
	{
		CEquipAbility* pEnchantSpell = dynamic_cast<CEquipAbility*>(m_pCard1->GetAbility(i));
		if (!pEnchantSpell) 
			continue;

		if (pEnchantSpell->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(pCard)) 
			return true;		
	}

	return false;
}

//____________________________________________________________________________
//
EnchantableComparer::EnchantableComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EnchantableComparer::operator()(const CCard* pCard) const
{
	if (pCard->HasProtectionFrom(m_pCard1, FALSE)) return false;
	if (pCard->GetCardKeyword()->HasCantBeEnchanted()) return false;

	for (int i = 0; i < m_pCard1->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(m_pCard1->GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;

		if (pEnchantSpell->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(pCard)) 
			return true;		
	}

	return false;
}

//____________________________________________________________________________
//
EquippedByComparer::EquippedByComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EquippedByComparer::operator()(const CCard* pCard) const
{
	bool fit = false;

	for (int i = 0; i < m_pCard1->GetAbilities().GetSize(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(m_pCard1->GetAbilities().GetAt(i).GetPointer());
		if (!pEquipAbility) 
			continue;

		if (pEquipAbility->GetEquippedOnCreature() == (CCreatureCard*)pCard)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
EquippedOnComparer::EquippedOnComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EquippedOnComparer::operator()(const CCard* pCard) const
{
	if (!(pCard->GetCardType() & CardType::Equipment).Any()) return false;

	for (int i = 0; i < pCard->GetAbilities().GetSize(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pCard->GetAbilities().GetAt(i).GetPointer());
		if (!pEquipAbility) 
			continue;

		if (pEquipAbility->GetEquippedOnCreature() == (CCreatureCard*)m_pCard1)
			return true;	
	}

	return false;
}

//____________________________________________________________________________
//
EnchantedByComparer::EnchantedByComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EnchantedByComparer::operator()(const CCard* pCard) const
{
	for (int i = 0; i < m_pCard1->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(m_pCard1->GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;

		if (pEnchantSpell->GetEnchantedOnCard() == pCard)
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
EnchantedOnComparer::EnchantedOnComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EnchantedOnComparer::operator()(const CCard* pCard) const
{
	if (!(pCard->GetCardType() & CardType::_Aura).Any()) return false;

	for (int i = 0; i < m_pCard1->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pCard->GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;

		if (pEnchantSpell->GetEnchantedOnCard() == m_pCard1)
			return true;		
	}

	return false;
}

//____________________________________________________________________________
//
EnchantedCardComparer::EnchantedCardComparer() 
{
}

bool EnchantedCardComparer::operator()(const CCard* pCard) const
{
	return (pCard->IsEnchanted() == TRUE);
}

//____________________________________________________________________________
//
VedalkenShacklesComparer::VedalkenShacklesComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool VedalkenShacklesComparer::operator()(const CCard* pCard) const
{
	CZone* pBattlefield = m_pCard1->GetController()->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Island, false));
	int islands = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());	
	int power = 0;

	if (pCard->GetCardType().IsCreature())
		power = GET_INTEGER(((CCreatureCard*)pCard)->GetPower());
	else return false;

	return (islands>=power);
}

//____________________________________________________________________________
//
CardMulticoloredComparer::CardMulticoloredComparer(Enum eColorType) 
	: m_ColorType(eColorType)
{
}

bool CardMulticoloredComparer::operator()(const CCard* pCard) const
{
	CardType cardtype = pCard->GetCardType();
	
	if (m_ColorType == MulticoloredCards)
		return cardtype.IsMulticolor();
	if (m_ColorType == MonocoloredCards)
		return (!cardtype.IsMulticolor() && (cardtype & CardType::_ColorMask).Any());
	if (m_ColorType == ColorlessCards)
		return !(cardtype & CardType::_ColorMask).Any();

	return false;
}

//____________________________________________________________________________
//
CardSharingCardTypeComparer::CardSharingCardTypeComparer(const CCard* pCard)
	: m_pCard(pCard)
{
}

bool CardSharingCardTypeComparer::operator()(const CCard* pCard) const
{
	CardType m_pCardType = m_pCard->GetCardType();
	CardType pCardType = pCard->GetCardType();

	if      (m_pCardType.IsCreature() && pCardType.IsCreature()) return true;
	else if (m_pCardType.IsArtifact() && pCardType.IsArtifact()) return true;
	else if (m_pCardType.IsLand() && pCardType.IsLand()) return true;
	else if (m_pCardType.IsEnchantment() && pCardType.IsEnchantment()) return true;
	else if (m_pCardType.IsPlaneswalker() && pCardType.IsPlaneswalker()) return true;
	else if (m_pCardType.IsSorcery() && pCardType.IsSorcery()) return true;
	else if (m_pCardType.IsInstant() && pCardType.IsInstant()) return true;
	else if (m_pCardType.IsTribal() && pCardType.IsTribal()) return true;

	return false;
}

//____________________________________________________________________________
//
CardSharingCardTypeWithLibraryTopComparer::CardSharingCardTypeWithLibraryTopComparer()
{
}

bool CardSharingCardTypeWithLibraryTopComparer::operator()(const CCard* pCard) const
{
	CCard* m_pCard = pCard->GetController()->GetZoneById(ZoneId::Library)->GetTopCard();
	CardType pCardType = pCard->GetCardType();
	
	if (m_pCard)
	{
	
	CardType m_pCardType = m_pCard->GetCardType();

	if      (m_pCardType.IsCreature() && pCardType.IsCreature()) return true;
	else if (m_pCardType.IsArtifact() && pCardType.IsArtifact()) return true;
	else if (m_pCardType.IsLand() && pCardType.IsLand()) return true;
	else if (m_pCardType.IsEnchantment() && pCardType.IsEnchantment()) return true;
	else if (m_pCardType.IsPlaneswalker() && pCardType.IsPlaneswalker()) return true;
	else if (m_pCardType.IsSorcery() && pCardType.IsSorcery()) return true;
	else if (m_pCardType.IsInstant() && pCardType.IsInstant()) return true;
	else if (m_pCardType.IsTribal() && pCardType.IsTribal()) return true;
	}

	m_pCard = pCard->GetController()->GetGame()->GetNextPlayer(pCard->GetController())->GetZoneById(ZoneId::Library)->GetTopCard();

	if (m_pCard)
	{
	
	CardType m_pCardType = m_pCard->GetCardType();

	if      (m_pCardType.IsCreature() && pCardType.IsCreature()) return true;
	else if (m_pCardType.IsArtifact() && pCardType.IsArtifact()) return true;
	else if (m_pCardType.IsLand() && pCardType.IsLand()) return true;
	else if (m_pCardType.IsEnchantment() && pCardType.IsEnchantment()) return true;
	else if (m_pCardType.IsPlaneswalker() && pCardType.IsPlaneswalker()) return true;
	else if (m_pCardType.IsSorcery() && pCardType.IsSorcery()) return true;
	else if (m_pCardType.IsInstant() && pCardType.IsInstant()) return true;
	else if (m_pCardType.IsTribal() && pCardType.IsTribal()) return true;
	}

	return false;
}

//____________________________________________________________________________
//
CardSharingCardColorWithYourLibraryTopComparer::CardSharingCardColorWithYourLibraryTopComparer()
{
}

bool CardSharingCardColorWithYourLibraryTopComparer::operator()(const CCard* pCard) const
{
	CCard* m_pCard = pCard->GetController()->GetZoneById(ZoneId::Library)->GetTopCard();
	
	if (m_pCard)
	{
	
	CardType m_pCardType = m_pCard->GetCardType();
	CardType pCardType = pCard->GetCardType();

	if ((m_pCardType & CardType::Black).Any() && (pCardType & CardType::Black).Any()) return TRUE;
	if ((m_pCardType & CardType::Green).Any() && (pCardType & CardType::Green).Any()) return TRUE;
	if ((m_pCardType & CardType::Red).Any() && (pCardType & CardType::Red).Any()) return TRUE;
	if ((m_pCardType & CardType::White).Any() && (pCardType & CardType::White).Any()) return TRUE;
	if ((m_pCardType & CardType::Blue).Any() && (pCardType & CardType::Blue).Any()) return TRUE;
	}

	return false;
}

//____________________________________________________________________________
//
CardSharingCardColorComparer::CardSharingCardColorComparer(const CCard* pCard)
	: m_pCard(pCard)
{
}

bool CardSharingCardColorComparer::operator()(const CCard* pCard) const
{
	CardType m_pCardType = m_pCard->GetCardType();
	CardType pCardType = pCard->GetCardType();

	if ((m_pCardType & CardType::Black).Any() && (pCardType & CardType::Black).Any()) return TRUE;
	if ((m_pCardType & CardType::Green).Any() && (pCardType & CardType::Green).Any()) return TRUE;
	if ((m_pCardType & CardType::Red).Any() && (pCardType & CardType::Red).Any()) return TRUE;
	if ((m_pCardType & CardType::White).Any() && (pCardType & CardType::White).Any()) return TRUE;
	if ((m_pCardType & CardType::Blue).Any() && (pCardType & CardType::Blue).Any()) return TRUE;

	return false;
}

//____________________________________________________________________________
//
bool CameThisTurnIntoPlayComparer::operator()(const CCard* pCard) const
{
	return pCard->GetGame()->GetGameTurnNumber() == pCard->GetInplayGameTurnNumber();
}

//____________________________________________________________________________
//
bool DrawnThisTurnComparer::operator()(const CCard* pCard) const
{
	return pCard->GetController()->GetCardsDrawnThisTurn().HasCard(pCard) == TRUE;
}

//____________________________________________________________________________
//
bool LastCardDrawnThisTurnComparer::operator()(const CCard* pCard) const
{
	return pCard->GetController()->GetLastDraw() == pCard;
}

//____________________________________________________________________________
//
DamagedPlayerThisTurnComparer::DamagedPlayerThisTurnComparer(const CCard* pCard1)
{
}

bool DamagedPlayerThisTurnComparer::operator()(const CCard* pCard) const
{
	return (m_pCard1->GetController()->GetDamageSourcesThisTurn().HasCard(pCard) == TRUE);
}

//____________________________________________________________________________
//
AttackedLastTurnComparer::AttackedLastTurnComparer(const CPlayer* pPlayer)
	: m_pPlayer(pPlayer)
	, m_pCard(NULL)
{
}

AttackedLastTurnComparer::AttackedLastTurnComparer(const CCard* pCard)
	: m_pPlayer(NULL)
	, m_pCard(pCard)
{
}

bool AttackedLastTurnComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	if (m_pPlayer)
		return pCreature->AttackedLastTurn((CPlayer*)m_pPlayer);

	return pCreature->AttackedLastTurn((CPlayer*)m_pCard->GetController());
}

//____________________________________________________________________________
//
bool AttackedControllersLastTurnComparer::operator()(const CCard* pCard) const
{
	if (!pCard->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = reinterpret_cast<const CCreatureCard*>(pCard);

	return pCreature->AttackedLastTurn((CPlayer*)pCreature->GetController());
}

//____________________________________________________________________________
//
bool EvenCMCComparer::operator()(const CCard* pCard) const
{
	return pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal() % 2 == 0;
}

//____________________________________________________________________________
//
bool OddCMCComparer::operator()(const CCard* pCard) const
{
	return pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal() % 2 == 1;
}

//____________________________________________________________________________
//
StackTargetingComparer::StackTargetingComparer(const CCardFilter* pCardfilter, const CCard* pCard1, BOOL pYouTargeted)
	: m_pCardfilter(pCardfilter)
	, m_pCard1(pCard1)
	, m_pYouTargeted(pYouTargeted)
{
}

bool StackTargetingComparer::operator()(const CCard* pCard) const
{
	const CStack& stack = pCard->GetController()->GetGame()->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
		const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
		if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
		{
			//if (m_pYouTargeted && pStackAction->GetAssociatedPlayer()) if (pStackAction->GetAssociatedPlayer() ==  m_pTargetPlayer) return true;

			if (pStackAction->IsTargeting())
			{							
				const CTargetActionCommon* pAction = dynamic_cast<const CTargetActionCommon*>(pStackAction);
				//CTargetSpellAction* pAction = (CTargetSpellAction*)pStackAction;
				if (pAction)
				{
					const CSubjectGroup& targetGroup = pAction->GetTargetGroup();
					for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin(); it != targetGroup.CardSubjectEnd(); ++it)
					{
						const CCard* tCard = (const CCard*)it->GetPointer();
						if (m_pCardfilter->IsCardIncluded(tCard)) 
							return true;
						else continue;
					}
					for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin(); it != targetGroup.PlayerSubjectEnd(); ++it)
					{
						const CPlayer* pPlayer = *it;
						if (m_pYouTargeted && pPlayer == m_pCard1->GetController()) 
							return true;
						else 
							continue;
					}
				}
			}
			if (pStackAction->IsDoubleTargeting())
				{
				const CDoubleTargetActionCommon* pAction1 = dynamic_cast<const CDoubleTargetActionCommon*>(pStackAction);
				if (pAction1)
				{
					const CSubjectGroup& targetGroup = pAction1->GetTargetGroup1();
					for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin(); it != targetGroup.CardSubjectEnd(); ++it)
					{
						const CCard* tCard = (const CCard*)it->GetPointer();
						if (m_pCardfilter->IsCardIncluded(tCard)) 
							return true;
						else 
							continue;
					}
					for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin(); it != targetGroup.PlayerSubjectEnd(); ++it)
					{
						const CPlayer* pPlayer = *it;
						if (m_pYouTargeted && pPlayer == m_pCard1->GetController()) 
							return true;
						else 
							continue;
					}
					
					const CSubjectGroup& targetGroup1 = pAction1->GetTargetGroup2();
					for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin(); it != targetGroup1.CardSubjectEnd(); ++it)
					{
						const CCard* tCard = (const CCard*)it->GetPointer();
						if (m_pCardfilter->IsCardIncluded(tCard)) 
							return true;
						else
							continue;
					}
					for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin(); it != targetGroup1.PlayerSubjectEnd(); ++it)
					{
						const CPlayer* pPlayer = *it;
						if (m_pYouTargeted && pPlayer == m_pCard1->GetController()) 
							return true;
						else
							continue;
					}
				
				}
			}
		}					
	}

	return false;
}

//____________________________________________________________________________
//
CardAbilityTypeComparer::CardAbilityTypeComparer(AbilityType abilityType, bool bStrict,
	AbilityType excludeAbilityType)
	: m_AbilityType(abilityType)
	, m_bStrict(bStrict)
	, m_ExcludeAbilityType(excludeAbilityType)
{
}

bool CardAbilityTypeComparer::operator()(const CCard* pCard) const
{
	for (int i = 0; i < pCard->GetAbilityCount(); ++i)
	{
		const CAbility* pAbility = pCard->GetAbility(i);
		AbilityType abilityType = pAbility->GetAbilityType();

		if ((abilityType & m_ExcludeAbilityType).Any())
			continue;

		if (m_bStrict)
			if ((abilityType & m_AbilityType) == m_AbilityType)
				return true;

		if ((abilityType & m_AbilityType).Any())
			return true;
	}

	return false;
}

//____________________________________________________________________________
//
EnchantedByOtherComparer::EnchantedByOtherComparer(const CCard* pCard1)
	: m_pCard1(pCard1)
{
}

bool EnchantedByOtherComparer::operator()(const CCard* pCard) const
{
	if (pCard->GetEnchantCount() == 0) return false;
	if (pCard->GetEnchantCount() >= 2) return true;

	for (int i = 0; i < m_pCard1->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(m_pCard1->GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;

		if (pEnchantSpell->GetEnchantedOnCard() == pCard)
			return false;
	}

	return true;
}
//____________________________________________________________________________
//

int CPredefinedCardFilterStack::SetPredefinedCardFilter(const CCardFilter* pPredefinedFilter, BOOL bThisTurnOnly)
{
	int nUniqueId = m_pGame ? m_pGame->GetUniqueId() : -1;

	Add(PredefinedCardFilterEntry(pPredefinedFilter, bThisTurnOnly, nUniqueId));

	return nUniqueId;
}

void CPredefinedCardFilterStack::RemovePredefinedCardFilter(int nUniqueId)
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const PredefinedCardFilterEntry& entry = GetAt(i);
		if (entry.m_nUniqueId == nUniqueId)
		{
			RemoveAt(i);
			return;
		}
	}
}

void CPredefinedCardFilterStack::ResetTurnPredefinedCardFilters()
{
	for (int i = GetSize() - 1; i >= 0; --i)
	{
		const PredefinedCardFilterEntry& entry = GetAt(i);
		if (entry.m_bThisTurnOnly)
			RemoveAt(i);
	}
}

//____________________________________________________________________________
//

CCardFilter::FilterMap CCardFilter::s_FilterMap;
bool CCardFilter::s_bInitializedPredefinedFilters = false;

const CCardFilter* CCardFilter::AddFilter(std::auto_ptr<CCardFilter>& apFilter)
{
	// TODO: multi-thread protection needed here

	std::map<CString, const CCardFilter*, iless>::const_iterator i = s_FilterMap.m_Filters.find(apFilter->GetFilterNamePlural());
	if (i != s_FilterMap.m_Filters.end())
	{
		//ATLASSERT(false);
		apFilter.reset();
		return i->second;
	}

	CCardFilter* pFilter = apFilter.release();
	s_FilterMap.m_Filters[pFilter->GetFilterNamePlural()] = pFilter;

	return pFilter;
}

const CCardFilter* CCardFilter::GetFilter(LPCTSTR strFilterNamePlural)
{
	// TODO: multi-thread protection needed here

	if (!s_bInitializedPredefinedFilters)
	{
		s_bInitializedPredefinedFilters = true;

		AddPredefinedFilters();
	}

	std::map<CString, const CCardFilter*, iless>::const_iterator i = s_FilterMap.m_Filters.find(strFilterNamePlural);
	if (i != s_FilterMap.m_Filters.end())
		return i->second;

	ATLASSERT(false);
	LOG_ERROR(_T("Unexisting filter referred: %s."), strFilterNamePlural);

	return GetFilter(_T("cards"));
}

void CCardFilter::AddPredefinedFilters()
{
	{
		// cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a card"), _T("cards"), new TrueCardComparer)));

		// creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a creature"), _T("creatures"), new AnyCreatureComparer)));
		// lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a land"), _T("lands"), new CardTypeComparer(CardType::_Land, false))));
		// basic lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a basic land"), _T("basic lands"), new CardTypeComparer(CardType::BasicLand, false))));
		// nonbasic lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a nonbasic land"), _T("nonbasic lands"), new CardTypeComparer(CardType::NonbasicLand, false))));

		// nonbasic land types
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Desert"), _T("Deserts"), new CardTypeComparer(CardType::Desert, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Gate"), _T("Gates"), new CardTypeComparer(CardType::Gate, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Lair"), _T("Lairs"), new CardTypeComparer(CardType::Lair, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Locus"), _T("Loci"), new CardTypeComparer(CardType::Locus, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Mine"), _T("Mines"), new CardTypeComparer(CardType::Mine, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Power-Plant"), _T("Power-Plants"), new CardTypeComparer(CardType::PowerPlant, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Tower"), _T("Towers"), new CardTypeComparer(CardType::Tower, false))));
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an Urza's land"), _T("Urza's lands"), new CardTypeComparer(CardType::Urzas, false))));

		// non-creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-creature"), _T("non-creatures"), new NegateCardComparer(new AnyCreatureComparer))));
		// non-lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-land"), _T("non-lands"), new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)))));
		// non-basic lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-basic land"), _T("non-basic lands"), new NegateCardComparer(new CardTypeComparer(CardType::BasicLand, false)))));

		// enchantments
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an enchantment"), _T("enchantments"), new CardTypeComparer(CardType::_Enchantment, false))));
		// aura cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an aura card"), _T("aura cards"), new CardTypeComparer(CardType::_Aura, false))));
		// sorcery cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a sorcery card"), _T("sorcery cards"), new CardTypeComparer(CardType::Sorcery, false))));
		// instant cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an instant card"), _T("instant cards"), new CardTypeComparer(CardType::Instant, false))));
		// Planeswalkers
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a planeswalker"), _T("planeswalkers"), new CardTypeComparer(CardType::Planeswalker, false))));
		// Tribals
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a tribal card"), _T("tribal cards"), new CardTypeComparer(CardType::Tribal, false))));

		// non-enchantments
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-enchantment"), _T("non-enchantments"),  new NegateCardComparer(new CardTypeComparer(CardType::_Enchantment, false)))));
		// non-aura cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-aura card"), _T("non-aura cards"), new NegateCardComparer(new CardTypeComparer(CardType::_Aura, false)))));
		// non-sorcery cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-sorcery card"), _T("non-sorcery cards"), new NegateCardComparer(new CardTypeComparer(CardType::Sorcery, false)))));
		// non-instant cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-instant card"), _T("non-instant cards"), new NegateCardComparer(new CardTypeComparer(CardType::Instant, false)))));

		// Forests
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Forest"), _T("Forests"), new CardTypeComparer(CardType::Forest, false))));
		// Mountains
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Mountain"), _T("Mountains"), new CardTypeComparer(CardType::Mountain, false))));
		// Plains
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Plains"), _T("Plains"), new CardTypeComparer(CardType::Plains, false))));
		// Islands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an Island"), _T("Islands"), new CardTypeComparer(CardType::Island, false))));
		// Swamps
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Swamp"), _T("Swamps"), new CardTypeComparer(CardType::Swamp, false))));
				
		// white creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a white creature"), _T("white creatures"), new CardTypeComparer(CardType::White | CardType::Creature, true))));
		// red creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a red creature"), _T("red creatures"), new CardTypeComparer(CardType::Red | CardType::Creature, true))));
		// green creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a green creature"), _T("green creatures"), new CardTypeComparer(CardType::Green | CardType::Creature, true))));
		// blue creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a blue creature"), _T("blue creatures"), new CardTypeComparer(CardType::Blue | CardType::Creature, true))));
		// black creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a black creature"), _T("black creatures"), new CardTypeComparer(CardType::Black | CardType::Creature, true))));
		// artifact creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact creature"), _T("artifact creatures"), new CardTypeComparer(CardType::_ArtifactCreature, true))));
		// legendary creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a legendary creature"), _T("legendary creatures"), new CardTypeComparer(CardType::_LegendaryCreature, true))));

		// flying creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a flying creature"), _T("flying creatures"), new CreatureKeywordComparer(CreatureKeyword::Flying, false))));

		// phasing cards
		// AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a phasing card"), _T("phasing cards"), new CardKeywordComparer(CardKeyword::Phasing, false))));
		
		
	//	AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a phased out card"), _T("phased out cards"), new CardFlagComparer(CardFlag::PhaseFlag, false))));

		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a phasing card"), _T("pregame phasing cards"), new PhasingCardNameComparer())));

		// white cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a white card"), _T("white cards"), new CardTypeComparer(CardType::White, true))));
		// red cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a red card"), _T("red cards"), new CardTypeComparer(CardType::Red, true))));
		// black cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a black card"), _T("black cards"), new CardTypeComparer(CardType::Black, true))));
		// green cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a green card"), _T("green cards"), new CardTypeComparer(CardType::Green, true))));
		// blue cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a blue card"), _T("blue cards"), new CardTypeComparer(CardType::Blue, true))));

		// non-white cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-white card"), _T("non-white cards"), new NegateCardComparer(new CardTypeComparer(CardType::White, true)))));
		// non-red cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-red card"), _T("non-red cards"), new NegateCardComparer(new CardTypeComparer(CardType::Red, true)))));
		// non-black cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-black card"), _T("non-black cards"), new NegateCardComparer(new CardTypeComparer(CardType::Black, true)))));
		// non-green cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-green card"), _T("non-green cards"), new NegateCardComparer(new CardTypeComparer(CardType::Green, true)))));
		// non-blue cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-blue card"), _T("non-blue cards"), new NegateCardComparer(new CardTypeComparer(CardType::Blue, true)))));

		// artifact cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact card"), _T("artifact cards"), new CardTypeComparer(CardType::Artifact, true))));

		// instant cards or sorcery cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an instant card or a sorcery card"), _T("instant cards or sorcery cards"), new CardTypeComparer(CardType::Sorcery | CardType::Instant, false))));

		// blue instant cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a blue instant card"), _T("blue instant cards"), new CardTypeComparer(CardType::Blue | CardType::Instant, true))));

		// white, blue, black or red cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a white, blue, black or red card"), _T("white, blue, black or red cards"), new CardTypeComparer(CardType::White | CardType::Blue | CardType::Black | CardType::Red, false))));

		// blue or black cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a blue or black card"), _T("blue or black cards"), new CardTypeComparer(CardType::Blue | CardType::Black, false))));

		// Goblins
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), true))));

		// Walls
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Wall"), _T("Walls"), new CreatureTypeComparer(CREATURE_TYPE(Wall), true))));
		// Non-Walls
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a non-Wall"), _T("non-Walls"), new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), true)))));
		
		// creatures with power greater than 2
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a creature with power greater than 2"), _T("creatures with power greater than 2"), new CreaturePowerComparer<std::greater<int>>(2))));
		// creatures with power less than 2
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a creature with power less than 2"), _T("creatures with power less than 2"), new CreaturePowerComparer<std::less<int>>(2))));

		// artifacts or lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact or a land"), _T("artifacts or lands"), new CardTypeComparer(CardType::Artifact | CardType::_Land, false))));

		// Creatures or planeswalkers
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a creature or a planeswalker"), _T("creatures or planeswalkers"), new CardTypeComparer(CardType::Creature | CardType::Planeswalker, false))));

		// artifacts or green cards
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact or a green card"), _T("artifacts or green cards"), new CardTypeComparer(CardType::Artifact | CardType::Green, false))));

		// artifacts or creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact or a creature"), _T("artifacts or creatures"), new CardTypeComparer(CardType::Artifact | CardType::Creature, false))));

		// artifacts or enchantments
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact or an enchantment"), _T("artifacts or enchantments"), new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false))));

		// artifacts, creatures or lands
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact, a creature or a land"), _T("artifacts, creatures or lands"), new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false))));

		// artifacts, creatures or enchantments
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("an artifact, a creature or an enchantment"), _T("artifacts, creatures or enchantments"), new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false))));

		// attacked or blocked creatures
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a creature attacked or blocked this turn"), _T("creatures attacked or blocked this turn"), new CreatureFlagComparer(CreatureFlag::Attacked | CreatureFlag::Blocked, false))));
	
		//Sorcery, Instant and Enchantment spells
		//AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a Sorcery, Instant or enchantment spell"), _T("Sorceries, instants and enchantments spells"), new CardTypeComparer(CardType::Sorcery | CardType::Instant | CardType::_Enchantment, false))));

		//Spells from hand
		//AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a spell from hand"), _T("Spells from hand"), new CardZoneComparer(ZoneId::Hand))));
	}


	{	// artifact creatures or black creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("artifact creatures"))->Clone());
		apFilter->AddChildFilter(CCardFilter::GetFilter(_T("black creatures"))->Clone());
		apFilter->SetFilterName(_T("an artifact creature or a black creature"), _T("artifact creatures or black creatures"));
		AddFilter(apFilter);
	}

	{	// artifact creatures or red creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("artifact creatures"))->Clone());
		apFilter->AddChildFilter(CCardFilter::GetFilter(_T("red creatures"))->Clone());
		apFilter->SetFilterName(_T("an artifact creature or a red creature"), _T("artifact creatures or red creatures"));
		AddFilter(apFilter);
	}

	{	// artifact creatures or white creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("artifact creatures"))->Clone());
		apFilter->AddChildFilter(CCardFilter::GetFilter(_T("white creatures"))->Clone());
		apFilter->SetFilterName(_T("an artifact creature or a white creature"), _T("artifact creatures or white creatures"));
		AddFilter(apFilter);
	}

	{	// artifact creatures or blue creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("artifact creatures"))->Clone());
		apFilter->AddChildFilter(CCardFilter::GetFilter(_T("blue creatures"))->Clone());
		apFilter->SetFilterName(_T("an artifact creature or a blue creature"), _T("artifact creatures or blue creatures"));
		AddFilter(apFilter);
	}

	{	// artifact creatures or green creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("artifact creatures"))->Clone());
		apFilter->AddChildFilter(CCardFilter::GetFilter(_T("green creatures"))->Clone());
		apFilter->SetFilterName(_T("an artifact creature or a green creature"), _T("artifact creatures or green creatures"));
		AddFilter(apFilter);
	}

	{	// nontoken creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		apFilter->SetFilterName(_T("a nontoken creature"), _T("nontoken creatures"));
		AddFilter(apFilter);
	}

	{	// token creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddComparer(new CardTypeComparer(CardType::Token, false));
		apFilter->SetFilterName(_T("a token creature"), _T("token creatures"));
		AddFilter(apFilter);
	}

	{	// non-flying creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		apFilter->SetFilterName(_T("a non-flying creature"), _T("non-flying creatures"));
		AddFilter(apFilter);
	}

	{	// non-Wall creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
		apFilter->SetFilterName(_T("a non-Wall creature"), _T("non-Wall creatures"));
		AddFilter(apFilter);
	}

	{	// non-black creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddNegateComparer(new CardTypeComparer(CardType::Black, false));
		apFilter->SetFilterName(_T("a non-black creature"), _T("non-black creatures"));
		AddFilter(apFilter);
	}

	{	// non-white creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddNegateComparer(new CardTypeComparer(CardType::White, false));
		apFilter->SetFilterName(_T("a non-white creature"), _T("non-white creatures"));
		AddFilter(apFilter);
	}

	{	// non-land creatures
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
		apFilter->SetFilterName(_T("a non-land creature"), _T("non-lands creatures"));
		AddFilter(apFilter);
	}

	{
		// permanents
		AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(_T("a permanent"), _T("permanents"), new CardZoneComparer(ZoneId::Battlefield))));
	}

	{
		// creature permanents
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("creatures"))->Clone());
		apFilter->AddComparer(new CardZoneComparer(ZoneId::Battlefield));
		apFilter->SetFilterName(_T("a creature permanent"), _T("creature permanents"));
		AddFilter(apFilter);
	}

	{
		// enchantment permanents
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("enchantments"))->Clone());
		apFilter->AddComparer(new CardZoneComparer(ZoneId::Battlefield));
		apFilter->SetFilterName(_T("a enchantment permanent"), _T("enchantment permanents"));
		AddFilter(apFilter);
	}

	{
		// aura permanents
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("aura cards"))->Clone());
		apFilter->AddComparer(new CardZoneComparer(ZoneId::Battlefield));
		apFilter->SetFilterName(_T("an aura permanent"), _T("aura permanents"));
		AddFilter(apFilter);
	}
	{
		// non-aura spells but aura permanents
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("non-aura cards"))->Clone());
		apFilter->AddChildFilter(CCardFilter::GetFilter(_T("aura permanents"))->Clone());
		apFilter->SetFilterName(_T("a non-aura spell but aura permanent"), _T("non-aura spells but aura permanents"));
		AddFilter(apFilter);
	}
	{
		// artifact permanents
		std::auto_ptr<CCardFilter> apFilter(CCardFilter::GetFilter(_T("artifact cards"))->Clone());
		apFilter->AddComparer(new CardZoneComparer(ZoneId::Battlefield));
		apFilter->SetFilterName(_T("an artifact permanent"), _T("artifact permanents"));
		AddFilter(apFilter);
	}
}

CCardFilter::CCardFilter()
	: m_pThisControllerOnly(NULL)
	, m_pNotThisControllerOnly(NULL)
	, m_pThisPlayersCardsOnly(NULL)
	, m_pNotThisPlayersCardsOnly(NULL)
{
}

CCardFilter::CCardFilter(CardComparer* pComparer)
	: m_pThisControllerOnly(NULL)
	, m_pNotThisControllerOnly(NULL)
	, m_pThisPlayersCardsOnly(NULL)
	, m_pNotThisPlayersCardsOnly(NULL)
{
	AddComparer(pComparer);
}

CCardFilter::CCardFilter(LPCTSTR strFilterName, LPCTSTR strFilterNamePlural)
	: m_strFilterName(strFilterName)
	, m_strFilterNamePlural(strFilterNamePlural)
	, m_pThisControllerOnly(NULL)
	, m_pNotThisControllerOnly(NULL)
	, m_pThisPlayersCardsOnly(NULL)
	, m_pNotThisPlayersCardsOnly(NULL)
{
}

CCardFilter::CCardFilter(LPCTSTR strFilterName, LPCTSTR strFilterNamePlural, CardComparer* pComparer)
	: m_strFilterName(strFilterName)
	, m_strFilterNamePlural(strFilterNamePlural)
	, m_pThisControllerOnly(NULL)
	, m_pNotThisControllerOnly(NULL)
	, m_pThisPlayersCardsOnly(NULL)
	, m_pNotThisPlayersCardsOnly(NULL)
{
	AddComparer(pComparer);
}

CCardFilter::~CCardFilter()
{
	RemoveAllComparers();
	RemoveAllChildFilters();
}

void CCardFilter::AddComparer(CardComparer* pComparer)
{
#ifndef _MY_DEBUG
	if (!pComparer)
		pComparer = new FalseCardComparer;
#else
	ATLASSERT(pComparer);
#endif

	if (pComparer)
		m_Comparers.push_front(pComparer);
}

void CCardFilter::SetComparer(CardComparer* pComparer)
{
	RemoveAllComparers();
	AddComparer(pComparer);
}

void CCardFilter::AddNegateComparer(CardComparer* pComparer)
{
	ATLASSERT(pComparer);

	if (pComparer)
		m_Comparers.push_front(new NegateCardComparer(pComparer));
}

void CCardFilter::RemoveAllComparers()
{ 
	for (std::list<CardComparer*>::const_iterator it = m_Comparers.begin();
		it != m_Comparers.end();
		++it)
		delete *it;

	m_Comparers.clear();
}

void CCardFilter::AddChildFilter(CCardFilter* pChild)
{
	if (pChild)
		m_Children.push_front(pChild);
}

void CCardFilter::RemoveAllChildFilters()
{
	for (std::list<CCardFilter*>::const_iterator it = m_Children.begin();
		it != m_Children.end();
		++it)
		delete *it;

	m_Children.clear();
}

void CCardFilter::SetThisCardsControllerOnly(const CCard* pCard)
{
	m_pThisControllerOnly = pCard;
	m_pNotThisControllerOnly = NULL;
	m_pThisPlayersCardsOnly = NULL;
	m_pNotThisPlayersCardsOnly = NULL;
}

void CCardFilter::SetNotThisCardsControllerOnly(const CCard* pCard)
{
	m_pThisControllerOnly = NULL;
	m_pNotThisControllerOnly = pCard;
	m_pThisPlayersCardsOnly = NULL;
	m_pNotThisPlayersCardsOnly = NULL;
}

void CCardFilter::SetThisPlayersCardsOnly(const CPlayer* pPlayer)
{
	m_pThisControllerOnly = NULL;
	m_pNotThisControllerOnly = NULL;
	m_pThisPlayersCardsOnly = pPlayer;
	m_pNotThisPlayersCardsOnly = NULL;
}

void CCardFilter::SetNotThisPlayersCardsOnly(const CPlayer* pPlayer)
{
	m_pThisControllerOnly = NULL;
	m_pNotThisControllerOnly = NULL;
	m_pThisPlayersCardsOnly = NULL;
	m_pNotThisPlayersCardsOnly = pPlayer;
}

bool CCardFilter::IsCardIncluded(const CCard* pCard) const
{
	if (IsPlayersCardIncludedImpl(pCard->GetController()) && 
		IsCardIncludedIgnoreControllerImpl(pCard))
		return true;

	for (std::list<CCardFilter*>::const_iterator it = m_Children.begin();
		it != m_Children.end();
		++it)
		if ((*it)->IsCardIncluded(pCard))
			return true;
	return false;
}

bool CCardFilter::IsCardIncludedIgnoreController(const CCard* pCard) const
{
	if (IsCardIncludedIgnoreControllerImpl(pCard))
		return true;

	for (std::list<CCardFilter*>::const_iterator it = m_Children.begin();
		it != m_Children.end();
		++it)
		if ((*it)->IsCardIncludedIgnoreController(pCard))
			return true;
	return false;	
}

bool CCardFilter::IsCardIncludedIgnoreControllerImpl(const CCard* pCard) const
{
	if (!m_Comparers.size())
		return false;

	for (std::list<CardComparer*>::const_iterator it = m_Comparers.begin();
		it != m_Comparers.end();
		++it)
		if (!(*it)->operator()(pCard))
			return false;

	return true;
}

bool CCardFilter::IsPlayersCardsIncluded(const CPlayer* pPlayer) const
{
	if (IsPlayersCardIncludedImpl(pPlayer))
		return true;

	for (std::list<CCardFilter*>::const_iterator it = m_Children.begin();
		it != m_Children.end();
		++it)
		if ((*it)->IsPlayersCardsIncluded(pPlayer))
			return true;
	return false;	
}

bool CCardFilter::IsPlayersCardIncludedImpl(const CPlayer* pPlayer) const
{
	if (m_pThisControllerOnly)
	{
		if (pPlayer != m_pThisControllerOnly->GetController())
			return false;
	}
	else
		if (m_pNotThisControllerOnly)
		{
			if (pPlayer == m_pNotThisControllerOnly->GetController())
				return false;
		}
		else
			if (m_pThisPlayersCardsOnly)
			{
				if (pPlayer != m_pThisPlayersCardsOnly)
					return false;
			}
			else
				if (m_pNotThisPlayersCardsOnly)
				{
					if (pPlayer == m_pNotThisPlayersCardsOnly)
						return false;
				}

	return true;
}

CCardFilter* CCardFilter::Clone() const
{
	CCardFilter* pFilter = new CCardFilter(m_strFilterName, m_strFilterNamePlural);
	pFilter->m_pNotThisControllerOnly = m_pNotThisControllerOnly;
	pFilter->m_pThisControllerOnly = m_pThisControllerOnly;
	pFilter->m_pThisPlayersCardsOnly = m_pThisPlayersCardsOnly;
	pFilter->m_pNotThisPlayersCardsOnly = m_pNotThisPlayersCardsOnly;

	for (std::list<CardComparer*>::const_iterator it = m_Comparers.begin();
		it != m_Comparers.end();
		++it)
		pFilter->m_Comparers.push_back((*it)->Clone());

	for (std::list<CCardFilter*>::const_iterator it = m_Children.begin();
		it != m_Children.end();
		++it)
		pFilter->m_Children.push_back((*it)->Clone());

	return pFilter;
}
