#pragma once

class CPlayer;
class CCard;
class CCreatureCard;
class CCardFilter;

//____________________________________________________________________________
//

typedef std::pair<PlayerEffectType, int> CPlayerEffectInstance;	// PlayerEffectType + effect specific parameter

typedef CValueContainer<CPlayerEffectInstance> CTurnPlayerEffectsContainer;

class CTurnPlayerEffectsContainer_
	: public CValueContainerBase_<CPlayerEffectInstance, CTurnPlayerEffectsContainer>
{
public:
	CTurnPlayerEffectsContainer_()
	{}

	virtual ~CTurnPlayerEffectsContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CPlayerEffectInstance& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.first.Get());
			stateStack.AddTail((PVOID)entry.second);
		}

		stateStack.AddTail((PVOID)nCount);
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CTurnPlayerEffectsContainer::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CPlayerEffectInstance entry;
			
			entry.second = (int)m_Stack.RemoveTail();
			entry.first = (PlayerEffectType::Enum)(DWORD)m_Stack.RemoveTail();

			CTurnPlayerEffectsContainer::AddImpl(entry);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CTurnPlayerEffectsContainer::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CPlayerEffectInstance entry;
			
			entry.second = (int)m_Stack.GetPrev(pos);
			entry.first = (PlayerEffectType::Enum)(DWORD)m_Stack.GetPrev(pos);

			CTurnPlayerEffectsContainer::AddImpl(entry);
		}
	}
};

typedef CDictionary<CPlayerEffectInstance, int> CPlayerEffectsContainer;

class CPlayerEffectsContainer_
	: public CDictionaryBase_<CPlayerEffectInstance, int, CPlayerEffectsContainer>
{
public:
	CPlayerEffectsContainer_()
	{}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		for (Iterator it = Begin(); it != End(); ++it)
		{
			stateStack.AddTail((PVOID)it->first.first.Get());	// key
			stateStack.AddTail((PVOID)it->first.second);	// key
			stateStack.AddTail((PVOID)it->second);	// value
		}

		stateStack.AddTail((PVOID)GetSize());
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		__super::RemoveAll();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			int v = (int)m_Stack.RemoveTail();
			CPlayerEffectInstance k;
			k.second = (int)m_Stack.RemoveTail();
			k.first = (PlayerEffectType::Enum)(DWORD)m_Stack.RemoveTail();
			__super::Set(k, v);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		__super::RemoveAll();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			int v = (int)m_Stack.GetPrev(pos);
			CPlayerEffectInstance k;
			k.second = (int)m_Stack.GetPrev(pos);
			k.first = (PlayerEffectType::Enum)(DWORD)m_Stack.GetPrev(pos);
			__super::Set(k, v);
		}
	}
};

//____________________________________________________________________________
//
template <class EffectsContainerType, class TurnEffectsContainerType>
class CPlayerEffectBase
{
public:
	void AddPlayerEffect(PlayerEffectType effect, BOOL bThisTurnOnly, int nParam = 0)
	{
		if (effect == PlayerEffectType::CantBeTargeted)
		{
			AddPlayerEffectImpl(PlayerEffectType::CantBeTargetedBySpells, bThisTurnOnly, nParam);
			AddPlayerEffectImpl(PlayerEffectType::CantBeTargetedByAbilities, bThisTurnOnly, nParam);
			return;
		}

		AddPlayerEffectImpl(effect, bThisTurnOnly, nParam);
	}

	void RemovePlayerEffect(PlayerEffectType effect, BOOL bThisTurnOnly, int nParam = 0)
	{
		if (effect == PlayerEffectType::CantBeTargeted)
		{
			RemovePlayerEffectImpl(PlayerEffectType::CantBeTargetedBySpells, bThisTurnOnly, nParam);
			RemovePlayerEffectImpl(PlayerEffectType::CantBeTargetedByAbilities, bThisTurnOnly, nParam);
			return;
		}

		RemovePlayerEffectImpl(effect, bThisTurnOnly, nParam);
	}

	void ClearPlayerEffect(PlayerEffectType effect, BOOL bThisTurnOnly)
	{
		if (effect == PlayerEffectType::CantBeTargeted)
		{
			ClearPlayerEffectImpl(PlayerEffectType::CantBeTargetedBySpells, bThisTurnOnly);
			ClearPlayerEffectImpl(PlayerEffectType::CantBeTargetedByAbilities, bThisTurnOnly);
			return;
		}

		ClearPlayerEffectImpl(effect, bThisTurnOnly);
	}

	/* not used
	void DecreaseParameterValue(PlayerEffectType effect, BOOL bKeepZeros = FALSE)
	{
		CPlayerEffectsContainer tempContainer;

		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			int nCount = it->second;

			if ((effectInstance.first == effect) && nCount)
				tempContainer.Set(effectInstance, nCount);
		}

		// Remove all

		for (CPlayerEffectsContainer::Iterator it = tempContainer.Begin(); it != tempContainer.End(); ++it)
			m_PlayerEffects.Set(it->first, 0);

		// Set back

		for (CPlayerEffectsContainer::Iterator it = tempContainer.Begin(); it != tempContainer.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			--effectInstance.second;

			if (bKeepZeros || effectInstance.second)
				m_PlayerEffects.Set(effectInstance, it->second);
		}
	}
	*/

	// Find the effect type with the same parameter value
	BOOL HasPlayerEffect(PlayerEffectType StackEffect, int nParam = 0) const
	{
		CPlayerEffectInstance effectInstance;
		effectInstance.first = StackEffect;
		effectInstance.second = nParam;

		int nCount = 0;
		if (!m_PlayerEffects.Get(effectInstance, nCount) || !nCount)
			return FALSE;

		return TRUE;
	}

	// Find the effect type and find the minimum and maximum parameter values
	BOOL HasPlayerEffect(PlayerEffectType StackEffect, int& nMaxParam, int& nMinParam) const
	{
		BOOL bFound = FALSE;
		nMaxParam = 0;
		nMinParam = 0;

		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			int nCount = it->second;

			if ((effectInstance.first == StackEffect) && nCount)
			{
				if (!bFound)
				{
					bFound = TRUE;

					nMaxParam = effectInstance.second;
					nMinParam = effectInstance.second;
				}
				else
				{
					if (effectInstance.second > nMaxParam)
						nMaxParam = effectInstance.second;

					if (effectInstance.second < nMinParam)
						nMinParam = effectInstance.second;
				}
			}
		}
		
		return bFound;
	}

	// Find the effect type and get all the parameters
	BOOL HasPlayerEffect(PlayerEffectType StackEffect, std::vector<int>& params) const
	{
		BOOL bFound = FALSE;
		params.clear();

		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			int nCount = it->second;

			if ((effectInstance.first == StackEffect) && nCount)
			{
				bFound = TRUE;
				for (int i = 0; i < nCount; ++i)
					params.push_back(effectInstance.second);
			}
		}
		
		return bFound;
	}

	// Find the effect type and get all the parameters
	BOOL HasPlayerEffect(PlayerEffectType StackEffect, std::set<int>& params) const
	{
		BOOL bFound = FALSE;
		params.clear();

		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			int nCount = it->second;

			if ((effectInstance.first == StackEffect) && nCount)
			{
				bFound = TRUE;
				params.insert(effectInstance.second);
			}
		}
		
		return bFound;
	}

	// Find the effect type and get all the parameters
	BOOL HasPlayerEffect(PlayerEffectType StackEffect, std::set<const CCardFilter*>& params) const
	{
		BOOL bFound = FALSE;
		params.clear();

		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			int nCount = it->second;

			if ((effectInstance.first == StackEffect) && nCount)
			{
				bFound = TRUE;

				if (effectInstance.second)
					params.insert(reinterpret_cast<const CCardFilter*>(effectInstance.second));
			}
		}
		
		return bFound;
	}

	// Find the effect type and sum up all the parameters 
	BOOL HasPlayerEffectSum(PlayerEffectType StackEffect, int& nParamSum, BOOL bDistinct) const
	{
		BOOL bFound = FALSE;
		nParamSum = 0;

		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			int nCount = it->second;

			if ((effectInstance.first == StackEffect) && nCount)
			{
				bFound = TRUE;
				if (!bDistinct)
					nParamSum += effectInstance.second * nCount;
				else
					nParamSum += effectInstance.second;
			}
		}
		
		return bFound;
	}

	void ResetTurnPlayerEffects()
	{
		// Add all removed effects

		for (int i = 0; i < m_TurnPlayerEffectsRemoved.GetSize(); ++i)
		{
			int nCount = 0;
			if (!m_PlayerEffects.Get(m_TurnPlayerEffectsRemoved[i], nCount))
				m_PlayerEffects.Set(m_TurnPlayerEffectsRemoved[i], 1);
			else
				m_PlayerEffects.Set(m_TurnPlayerEffectsRemoved[i], nCount + 1);
		}

		// Remove all added effects

		for (int i = 0; i < m_TurnPlayerEffectsAdded.GetSize(); ++i)
		{
			int nCount = 0;
			if (m_PlayerEffects.Get(m_TurnPlayerEffectsAdded[i], nCount) && nCount)
				if (nCount > 1)
					m_PlayerEffects.Set(m_TurnPlayerEffectsAdded[i], nCount - 1);
				else
					m_PlayerEffects.Remove(m_TurnPlayerEffectsAdded[i]);
		}
	} 

protected:
	void AddPlayerEffectImpl(PlayerEffectType StackEffect, BOOL bThisTurnOnly, int nParam = 0)
	{
		CPlayerEffectInstance effectInstance;
		effectInstance.first = StackEffect;
		effectInstance.second = nParam;

		if (bThisTurnOnly)
			m_TurnPlayerEffectsAdded.Add(effectInstance);

		int nCount = 0;
		if (!m_PlayerEffects.Get(effectInstance, nCount))
			m_PlayerEffects.Set(effectInstance, 1);
		else
			m_PlayerEffects.Set(effectInstance, nCount + 1);
	}

	void RemovePlayerEffectImpl(PlayerEffectType StackEffect, BOOL bThisTurnOnly, int nParam = 0)
	{
		CPlayerEffectInstance effectInstance;
		effectInstance.first = StackEffect;
		effectInstance.second = nParam;

		int nCount = 0;
		if (!m_PlayerEffects.Get(effectInstance, nCount) || !nCount)
			return;

		m_PlayerEffects.Set(effectInstance, nCount - 1);

		if (bThisTurnOnly)
			m_TurnPlayerEffectsRemoved.Add(effectInstance);
	}

	void ClearPlayerEffectImpl(PlayerEffectType StackEffect, BOOL bThisTurnOnly)
	{
		for (EffectsContainerType::Iterator it = m_PlayerEffects.Begin(); it != m_PlayerEffects.End(); ++it)
		{
			CPlayerEffectInstance effectInstance = it->first;
			if (effectInstance.first == StackEffect)
			{
				if (bThisTurnOnly)
					for (int i = 0; i < it->second; ++i)
						m_TurnPlayerEffectsRemoved.Add(effectInstance);

				m_PlayerEffects.Set(effectInstance, 0);
			}
		}
	}

	EffectsContainerType		m_PlayerEffects;
	TurnEffectsContainerType	m_TurnPlayerEffectsAdded;
	TurnEffectsContainerType	m_TurnPlayerEffectsRemoved;
};

typedef CPlayerEffectBase<CPlayerEffectsContainer_, CTurnPlayerEffectsContainer_> CPlayerEffect_;