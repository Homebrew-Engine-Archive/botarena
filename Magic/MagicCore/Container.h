#pragma once

//____________________________________________________________________________
//
template <class V>
class CPtrContainer : protected std::vector<V*>
{
public:
	CPtrContainer()
	{
	}

	virtual ~CPtrContainer()
	{
	}

	void Add(V* pContained)						{ AddImpl(pContained); }
	void Add(const CPtrContainer<V>& container)	{ AddImpl(container); }
	void InsertAt(int nIndex, V* pContained)	{ InsertAtImpl(nIndex, pContained); }
	void InsertAt(int nIndex, const CPtrContainer<V>& container)	{ InsertAtImpl(nIndex, container); }
	void SetAt(int nIndex, V* pContained)		{ SetAtImpl(nIndex, pContained); }

	void RemoveAt(int nIndex)					{ RemoveAtImpl(nIndex); }
	bool Remove(V* pContained)					{ return RemoveImpl(pContained); }	
	void RemoveAll()							{ RemoveAllImpl(); }

	V* operator[](int nIndex) const				{ return GetAt(nIndex); }

	V* GetAt(int nIndex) const					{ return at(nIndex); }

	int FindIndex(const V* pContained) const
	{
		for (size_type i = 0; i < size(); ++i)
			if (at(i) == pContained)
				return i;

		return -1;
	}

	int GetSize() const							{ return size(); }

protected:
	VIRTUAL(void, AddImpl)(V* pContained)		{ push_back(pContained); }

	VIRTUAL2(void, AddImpl)(const CPtrContainer<V>& container)
	{
		insert(end(), container.begin(), container.end());
	}

	VIRTUAL(void, InsertAtImpl)(int nIndex, V* pContained)
	{
		insert(begin() + nIndex, pContained);
	}

	VIRTUAL2(void, InsertAtImpl)(int nIndex, const CPtrContainer<V>& container)
	{
		insert(begin() + nIndex, container.begin(), container.end());
	}

	VIRTUAL(void, SetAtImpl)(int nIndex, V* pContained)	{ at(nIndex) = pContained; }

	VIRTUAL(void, RemoveAtImpl)(int nIndex)		{ erase(begin() + nIndex); }
	VIRTUAL(bool, RemoveImpl)(V* pContained)
	{
		int nIndex = FindIndex(pContained);
		if (nIndex == -1)
			return false;

		RemoveAtImpl(nIndex);

		return true;
	}

	VIRTUAL(void, RemoveAllImpl)()				{ clear(); }
};

//____________________________________________________________________________
//
template <class V>
class CCountedPtrContainer : protected std::vector<counted_ptr<V> >
{
public:
	CCountedPtrContainer()
	{
	}

	CCountedPtrContainer& operator=(const CCountedPtrContainer& container)
	{
		if (this == &container)
			return *this;
		RemoveAll();
		Add(container);
		return *this;
	}

	void Add(V* pContained)												{ AddImpl(pContained); }
	void Add(const CCountedPtrContainer<V>& container)					{ AddImpl(container); }
	void InsertAt(int nIndex, V* pContained)							{ InsertAtImpl(nIndex, pContained); }
	void InsertAt(int nIndex, const CCountedPtrContainer<V>& container)	{ InsertAtImpl(nIndex, container); }
	void SetAt(int nIndex, V* pContained)								{ SetAtImpl(nIndex, pContained); }

	void RemoveAt(int nIndex)				{ RemoveAtImpl(nIndex); }
	bool Remove(V* pContained)				{ return RemoveImpl(pContained); }	
	void RemoveAll()						{ RemoveAllImpl(); }

	counted_ptr<V> operator[](int nIndex) const	{ return GetAt(nIndex); }
	counted_ptr<V> GetAt(int nIndex) const		{ return at(nIndex); }

	int FindIndex(const V* pContained) const
	{
		for (size_type i = 0; i < size(); ++i)
			if (at(i).GetPointer() == pContained)
				return i;

		return -1;
	}

	int GetSize() const						{ return size(); }

protected:
	VIRTUAL(void, AddImpl)(V* pContained)	{ push_back(counted_ptr<V>(pContained)); }

	VIRTUAL2(void, AddImpl)(const CCountedPtrContainer<V>& container)
	{
		insert(end(), container.begin(), container.end());
	}

	VIRTUAL(void, InsertAtImpl)(int nIndex, V* pContained)
	{
		insert(begin() + nIndex, counted_ptr<V>(pContained));
	}

	VIRTUAL2(void, InsertAtImpl)(int nIndex, const CCountedPtrContainer<V>& container)
	{
		insert(begin() + nIndex, container.begin(), container.end());
	}

	VIRTUAL(void, SetAtImpl)(int nIndex, V* pContained)	{ at(nIndex) = counted_ptr<V>(pContained); }

	VIRTUAL(void, RemoveAtImpl)(int nIndex)		{ erase(begin() + nIndex); }
	VIRTUAL(bool, RemoveImpl)(V* pContained)
	{
		int nIndex = FindIndex(pContained);
		if (nIndex == -1)
			return false;

		RemoveAtImpl(nIndex);

		return true;
	}

	VIRTUAL(void, RemoveAllImpl)()				
	{
		std::vector<counted_ptr<V>> temp(*this); // the temporary list is needed to clear up the content of this list before removing all the reference counted pointers
													// the clearing of the stored pointers may has a side effect of refering back to this data structure so it is better to
													// finish the clearing task first (Ref: RemoveAllListeners or RemoveAllEventSources)
		clear();
	}
};

//____________________________________________________________________________
//
template <class V>
class CValueContainer : protected std::vector<V>
{
public:
	CValueContainer()
	{}

	CValueContainer& operator=(const CValueContainer& container)
	{
		if (this == &container)
			return *this;
		RemoveAll();
		Add(container);
		return *this;
	}

	bool operator==(const CValueContainer& container) const
	{
		if (&container == this)
			return true;

		if (container.size() != size())
			return false;

		for (size_type i = 0; i < size(); ++i)
			if (at(i) != container.at(i))
				return false;
		
		return true;
	}

	void Add(const V& c)											{ AddImpl(c); }
	void Add(const CValueContainer<V>& container)					{ AddImpl(container); }
	void InsertAt(int nIndex, const V& c)							{ InsertAtImpl(nIndex, c); }
	void InsertAt(int nIndex, const CValueContainer<V>& container)	{ InsertAtImpl(nIndex, container); }
	void SetAt(int nIndex, const V& c)								{ SetAtImpl(nIndex, c); }

	void RemoveAt(int nIndex)				{ RemoveAtImpl(nIndex); }
	bool Remove(const V& c)					{ return RemoveImpl(c); }	
	void RemoveAll()						{ RemoveAllImpl(); }

	const V& operator[](int nIndex) const	{ return GetAt(nIndex); }
	const V& GetAt(int nIndex) const		{ return at(nIndex); }

	int FindIndex(const V& c) const
	{
		for (size_type i = 0; i < size(); ++i)
			if (at(i) == c)
				return i;

		return -1;
	}

	int GetSize() const						{ return size(); }

protected:
	VIRTUAL(void, AddImpl)(const V& c)		{ push_back(c); }

	VIRTUAL2(void, AddImpl)(const CValueContainer<V>& container)
	{
		insert(end(), container.begin(), container.end());
	}

	VIRTUAL(void, InsertAtImpl)(int nIndex, const V& c)
	{
		insert(begin() + nIndex, c);
	}

	VIRTUAL2(void, InsertAtImpl)(int nIndex, const CValueContainer<V>& container)
	{
		insert(begin() + nIndex, container.begin(), container.end());
	}

	VIRTUAL(void, SetAtImpl)(int nIndex, const V& c)	{ at(nIndex) = c; }

	VIRTUAL(void, RemoveAtImpl)(int nIndex)				{ erase(begin() + nIndex); }
	VIRTUAL(bool, RemoveImpl)(const V& c)
	{
		int nIndex = FindIndex(c);
		if (nIndex == -1)
			return false;

		RemoveAtImpl(nIndex);

		return true;
	}

	VIRTUAL(void, RemoveAllImpl)()			{ clear(); }
};

//____________________________________________________________________________
//
template <class K, class V, class C = std::less<K>>
class CDictionary : protected std::map<K, V, C>
{
public:
	typedef const_iterator Iterator;

	CDictionary()
	{}

	CDictionary& operator=(const CDictionary& dictionary)
	{
		if (this == &dictionary)
			return *this;
		RemoveAll();
		Set(dictionary);
		return *this;
	}

	void Set(const K& k, const V& v)				{ SetImpl(k, v); }
	void Set(const CDictionary<K, V>& dictionary)	{ SetImpl(dictionary); }
	bool Remove(const K& k)							{ return RemoveImpl(k); }
	void RemoveAll()								{ RemoveAllImpl(); }
	
	bool ContainsKey(const K& k) const				{ return find(k) != end(); }

	bool Get(const K& k, V& v) const
	{
		const_iterator it = find(k);
		if (it == end())
			return false;

		v = it->second;
		return true;
	}

	int GetSize() const								{ return size(); }

	Iterator Begin() const							{ return begin(); }
	Iterator End() const							{ return end(); }
	Iterator Find(const K& k) const					{ return find(k); }

protected:
	VIRTUAL(void, SetImpl)(const K& k, const V& v)			
	{
		operator[](k) = v;
	}

	VIRTUAL2(void, SetImpl)(const CDictionary<K, V>& dictionary)
	{
		for (std::map<K, V>::const_iterator it = dictionary.begin(); it != dictionary.end(); ++it)
			SetImpl(it->first, it->second);
	}

	VIRTUAL(bool, RemoveImpl)(const K& k)						
	{  
		iterator it = find(k);
		if (it != end())
		{
			erase(it);
			return true;
		}

		return false;
	}

	VIRTUAL(void, RemoveAllImpl)()					{ clear(); }
};

//____________________________________________________________________________
//
template <class K, class C = std::less<K>>
class CSet : protected std::set<K, C>
{
public:
	typedef const_iterator Iterator;

	CSet()
	{}

	CSet& operator=(const CSet& aset)
	{
		if (this == &aset)
			return *this;
		RemoveAll();
		Set(aset);
		return *this;
	}

	void Set(const K& k)						{ SetImpl(k); }
	void Set(const CSet& aset)					{ SetImpl(aset); }
	bool Remove(const K& k)						{ return RemoveImpl(k); }
	void RemoveAll()							{ RemoveAllImpl(); }

	bool Contains(const K& k) const				{ return find(k) != end(); }
	bool Contains(const CSet& aset) const		
	{ 
		for (std::set<K, C>::const_iterator i = aset.begin(); i != aset.end(); ++i)
			if (find(*i) == end())
				return false;

		return true;
	}

	bool Intersect(const CSet& aset) const		
	{ 
		for (std::set<K, C>::const_iterator i = aset.begin(); i != aset.end(); ++i)
			if (find(*i) != end())
				return true;

		return false;
	}

	int GetSize() const		{ return size(); }

	Iterator Begin() const	{ return begin(); }
	Iterator End() const	{ return end(); }

	template <class C>
	void GetAs(C& values) const
	{
		values.RemoveAll();

		for (std::set<K, C>::const_iterator i = begin(); i != end(); ++i)
			values.Add(*i);
	}

protected:
	VIRTUAL(void, SetImpl)(const K& k)			
	{
		insert(k);
	}

	VIRTUAL2(void, SetImpl)(const CSet& aset)
	{
		for (std::set<K, C>::const_iterator i = aset.begin(); i != aset.end(); ++i)
			insert(*i);
	}

	VIRTUAL(bool, RemoveImpl)(const K& k)						
	{  
		iterator it = find(k);
		if (it != end())
		{
			erase(it);
			return true;
		}

		return false;
	}

	VIRTUAL(void, RemoveAllImpl)()							{ clear(); }
};

//____________________________________________________________________________
//
template <class K, class C = std::less<counted_ptr<K>>>
class CCountedPtrSet : protected std::set<counted_ptr<K>, C>
{
public:
	typedef const_iterator Iterator;

	CCountedPtrSet()
	{}

	CCountedPtrSet& operator=(const CCountedPtrSet& aset)
	{
		if (this == &aset)
			return *this;
		RemoveAll();
		Set(aset);
		return *this;
	}

	void Set(K* k)							{ SetImpl(k); }
	void Set(const CCountedPtrSet& aset)	{ SetImpl(aset); }
	bool Remove(K* k)						{ return RemoveImpl(k); }
	void RemoveAll()						{ RemoveAllImpl(); }

	bool Contains(K* k) const				{ return find(k) != end(); }
	bool Contains(const CCountedPtrSet& aset) const		
	{ 
		for (std::set<counted_ptr<K>, C>::const_iterator i = aset.begin(); i != aset.end(); ++i)
			if (find(*i) == end())
				return false;

		return true;
	}

	bool Intersect(const CCountedPtrSet& aset) const		
	{ 
		for (std::set<counted_ptr<K>, C>::const_iterator i = aset.begin(); i != aset.end(); ++i)
			if (find(*i) != end())
				return true;

		return false;
	}

	int GetSize() const		{ return size(); }

	Iterator Begin() const	{ return begin(); }
	Iterator End() const	{ return end(); }

	template <class C>
	void GetAs(C& values) const
	{
		values.RemoveAll();

		for (std::set<counted_ptr<K>, C>::const_iterator i = begin(); i != end(); ++i)
			values.Add(*i);
	}

protected:
	VIRTUAL(void, SetImpl)(K* k)			
	{
		insert(k);
	}

	VIRTUAL2(void, SetImpl)(const CCountedPtrSet& aset)
	{
		for (std::set<counted_ptr<K>, C>::const_iterator i = aset.begin(); i != aset.end(); ++i)
			insert(*i);
	}

	VIRTUAL(bool, RemoveImpl)(K* k)						
	{  
		iterator it = find(k);
		if (it != end())
		{
			erase(it);
			return true;
		}

		return false;
	}

	VIRTUAL(void, RemoveAllImpl)()							{ clear(); }
};

