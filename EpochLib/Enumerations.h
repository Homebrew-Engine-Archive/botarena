#pragma once

#define DEFINE_BITFLAG_ENUM_OPS( E, T ) \
	public: \
		typedef T ValueType; \
		friend E operator|(const E& m1, const E& m2) { return E(m1.m_Value | m2.m_Value); } \
		friend E operator&(const E& m1, const E& m2) { return E(m1.m_Value & m2.m_Value); } \
		friend E operator^(const E& m1, const E& m2) { return E(m1.m_Value ^ m2.m_Value); } \
		friend E operator|(Enum m1, Enum m2) { return E(Enum((ValueType)m1 | (ValueType)m2)); } \
		friend E operator&(Enum m1, Enum m2) { return E(Enum((ValueType)m1 & (ValueType)m2)); } \
		friend E operator^(Enum m1, Enum m2) { return E(Enum((ValueType)m1 ^ (ValueType)m2)); } \
		friend E operator~(Enum m1) { return E((Enum)~(ValueType)m1); } \
		E( Enum value = (Enum)0 ) : m_Value( value ) {} \
		E( const E& value ) : m_Value( value.m_Value ) {} \
		void Reset() { m_Value = (Enum)0; } \
		bool Any() const { return m_Value != (Enum)0; } \
		Enum Get() const { return m_Value; } \
		bool operator==(const E& m) const { return m_Value == m.m_Value; } \
		bool operator!=(const E& m) const { return !operator==(m); } \
		bool operator<(const E& m) const { return (ValueType)m_Value < (ValueType)m.m_Value; } \
		bool operator>(const E& m) const { return (ValueType)m_Value > (ValueType)m.m_Value; } \
		bool operator<=(const E& m) const { return (ValueType)m_Value <= (ValueType)m.m_Value; } \
		bool operator>=(const E& m) const { return (ValueType)m_Value >= (ValueType)m.m_Value; } \
		E operator~() const { return E(Enum(~(ValueType)m_Value)); } \
		void operator|=(const E& m1) { m_Value = Enum((ValueType)m_Value | (ValueType)m1.m_Value); } \
		void operator&=(const E& m1) { m_Value = Enum((ValueType)m_Value & (ValueType)m1.m_Value); } \
	private: \
		Enum m_Value; \

#define DEFINE_DISTINCT_ENUM_OPS( E ) \
	public: \
		E( Enum value = (Enum)0 ) : m_Value( value ) {} \
		E( const E& value ) : m_Value( value.m_Value ) {} \
		void Reset() { m_Value = (Enum)0; } \
		bool Any() const { return m_Value != (Enum)0; } \
		Enum Get() const { return m_Value; } \
		bool operator==(const E& m) const { return m_Value == m.m_Value; } \
		bool operator!=(const E& m) const { return !operator==(m); } \
		bool operator<(const E& m) const { return m_Value < m.m_Value; } \
		bool operator>(const E& m) const { return m_Value > m.m_Value; } \
		bool operator<=(const E& m) const { return m_Value <= m.m_Value; } \
		bool operator>=(const E& m) const { return m_Value >= m.m_Value; } \
	private: \
		Enum m_Value;

#define DEFINE_ENUM_OPS( E ) \
	public: \
		friend E operator+(int m1, const E& m2) { return m2 + m1; } \
		friend E operator-(int m1, const E& m2) { return -m2 + m1; } \
		E( Enum value = (Enum)0 ) : m_Value( value ) {} \
		E( const E& value ) : m_Value( value.m_Value ) {} \
		E( int value ) : m_Value( (Enum)value ) {} \
		void Reset() { m_Value = (Enum)0; } \
		bool Any() const { return m_Value != (Enum)0; } \
		Enum Get() const { return m_Value; } \
		E operator-() const { return -m_Value; } \
		bool operator==(const E& m) const { return m_Value == m.m_Value; } \
		bool operator!=(const E& m) const { return !operator==(m); } \
		bool operator<(const E& m) const { return m_Value < m.m_Value; } \
		bool operator>(const E& m) const { return m_Value > m.m_Value; } \
		bool operator<=(const E& m) const { return m_Value <= m.m_Value; } \
		bool operator>=(const E& m) const { return m_Value >= m.m_Value; } \
		E operator+(const E& m) const { return m_Value + m.m_Value; } \
		E operator-(const E& m) const { return m_Value - m.m_Value; } \
		void operator+=(const E& m) { m_Value = Enum(m_Value + m.m_Value); } \
		void operator-=(const E& m) { m_Value = Enum(m_Value - m.m_Value); } \
	private: \
		Enum m_Value;
// TODO: ++ and --


//____________________________________________________________________________
//
template <class E>
struct Comparer
{
	virtual ~Comparer() {}
	virtual bool operator()( E value ) const = 0;
};

//____________________________________________________________________________
//
template <class E>
struct MatchAllBits : public Comparer<E>
{
	MatchAllBits( E flags )
		: m_Mask(flags)
	{}

	virtual bool operator()( E value ) const 
	{
		return (value & m_Mask) == m_Mask;
	}

protected:
	E m_Mask;
};

//____________________________________________________________________________
//
template <class E>
struct MatchAnyBits : public Comparer<E>
{
	MatchAnyBits( E flags )
		: m_Mask(flags)
	{}

	virtual bool operator()( E value ) const 
	{
		return (value & m_Mask).Any();
	}

protected:
	E m_Mask;
};

//____________________________________________________________________________
//
template <class E>
struct FalseComparer : public Comparer<E>
{
	virtual bool operator()( E ) const
	{
		return false;
	}
};

//____________________________________________________________________________
//
template <class E>
struct TrueComparer : public Comparer<E>
{
	virtual bool operator()( E ) const
	{
		return true;
	}
};

//____________________________________________________________________________
//
template <class E>
struct NegateComparer 
	: public Comparer<E>
{
	NegateComparer(Comparer<E>* pComparer)
		: m_pComparer(pComparer)
	{}
	
	virtual bool operator()( E value ) const
	{
		return !m_pComparer->operator()( value );
	}

protected:
	std::auto_ptr<Comparer<E>> m_pComparer;
};

