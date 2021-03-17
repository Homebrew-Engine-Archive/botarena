#pragma once

class CPlayer;
class CInjectedStackAbilityMove;
class CInjectedStackAbility;
class CTriggeredActionController;
class CTask;
class CNode;
class CZone;

//____________________________________________________________________________
//
class CORE_EXPORT CBOTControllerTraitCombat
	: public CTrait
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CBOTControllerTraitCombat(CAbility* pAbility);
	virtual ~CBOTControllerTraitCombat() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks) const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CBOTControllerTraitTap
	: public CTrait
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CBOTControllerTraitTap(CAbility* pAbility);
	virtual ~CBOTControllerTraitTap() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks) const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayableIfTrait : public CTrait
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef FastDelegate< BOOL ( BOOL ) > PlayableCallback;

protected:
	CPlayableIfTrait(CAbility* pAbility, PlayableCallback playableCallback)
		: CTrait(pAbility)
		, m_PlayableCallback(playableCallback)
	{}
	virtual ~CPlayableIfTrait() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks) const
	{
		return m_PlayableCallback(bIncludeTricks);
	}

protected:
	PlayableCallback	m_PlayableCallback;
};

//____________________________________________________________________________
//
class CTriggeredAction;

// This trait can be used to control the life span of a newly created ability
// to single use. The owning ability will be freed when the ability is
// resolved for the first time. 
// This trait is also responsible for clearing any associated
// CCreateTemporaryAbilityAction moves created in the pTriggeredActionContainer
// for a player. This is done during the cost payment for the owning ability.
// 
// This trait is useful for cards like Flash:
//   Flash: Put a creature card from your hand into play. You may pay its mana
//   cost reduced by up to 2. If you don't, sacrifice it.
//
// The "You may pay..." part can be handled by this trait while the "If you
// don't..." part can be handled in a derived class from 
// CCreateTemporaryAbilityAction. The derived move(s) will be put into the
// triggered player's triggered container. The CCreateTemporaryAbilityAction
// class' resolution is responsible for removing the (unused) dynamic ability
// (thus this trait also) from the card in question.
class CORE_EXPORT CCreateTempTriggeredAbilityTrait
	: public CTrait
{
	DEFINE_CREATE_TO_CPTR_ONLY; 

protected:
	CCreateTempTriggeredAbilityTrait(CAbility* pAbility,
									 CAbility* pRemoveAbility,
									 CTriggeredAction* pTriggeredActionToAdd = NULL);
	virtual ~CCreateTempTriggeredAbilityTrait() {}

public:
	OVERRIDE(BOOL, PayCost)();
	OVERRIDE(BOOL, Resolve)();

protected:
	CAbility* m_pRemoveAbility;
	counted_ptr<CTriggeredAction> m_cpTriggeredAction;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlaneswalkerTrait : public CTrait
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPlaneswalkerTrait(CAbility* pAbility)
		: CTrait(pAbility)
	{}

	virtual ~CPlaneswalkerTrait() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks) const;
	OVERRIDE(BOOL, PayCost)();
};