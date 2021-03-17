#pragma once

#include <set>
#include <atlbase.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {

#define ARRAY_SIZE(x)	(sizeof(x) / sizeof(x[0]))
#define IS_ODD(x)		((x) % 2)

#define FROM_UI			(TRUE)
#define TO_UI			(FALSE)

#define PI				(3.1415926535)
#define EPSILON			(std::numeric_limits<double>::epsilon())

#define To_bool(E)		((E) ? true : false)

/*
#define BOOL_t			INT_PTR
#define int			INT_PTR
#define uint_t			UINT_PTR
#define DWORD_t			DWORD_PTR

#define ABS(e)			(e >= 0 ? e : -e)
*/

#ifdef _DEBUG
#define STATIC_CHECK(E)	{ char _unnamed[(E) ? 1 : 0]; _unnamed[0]=' '; }
#else
#define STATIC_CHECK(E)	{}
#endif

//____________________________________________________________________________
//
#define DISALLOW_COMPARISON(c)	private: bool operator==(const c&);
#define DISALLOW_BASE_IMPL(m)	private: class _##m_dummy {}; void m(_##m_dummy&);

// To prevent creations, protect the cstor and dstor.

// To allow only heap creations, protect the dstor and provide another member function to
// delete the object.

// To allow only automatic creations, protect the operator new and delete.

// Find: virtual {:i(\<:i\>)*[\*&]*} {:i}
// Replace: VIRTUAL(\1, \2)

#ifdef _DEBUG

#define VIRTUAL(Ret, Func) struct __dummy_##Func{}; virtual __dummy_##Func* __virtual_##Func() { return 0; } virtual Ret Func
#define OVERRIDE(Ret, Func) void __override_##Func() { __super::__virtual_##Func(); } virtual Ret Func
#define SEALED_OVERRIDE(Ret, Func) void __virtual_##Func(int) { __super::__virtual_##Func(); } virtual Ret Func

#define PRIVATE_VIRTUAL(Ret, Func) public: struct __dummy_##Func{}; virtual __dummy_##Func* __virtual_##Func() { return 0; } private: virtual Ret Func
#define PRIVATE_OVERRIDE(Ret, Func) public: void __override_##Func() { __super::__virtual_##Func(); } private: virtual Ret Func
#define PRIVATE_SEALED_OVERRIDE(Ret, Func) public: void __virtual_##Func(int) { __super::__virtual_##Func(); } private: virtual Ret Func

#define VIRTUAL2(Ret, Func) struct ___dummy_##Func{}; virtual ___dummy_##Func* ___virtual_##Func() { return 0; } virtual Ret Func
#define OVERRIDE2(Ret, Func) void ___override_##Func() { __super::___virtual_##Func(); } virtual Ret Func
#define SEALED_OVERRIDE2(Ret, Func) void ___virtual_##Func(int) { __super::___virtual_##Func(); } virtual Ret Func

#else

#define VIRTUAL(Ret, Func) virtual Ret Func
#define OVERRIDE(Ret, Func) virtual Ret Func
#define SEALED_OVERRIDE(Ret, Func) virtual Ret Func

#define PRIVATE_VIRTUAL(Ret, Func) private: virtual Ret Func
#define PRIVATE_OVERRIDE(Ret, Func) private: virtual Ret Func
#define PRIVATE_SEALED_OVERRIDE(Ret, Func) private: virtual Ret Func

#define VIRTUAL2(Ret, Func) virtual Ret Func
#define OVERRIDE2(Ret, Func) virtual Ret Func
#define SEALED_OVERRIDE2(Ret, Func) virtual Ret Func

#endif

//____________________________________________________________________________
//
class EPOCH_EXPORT noncopyable	// from Boost
{
protected:
	noncopyable() {}
	~noncopyable() {}

private:  // emphasize the following members are private
	noncopyable( const noncopyable& );
	const noncopyable& operator=( const noncopyable& );
};

//____________________________________________________________________________
//

#pragma push_macro("new")
#ifdef new
#undef new
#endif

class EPOCH_EXPORT CHeapTracked
{
public:
	CHeapTracked() {}
	virtual ~CHeapTracked() {}

	static void* operator new(size_t size);
#ifdef _DEBUG
	static void* operator new(size_t size, const char *, int);
	static void* operator new(size_t size, int, const char *, int);
#endif
	static void operator delete(void* p);

	bool IsOnHeap() const;
	
private:
	struct CCriticalSectionLocal
	{
		CCriticalSectionLocal()
		{
			InitializeCriticalSection(&m_CS);
		}

		~CCriticalSectionLocal()
		{
			DeleteCriticalSection(&m_CS);
		}

		CRITICAL_SECTION m_CS;
	};

	static CCriticalSectionLocal s_CS;
	static std::set<const void*> s_HeapAddresses;
};

#pragma pop_macro("new")

//____________________________________________________________________________
//
struct EPOCH_EXPORT SingleThreadedPolicy
{
public:
	typedef int AtomicIntType;
	typedef int IntType;

	static IntType AtomicIncrement(AtomicIntType& lval)
	{ return ++lval; }

	static IntType AtomicDecrement(AtomicIntType& lval)
	{ return --lval; }
};

//____________________________________________________________________________
//
struct EPOCH_EXPORT MultiThreadedPolicy
{
public:
	typedef volatile LONG AtomicIntType;
	typedef LONG IntType;

    static IntType AtomicIncrement(AtomicIntType& lval)
    { return InterlockedIncrement(&lval); }
    
    static IntType AtomicDecrement(AtomicIntType& lval)
    { return InterlockedDecrement(&lval); }
};

//____________________________________________________________________________
//
#ifdef _DEBUG
//#define REF_COUNT_DEBUG
#endif

template <class ThreadingPolicy = MultiThreadedPolicy, int startCount = 0>
class CReferenceCounted
#ifdef _DEBUG
	: public CHeapTracked
	, private ThreadingPolicy
#else
	: private ThreadingPolicy
#endif
{
public:
	typename ThreadingPolicy::IntType AddRef() const
	{
#ifdef REF_COUNT_DEBUG
		static DWORD_PTR pCheck = 0;
		if ((DWORD_PTR)this == pCheck)
			ATLTRACE(_T("+++ AddRef(%p)... from %d to %d\n"),
				this, m_nReferenceCount, m_nReferenceCount + 1);
#endif

#ifdef _DEBUG
		ATLASSERT(!m_bDeleting);
#endif

		return AtomicIncrement(m_nReferenceCount);
	}

	typename ThreadingPolicy::IntType Release() const				
	{ 
#ifdef REF_COUNT_DEBUG
		static DWORD_PTR pCheck = 0;
		if ((DWORD_PTR)this == pCheck)
		{
			ATLTRACE(_T("--- Release(%p)... from %d to %d\n"),
				this, m_nReferenceCount, m_nReferenceCount - 1);
		}
#endif

		ATLASSERT(m_nReferenceCount);
		if (!m_nReferenceCount)
			throw E_UNEXPECTED;

		IntType nCount = AtomicDecrement(m_nReferenceCount);
		if (!nCount)
		{
#ifdef _DEBUG
			m_bDeleting = true;
#endif
			delete this; 
			return 0;
		}
		return nCount;
	}

	typename ThreadingPolicy::IntType GetReferenceCount() const	{ return m_nReferenceCount; }

protected:
	CReferenceCounted()
		: m_nReferenceCount(startCount)
#ifdef _DEBUG
		, m_bDeleting(false)
#endif
	{
#ifdef _DEBUG
		ATLASSERT(IsOnHeap());	// All reference counted objects must be created on heap; Make sure CReferenceCounted is the first derived class also.
#endif
	}

	CReferenceCounted(const CReferenceCounted& Object)
		: m_nReferenceCount(startCount)
#ifdef _DEBUG
		, m_bDeleting(false)
#endif
	{
	}

	CReferenceCounted& operator=(const CReferenceCounted& Object)
	{
		return *this;
	}

	virtual ~CReferenceCounted()
	{
		ATLASSERT(!m_nReferenceCount && m_bDeleting);
		if (m_nReferenceCount)
			throw E_UNEXPECTED;
	}

private:
	mutable typename ThreadingPolicy::AtomicIntType m_nReferenceCount;

#ifdef _DEBUG
	mutable bool m_bDeleting;
#endif
};

//____________________________________________________________________________
//
// Intrusive reference counting support
template<class T>
class counted_ptr
{
public:
	counted_ptr()
		: m_pT(NULL)
		, m_bDisableCounting(false)
	{
	}

	counted_ptr(const counted_ptr& cpT)
		: m_pT(NULL)
		, m_bDisableCounting(false)
	{
		Init(cpT.m_pT, !cpT.m_bDisableCounting, cpT.m_bDisableCounting);
	}

	counted_ptr(T* pT, bool bAddRef = true, bool bDisableCounting = false)
		: m_pT(NULL)
		, m_bDisableCounting(bDisableCounting)
	{
		ATLASSERT((bAddRef && !bDisableCounting) || (!bAddRef && bDisableCounting));

		Init(pT, bAddRef, m_bDisableCounting);
	}

	virtual ~counted_ptr()
	{
		Clean();
	}

	counted_ptr& operator=(const counted_ptr& cpT)
	{
		Init(cpT.m_pT, !cpT.m_bDisableCounting, cpT.m_bDisableCounting);
		return *this;
	}

	counted_ptr& operator=(std::auto_ptr<T>& apT)
	{
		ATLASSERT(m_pT != apT.get());

		Init(apT.release(), true, false);
		return *this;
	}

	/* Not supported to prevent implicit conversions, use GetPointer() instead
	operator T*() const
	{
		return GetPointer();
	}
	*/

	bool operator!() const
	{
		return m_pT == NULL;
	}

	inline friend bool operator==(const counted_ptr& lhs, const T* rhs)
	{
		return lhs.m_pT == rhs;
	}

	inline friend bool operator==(const T* lhs, const counted_ptr& rhs)
	{
		return rhs.m_pT == lhs;
	}

	// No support for 'cp' syntax. Use 'cp != NULL' instead.
	inline friend bool operator!=(const counted_ptr& lhs, const T* rhs)
	{
		return lhs.m_pT != rhs;
	}

	inline friend bool operator!=(const T* lhs, const counted_ptr& rhs)
	{
		return rhs.m_pT != lhs;
	}

	inline friend bool operator<(const counted_ptr& lhs, const counted_ptr& rhs)
	{
		return lhs.m_pT < rhs.m_pT;
	}

	T* GetPointer() const
	{
#ifdef _DEBUG
		// Okay if called from the destructor of this object
		//ATLASSERT(m_bDisableCounting || !m_pT || m_pT->GetReferenceCount());
#endif

		return m_pT;
	}

	int AddRef() const
	{
		if (!m_pT || m_bDisableCounting)
			return 0;

		return m_pT->AddRef();
	}

	int Release()
	{
		if (!m_pT || m_bDisableCounting)
			return 0;

		int nRefCount = m_pT->Release();
		if (!nRefCount)
			m_pT = NULL;

		return nRefCount;
	}

	void Attach(T* pT)
	{
		Init(pT, false, false);
	}

	T* Detach()
	{
		T* pT = m_pT;
		Clean();
		return pT;
	}

	T* operator->() const							
	{ 
#ifdef _DEBUG
		ATLASSERT(m_bDisableCounting || !m_pT || m_pT->GetReferenceCount());
#endif		
		return m_pT; 
	}

	T& operator*() const							
	{ 
#ifdef _DEBUG
		ATLASSERT(m_bDisableCounting || !m_pT || m_pT->GetReferenceCount());
#endif
		return *m_pT; 
	}

	bool operator==(T* pT) const					{ return m_pT == pT; }
	bool operator==(const counted_ptr& cpT) const	{ return m_pT == cpT.m_pT; }

	// Use the counted_ptr as a dumb pointer wrapper
	void DisableCounting(bool bRelease = true)
	{
		if (m_pT && !m_bDisableCounting)
		{
			if (bRelease)
				m_pT->Release();

			m_bDisableCounting = true;
		}
	}

private:
	void Init(T* pT, bool bAddRef, bool bDisableCounting)
	{
		if (pT == m_pT)
		{
			m_bDisableCounting = bDisableCounting;
			return;
		}

		Clean();

		m_pT = pT;
		m_bDisableCounting = bDisableCounting;

		if (!m_pT)
			return;

		if (bAddRef && !m_bDisableCounting)
			m_pT->AddRef();
	}

	void Clean()
	{
		if (m_pT)
		{
			if (!m_bDisableCounting)
				m_pT->Release();
			m_pT = NULL;
		}
	}

	T*		m_pT;
	bool	m_bDisableCounting;
};

//____________________________________________________________________________
//
// Unique integer type support
template <typename T, int I = 0>
class Integer
{
public:
	typedef T IntegerType;

	Integer() 
		: m_Value(0) 
	{}

	Integer(const Integer& value) 
		: m_Value(value.m_Value) 
	{}

	explicit Integer(T value) 
		: m_Value( value ) 
	{} 

	T Get() const { return m_Value; } 

	Integer operator-() const { return Integer(-m_Value); } 
	Integer& operator++() { ++m_Value; return *this; }
	Integer& operator--() { --m_Value; return *this; }
	bool operator==(const Integer& m) const { return m_Value == m.m_Value; } 
	bool operator!=(const Integer& m) const { return !operator==(m); } 
	bool operator<(const Integer& m) const { return m_Value < m.m_Value; } 
	bool operator>(const Integer& m) const { return m_Value > m.m_Value; } 
	bool operator<=(const Integer& m) const { return m_Value <= m.m_Value; } 
	bool operator>=(const Integer& m) const { return m_Value >= m.m_Value; } 
	Integer operator+(const Integer& m) const { return Integer(m_Value + m.m_Value); } 
	Integer operator-(const Integer& m) const { return Integer(m_Value - m.m_Value); } 
	Integer operator*(const Integer& m) const { return Integer(m_Value * m.m_Value); } 
	Integer operator/(const Integer& m) const { return Integer(m_Value / m.m_Value); } 
	void operator+=(const Integer& m) { m_Value = m_Value + m.m_Value; } 
	void operator-=(const Integer& m) { m_Value = m_Value - m.m_Value; } 
	void operator*=(const Integer& m) { m_Value = m_Value * m.m_Value; } 
	void operator/=(const Integer& m) { m_Value = m_Value / m.m_Value; } 

private: 
	T m_Value;
};

}	// namespace Epoch

#pragma warning( pop )