#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
COrientation::COrientation(CCard* pCard)
	: CBitflagEnumEventSource< COrientation, Orientation, CStateSupportEnumType >(_T("ORIENTATION"), Orientation::Untap)
	, m_pCard(pCard)
	, m_nTapCount(0)
	, m_nUntapCount(0)
{
}

BOOL COrientation::IsTapped() const
{
	return (m_Bitflag & Orientation::Tap).Any();
}

BOOL COrientation::IsFlipped() const
{
	return (m_Bitflag & Orientation::Flipped).Any();
}

BOOL COrientation::IsSecondFaced() const
{
	return (m_Bitflag & Orientation::FaceSecond).Any();
}

BOOL COrientation::IsMorphed() const
{
	return (m_Bitflag & Orientation::Morph).Any();
}


BOOL COrientation::IsUntapped() const
{
	return (m_Bitflag & Orientation::Untap).Any();
}

BOOL COrientation::Tap()
{
	m_nTapCount = m_nTapCount + 1;
	return Set(Orientation::Tap, Orientation::_TapMask);
}

BOOL COrientation::Untap()
{
	m_nUntapCount = m_nUntapCount + 1;
	return Set(Orientation::Untap, Orientation::_TapMask);
}

BOOL COrientation::NoTapStance()
{
	return Set(Orientation::Null, Orientation::_TapMask);
}

BOOL COrientation::IsFaceDown() const
{
	return (m_Bitflag & Orientation::FaceDown).Any();
}

BOOL COrientation::FaceDown()
{
	return Set(Orientation::FaceDown, Orientation::_FaceMask);
}

BOOL COrientation::FaceUp()
{
	return Set(Orientation::FaceUp, Orientation::_FaceMask);
}

BOOL COrientation::Flip()
{
	return Set(Orientation::Flipped, Orientation::_FlipMask);
}

BOOL COrientation::SecondFace()
{
	return Set(Orientation::FaceSecond, Orientation::_DoubleFaceMask);
}

BOOL COrientation::Morph()
{
	return Set(Orientation::Morph, Orientation::_MorphMask);
}

BOOL COrientation::UnFlip()
{
	return Set(Orientation::UnFlipped, Orientation::_FlipMask);
}

BOOL COrientation::UnMorph()
{
	return Set(Orientation::UnMorph, Orientation::_MorphMask);
}

BOOL COrientation::FirstFace()
{
	return Set(Orientation::FaceFirst, Orientation::_DoubleFaceMask);
}

BOOL COrientation::NoFacing()
{
	return Set(Orientation::Null, Orientation::_FaceMask);
}

void COrientation::ResetTapUntapCount()
{
	m_nTapCount = 0;
	m_nUntapCount = 0;
}

int COrientation::GetTapCount() const
{
	return m_nTapCount;
}

int COrientation::GetUntapCount() const
{
	return m_nUntapCount;
}

//____________________________________________________________________________
//
CCreatureKeyword::CCreatureKeyword(CCreatureCard* pCreatureCard)
: CTurnSupportBitflagEventSource(_T("CREATURE KEYWORD"), 
								 CreatureKeyword::_PositiveCreatureKeywords,
								 CreatureKeyword::_NegativeCreatureKeywords)
	, m_pCreatureCard(pCreatureCard)
{
}

CCreatureCard* CCreatureKeyword::GetCreatureCard() const
{
	return m_pCreatureCard;
}

BOOL CCreatureKeyword::FirstStrike() const
{
	return (m_Bitflag & CreatureKeyword::FirstStrike).Any();
}

BOOL CCreatureKeyword::DoubleStrike() const
{
	return (m_Bitflag & CreatureKeyword::DoubleStrike).Any();
}

BOOL CCreatureKeyword::Flying() const
{
	return (m_Bitflag & CreatureKeyword::Flying).Any();
}

BOOL CCreatureKeyword::Fear() const
{
	return (m_Bitflag & CreatureKeyword::Fear).Any();
}

BOOL CCreatureKeyword::Intimidate() const
{
	return (m_Bitflag & CreatureKeyword::Intimidate).Any();
}

BOOL CCreatureKeyword::Unleash() const
{
	return (m_Bitflag & CreatureKeyword::Unleash).Any();
}

BOOL CCreatureKeyword::Paired() const
{
	return (m_Bitflag & CreatureKeyword::Paired).Any();
}

BOOL CCreatureKeyword::Soulbond() const
{
	return (m_Bitflag & CreatureKeyword::Soulbond).Any();
}

BOOL CCreatureKeyword::Shadow() const
{
	return (m_Bitflag & CreatureKeyword::Shadow).Any();
}

BOOL CCreatureKeyword::ShadowReach() const
{
	return (m_Bitflag & CreatureKeyword::ShadowReach).Any();
}

BOOL CCreatureKeyword::Horsemanship() const
{
	return (m_Bitflag & CreatureKeyword::Horsemanship).Any();
}

BOOL CCreatureKeyword::Flanking() const
{
	return (m_Bitflag & CreatureKeyword::Flanking).Any();
}

BOOL CCreatureKeyword::ReplacedDamage() const
{
	return (m_Bitflag & CreatureKeyword::ReplacedDamage).Any();
}
BOOL CCreatureKeyword::FullReplacedDamage() const
{
	return (m_Bitflag & CreatureKeyword::FullReplacedDamage).Any();
}
BOOL CCreatureKeyword::SwitchedPT() const
{
	return (m_Bitflag & CreatureKeyword::SwitchedPT).Any();
}
BOOL CCreatureKeyword::Persist() const
{
	return (m_Bitflag & CreatureKeyword::Persist).Any();
}
BOOL CCreatureKeyword::TappedCanBlock() const
{
	return (m_Bitflag & CreatureKeyword::TappedCanBlock).Any();
}
BOOL CCreatureKeyword::Haste() const
{
	return ((m_Bitflag & CreatureKeyword::Haste).Get() == CreatureKeyword::Haste);
}
BOOL CCreatureKeyword::HasteCombat() const
{
	return (m_Bitflag & CreatureKeyword::HasteCombat).Any();
}
BOOL CCreatureKeyword::HasteTap() const
{
	return (m_Bitflag & CreatureKeyword::HasteTap).Any();
}
BOOL CCreatureKeyword::CantBeEquipped() const
{
	return (m_Bitflag & CreatureKeyword::CantBeEquipped).Any();
}


BOOL CCreatureKeyword::Unblockable(const CCreatureCard* pCard) const
{
	if (!(m_Bitflag & CreatureKeyword::Unblockable).Any())
		return FALSE;

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::Unblockable);
	if (!pFilter)
		return TRUE;

	return !pFilter->IsCardIncluded(pCard);
}

BOOL CCreatureKeyword::CanReach(const CCreatureCard* pCard) const
{
	if (!(m_Bitflag & CreatureKeyword::Reach).Any())
		return FALSE;

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::Reach);
	if (!pFilter)
		return TRUE;

	return !pFilter->IsCardIncluded(pCard);
}

BOOL CCreatureKeyword::Vigilance() const
{
	return (m_Bitflag & CreatureKeyword::Vigilance).Any();
}

BOOL CCreatureKeyword::CanDefenderAttack() const
{
	return (m_Bitflag & CreatureKeyword::DefenderMayAttack).Any();
}

BOOL CCreatureKeyword::CantBeBlockedByMultiple(const CCreatureCard* pCard) const
{
	if (!(m_Bitflag & CreatureKeyword::CantBeBlockedByMultiple).Any())
		return FALSE;

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::CantBeBlockedByMultiple);
	if (!pFilter)
		return TRUE;

	return !pFilter->IsCardIncluded(pCard);
}

BOOL CCreatureKeyword::CantBeBlockedByOne(const CCreatureCard* pCard) const
{
	if (!(m_Bitflag & CreatureKeyword::CantBeBlockedBy1).Any())
		return FALSE;

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::CantBeBlockedBy1);
	if (!pFilter)
		return TRUE;

	return !pFilter->IsCardIncluded(pCard);
}

BOOL CCreatureKeyword::CantBeBlockedByOneOrTwo(const CCreatureCard* pCard) const
{
	if (!(m_Bitflag & CreatureKeyword::CantBeBlockedBy1Or2).Any())
		return FALSE;

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::CantBeBlockedBy1Or2);
	if (!pFilter)
		return TRUE;

	return !pFilter->IsCardIncluded(pCard);
}

BOOL CCreatureKeyword::CanOnlyBlockFlying(const CCreatureCard* pCard) const
{
	if (!(m_Bitflag & CreatureKeyword::OnlyBlockFlying).Any())
		return FALSE;

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::OnlyBlockFlying);
	if (!pFilter)
		return TRUE;

	return !pFilter->IsCardIncluded(pCard);
}

BOOL CCreatureKeyword::CantAttack() const
{
	return (m_Bitflag & CreatureKeyword::CantAttack).Any();
}

BOOL CCreatureKeyword::Defender() const
{
	return (m_Bitflag & CreatureKeyword::Defender).Any();
}

BOOL CCreatureKeyword::CantBlock(const CCreatureCard* pAttacker) const
{
	if (!(m_Bitflag & CreatureKeyword::CantBlock).Any())
		return FALSE;	// Can block attackers without restrictions in general

	const CCardFilter* pFilter = GetDataAsCardFilter(CreatureKeyword::CantBlock);
	if (!pFilter)
		return TRUE;	// Can't block attackers without exceptions

	return !pFilter->IsCardIncluded(pAttacker);	// Can't block attackers with exceptions
}

BOOL CCreatureKeyword::CanAssignDamageToPlayer() const
{
	return (m_Bitflag & CreatureKeyword::CanAssignCombatDamageToDefPlayer).Any();
}

BOOL CCreatureKeyword::Landwalk() const
{
	return (m_Bitflag & CreatureKeyword::_LandwalkMask).Any();
}

CreatureKeyword CCreatureKeyword::GetLandwalk() const
{
	return m_Bitflag & CreatureKeyword::_LandwalkMask;
}

BOOL CCreatureKeyword::Lure() const
{
	return (m_Bitflag & CreatureKeyword::Lure).Any();
}

BOOL CCreatureKeyword::CowardAttacker() const
{
	return (m_Bitflag & CreatureKeyword::CowardAttacker).Any();
}

BOOL CCreatureKeyword::CowardBlocker() const
{
	return (m_Bitflag & CreatureKeyword::CowardBlocker).Any();
}

BOOL CCreatureKeyword::DealNoCombatDamage() const
{
	return (m_Bitflag & CreatureKeyword::DealNoCombatDamage).Any();
}

BOOL CCreatureKeyword::DealNoNoncombatDamage() const
{
	return (m_Bitflag & CreatureKeyword::DealNoNoncombatDamage).Any();
}

BOOL CCreatureKeyword::PreventAllCombatDamage() const
{
	return (m_Bitflag & CreatureKeyword::PreventAllCombatDamage).Any();
}

BOOL CCreatureKeyword::PreventAllNoncombatDamage() const
{
	return (m_Bitflag & CreatureKeyword::PreventAllNoncombatDamage).Any();
}

BOOL CCreatureKeyword::Trample() const
{
	return (m_Bitflag & CreatureKeyword::Trample).Any();
}

BOOL CCreatureKeyword::MustAttack() const
{
	return (m_Bitflag & CreatureKeyword::MustAttack).Any();
}

BOOL CCreatureKeyword::MustAttackEachCombat() const
{
	return (m_Bitflag & CreatureKeyword::MustAttackEachCombat).Any();
}

BOOL CCreatureKeyword::CantRegenerate() const
{
	return (m_Bitflag & CreatureKeyword::CantRegenerate).Any();
}

BOOL CCreatureKeyword::Devour() const
{
	return (m_Bitflag & CreatureKeyword::Devour).Any();
}

BOOL CCreatureKeyword::Amplify() const
{
	return (m_Bitflag & CreatureKeyword::Amplify).Any();
}

BOOL CCreatureKeyword::HasNonBasicWalk() const
{
	return (m_Bitflag & CreatureKeyword::NonBasicWalk).Any();
}

const CCardFilter* CCreatureKeyword::GetNonBasicWalkFilter() const
{
	return GetDataAsCardFilter(CreatureKeyword::NonBasicWalk);
}

BOOL CCreatureKeyword::HasUnblockableWalk() const
{
	return (m_Bitflag & CreatureKeyword::UnblockableWalk).Any();
}

const CCardFilter* CCreatureKeyword::GetUnblockableWalkFilter() const
{
	return GetDataAsCardFilter(CreatureKeyword::UnblockableWalk);
}

BOOL CCreatureKeyword::LandwalkReach() const
{
	return (m_Bitflag & CreatureKeyword::LandwalkReach).Any();
}

BOOL CCreatureKeyword::HasMonstrous() const
{
	return (m_Bitflag & CreatureKeyword::Monstrous).Any();
}

BOOL CCreatureKeyword::HasRenowned() const
{
	return (m_Bitflag & CreatureKeyword::Renowned).Any();
}
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
//
void CCreatureKeyword::AddFirstStrike(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::FirstStrike, bThisTurnOnly));
}

void CCreatureKeyword::AddDoubleStrike(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DoubleStrike, bThisTurnOnly));
}

void CCreatureKeyword::AddFlying(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Flying, bThisTurnOnly));
}

void CCreatureKeyword::AddFear(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Fear, bThisTurnOnly));
}

void CCreatureKeyword::AddIntimidate(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Intimidate, bThisTurnOnly));
}

void CCreatureKeyword::AddUnleash(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Unleash, bThisTurnOnly));
}

void CCreatureKeyword::AddPaired(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Paired, bThisTurnOnly));
}

void CCreatureKeyword::AddSoulbond(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Soulbond, bThisTurnOnly));
}

void CCreatureKeyword::AddHaste(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Haste, bThisTurnOnly));
}

void CCreatureKeyword::AddHasteCombat(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::HasteCombat, bThisTurnOnly));
}

void CCreatureKeyword::AddHasteTap(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::HasteTap, bThisTurnOnly));
}

void CCreatureKeyword::AddUnblockable(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::Unblockable, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddReach(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::Reach, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddVigilance(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Vigilance, bThisTurnOnly));
}

void CCreatureKeyword::AddDefenderMayAttack(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DefenderMayAttack, bThisTurnOnly));
}

void CCreatureKeyword::AddCantBeBlockedByMultiple(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeBlockedByMultiple, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddCantBeBlockedByOne(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeBlockedBy1, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddCantBeBlockedByOneOrTwo(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeBlockedBy1Or2, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddCanOnlyBlockFlying(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::OnlyBlockFlying, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddCantAttack(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantAttack, bThisTurnOnly));
}

void CCreatureKeyword::AddDefender(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Defender, bThisTurnOnly));
}

void CCreatureKeyword::AddCantBlock(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBlock, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::AddCantBeEquipped(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeEquipped, bThisTurnOnly));
}

void CCreatureKeyword::AddCanAssignDamageToPlayer(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CanAssignCombatDamageToDefPlayer, bThisTurnOnly));
}

void CCreatureKeyword::AddLandwalk(CreatureKeyword landwalk, BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(landwalk.Get(), bThisTurnOnly));
}

void CCreatureKeyword::AddLure(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Lure, bThisTurnOnly));
}

void CCreatureKeyword::AddCowardAttacker(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CowardAttacker, bThisTurnOnly));
}

void CCreatureKeyword::AddCowardBlocker(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CowardBlocker, bThisTurnOnly));
}

void CCreatureKeyword::AddDealNoCombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DealNoCombatDamage, bThisTurnOnly));
}

void CCreatureKeyword::AddDealNoNoncombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DealNoNoncombatDamage, bThisTurnOnly));
}

void CCreatureKeyword::AddPreventAllCombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::PreventAllCombatDamage, bThisTurnOnly));
}

void CCreatureKeyword::AddPreventAllNoncombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::PreventAllNoncombatDamage, bThisTurnOnly));
}

void CCreatureKeyword::AddTrample(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Trample, bThisTurnOnly));
}

void CCreatureKeyword::AddMustAttack(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::MustAttack, bThisTurnOnly));
}

void CCreatureKeyword::AddMustAttackEachCombat(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::MustAttackEachCombat, bThisTurnOnly));
}

void CCreatureKeyword::AddCantRegenerate(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantRegenerate, bThisTurnOnly));
}

void CCreatureKeyword::AddShadow(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Shadow, bThisTurnOnly));
}

void CCreatureKeyword::AddShadowReach(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::ShadowReach, bThisTurnOnly));
}

void CCreatureKeyword::AddHorsemanship(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Horsemanship, bThisTurnOnly));
}

void CCreatureKeyword::AddFlanking(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Flanking, bThisTurnOnly));
}
void CCreatureKeyword::AddReplacedDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::ReplacedDamage, bThisTurnOnly));
}
void CCreatureKeyword::AddFullReplacedDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::FullReplacedDamage, bThisTurnOnly));
}
void CCreatureKeyword::AddSwitchedPT(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::SwitchedPT, bThisTurnOnly));
}
void CCreatureKeyword::AddPersist(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Persist, bThisTurnOnly));
}
void CCreatureKeyword::AddTappedCanBlock(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::TappedCanBlock, bThisTurnOnly));
}

void CCreatureKeyword::AddDevour(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Devour, bThisTurnOnly));
}

void CCreatureKeyword::AddAmplify(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Amplify, bThisTurnOnly));
}

void CCreatureKeyword::AddNonBasicWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::NonBasicWalk, bThisTurnOnly, EntryType::Addition, (DWORD)pCardFilter));
}

void CCreatureKeyword::AddUnblockableWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::UnblockableWalk, bThisTurnOnly, EntryType::Addition, (DWORD)pCardFilter));
}

void CCreatureKeyword::AddLandwalkReach(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::LandwalkReach, bThisTurnOnly));
}

void CCreatureKeyword::AddMonstrous(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Monstrous, bThisTurnOnly));
}

void CCreatureKeyword::AddRenowned(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Renowned, bThisTurnOnly));
}
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
//
void CCreatureKeyword::RemoveFirstStrike(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::FirstStrike, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveDoubleStrike(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DoubleStrike, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveFlying(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Flying, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveFear(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Fear, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveIntimidate(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Intimidate, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveUnleash(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Unleash, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemovePaired(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Paired, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveSoulbond(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Soulbond, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveHaste(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Haste, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveHasteCombat(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::HasteCombat, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveHasteTap(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::HasteTap, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveUnblockable(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::Unblockable, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::RemoveReach(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::Reach, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::RemoveVigilance(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Vigilance, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveDefenderMayAttack(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DefenderMayAttack, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCantBeBlockedByMultiple(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeBlockedByMultiple, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::RemoveCantBeBlockedByOne(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeBlockedBy1, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::RemoveCantBeBlockedByOneOrTwo(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeBlockedBy1Or2, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::RemoveCanOnlyBlockFlying(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::OnlyBlockFlying, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

void CCreatureKeyword::RemoveCantAttack(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantAttack, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveDefender(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Defender, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCantBlock(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBlock, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCantBeEquipped(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantBeEquipped, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCanAssignDamageToPlayer(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CanAssignCombatDamageToDefPlayer, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveLandwalk(CreatureKeyword landwalk, BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(landwalk.Get(), bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveLure(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Lure, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCowardAttacker(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CowardAttacker, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCowardBlocker(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CowardBlocker, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveDealNoCombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DealNoCombatDamage, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveDealNoNoncombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::DealNoNoncombatDamage, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemovePreventAllCombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::PreventAllCombatDamage, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemovePreventAllNoncombatDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::PreventAllNoncombatDamage, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveTrample(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Trample, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveMustAttack(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::MustAttack, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveMustAttackEachCombat(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::MustAttackEachCombat, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveCantRegenerate(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::CantRegenerate, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveShadow(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Shadow, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveShadowReach(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::ShadowReach, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveHorsemanship(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Horsemanship, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveFlanking(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Flanking, bThisTurnOnly, EntryType::Removal));
}
void CCreatureKeyword::RemoveReplacedDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::ReplacedDamage, bThisTurnOnly, EntryType::Removal));
}
void CCreatureKeyword::RemoveFullReplacedDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::FullReplacedDamage, bThisTurnOnly, EntryType::Removal));
}
void CCreatureKeyword::RemoveSwitchedPT(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::SwitchedPT, bThisTurnOnly, EntryType::Removal));
}
void CCreatureKeyword::RemovePersist(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Persist, bThisTurnOnly, EntryType::Removal));
}
void CCreatureKeyword::RemoveTappedCanBlock(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::TappedCanBlock, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveDevour(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Devour, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveAmplify(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Amplify, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveNonBasicWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::NonBasicWalk, bThisTurnOnly, EntryType::Removal, (DWORD)pCardFilter));
}

void CCreatureKeyword::RemoveUnblockableWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter)
{
	AddEntry(BitflagEntry(CreatureKeyword::UnblockableWalk, bThisTurnOnly, EntryType::Removal, (DWORD)pCardFilter));
}

void CCreatureKeyword::RemoveLandwalkReach(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::LandwalkReach, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveMonstrous(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Monstrous, bThisTurnOnly, EntryType::Removal));
}

void CCreatureKeyword::RemoveRenowned(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CreatureKeyword::Renowned, bThisTurnOnly, EntryType::Removal));
}
//____________________________________________________________________________
//
CCardFlag::CCardFlag()
	: CTurnSupportBitflagEventSource(_T("CARD FLAG"), 
								CardFlag::_PositiveCardFlags,
								CardFlag::_NegativeCardFlags)
{
}

void CCardFlag::AddAbilityFlag(DWORD dwFlag)
{
	AddEntry(BitflagEntry(CardFlag::AbilityFlag, FALSE, EntryType::Addition, dwFlag));
}

bool CCardFlag::HasAbilityFlag(DWORD dwFlag) const
{
	if (!(m_Bitflag & CardFlag::AbilityFlag).Any())
		return FALSE;

	DWORD dwData = GetData(CardFlag::AbilityFlag);
	return dwData == dwFlag;
}

bool CCardFlag::HasDealtCombatDamage() const
{
	return (m_Bitflag & CardFlag::DealtCombatDamage).Any();
}

void CCardFlag::AddHasDealtCombatDamage()
{
	AddEntry(BitflagEntry(CardFlag::DealtCombatDamage, TRUE));
}

bool CCardFlag::HasDealtNonCombatDamage() const
{
	return (m_Bitflag & CardFlag::DealtNonCombatDamage).Any();
}

void CCardFlag::AddHasDealtNonCombatDamage()
{
	AddEntry(BitflagEntry(CardFlag::DealtNonCombatDamage, TRUE));
}


DWORD CCardFlag::GetData(CardFlag cardFlag) const
{
	return __super::GetData(cardFlag);
}

//____________________________________________________________________________
//
CCreatureFlag::CCreatureFlag()
	: CTurnSupportBitflagEventSource(_T("CREATURE FLAG"), 
								CreatureFlag::_PositiveCreatureFlags,
								CreatureFlag::_NegativeCreatureFlags)
{
}

bool CCreatureFlag::HasTakenCombatDamage() const
{
	return (m_Bitflag & CreatureFlag::TakenCombatDamage).Any();
}

void CCreatureFlag::AddHasTakenCombatDamage()
{
	AddEntry(BitflagEntry(CreatureFlag::TakenCombatDamage, TRUE));
}

bool CCreatureFlag::HasTakenNonCombatDamage() const
{
	return (m_Bitflag & CreatureFlag::TakenNonCombatDamage).Any();
}

void CCreatureFlag::AddHasTakenNonCombatDamage()
{
	AddEntry(BitflagEntry(CreatureFlag::TakenNonCombatDamage, TRUE));
}

bool CCreatureFlag::HasAttacked() const
{
	return (m_Bitflag & CreatureFlag::Attacked).Any();
}

void CCreatureFlag::AddHasAttacked()
{
	AddEntry(BitflagEntry(CreatureFlag::Attacked, TRUE));
}

bool CCreatureFlag::IsBlocked() const
{
	return (m_Bitflag & CreatureFlag::IsBlocked).Any();
}

void CCreatureFlag::AddIsBlocked()
{
	AddEntry(BitflagEntry(CreatureFlag::IsBlocked, TRUE));
}

void CCreatureFlag::RemoveIsBlocked()
{
	AddEntry(BitflagEntry(CreatureFlag::IsBlocked, TRUE, EntryType::Removal));
}

bool CCreatureFlag::HasBlocked() const
{
	return (m_Bitflag & CreatureFlag::Blocked).Any();
}

void CCreatureFlag::AddHasBlocked()
{
	AddEntry(BitflagEntry(CreatureFlag::Blocked, TRUE));
}

void CCreatureFlag::RemoveHasBlocked()
{
	AddEntry(BitflagEntry(CreatureFlag::Blocked, TRUE, EntryType::Removal));
}

bool CCreatureFlag::HasBeenBlocked() const
{
	return (m_Bitflag & CreatureFlag::BeenBlocked).Any();
}

void CCreatureFlag::AddHasBeenBlocked()
{
	AddEntry(BitflagEntry(CreatureFlag::BeenBlocked, TRUE));
}

void CCreatureFlag::RemoveHasBeenBlocked()
{
	AddEntry(BitflagEntry(CreatureFlag::BeenBlocked, TRUE, EntryType::Removal));
}

//____________________________________________________________________________
//
CCardKeyword::CCardKeyword(CCard* pCard)
	: CTurnSupportBitflagEventSource(_T("CARD KEYWORD"),
									CardKeyword::_PositiveCardKeywords,
									CardKeyword::_NegativeCardKeywords)
	, m_pCard(pCard)
{
}

CCard* CCardKeyword::GetCard() const
{
	return m_pCard;
}

void CCardKeyword::AddNoUntapInUntapPhase()
{
	AddEntry(BitflagEntry(CardKeyword::NoUntapInUntapPhase, FALSE));
}

BOOL CCardKeyword::NoUntapInUntapPhase() const
{
	return (m_Bitflag & CardKeyword::NoUntapInUntapPhase).Any();
}

void CCardKeyword::AddNoUntapInNextContUntap()
{
	AddEntry(BitflagEntry(CardKeyword::NoUntapInNextContUntap, FALSE));
}

void CCardKeyword::RemoveNoUntapInNextContUntap(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::NoUntapInNextContUntap, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::NoUntapInNextContUntap() const
{
	return (m_Bitflag & CardKeyword::NoUntapInNextContUntap).Any();
}

void CCardKeyword::AddCantBeCountered(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CantBeCountered, bThisTurnOnly));
}

void CCardKeyword::RemoveCantBeCountered(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CantBeCountered, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::CantBeCountered() const
{
	return (m_Bitflag & CardKeyword::CantBeCountered).Any();
}

BOOL CCardKeyword::Protection() const
{
	return (m_Bitflag & CardKeyword::_ProtectionMask).Any();
}

CardKeyword CCardKeyword::GetProtection() const
{
	return m_Bitflag & CardKeyword::_ProtectionMask;
}

void CCardKeyword::AddProtection(CardKeyword protection, BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(protection.Get(), bThisTurnOnly));
}

void CCardKeyword::RemoveProtection(CardKeyword protection, BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(protection.Get(), bThisTurnOnly, EntryType::Removal));
}
/* 
BOOL CCardKeyword::Vanishing(int& nValue) const
{
	if (!(m_Bitflag & CardKeyword::Vanishing).Any())
	{
		nValue = 0;
		return FALSE;
	}

	nValue = GetDataAsInteger(CardKeyword::Vanishing);
	ATLASSERT(m_pCard->GetAbility(_T("Vanishing")));
	return TRUE;
}

void CCardKeyword::AddVanishing(BOOL bThisTurnOnly, int nValue)
{
	if (!m_pCard->GetAbility(_T("Vanishing")))
	{
		counted_ptr<CVanishingAbility> cpVanishingAbility(::CreateObject<CVanishingAbility>(m_pCard, nValue));
		cpVanishingAbility->DefineGameClassID();
		m_pCard->AddAbility(cpVanishingAbility.GetPointer());
	}

	AddEntry(BitflagEntry(CardKeyword::Vanishing, bThisTurnOnly, EntryType::Addition, nValue));
}

void CCardKeyword::RemoveVanishing(BOOL bThisTurnOnly, int nValue)
{
	AddEntry(BitflagEntry(CardKeyword::Vanishing, bThisTurnOnly, EntryType::Removal, nValue));

	counted_ptr<CVanishingAbility> cpVanishingAbility((CVanishingAbility*)(m_pCard->GetAbility(_T("Vanishing"))));
	ATLASSERT(cpVanishingAbility.GetPointer());
	if (cpVanishingAbility.GetPointer())
		m_pCard->RemoveAbility(cpVanishingAbility.GetPointer());
	else
		LOG_ERROR(_T("Vanishing ability error."));
}
 */
void CCardKeyword::AddShroud(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CardKeyword::Shroud, bThisTurnOnly, EntryType::Addition, (DWORD)pExceptionFilter));
}

void CCardKeyword::RemoveShroud(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter)
{
	AddEntry(BitflagEntry(CardKeyword::Shroud, bThisTurnOnly, EntryType::Removal, (DWORD)pExceptionFilter));
}

BOOL CCardKeyword::HasShroud(const CCard* pCard) const
{
	if (!(m_Bitflag & CardKeyword::Shroud).Any())
		return FALSE; // no shroud (can be targeted by spells and abilities)

	const CCardFilter* pFilter = GetDataAsCardFilter(CardKeyword::Shroud);
	if (!pFilter)
		return TRUE; // no exception

	return !pFilter->IsCardIncluded(pCard);	// if not included -> not an exception -> cannot be used to target this card -> returns true
}

void CCardKeyword::AddHexproof(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Hexproof, bThisTurnOnly));
}

void CCardKeyword::RemoveHexproof(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Hexproof, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasHexproof() const
{
	return (m_Bitflag & CardKeyword::Hexproof).Any();
}

void CCardKeyword::AddCantGetCounters(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CantGetCounters, bThisTurnOnly));
}

void CCardKeyword::RemoveCantGetCounters(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CantGetCounters, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasCantGetCounters() const
{
	return (m_Bitflag & CardKeyword::CantGetCounters).Any();
}

void CCardKeyword::AddPhyrexianMana(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::PhyrexianMana, bThisTurnOnly));
}

void CCardKeyword::RemovePhyrexianMana(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::PhyrexianMana, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasPhyrexianMana() const
{
	return (m_Bitflag & CardKeyword::PhyrexianMana).Any();
}

void CCardKeyword::AddUnpreventableDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::UnpreventableDamage, bThisTurnOnly));
}

void CCardKeyword::RemoveUnpreventableDamage(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::UnpreventableDamage, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasUnpreventableDamage() const
{
	return (m_Bitflag & CardKeyword::UnpreventableDamage).Any();
}

void CCardKeyword::AddCantBeEnchanted(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CantBeEnchanted, bThisTurnOnly));
}

void CCardKeyword::RemoveCantBeEnchanted(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CantBeEnchanted, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasCantBeEnchanted() const
{
	return (m_Bitflag & CardKeyword::CantBeEnchanted).Any();
}

void CCardKeyword::AddFlash(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Flash, bThisTurnOnly));
}

void CCardKeyword::RemoveFlash(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Flash, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasFlash() const
{
	return (m_Bitflag & CardKeyword::Flash).Any();
}

void CCardKeyword::AddPflash(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Pflash, bThisTurnOnly));
}

void CCardKeyword::RemovePflash(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Pflash, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasPflash() const
{
	return (m_Bitflag & CardKeyword::Pflash).Any();
}

void CCardKeyword::AddStormCopy(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::StormCopy, bThisTurnOnly));
}

void CCardKeyword::RemoveStormCopy(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::StormCopy, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasStormCopy() const
{
	return (m_Bitflag & CardKeyword::StormCopy).Any();
}

void CCardKeyword::AddSplitSecond(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::SplitSecond, bThisTurnOnly));
}

void CCardKeyword::RemoveSplitSecond(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::SplitSecond, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasSplitSecond() const
{
	return (m_Bitflag & CardKeyword::SplitSecond).Any();
}

void CCardKeyword::AddChangeling(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Changeling, bThisTurnOnly));
}

void CCardKeyword::RemoveChangeling(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Changeling, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasChangeling() const
{
	return (m_Bitflag & CardKeyword::Changeling).Any();
}

void CCardKeyword::AddIndestructible(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Indestructible, bThisTurnOnly));
}

void CCardKeyword::RemoveIndestructible(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Indestructible, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasIndestructible() const
{
	return (m_Bitflag & CardKeyword::Indestructible).Any();
}

void CCardKeyword::AddCanChooseNotUntap(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CanChooseNotUntap, bThisTurnOnly));
}

void CCardKeyword::RemoveCanChooseNotUntap(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CanChooseNotUntap, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasCanChooseNotUntap() const
{
	return (m_Bitflag & CardKeyword::CanChooseNotUntap).Any();
}

void CCardKeyword::AddDeathtouch(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Deathtouch, bThisTurnOnly));
}

void CCardKeyword::RemoveDeathtouch(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Deathtouch, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasDeathtouch() const
{
	return (m_Bitflag & CardKeyword::Deathtouch).Any();
}

void CCardKeyword::AddLifelink(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Lifelink, bThisTurnOnly));
}

void CCardKeyword::RemoveLifelink(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Lifelink, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasLifelink() const
{
	return (m_Bitflag & CardKeyword::Lifelink).Any();
}

void CCardKeyword::AddWither(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Wither, bThisTurnOnly));
}

void CCardKeyword::RemoveWither(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Wither, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasWither() const
{
	return (m_Bitflag & CardKeyword::Wither).Any();
}
BOOL CCardKeyword::HasDredge() const
{
	return (m_Bitflag & CardKeyword::Dredge).Any();
}

void CCardKeyword::AddDredge(BOOL bThisTurnOnly, int nValue)
{
	if (!m_pCard->GetAbility(_T("Dredge")))
	{
		counted_ptr<CDredgeAbility> cpDredgeAbility(::CreateObject<CDredgeAbility>(m_pCard, nValue));
		cpDredgeAbility->DefineGameClassID();
		m_pCard->AddAbility(cpDredgeAbility.GetPointer());
	}

	AddEntry(BitflagEntry(CardKeyword::Dredge, bThisTurnOnly, EntryType::Addition, nValue));
}

void CCardKeyword::RemoveDredge(BOOL bThisTurnOnly, int nValue)
{
	AddEntry(BitflagEntry(CardKeyword::Dredge, bThisTurnOnly, EntryType::Removal, nValue));

	counted_ptr<CDredgeAbility> cpDredgeAbility((CDredgeAbility*)(m_pCard->GetAbility(_T("Dredge"))));
	ATLASSERT(cpDredgeAbility.GetPointer());
	if (cpDredgeAbility.GetPointer())
		m_pCard->RemoveAbility(cpDredgeAbility.GetPointer());
	else
		LOG_ERROR(_T("Dredge ability error."));
}
void CCardKeyword::AddTotemArmor(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::TotemArmor, bThisTurnOnly));
}

void CCardKeyword::RemoveTotemArmor(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::TotemArmor, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasTotemArmor() const
{
	return (m_Bitflag & CardKeyword::TotemArmor).Any();
}
void CCardKeyword::AddMadness(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Madness, bThisTurnOnly));
}

void CCardKeyword::RemoveMadness(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Madness, bThisTurnOnly, EntryType::Removal));
}
BOOL CCardKeyword::HasMadness() const
{
	return (m_Bitflag & CardKeyword::Madness).Any();
}
void CCardKeyword::AddPhasing(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Phasing, bThisTurnOnly));
}

void CCardKeyword::RemovePhasing(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Phasing, bThisTurnOnly, EntryType::Removal));
}
BOOL CCardKeyword::HasPhasing() const
{
	return (m_Bitflag & CardKeyword::Phasing).Any();
}
void CCardKeyword::AddCardHaste(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CardHaste, bThisTurnOnly));
}

void CCardKeyword::RemoveCardHaste(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::CardHaste, bThisTurnOnly, EntryType::Removal));
}
BOOL CCardKeyword::HasCardHaste() const
{
	return (m_Bitflag & CardKeyword::CardHaste).Any();
}
void CCardKeyword::AddSpellCopy(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::SpellCopy, bThisTurnOnly));
}

void CCardKeyword::RemoveSpellCopy(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::SpellCopy, bThisTurnOnly, EntryType::Removal));
}
BOOL CCardKeyword::HasDetain() const
{
	return (m_Bitflag & CardKeyword::Detain).Any();
}
void CCardKeyword::AddDetain(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Detain, bThisTurnOnly));
}

void CCardKeyword::RemoveDetain(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Detain, bThisTurnOnly, EntryType::Removal));
}
BOOL CCardKeyword::HasSpellCopy() const
{
	return (m_Bitflag & CardKeyword::SpellCopy).Any();
}
BOOL CCardKeyword::HasMovementReplacement() const
{
	return (m_Bitflag & CardKeyword::MovementReplacement).Any();
}

void CCardKeyword::AddMovementReplacement(BOOL bThisTurnOnly, ZoneId nfromZone, ZoneId ntoZone, MoveType nMoveType, int nValue, LPCTSTR nTag, CCardFilter* nFilter)
{
	//if (!m_pCard->GetAbility(_T("Movement Replacement")))
	//{
		counted_ptr<CMovementReplacementAbility> cpMovementReplacementAbility(::CreateObject<CMovementReplacementAbility>(m_pCard,nfromZone, ntoZone,nMoveType, nValue, nTag, nFilter));
		cpMovementReplacementAbility->DefineGameClassID();
		m_pCard->AddAbility(cpMovementReplacementAbility.GetPointer());
	//}

	AddEntry(BitflagEntry(CardKeyword::MovementReplacement, bThisTurnOnly, EntryType::Addition));
}

void CCardKeyword::AddInfect(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Infect, bThisTurnOnly));
}

void CCardKeyword::RemoveInfect(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Infect, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasInfect() const
{
	return (m_Bitflag & CardKeyword::Infect).Any();
}
void CCardKeyword::AddEmblem(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Emblem, bThisTurnOnly));
}

void CCardKeyword::RemoveEmblem(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Emblem, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::IsEmblem() const
{
	return (m_Bitflag & CardKeyword::Emblem).Any();
}

void CCardKeyword::AddFreecast(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Freecast, bThisTurnOnly));
}

void CCardKeyword::RemoveFreecast(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::Freecast, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasFreecast() const
{
	return (m_Bitflag & CardKeyword::Freecast).Any();
}
void CCardKeyword::AddSpecialProtection(BOOL bThisTurnOnly, const CCardFilter* pCardFilter)
{
	// if (!m_pCard->GetAbility(_T("Special Protection")))
	{
		counted_ptr<CSpecialProtectionAbility> cpSpecialProtectionAbility(::CreateObject<CSpecialProtectionAbility>(m_pCard, _T("Special Protection"), pCardFilter));
		cpSpecialProtectionAbility->DefineGameClassID();
		m_pCard->AddAbility(cpSpecialProtectionAbility.GetPointer());
	}

	AddEntry(BitflagEntry(CardKeyword::ProtectionSpecial, bThisTurnOnly, EntryType::Addition));
}
void CCardKeyword::AddSpecialProtectionSpellsOnly(BOOL bThisTurnOnly, const CCardFilter* pCardFilter)
{
	// if (!m_pCard->GetAbility(_T("Special Protection")))
	{
		counted_ptr<CSpecialProtectionAbility> cpSpecialProtectionAbility(::CreateObject<CSpecialProtectionAbility>(m_pCard, _T("Special Protection"), pCardFilter));
		cpSpecialProtectionAbility->DefineGameClassID();
		cpSpecialProtectionAbility->SetFromSpellsOnly();
		m_pCard->AddAbility(cpSpecialProtectionAbility.GetPointer());
	}

	AddEntry(BitflagEntry(CardKeyword::ProtectionSpecial, bThisTurnOnly, EntryType::Addition));
}
void CCardKeyword::RemoveSpecialProtection(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(CardKeyword::ProtectionSpecial, bThisTurnOnly, EntryType::Removal));
}

BOOL CCardKeyword::HasSpecialProtection() const
{
	return (m_Bitflag & CardKeyword::ProtectionSpecial).Any();
}

//____________________________________________________________________________
//
CReplacementKeyword::CReplacementKeyword(CCard* pCard)
	: CTurnSupportBitflagEventSource(_T("REPLACEMENT KEYWORD"),
									ReplacementKeyword::_PositiveReplacementKeywords,
									ReplacementKeyword::_NegativeReplacementKeywords)
	, m_pCard(pCard)
{
}

CCard* CReplacementKeyword::GetCard() const
{
	return m_pCard;
}

void CReplacementKeyword::AddGraveyardToExile(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(ReplacementKeyword::GraveyardToExile, bThisTurnOnly));
}

void CReplacementKeyword::RemoveGraveyardToExile(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(ReplacementKeyword::GraveyardToExile, bThisTurnOnly, EntryType::Removal));
}

BOOL CReplacementKeyword::HasGraveyardToExile() const
{
	return (m_Bitflag & ReplacementKeyword::GraveyardToExile).Any();
}

void CReplacementKeyword::AddCommanderFlag(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(ReplacementKeyword::Commander, bThisTurnOnly));
}

void CReplacementKeyword::RemoveCommanderFlag(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(ReplacementKeyword::Commander, bThisTurnOnly, EntryType::Removal));
}

BOOL CReplacementKeyword::HasCommanderFlag() const
{
	return (m_Bitflag & ReplacementKeyword::Commander).Any();
}

BOOL CReplacementKeyword::HasUnearth() const
{
	return (m_Bitflag & ReplacementKeyword::Unearth).Any();
}

BOOL CReplacementKeyword::HasPseudoUnearth() const
{
	return (m_Bitflag & ReplacementKeyword::PseudoUnearth).Any();
}

void CReplacementKeyword::AddFlashback(BOOL bThisTurnOnly)
{
	AddEntry(BitflagEntry(ReplacementKeyword::Flashback, bThisTurnOnly));
}

BOOL CReplacementKeyword::HasFlashback() const
{
	return (m_Bitflag & ReplacementKeyword::Flashback).Any();
}


void CReplacementKeyword::RemoveFieldKeywords()
{
	AddEntry(BitflagEntry(ReplacementKeyword::Unearth, FALSE, EntryType::Removal));
}
//____________________________________________________________________________
//
AttackSubject::AttackSubject(CCreatureCard* pCreature)
	: pPlayer(pCreature->GetAttackedPlayer())
	, cpPlaneswalker(pCreature->GetAttackedPlaneswalker())
{}