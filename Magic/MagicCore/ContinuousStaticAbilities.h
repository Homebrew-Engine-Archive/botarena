#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CContinuousStaticAbility : public CSpell
{
public:
	CContinuousStaticAbility(CCard* pCard);

protected:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
};

//____________________________________________________________________________
//
class CORE_EXPORT CCounterPwrTghAbility : public CContinuousStaticAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	CCounterPwrTghAbility(CCreatureCard* pCreatureCard, LPCTSTR counterName);
	virtual ~CCounterPwrTghAbility() {}

	void SetPwrTghBonus(Power nPower, Life nToughnessBonus);
	void SetMultiplier(int nVector);

	OVERRIDE(void, SetEnabled)(BOOL bEnabled);

protected:
	ListenerPtr<CounterMovedEventSource::Listener> m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	CWhenSelfMoved m_WhenSelfMoved;

	CString m_CounterName;
	Power m_nPowerBonus;
	Life m_nToughnessBonus;
	int m_nVector;
};

//____________________________________________________________________________
//
