#pragma once

//____________________________________________________________________________
//
template <typename D>
class CStateSupportValueType
	: public CStateSupport
{
	friend class CStateManager;
public:
	typedef D ValueType;

	CStateSupportValueType(const D& d)
		: m_Data(d)
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID));
		ATLASSERT(sizeof(D) == sizeof(int));
	}

	virtual ~CStateSupportValueType()
	{
		RemoveSavedState();
	}

	operator D() const
	{
		return m_Data;
	}

	CStateSupportValueType<D>& operator=(const CStateSupportValueType<D>& d)
	{
		if (d.m_Data == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d.m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D>& operator=(const D& d)
	{
		if (d == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D>& operator+=(const D& d)
	{
		NotifyStateChanging();

		m_Data += d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D>& operator++()
	{
		// preincrement
		NotifyStateChanging();

		++m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D> operator++(int)
	{
		// postincrement
		D temp = m_Data;
		++*this;
		return temp;
	}

	CStateSupportValueType<D>& operator--()
	{
		// predecrement
		NotifyStateChanging();

		--m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D> operator--(int)
	{
		// postdecrement
		D temp = m_Data;
		--*this;
		return temp;
	}

	CStateSupportValueType<D>& operator-=(const D& d)
	{
		NotifyStateChanging();

		m_Data -= d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D>& operator|=(const D& d)
	{
		NotifyStateChanging();

		m_Data |= d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportValueType<D>& operator&=(const D& d)
	{
		NotifyStateChanging();

		m_Data &= d;

		NotifyStateChanged();

		return *this;
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		stateStack.AddTail((PVOID)(int)m_Data);
	}

	OVERRIDE(void, Pop)()
	{
		m_Data = (D)(int)(m_Stack.RemoveTail());
	}

	OVERRIDE(void, Peek)()
	{
		m_Data = (D)(int)m_Stack.GetTail();
	}

	D			m_Data;
};

typedef CStateSupportValueType<BOOL> BOOL_;
typedef CStateSupportValueType<DWORD> DWORD_;
typedef CStateSupportValueType<BYTE> BYTE_;
typedef CStateSupportValueType<int> int_;
typedef CStateSupportValueType<unsigned> unsigned_;

//____________________________________________________________________________
//
template <typename D>
class CStateSupportPtrType
	: public CStateSupport
{
public:
	CStateSupportPtrType(D* pD = NULL)
		: m_pData(pD)
	{
	}

	virtual ~CStateSupportPtrType()
	{
		RemoveSavedState();
	}

	operator D*() const
	{
		return m_pData;
	}

	D* operator->() const
	{
		return m_pData;
	}

	D& operator*() const
	{
		return *m_pData;
	}

	D* GetPointer() const
	{
		return m_pData;
	}

	CStateSupportPtrType<D>& operator=(D* pD)
	{
		if (pD == m_pData)
			return *this;

		NotifyStateChanging();

		m_pData = pD;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportPtrType<D>& operator=(const CStateSupportPtrType<D>& ptr)
	{
		if (ptr.m_pData == m_pData)
			return *this;

		NotifyStateChanging();

		m_pData = ptr.m_pData;

		NotifyStateChanged();

		return *this;
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		stateStack.AddTail((PVOID)m_pData);
	}

	OVERRIDE(void, Pop)()
	{
		m_pData = (D*)m_Stack.RemoveTail();
	}

	OVERRIDE(void, Peek)()
	{
		m_pData = (D*)m_Stack.GetTail();
	}

	D*	m_pData;
};

//____________________________________________________________________________
//
template <class D>
class CStateSupportEnumType
	: public CStateSupport
{
	friend class CStateManager;
public:
	CStateSupportEnumType()
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID));
		ATLASSERT(sizeof(D) == sizeof(int));
	}

	CStateSupportEnumType(const D& d)
		: m_Data(d)
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID));
		ATLASSERT(sizeof(D) == sizeof(int));
	}

	virtual ~CStateSupportEnumType()
	{
		RemoveSavedState();
	}

	operator D() const
	{
		return m_Data;
	}

	typename D::Enum Get() const
	{
		return m_Data.Get();
	}

	CStateSupportEnumType<D>& operator=(const CStateSupportEnumType<D>& d)
	{
		if (d.m_Data == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d.m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportEnumType<D>& operator=(const D& d)
	{
		if (d == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportEnumType<D>& operator|=(const D& d)
	{
		NotifyStateChanging();

		m_Data |= d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportEnumType<D>& operator&=(const D& d)
	{
		NotifyStateChanging();

		m_Data &= d;

		NotifyStateChanged();

		return *this;
	}

	bool operator==(const CStateSupportEnumType<D>& d) const
	{
		return m_Data == d.m_Data;
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		stateStack.AddTail((PVOID)(int)m_Data.Get());
	}

	OVERRIDE(void, Pop)()
	{
		m_Data = (D::Enum)(int)(m_Stack.RemoveTail());
	}

	OVERRIDE(void, Peek)()
	{
		m_Data = (D::Enum)(int)m_Stack.GetTail();
	}

	D			m_Data;
};

//____________________________________________________________________________
//
template <class D>
class CStateSupportEnum64Type
	: public CStateSupport
{
	friend class CStateManager;
public:
	CStateSupportEnum64Type()
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID64));
	}

	CStateSupportEnum64Type(const D& d)
		: m_Data(d)
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID64));
	}

	virtual ~CStateSupportEnum64Type()
	{
		RemoveSavedState();
	}

	operator D() const
	{
		return m_Data;
	}

	typename D::Enum Get() const
	{
		return m_Data.Get();
	}

	CStateSupportEnum64Type<D>& operator=(const CStateSupportEnum64Type<D>& d)
	{
		if (d.m_Data == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d.m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportEnum64Type<D>& operator=(const D& d)
	{
		if (d == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportEnum64Type<D>& operator|=(const D& d)
	{
		NotifyStateChanging();

		m_Data |= d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportEnum64Type<D>& operator&=(const D& d)
	{
		NotifyStateChanging();

		m_Data &= d;

		NotifyStateChanged();

		return *this;
	}

	bool operator==(const CStateSupportEnum64Type<D>& d) const
	{
		return m_Data == d.m_Data;
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		stateStack.AddTail64((PVOID64)(D::ValueType)m_Data.Get());
	}

	OVERRIDE(void, Pop)()
	{
		m_Data = (D::Enum)(D::ValueType)(m_Stack.RemoveTail64());
	}

	OVERRIDE(void, Peek)()
	{
		m_Data = (D::Enum)(D::ValueType)m_Stack.GetTail64();
	}

	D			m_Data;
};

//____________________________________________________________________________
//
template <class D>
class CStateSupportIntegerType
	: public CStateSupport
{
	friend class CStateManager;
public:
	CStateSupportIntegerType()
		: m_Data(0)
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID));
		ATLASSERT(sizeof(D) == sizeof(int));
	}

	CStateSupportIntegerType(const D& d)
		: m_Data(d)
	{
		ATLASSERT(sizeof(D) == sizeof(PVOID));
		ATLASSERT(sizeof(D) == sizeof(int));
	}

	virtual ~CStateSupportIntegerType()
	{
		RemoveSavedState();
	}

	typename D::IntegerType Get() const { return m_Data.Get(); }

	operator D() const
	{
		return m_Data;
	}

	bool operator==(const D& d) const
	{
		return m_Data == d;
	}

	bool operator<(const D& d) const
	{
		return m_Data < d;
	}

	bool operator>(const D& d) const
	{
		return m_Data > d;
	}

	bool operator<=(const D& d) const
	{
		return m_Data <= d;
	}

	bool operator>=(const D& d) const
	{
		return m_Data >= d;
	}

	D operator+(const D& d) const
	{
		return m_Data + d;
	}

	D operator-(const D& d) const
	{
		return m_Data - d;
	}

	D operator/(const D& d) const 
	{ 
		return m_Data / d; 
	} 

	D operator*(const D& d) const 
	{ 
		return m_Data * d; 
	} 

	CStateSupportIntegerType<D>& operator=(const CStateSupportIntegerType<D>& d)
	{
		if (d.m_Data == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d.m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D>& operator=(const D& d)
	{
		if (d == m_Data)
			return *this;

		NotifyStateChanging();

		m_Data = d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D>& operator+=(const D& d)
	{
		NotifyStateChanging();

		m_Data += d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D>& operator++()
	{
		// preincrement
		NotifyStateChanging();

		++m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D> operator++(int)
	{
		// postincrement
		D temp = m_Data;
		++*this;
		return temp;
	}

	CStateSupportIntegerType<D>& operator--()
	{
		// predecrement
		NotifyStateChanging();

		--m_Data;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D> operator--(int)
	{
		// postdecrement
		D temp = m_Data;
		--*this;
		return temp;
	}

	CStateSupportIntegerType<D>& operator-=(const D& d)
	{
		NotifyStateChanging();

		m_Data -= d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D>& operator|=(const D& d)
	{
		NotifyStateChanging();

		m_Data |= d;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportIntegerType<D>& operator&=(const D& d)
	{
		NotifyStateChanging();

		m_Data &= d;

		NotifyStateChanged();

		return *this;
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		stateStack.AddTail((PVOID)(int)m_Data.Get());
	}

	OVERRIDE(void, Pop)()
	{
		m_Data = D((int)(m_Stack.RemoveTail()));
	}

	OVERRIDE(void, Peek)()
	{
		m_Data = D((int)m_Stack.GetTail());
	}

	D			m_Data;
};

//____________________________________________________________________________
//
template <class D>
class CStateSupportCountedPtrType
	: public CStateSupport
{
public:
	CStateSupportCountedPtrType(D* pD = NULL)
		: m_cpData(pD)
	{
	}

	CStateSupportCountedPtrType(const counted_ptr<D>& cpData)
		: m_cpData(cpData)
	{
	}

	virtual ~CStateSupportCountedPtrType()
	{
		RemoveSavedState();
	}

	operator bool() const
	{
		return m_cpData.GetPointer() != NULL;
	}	

	D* operator->() const
	{
		return m_cpData.GetPointer();
	}

	D& operator*() const
	{
		return *(m_cpData.GetPointer());
	}

	D* GetPointer() const
	{
		return m_cpData.GetPointer();
	}

	void DisableCounting(bool bRelease = true)
	{
		m_cpData.DisableCounting(bRelease);
	}

	CStateSupportCountedPtrType<D>& operator=(const CStateSupportCountedPtrType<D>& cpD)
	{
		if (cpD.m_cpData.GetPointer() == m_cpData.GetPointer())
			return *this;

		NotifyStateChanging();

		m_cpData = cpD.m_cpData;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportCountedPtrType<D>& operator=(const counted_ptr<D>& cpD)
	{
		if (cpD.GetPointer() == m_cpData.GetPointer())
			return *this;

		NotifyStateChanging();

		m_cpData = cpD;

		NotifyStateChanged();

		return *this;
	}

	CStateSupportCountedPtrType<D>& operator=(D* pData)
	{
		if (pData == m_cpData.GetPointer())
			return *this;

		NotifyStateChanging();

		m_cpData = counted_ptr<D>(pData);

		NotifyStateChanged();

		return *this;
	}

private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		stateStack.AddTail((PVOID)(m_cpData.GetPointer()));
		m_cpData.AddRef();
	}

	OVERRIDE(void, Pop)()
	{
		m_cpData = reinterpret_cast<D*>(m_Stack.RemoveTail());
		m_cpData.Release();
	}

	OVERRIDE(void, Peek)()
	{
		m_cpData = reinterpret_cast<D*>(m_Stack.GetTail());
	}

#ifdef THINK_HISTORY
	OVERRIDE(void, Cleanup)(const StateStack& stateStack, StateStack::Position pos)
	{
		D* pD = reinterpret_cast<D*>(stateStack.GetPrev(pos));
		if (pD)
			pD->Release();
	}
#endif

	counted_ptr<D>	m_cpData;
};
