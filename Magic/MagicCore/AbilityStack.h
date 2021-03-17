#pragma once

class CStackAbilityAction;

//____________________________________________________________________________
//
class CORE_EXPORT CStackAbility : public CAbility
{
protected:
	CStackAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType);
	virtual ~CStackAbility() {}

public:
	void SetCanBeDenied();
	BOOL CanBeDenied() const;
	BOOL HasSpecialDenialCost() const     {return m_bSpecialDenialCost;}
	void SetSpecialDenialCost();

	const CCost& GetDenialCost() const;
	CCost& GetDenialCost();

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;

	BOOL	m_bCanBeDenied;
	BOOL    m_bSpecialDenialCost;
	CCost	m_DenialCost;
};
