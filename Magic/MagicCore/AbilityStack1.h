#pragma once

class CCardFilter;

//____________________________________________________________________________
//
class CORE_EXPORT CManaConsumptionAbility : public CStackAbility
{
protected:
	CManaConsumptionAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
					 LPCTSTR strManaCost);
	virtual ~CManaConsumptionAbility() {}

	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSpell : public CManaConsumptionAbility	// Stack
{
	DEFINE_CREATE_TO_CPTR_ONLY; 

protected:
	CSpell(CCard* pCard, AbilityType abilityType,
		   LPCTSTR strManaCost,
		   BOOL bInPlayIfSuccess); // if true, send to caster's inplay; if false, send to owner's graveyard; override with a call to SetToZoneIfSuccess()
	virtual ~CSpell() {}

public:
	void SetToZoneIfSuccess(ZoneId toZone,	// default: graveyard
							BOOL bToOwner,	// default: true
							CardPlacement cardPlacement = CardPlacement::Top, // TopOrBottom not supported
							BOOL bShuffle = FALSE);
	bool GetInPlayIfSuccess() { return m_ToZoneIfSuccess == ZoneId::Battlefield; }

	void SetToZoneIfFailed(ZoneId toZone); // default: graveyard; must be owner's

	void SetMainSpell(BOOL bMainSpell); // default: TRUE
	BOOL IsMainSpell() const;

	VIRTUAL(void, SetToActivatedAbility)();

	OVERRIDE(ZoneId, GetPlayableFrom)() const;
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
	

	void MoveSpellFromStack(const CAction* pAction, BOOL bResolutionResult);

	ZoneId			m_ToZoneIfSuccess;
	BOOL			m_bToOwnerZoneIfSuccess;
	CardPlacement	m_ToZoneCardPlacement;
	BOOL			m_bShuffleToZone;

	ZoneId			m_ToZoneIfFailed;

	BOOL			m_bRevertToAbility;
	BOOL			m_bMainSpell;
};

//____________________________________________________________________________
//
class CORE_EXPORT CMorphAbility1 : public CMorphAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY; 

protected:
	CMorphAbility1(CCard* pCard, LPCTSTR strManaCost);
	virtual ~CMorphAbility1() {}

	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
};

//____________________________________________________________________________
//
template <class S>
class CActivatedAbility : public S
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CActivatedAbility(CCard* pCard)
		: S(pCard, AbilityType::Activated)
	{
		SetToActivatedAbility();
	}

	template <typename P1>
	CActivatedAbility(CCard* pCard, P1 p1)
		: S(pCard, AbilityType::Activated, p1)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2)
		: S(pCard, AbilityType::Activated, p1, p2)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: S(pCard, AbilityType::Activated, p1, p2, p3)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5, p6)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5, p6, p7)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5, p6, p7, p8)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5, p6, p7, p8, p9)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)
	{
		SetToActivatedAbility();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
	CActivatedAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10, P11 p11)
		: S(pCard, AbilityType::Activated, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)
	{
		SetToActivatedAbility();
	}
};
