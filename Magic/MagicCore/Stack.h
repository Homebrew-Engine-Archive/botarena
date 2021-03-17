#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CStack
	: protected CActionContainer_
{
	friend class CCounterSpell;
	friend class CAbility;

public:
	// Event Sources

	// OnSpellCast(CCard* pCard)
	CastSpellEventSource* GetCastSpellEventSource() const;


	CStack(CGame* pGame)
		: m_pGame(pGame)
		, m_nPassCount(0)
		, m_cpCastSpellEventSource(::CreateObject<CastSpellEventSource>(VAR_NAME(m_cpCastSpellEventSource)))
		, m_Projection(pGame)
		, m_bLastResolutionResult(FALSE)
	{
	}

	void Initialize() { m_Projection.Initialize(); }

	void AddAction(CStackAbilityAction* pAction);
	void SetActionAt(int nIndex, CStackAbilityAction* pAction)	
	{ 
		ATLASSERT(m_ActionStatus.GetSize() == __super::GetSize());
		m_Projection.Clear();
		__super::SetAt(nIndex, pAction); 
	}

	void RemoveActionAt(int nIndex)
	{
		ATLASSERT(m_ActionStatus.GetSize() == __super::GetSize());
		m_Projection.Clear();
		m_ActionStatus.RemoveAt(nIndex);
		__super::RemoveAt(nIndex);
	}

	const CStackAbilityAction* GetTopAction() const;

	int GetStackSize() const								{ return __super::GetSize(); }
	counted_ptr<const CStackAbilityAction> GetStackAction(int nIndex) const	
	{ 
		return counted_ptr<const CStackAbilityAction>(
			(CStackAbilityAction*)__super::GetAt(nIndex).GetPointer()); 
	}

	void SetActionStatus(int nStackActionIndex, StackActionStatus satus);
	StackActionStatus GetActionStatus(int nStackActionIndex) const;

	void IncreasePassCount();
	BOOL IsValidAbilityType(AbilityType abilityType, bool bCheckPlayer) const;

	void GetDenialActions(CActionContainer& MoveContainer, BOOL bIncludeTricks, BOOL bSetNames);
	void DenyTopAction();
	void ClearStack();

	BOOL HasTarget(const CCard* pCard) const;
	BOOL HasTargetedCards(const CPlayer* pControlledBy) const;
	BOOL HasTargetedCreatures(const CPlayer* pControlledBy) const;
	BOOL HasTarget(const CPlayer* pPlayer) const;
	BOOL HasOtherCardTargets(const CPlayer* pExceptControlledBy) const;
	BOOL HasOtherCreatureTargets(const CPlayer* pExceptControlledBy) const;
	BOOL HasOtherPlayerTargets(const CPlayer* pExceptThisPlayer) const;

	BOOL HasSourceColor(SourceColor sourceColor) const;

	void ResolveTopAction();
	BOOL ResolutionCompletionPending() const;
	void OnResolutionCompleted();
	BOOL GetLastResolutionResult() const { return m_bLastResolutionResult; }

	BOOL CreaturesLifeMayChange(const CCreatureCard* pCreature, 
								BOOL bCheckIncrease, BOOL bCheckDecrease);
	BOOL PlayersLifeMayChange(const CPlayer* pPlayer,
							  BOOL bCheckIncrease, BOOL bCheckDecrease);

    BOOL CardMayLeaveInplay(const CCard* pCard);
	BOOL CardMayBeDiscarded(const CCard* pCard);

	void ClearProjection() { m_Projection.Clear(); }

	void GetState(StringArray& lines) const;

	const CStackAbilityAction* GetCurrentStackAction() const { return m_cpCurrentAction.GetPointer(); }
	
	BOOL CanCounterSpell(CPlayer* pbyPlayer, CCard* pCard, BOOL m_bToOwnersZone, ZoneId m_ToZone, 
		CardPlacement m_bPlacement);
	BOOL CounterSpell(CPlayer* pbyPlayer, CCard* pCard, BOOL m_bToOwnersZone, ZoneId m_ToZone, 
		CardPlacement m_bPlacement);

protected:
	CGame*				m_pGame;
	int_				m_nPassCount;
	CStackProjection	m_Projection;
	counted_ptr<CastSpellEventSource>	m_cpCastSpellEventSource;
	CValueContainer_<StackActionStatus> m_ActionStatus;

	// To support Thieves' Auction
	CStateSupportCountedPtrType<CStackAbilityAction>
			m_cpCurrentAction; 
	BOOL_	m_bLastResolutionResult;			
};
