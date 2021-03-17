#pragma once

#if 0

class StateStack : public CPtrList
{
public:
	typedef POSITION Position;

	inline static Position GetNullPosition() { return NULL; }
};

#else

class StateStack
{
public:
	typedef PVOID* Position;

	unsigned int m_uCapacity;
	PVOID* m_pNextAdd;
	PVOID* m_pLast;
	PVOID* m_pBuffer;

	inline static Position GetNullPosition()
	{
		return NULL;
	}

	StateStack()
	{
		m_uCapacity = 16;
		m_pBuffer = new PVOID[m_uCapacity];
		m_pNextAdd = m_pBuffer;
		m_pLast = m_pBuffer + m_uCapacity - 1;
	}

	~StateStack()
	{
		delete[] m_pBuffer;
	}

	inline void AddTail(const PVOID& item)	
	{
		//ATLASSERT((int)item != 0xcdcdcdcd);

		*m_pNextAdd = item;

		if (m_pNextAdd == m_pLast)
		{
			unsigned int uIncrease = m_uCapacity;
			if (uIncrease > 128)
				uIncrease = 128;
			PVOID* pTempBuffer = new PVOID[m_uCapacity + uIncrease];
			CopyMemory(pTempBuffer, m_pBuffer, m_uCapacity * sizeof(PVOID));
			m_pNextAdd = pTempBuffer + m_uCapacity;
			m_uCapacity += uIncrease;
			delete[] m_pBuffer;
			m_pBuffer = pTempBuffer;
			m_pLast = m_pBuffer + m_uCapacity - 1;
		}
		else
			++m_pNextAdd;
	}

	inline void AddTail64(const PVOID64& item)	
	{
		const LARGE_INTEGER& temp(*(const LARGE_INTEGER*)&item);
		AddTail((PVOID)temp.LowPart);
		AddTail((PVOID)temp.HighPart);
	}

	inline PVOID GetTail() const
	{
		return *(m_pNextAdd - 1);
	}

	inline PVOID64 GetTail64() const
	{
		LARGE_INTEGER temp;
		temp.HighPart = (LONG)*(m_pNextAdd - 1);
		temp.LowPart = (LONG)*(m_pNextAdd - 2);
		return (PVOID64)temp.QuadPart;
	}

	inline PVOID RemoveTail()			
	{
		return *(--m_pNextAdd);
	}

	inline PVOID64 RemoveTail64()			
	{
		PVOID64 temp(GetTail64());
		m_pNextAdd -= 2;
		return temp;
	}

	inline Position GetHeadPosition() const
	{
		return m_pBuffer;
	}

	inline Position GetTailPosition() const
	{
		return m_pNextAdd;
	}

	inline PVOID GetPrev(Position& position) const
	{
		ATLASSERT(position);
		return *(--position);
	}

	inline PVOID64 GetPrev64(Position& position) const
	{
		ATLASSERT(position);
		LARGE_INTEGER temp;
		temp.HighPart = (LONG)*(position - 1);
		temp.LowPart = (LONG)*(position - 2);

		position -= 2;

		return (PVOID64)temp.QuadPart;
	}

	inline unsigned int GetCount() const
	{
		return static_cast<unsigned int>(m_pNextAdd - m_pBuffer);
	}

	inline bool operator==(const StateStack& stateStack) const
	{
		unsigned int uSize = GetCount();
		if (uSize != stateStack.GetCount())
			return false;
	
		return !memcmp(m_pBuffer, stateStack.m_pBuffer, uSize * sizeof(PVOID));
	}
};

#endif
