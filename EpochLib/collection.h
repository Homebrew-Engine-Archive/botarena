#pragma once

#include <vector>
#include <list>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {

//____________________________________________________________________________
//
typedef std::vector<CAtlString>		StringArray;
typedef std::set<CAtlString>		StringSet;
typedef std::list<HANDLE>			HandleList;
typedef std::vector<int>			IntArray;
typedef std::vector<unsigned int>	UIntArray;
typedef std::vector<DWORD>			DWordArray;
typedef std::vector<bool>			BoolArray;

//____________________________________________________________________________
//

#pragma warning (disable : 4275)

template<class T>
class  ptrlist : public std::list<T*>
{
	DISALLOW_BASE_IMPL(assign);
	DISALLOW_BASE_IMPL(unique);
	DISALLOW_BASE_IMPL(insert);
	DISALLOW_BASE_IMPL(resize);

public:
	virtual ~ptrlist()
	{
		clear();
	}

	void clear()
	{
		for (iterator it = begin(); it != end(); ++it)
			if (*it != NULL)
				delete (*it);		
		__super::clear();
	}

	void insert(iterator itWhere, std::auto_ptr<T> apT)
	{
		__super::insert(itWhere, apT.release());
	}

	void push_back(std::auto_ptr<T> apT)
	{
		__super::push_back(apT.release());
	}

	void push_front(std::auto_ptr<T> apT)
	{
		__super::push_front(apT.release());
	}

	void pop_back()
	{
		if (*back() != NULL)
			delete *back();
		__super::pop_back();
	}

	void pop_front()
	{
		if (*front() != NULL)
			delete *front();
		__super::pop_front();
	}

	void remove(const T*& pT)
	{
		for (iterator it = begin(); it != end(); ++it)
			if (*it == pT)
			{
				erase(it);
				return;
			}
	}

	template<class Predicate>
	void remove_if(Predicate predicate)
	{
		iterator last = end();
		for (iterator first = begin(); first != last;)
			if (predicate(*first))
				first = erase(first);
			else
				++first;
	}

	iterator erase(iterator itWhere)
	{
		if (*itWhere != NULL)
			delete *itWhere;
		return __super::erase(itWhere);
	}

	iterator erase(iterator itFirst, iterator itLast)
	{
		if (itFirst == begin() && itLast == end())
			clear();
		else
			while (itFirst != itLast)
				itFirst = erase(itLast);
		return itLast;
	}

	void resize(size_type newSize)
	{
		if (_Mysize < newSize)
			_Insert_n(end(), newSize - _Mysize, NULL);
		else
		while (newSize < _Mysize)
			pop_back();
	}
};

//____________________________________________________________________________
//
template<class T>
class  ptrvector : public std::vector<T*>
{
	DISALLOW_BASE_IMPL(assign);
	DISALLOW_BASE_IMPL(insert);
	DISALLOW_BASE_IMPL(resize);

public:
	virtual ~ptrvector()
	{
		clear();
	}

	void clear()
	{
		for (iterator it = begin(); it != end(); ++it)
			if (*it != NULL)
				delete (*it);		
		__super::clear();
	}

	void insert(iterator itWhere, std::auto_ptr<T> apT)
	{
		__super::insert(itWhere, apT.release());
	}

	void push_back(std::auto_ptr<T> apT)
	{
		__super::push_back(apT.release());
	}

	void pop_back()
	{
		if (*back() != NULL)
			delete *back();
		__super::pop_back();
	}

	iterator erase(iterator itWhere)
	{
		if (*itWhere != NULL)
			delete *itWhere;
		return __super::erase(itWhere);
	}

	iterator erase(iterator itFirst, iterator itLast)
	{
		for (iterator it = itFirst; it != itLast; ++it)
			if (*it)
				delete *it;
				
		return __super::erase(itFirst, itLast);
	}

	void resize(size_type newSize)
	{
		if (size() < newSize)
			_Insert_n(end(), newSize - size(), NULL);
		else
			if (newsize < size())
				erase(begin() + newsize, end());
	}
};

}	// namespace Epoch

#pragma warning( pop )