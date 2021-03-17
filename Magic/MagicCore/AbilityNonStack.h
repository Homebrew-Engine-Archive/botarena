#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CNonStackAbility : public CAbility
{
public:
	CNonStackAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType);
	virtual ~CNonStackAbility() {}

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
};
