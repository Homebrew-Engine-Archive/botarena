#pragma once

//____________________________________________________________________________
//
#define WITH_TI 1

#ifdef WITH_TI
#define CLASSID(pointer) (typeid(*(pointer)))
#else
#define CLASSID(pointer) ((pointer)->classid())
#endif

template<class T,class Parent>
class TCheapList;
template<class T>
class TCheapListBase;

template<class T>
class TCheapListConstIterator;

template<class T>
class TCheapListIterator : std::iterator<std::forward_iterator_tag, T>
{
	friend class TCheapListBase<T>;
	friend class TCheapListConstIterator<T>;

	typedef TCheapListIterator<T>	Me;
public:
	typedef TCheapList<T,T>			Entry;

	TCheapListIterator()			: p(NULL)		{}
	TCheapListIterator(const Me& i)	: p(i.p)		{}
	TCheapListIterator(Entry* e)	: p(e)			{}
	
	Me& operator++()								{p=&p->next();return *this;}
	Me operator++(int)								{Me out=*this; p=&p->next();return out;}
	
	T& operator*()									{return p->operator*();}
	T* operator->()									{return p->operator->();}

	operator bool() const							{return p != NULL;}
	operator Entry()								{return *p;}

	template<class T2>
	TCheapList<T2,T>& downcast()
	{return *static_cast<TCheapList<T2,T>*>(static_cast<TCheapListBase<T>*>(p));}
	
	friend bool operator==(const Me i,const Me j)	{return i.p==j.p;}
	friend bool operator!=(const Me i,const Me j)	{return i.p!=j.p;}
	protected:
	Entry* p;
};
template<class T>
class TCheapListConstIterator : std::iterator<std::forward_iterator_tag, const T>
{
	friend class TCheapListBase<T>;

	typedef TCheapListConstIterator<T>			Me;
	typedef TCheapListIterator<T>				AlterEgo;
public:
	typedef const TCheapList<T,T>				Entry;

	TCheapListConstIterator()					: p(NULL)	{}
	TCheapListConstIterator(const Me& i)		: p(i.p)	{}
	TCheapListConstIterator(const AlterEgo& i)	: p(i.p)	{}
	TCheapListConstIterator(Entry* e)			: p(e)		{}
	
	Me& operator++()										{p=&p->next();return *this;}
	Me operator++(int)										{Me out=*this; p=&p->next();return out;}
	
	const T& operator*() const								{return p->operator*();}
	const T* operator->() const								{return p->operator->();}

	operator bool()	const									{return p != NULL;}
	operator const Entry() const							{return *p;}

	template<class T2>
	const TCheapList<T2,T>& downcast() const 
	{return *static_cast<const TCheapList<T2,T>*>(static_cast<const TCheapListBase<T>*>(p));}
	
	friend bool operator==(const Me i,const Me j)			{return i.p==j.p;}
	friend bool operator!=(const Me i,const Me j)			{return i.p!=j.p;}
	protected:
	const Entry* p;
};

//only 2 inheritance-layers, "virtual" should only be called on base-layer
//and/or actually correct type! therefore VIRTUAL and OVERRIDE are bloat...
template<class T>
class TCheapListBase
{
public:
	typedef TCheapListBase<T> Base;

	typedef TCheapListIterator<T> iterator;
	typedef TCheapListConstIterator<T> const_iterator;
	
	TCheapListBase()					: n(NULL)	{}
	explicit TCheapListBase(Base* e)	: n(e)		{}


	void pushBack(Base* e)							{if(n) n->pushBack(e); else n=e;}

	Base& next() const								{return *n;}
	Base& back()									{return (n ? n->back() : *this);}

	void removeNext()								{delete n;n=NULL;}
	template<class Child>
	void insertNext(TCheapList<Child,T>* e)			{insertNext(static_cast<Base*>(e));}
	void insertNext(Base* e)						{e->pushBack(n); n=e;}
	void pickNext(Base* nn)							{n=nn;}

	bool empty() const								{return n==NULL;}

	const iterator end()							{return NULL;}
	const const_iterator end() const				{return NULL;}
	iterator begin()								{return static_cast<TCheapList<T,T>* >(this);}
	const_iterator begin() const					{return static_cast<const TCheapList<T,T>* >(this);}

	virtual bool Equals(const Base& i) const		{return true;}//iteration is performed in operator==

	virtual ~TCheapListBase()						{delete n;}

	#ifndef WITH_TI
	virtual const type_info& classid() const		{return typeid(Base);}//preferably return vtable itself!
	#endif
	template<class T_>
	iterator findid()
	{
		_STATIC_ASSERT(SUPERSUBCLASS(T, T_));
		if(this==NULL) return end();
		if( typeid(TCheapList<T_,T>) == CLASSID(this) ) return begin();
		else return (n ? n->findid<T_>() : end());
	}
	template<class T_>
	const_iterator findid() const
	{
		_STATIC_ASSERT(SUPERSUBCLASS(T, T_));
		if(this==NULL) return end();
		if( typeid(TCheapList<T_,T>) == CLASSID(this) ) return begin();
		else return (n ? n->findid<T_>() : end());
	}
	template<class T_>
	iterator find(const T_& value)
	{
		iterator out=begin();
		while(out && (out=out.p->findid<T_>()) && !(*out.downcast<T_>() == value))
			++out;
		return out;
	}
	template<class T_>
	const_iterator find(const T_& value) const
	{
		const_iterator out=begin();
		while(out && (out=out.p->findid<T_>()) && !(*out.downcast<T_>() == value))
			++out;
		return out;
	}


protected:
	virtual Base* clone() const						{return (n? n->clone() : NULL);} //doesn't clone self!

	Base* n; //no auto_ptr since it's owned by this class!
};


template<class T,class Parent>
class TCheapList : public TCheapListBase<Parent>
{
	_STATIC_ASSERT(SUPERSUBCLASS(Parent,T));

	friend TCheapList<Parent,Parent>;

	typedef TCheapList<T,Parent> Me;
public:
	typedef TCheapListBase<Parent> Base;
	typedef TCheapList<Parent,Parent> Entry;

	typedef T this_value_type;
	typedef Parent value_type;
	typedef TCheapListIterator<Parent> iterator;
	typedef TCheapListConstIterator<Parent> const_iterator;
	
	TCheapList() : Base()							{}

	TCheapList(const T& d) : Base(), data(d)		{}
	template<typename A, typename B>
	TCheapList(A a, B b):Base(),data(a,b)			{}
	template<typename A, typename B, typename C>
	TCheapList(A a, B b, C c):Base(),data(a,b,c)	{}

	TCheapList(const Me& c) : Base(), data(c.data)	{if(c.n) pushBack(c.next().clone());}


	const Entry& next() const
	{
		ATLASSERT(this!=NULL);
		return static_cast<const Entry&>(*Base::n);
	}
	Entry& next()
	{
		ATLASSERT(this!=NULL);
		return static_cast<Entry&>(*Base::n);
	}
	Entry& back()
	{
		if(n) return *static_cast<Entry*>(&n->back());
		return *static_cast<Entry*>(static_cast<Base*>(this));
	}
	iterator last()									{return &back();}
	const_iterator last() const						{return &back();}

	virtual Base* clone() const
	{
		Base* out=new Me(data);
		out->pushBack(Base::clone());
		return out;
	}

	T& operator*()									{return data;}
	const T& operator*() const						{return data;}
	T* operator->()									{return &data;}
	const T* operator->() const						{return &data;}
	friend bool operator==(const Me& i, const Me& j)
	{//the correct type must already be in the parameters!
		//if(&i==&j) return true;	//checked in data.
		if(i.n==NULL||j.n==NULL) 
			return (i.n==j.n) && (i.data==j.data);
		return (CLASSID(i.n)==CLASSID(j.n))
			&& i.n->Equals(*j.n) && (i.data==j.data);
	}
	Me& operator=(const Me& other)
	{
		data=other.data;
		if(n!=NULL) delete n;
		if(other.n)
			n=other.next().clone();
		else n=NULL;
		return *this;
	}

	virtual ~TCheapList()							{}

	#ifndef WITH_TI
	virtual const type_info& classid() const		{return typeid(Me);}//preferably return vtable itself!
	#endif

protected:
	virtual bool Equals(const Base& i) const		{return *this==static_cast<const Me&>(i);}

	T data;
};

//____________________________________________________________________________
//
