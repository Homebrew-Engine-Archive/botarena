#pragma once

template <class S>
class CreatureTypeBase
{
public:
	typedef typename S::Iterator Iterator;

	CreatureTypeBase()
	{}

	CreatureTypeBase(const CreatureTypeBase& creatureType)
	{
		m_CreatureTypes = creatureType.m_CreatureTypes;
	}

	CreatureTypeBase(SingleCreatureType type1, SingleCreatureType type2 = SingleCreatureType::Null, 
				 SingleCreatureType type3 = SingleCreatureType::Null, SingleCreatureType type4 = SingleCreatureType::Null)
	{
		AddType(type1);
		AddType(type2);
		AddType(type3);
		AddType(type4);
	}

	void AddType(SingleCreatureType type)
	{
		if (type != SingleCreatureType::Null)
			m_CreatureTypes.Set(type);
	}

	void AddType(const CreatureTypeBase& creatureType)
	{
		m_CreatureTypes.Set(creatureType.m_CreatureTypes);
	}

	void RemoveType(SingleCreatureType type)
	{
		m_CreatureTypes.Remove(type);
	}

	bool HasType(SingleCreatureType type) const
	{
		return m_CreatureTypes.Contains(type);
	}

	Iterator Begin() const
	{
		return m_CreatureTypes.Begin();
	}

	Iterator End() const
	{
		return m_CreatureTypes.End();
	}

	int GetSize() const
	{
		return m_CreatureTypes.GetSize();
	}

	void RemoveAll()
	{
		m_CreatureTypes.RemoveAll();
	}

	CreatureTypeBase& operator=(const CreatureTypeBase& creatureType)
	{
		m_CreatureTypes = creatureType.m_CreatureTypes;
		return *this;
	}

	bool operator==(const CreatureTypeBase& creatureType) const
	{
		if (this == &creatureType)
			return true;

		int nSize = m_CreatureTypes.GetSize();

		if (nSize != creatureType.m_CreatureTypes.GetSize())
			return false;

		for (Iterator i = Begin(); i != End(); ++i)
			if (!creatureType.m_CreatureTypes.Contains(*i))
				return false;

		return true;
	}

	bool HasCommonTypes(const CreatureTypeBase& creatureType) const
	{
		return m_CreatureTypes.Intersect(creatureType.m_CreatureTypes);
	}

	CString ToString() const
	{
		CString strTypes;
		for (Iterator i = Begin(); i != End(); ++i)
		{
			if (!strTypes.IsEmpty())
				strTypes += _T(" ");
			strTypes += i->ToString();
		}

		return strTypes;
	}

protected:
	S m_CreatureTypes;
};

class CreatureType :
	public CreatureTypeBase<CSet<SingleCreatureType>>
{
	friend class CreatureType_;
public:
	friend CreatureType operator|(const CreatureType& t1, const CreatureType& t2) 
	{ 
		CreatureType t(t1);
		t.AddType(t2);
		return t;
	}

	friend CreatureType operator&(const CreatureType& t1, const CreatureType& t2)
	{
		CreatureType t;
		for (Iterator i = t1.m_CreatureTypes.Begin(); i != t1.m_CreatureTypes.End(); ++i)
			if (t2.HasType(*i))
				t.AddType(*i);
		return t;
	}

	CreatureType()
	{}

	CreatureType(const CreatureType& creatureType)
		: CreatureTypeBase<CSet<SingleCreatureType>>(creatureType)
	{
	}

	CreatureType(SingleCreatureType type1, SingleCreatureType type2 = SingleCreatureType::Null, 
				 SingleCreatureType type3 = SingleCreatureType::Null, SingleCreatureType type4 = SingleCreatureType::Null)
		: CreatureTypeBase<CSet<SingleCreatureType>>(
			type1, type2, type3, type4)
	{
	}
};

class CreatureType_ :
	public CreatureTypeBase<CSet_<SingleCreatureType>>
{
public:
	friend CreatureType operator|(const CreatureType_& t1, const CreatureType_& t2) 
	{ 
		CreatureType t(t1);
		t.AddType(t2);
		return t;
	}

	friend CreatureType operator|(const CreatureType& t1, const CreatureType_& t2) 
	{ 
		CreatureType t(t1);
		t.AddType(t2);
		return t;
	}

	friend CreatureType operator|(const CreatureType_& t1, const CreatureType& t2) 
	{ 
		CreatureType t(t1);
		t.AddType(t2);
		return t;
	}

	friend CreatureType operator&(const CreatureType_& t1, const CreatureType_& t2)
	{
		CreatureType t;
		for (Iterator i = t1.m_CreatureTypes.Begin(); i != t1.m_CreatureTypes.End(); ++i)
			if (t2.HasType(*i))
				t.AddType(*i);
		return t;
	}

	friend CreatureType operator&(const CreatureType& t1, const CreatureType_& t2)
	{
		CreatureType t;
		for (Iterator i = t1.Begin(); i != t1.End(); ++i)
			if (t2.HasType(*i))
				t.AddType(*i);
		return t;
	}

	friend CreatureType operator&(const CreatureType_& t1, const CreatureType& t2)
	{
		CreatureType t;
		for (Iterator i = t1.m_CreatureTypes.Begin(); i != t1.m_CreatureTypes.End(); ++i)
			if (t2.HasType(*i))
				t.AddType(*i);
		return t;
	}

	CreatureType_()
	{}

	CreatureType_(const CreatureType& creatureType)
	{
		for (CreatureType::Iterator i = creatureType.Begin(); i != creatureType.End(); ++i)
			m_CreatureTypes.Set(*i);
	}

	CreatureType_(const CreatureType_& creatureType)
		: CreatureTypeBase<CSet_<SingleCreatureType>>(creatureType)
	{
	}

	CreatureType_(SingleCreatureType type1, SingleCreatureType type2 = SingleCreatureType::Null, 
				 SingleCreatureType type3 = SingleCreatureType::Null, SingleCreatureType type4 = SingleCreatureType::Null)
		: CreatureTypeBase<CSet_<SingleCreatureType>>(
			type1, type2, type3, type4)
	{
	}

	operator CreatureType() const
	{
		CreatureType t;
		for (Iterator i = m_CreatureTypes.Begin(); i != m_CreatureTypes.End(); ++i)
			t.AddType(*i);
		return t;
	}

	void AddType(SingleCreatureType type)
	{
		__super::AddType(type);
	}

	void AddType(const CreatureType_& creatureType)
	{
		__super::AddType(creatureType);
	}

	void AddType(const CreatureType& creatureType)
	{
		for (Iterator i = creatureType.Begin(); i != creatureType.End(); ++i)
			__super::AddType(*i);		
	}
};

#define CREATURE_TYPE(T)				CreatureType(SingleCreatureType::T)
#define CREATURE_TYPE2(T1, T2)			CreatureType(SingleCreatureType::T1, SingleCreatureType::T2)
#define CREATURE_TYPE3(T1, T2, T3)		CreatureType(SingleCreatureType::T1, SingleCreatureType::T2, SingleCreatureType::T3)
#define CREATURE_TYPE4(T1, T2, T3, T4)	CreatureType(SingleCreatureType::T1, SingleCreatureType::T2, SingleCreatureType::T3, SingleCreatureType::T4)