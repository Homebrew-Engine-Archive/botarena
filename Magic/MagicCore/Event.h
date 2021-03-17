#pragma once

//____________________________________________________________________________
//
extern bool s_bEventFiringEnabled;

CString GetUniqueEventSourceName();
CString GetUniqueListenerName();

//____________________________________________________________________________
//
template <typename L>
class CEventSourceBase
	: public CReferenceCounted<SingleThreadedPolicy>
{
protected:
	CEventSourceBase(LPCTSTR strEventSourceName)
		: m_strEventSourceName(strEventSourceName)
	{
#ifdef _MY_DEBUG
		m_Listeners.SetVariableDisplayName(m_strEventSourceName);
#endif
	}

	virtual ~CEventSourceBase() 
	{
		RemoveAllListeners();
	}

public:
	CString GetEventSourceName() const				{ return m_strEventSourceName; }

	void AddListener(L* pListener)
	{
		if (HasListener(pListener))	// 5/26/06: prevented duplicate listeners
		{
			//ATLASSERT(false);
			return;
		}

		m_Listeners.Add(pListener);
		pListener->m_EventSources.Add((L::E*)this);
	}

	void RemoveListener(L* pListener)
	{
		int nIndex = pListener->m_EventSources.FindIndex((L::E*)this);
		if (nIndex == -1)
		{
			//ATLASSERT(false);	may happen if AddListener() was called for the same listener multiple times
		}
		else
			pListener->m_EventSources.RemoveAt(nIndex);

		nIndex = m_Listeners.FindIndex(pListener);
		if (nIndex == -1)
		{
			//ATLASSERT(false);
			return;
		}

		m_Listeners.RemoveAt(nIndex);
	}

	void RemoveAllListeners()
	{
		CListenerContainer listeners(m_Listeners);
		m_Listeners.RemoveAll();

		for (int i = 0; i < listeners.GetSize(); ++i)
		{
			L* pListener = listeners.GetAt(i).GetPointer();

			int nIndex = pListener->m_EventSources.FindIndex((L::E*)this);
			if (nIndex == -1)
			{
				//ATLASSERT(!m_pGame || m_pGame->IsRestoring());
			}
			else
				pListener->m_EventSources.RemoveAt(nIndex);
		}
	}

	BOOL HasListeners() const
	{
		return m_Listeners.GetSize() > 0;
	}

	BOOL HasListener(const L* pListener)
	{
		for (int i = 0; i < m_Listeners.GetSize(); ++i)
		{
			if (pListener == m_Listeners.GetAt(i))
				return TRUE;
		}

		return FALSE;
	}

	void GetListeners(CCountedPtrContainer<L>& listeners) const
	{
		listeners = m_Listeners;
	}

	int GetListenerCount() const					{ return m_Listeners.GetSize(); }

protected:
	typedef CCountedPtrContainer<L>		CListenerContainer;
	typedef CCountedPtrContainer_<L>	CListenerContainer_;

	CListenerContainer_ m_Listeners;
	CString				m_strEventSourceName;
};

//____________________________________________________________________________
//
template <class E>
class CListenerBase
	: public CReferenceCounted<SingleThreadedPolicy>
{
public:
	CListenerBase(LPCTSTR strListenerName)
		: m_strListenerName(strListenerName)
	{
#ifdef _MY_DEBUG
		m_EventSources.SetVariableDisplayName(m_strListenerName);
#endif
	}

	virtual ~CListenerBase() 
	{
		RemoveAllEventSources();
	}

	CString GetListenerName() const				{ return m_strListenerName; }

	int GetEventSourceCount() const				{ return m_EventSources.GetSize(); }
	
	void RemoveAllEventSources()
	{
		CEventSourceContainer eventSources(m_EventSources);
		m_EventSources.RemoveAll();

		for (int i = 0; i < eventSources.GetSize(); ++i)
		{
			E* pEventSource = eventSources.GetAt(i).GetPointer();

			int nIndex = pEventSource->m_Listeners.FindIndex((E::L*)this);
			if (nIndex == -1)
			{
				//ATLASSERT(!m_pGame || m_pGame->IsRestoring());
			}
			else
				pEventSource->m_Listeners.RemoveAt(nIndex);
		}
	}

protected:
	class CEventSourceContainer
		: public CCountedPtrContainer<E>
	{
	public:
		E* GetEventSource(LPCTSTR strEventSourceName) const
		{
			for (int i = 0; i < GetSize(); ++i)
			{
				E* pEventSource = GetAt(i).GetPointer();

				if (!_tcsicmp(pEventSource->GetEventSourceName(), strEventSourceName))
					return pEventSource;
			}

			ATLASSERT(false);

			return NULL;
		}

		void RemoveEventSource(LPCTSTR strEventSourceName)
		{
			for (int i = 0; i < GetSize(); ++i)
			{
				E* pEventSource = GetAt(i).GetPointer();

				if (!_tcsicmp(pEventSource->GetEventSourceName(), strEventSourceName))
				{
					RemoveAt(i);
					return;
				}
			}

			ATLASSERT(false);
		}

	};

	typedef CCountedPtrContainer_<E, CEventSourceContainer> CEventSourceContainer_;

	CEventSourceContainer_	m_EventSources;
	CString					m_strListenerName;
};

//____________________________________________________________________________
//
template <class L>
class ListenerPtr : public counted_ptr<L>
{
public:
	ListenerPtr(LPCTSTR strListenerName, typename L::EventCallback callback)
		: counted_ptr<L>(::CreateObject<L>(strListenerName))
	{
		GetPointer()->SetEventCallback(callback);
	}

	virtual ~ListenerPtr() // needed to clear up all the listening so that event sources can be freed
	{
		GetPointer()->SetEventCallback(L::EventCallback());
		
		GetPointer()->RemoveAllEventSources();
	}
};
