#pragma once

//____________________________________________________________________________
//
class CStackAbilityAction;
class CTargetActionCommon;
class CDoubleTargetActionCommon;

class CORE_EXPORT CTargeting
	: public CSubjectGatherer
{
	friend class CTargetSpell;
	friend class CDoubleTargetSpell;
public:
	VIRTUAL(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
	VIRTUAL2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;

	VIRTUAL(BOOL, SubjectAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;		// similar to TargetAllowed() but ignore targeting restrictions
	VIRTUAL2(BOOL, SubjectAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;

	// Deflections

	VIRTUAL(BOOL, CanDeflectTargetToCard)(const CTargetActionCommon* pAction, const CCard* pCard) const;
	VIRTUAL(BOOL, CanDeflectTargetToPlayer)(const CTargetActionCommon* pAction, const CPlayer* pPlayer) const;

	VIRTUAL(void, DeflectTargetToCard)(CTargetActionCommon* pAction, CCard* pCard);		
	VIRTUAL(void, DeflectTargetToPlayer)(CTargetActionCommon* pAction, CPlayer* pPlayer);

private:
	/*OVERRIDE*/ BOOL IsSubjectIncluded(const CCard* pCard,
								     BOOL bIncludeTricks,
									 BOOL& bTrick) const { return TargetAllowed(pCard, bIncludeTricks, bTrick); }

	/*OVERRIDE*/ BOOL IsSubjectIncluded(const CPlayer* pPlayer,
			 						  BOOL bIncludeTricks,
									  BOOL& bTrick) const { return TargetAllowed(pPlayer, bIncludeTricks, bTrick); }
};
