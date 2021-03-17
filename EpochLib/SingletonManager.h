#pragma once

class EPOCH_EXPORT CSingletonBase
{
	friend class CSingletonManager;

protected:
	virtual ~CSingletonBase()
	{}
};

template <class SingletonType>
class  CSingleton : public CSingletonBase
{
public:
	static SingletonType* Get()
	{
		std::auto_ptr<SingletonType>& apSingleton(GetImpl());
		if (!apSingleton.get())
			apSingleton = std::auto_ptr<SingletonType>(new SingletonType);
		return apSingleton.get();
	}

	CSingleton()
	{
		CSingletonManager::Register(this);
	}

protected:
	virtual ~CSingleton()
	{
		GetImpl().reset();
	}

	static std::auto_ptr<SingletonType>& GetImpl()
	{
		static std::auto_ptr<SingletonType> apSingleton;
		return apSingleton;
	}
};

template <class SingletonType, int nCount>
class  CSingletonPool : public CSingletonBase
{
public:
	static SingletonType* Get(int nIndex)
	{
		std::auto_ptr<SingletonType>& apSingleton(GetImpl(nIndex));
		if (!apSingleton.get())
			apSingleton = std::auto_ptr<SingletonType>(new SingletonType);
		return apSingleton.get();
	}

	CSingletonPool()
	{
		CSingletonManager::Register(this);
	}

protected:
	virtual ~CSingletonPool()
	{
		for (int i = 0; i < nCount; ++i)
			GetImpl(i).reset();
	}

	static std::auto_ptr<SingletonType>& GetImpl(int nIndex)
	{
		static std::auto_ptr<SingletonType> apSingletons[nCount];
		return apSingletons[nIndex];
	}
};

#pragma warning( push )
#pragma warning (disable : 4251)

class EPOCH_EXPORT CSingletonManager
{
public:
	static void Register(CSingletonBase* pSingleton)
	{
		std::auto_ptr<CSingletonManager>& apSingletonManager(GetImpl());
		if (!apSingletonManager.get())
			apSingletonManager = std::auto_ptr<CSingletonManager>(new CSingletonManager);

		apSingletonManager->m_Singletons.push_back(pSingleton);
	}

	static void DestroySingletons()
	{
		std::auto_ptr<CSingletonManager>& apSingletonManager(GetImpl());
		if (apSingletonManager.get())
		{
			for (std::vector<CSingletonBase*>::reverse_iterator it = apSingletonManager->m_Singletons.rbegin();
				it != apSingletonManager->m_Singletons.rend();
				++it)
				delete *it;

			apSingletonManager->m_Singletons.clear();
			apSingletonManager.reset();
		}
	}

protected:
	static std::auto_ptr<CSingletonManager>& GetImpl()
	{
		static std::auto_ptr<CSingletonManager> apSingleton;
		return apSingleton;
	}

	std::vector<CSingletonBase*> m_Singletons;
};

#define DECLARE_SINGLETON(C) public: static C* GetInstance() { return CSingleton<C>::Get(); } protected: friend class CSingleton<C>; friend class std::auto_ptr<C>; C(); virtual ~C(); C& operator=(const C& c);
#define DEFINE_SINGLETON(C) new CSingleton<C>();

#define DECLARE_SINGLETON_POOL(C, N) public: static C* GetInstance(int nIndex) { return CSingletonPool<C, N>::Get(nIndex); } protected: friend class CSingletonPool<C, N>; friend class std::auto_ptr<C>; C(); virtual ~C(); C& operator=(const C& c);
#define DEFINE_SINGLETON_POOL(C, N) new CSingletonPool<C, N>();

#pragma warning( pop )