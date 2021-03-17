#pragma once

class CAbility;

//____________________________________________________________________________
//
class CORE_EXPORT CTrait 
	: public CReferenceCounted<SingleThreadedPolicy>
	, noncopyable
{
protected:
	CTrait(CAbility* pAbility);
	virtual ~CTrait() {}

public:
	static counted_ptr<CTrait> CreateObject(CAbility* pAbility)
	{
		return new CTrait(pAbility);
	}

	CAbility* GetAbility() const	{ return m_pAbility; }

	VIRTUAL(BOOL, IsPlayable)(BOOL bIncludeTricks) const	{ return TRUE; }
	VIRTUAL(BOOL, PayCost)()		{ return TRUE; }
	VIRTUAL(BOOL, Resolve)()		{ return TRUE; }

protected:
	CAbility*	m_pAbility;		// No need to AddRef (owner-owned relationship)
};

//____________________________________________________________________________
//
typedef CCountedPtrContainer<CTrait> CTraitContainer;

class CTraitContainer_
	: public CCountedPtrContainer_<CTrait, CTraitContainer>
{
};
