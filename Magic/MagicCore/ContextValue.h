#pragma once

//____________________________________________________________________________
//
template <class V>
struct ContextValueBase
{
	friend ContextValueBase operator+(const ContextValueBase& s1, const ContextValueBase& s2)
	{ 
		ContextValueBase s(s1);
		s += s2;
		return s;
	}

	friend ContextValueBase operator-(const ContextValueBase& s1, const ContextValueBase& s2)
	{ 
		ContextValueBase s(s1);
		s -= s2;
		return s;
	}

	friend ContextValueBase operator*(const ContextValueBase& s1, const ContextValueBase& s2)
	{ 
		ContextValueBase s(s1);
		s *= s2;
		return s;
	}
	
	explicit ContextValueBase(int nValue1_ = 0, int nValue2_ = 0)
		: nValue1(nValue1_)
		, nValue2(nValue2_)
	{
	}

	ContextValueBase(const ContextValueBase& contextValue)
		: nValue1(contextValue.nValue1)
		, nValue2(contextValue.nValue2)
	{
	}

	void operator+=(const ContextValueBase& v) 
	{ 
		nValue1 += v.nValue1;
		nValue2 += v.nValue2;
	}

	void operator-=(const ContextValueBase& v) 
	{ 
		nValue1 -= v.nValue1;
		nValue2 -= v.nValue2;
	}

	void operator*=(const ContextValueBase& v) 
	{ 
		nValue1 *= v.nValue1;
		nValue2 *= v.nValue2;
	}

	bool operator==(const ContextValueBase& v) const
	{
		return nValue1 == v.nValue1 && nValue2 == v.nValue2;
	}

	bool operator!=(const ContextValueBase& v) const
	{
		return !operator==(v);
	}

	bool Any() const
	{
		return nValue1 || nValue2;
	}

	void SetTo(V nValue)
	{
		nValue1 = nValue;
		nValue2 = nValue;
	}

	void Reset()
	{
		SetTo(0);
	}

	V Sum() const
	{
		return nValue1 + nValue2;
	}

	V nValue1;
	V nValue2;
};

class ContextValue : public ContextValueBase<int>
{
public:
	explicit ContextValue(int nValue1 = 0, int nValue2 = 0)
		: ContextValueBase(nValue1, nValue2)
	{
	}

	ContextValue(const ContextValue& contextValue)
		: ContextValueBase(contextValue)
	{
	}

	ContextValue(const ContextValueBase<int>& contextValue)
		: ContextValueBase(contextValue)
	{
	}
};

class ContextValue_ : public ContextValueBase<int_>
{
public:
	ContextValue_& operator=(const ContextValue& v)
	{
		nValue1 = v.nValue1;
		nValue2 = v.nValue2;

		return *this;
	}

	operator ContextValue() const
	{
		ContextValue contextValue;
		contextValue.nValue1 = nValue1;
		contextValue.nValue2 = nValue2;
		return contextValue;
	}
};

typedef CValueContainer<ContextValue> CContextValueContainer;

class CContextValueContainer_
	: public CValueContainerBase_<ContextValue>
{
public:
	virtual ~CContextValueContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const ContextValue& contextValue(GetAt(i));
			stateStack.AddTail((PVOID)contextValue.nValue1);
			stateStack.AddTail((PVOID)contextValue.nValue2);
		}

		stateStack.AddTail((PVOID)nCount);
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CValueContainer::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			ContextValue contextValue;
			contextValue.nValue2 = (int)m_Stack.RemoveTail();
			contextValue.nValue1 = (int)m_Stack.RemoveTail();
			CValueContainer::AddImpl(contextValue);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CValueContainer::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			ContextValue contextValue;
			contextValue.nValue2 = (int)m_Stack.GetPrev(pos);
			contextValue.nValue1 = (int)m_Stack.GetPrev(pos);
			CValueContainer::AddImpl(contextValue);
		}
	}
};
