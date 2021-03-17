#include "stdafx.h"

#define new DEBUG_NEW

bool s_bEventFiringEnabled = true;

CString GetUniqueEventSourceName()
{
	static int s_nEventSourceID = 0;
	CString strName;
	strName.Format(_T("EventSource%d"), ++s_nEventSourceID);
	return strName;
}

CString GetUniqueListenerName()
{
	static int s_nListenerID = 0;
	CString strName;
	strName.Format(_T("Listener%d"), ++s_nListenerID);
	return strName;
}

/*
//____________________________________________________________________________
//
CGameEvent::CGameEvent(CEventSource* pEventSource)
	: m_cpEventSource(pEventSource)
{
}

CEventSource* CGameEvent::GetSource() const
{
	return m_cpEventSource.GetPointer();
}

//____________________________________________________________________________
//
BOOL CEventSource::s_bEventFiringEnabled = TRUE;

CEventSource::CEventSource(LPCTSTR strEventSourceName) 
	: m_strEventSourceName(strEventSourceName)
{
#ifdef _MY_DEBUG
	m_Listeners.SetVariableDisplayName(m_strEventSourceName);
#endif
}

CEventSource::~CEventSource() 
{
}

BOOL CEventSource::HasListeners() const
{
	return m_Listeners.GetSize() > 0;
}

BOOL CEventSource::HasListener(const CListener* pListener)
{
	for (int i = 0; i < m_Listeners.GetSize(); ++i)
	{
		if (pListener == m_Listeners.GetAt(i))
			return TRUE;
	}

	return FALSE;
}

void CEventSource::FireEvent(CGameEvent* pGameEvent, CListener* pNotifyThisListenerOnly)
{
	if (CEventSource::s_bEventFiringEnabled)
	{
		if (pNotifyThisListenerOnly)
		{
			pGameEvent->AddRef();
			pNotifyThisListenerOnly->OnGameEvent(pGameEvent);
			pGameEvent->Release();
			return;
		}

		// Save a private list

		CListenerContainer listeners;
		listeners.Add(m_Listeners);

		for (int i = listeners.GetSize() - 1; i >= 0; --i)
		{
			// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

			bool bFound = false;

			if (i != listeners.GetSize() - 1)
			{
				for (int j = 0; j < m_Listeners.GetSize(); ++j)
					if (m_Listeners[j] == listeners[i])
					{
						bFound = true;
						break;
					}
			}
			else
				bFound = true;

			if (bFound)
			{
				pGameEvent->AddRef();
				listeners[i]->OnGameEvent(pGameEvent);
				pGameEvent->Release();
			}
		}
	}
}

void CEventSource::AddListener(CListener* pListener)
{
	if (HasListener(pListener))	// 5/26/06: prevented duplicate listeners
	{
		ATLASSERT(false);
		return;
	}

	m_Listeners.Add(pListener);
	pListener->m_EventSources.Add(this);
}

void CEventSource::RemoveListener(CListener* pListener)
{
	int nIndex = pListener->m_EventSources.FindIndex(this);
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

void CEventSource::RemoveAllListeners()
{
	for (int i = 0; i < m_Listeners.GetSize(); ++i)
	{
		CListener* pListener = m_Listeners.GetAt(i).GetPointer();

		int nIndex = pListener->m_EventSources.FindIndex(this);
		if (nIndex == -1)
		{
			ATLASSERT(!m_pGame || m_pGame->IsRestoring());
		}
		else
			pListener->m_EventSources.RemoveAt(nIndex);
	}

	m_Listeners.RemoveAll();
}

//____________________________________________________________________________
//
CListener::CListener(LPCTSTR strListenerName)
	: m_strListenerName(strListenerName)
{
#ifdef _MY_DEBUG
	m_EventSources.SetVariableDisplayName(m_strListenerName);
#endif
}

CListener::~CListener() 
{
}

void CListener::SetEventCallback(CListener::EventCallback eventCallback)
{
	m_Callback = eventCallback;
}

void CListener::OnGameEvent(CGameEvent* pGameEvent)
{
	if (!m_Callback.empty())
		m_Callback(pGameEvent);
}

void CListener::RemoveAllEventSources()
{
	for (int i = 0; i < m_EventSources.GetSize(); ++i)
	{
		CEventSource* pEventSource = m_EventSources.GetAt(i).GetPointer();

		int nIndex = pEventSource->m_Listeners.FindIndex(this);
		if (nIndex == -1)
		{
			//ATLASSERT(!m_pGame || m_pGame->IsRestoring());
		}
		else
			pEventSource->m_Listeners.RemoveAt(nIndex);
	}

	m_EventSources.RemoveAll();
}

//____________________________________________________________________________
//
CEventSource* CEventSourceContainer::GetEventSource(LPCTSTR strEventSourceName) const
{
	ATLASSERT(_tcsicmp(strEventSourceName, _T("zone")));

	for (int i = 0; i < GetSize(); ++i)
	{
		CEventSource* pEventSource = GetAt(i).GetPointer();

		if (!_tcsicmp(pEventSource->GetEventSourceName(), strEventSourceName))
			return pEventSource;
	}

	ATLASSERT(false);

	return NULL;
}

void CEventSourceContainer::RemoveEventSource(LPCTSTR strEventSourceName)
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CEventSource* pEventSource = GetAt(i).GetPointer();

		if (!_tcsicmp(pEventSource->GetEventSourceName(), strEventSourceName))
		{
			RemoveAt(i);
			return;
		}
	}

	ATLASSERT(false);
}
*/