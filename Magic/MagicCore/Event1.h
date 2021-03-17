#pragma once

//____________________________________________________________________________
//
template <typename P1>
class CListener1;

template <typename P1>
class CEventSource1
	: public CEventSourceBase<CListener1<P1>>
	, noncopyable
{
	typedef CListener1< P1 > L;
	friend class L;
	friend class CListenerBase<CEventSource1>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, listeners);
	}

	void FireEvent(P1 p1, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, listeners);
	}

protected:
	CEventSource1(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2>
class CListener2;

template <typename P1, typename P2>
class CEventSource2
	: public CEventSourceBase<CListener2<P1, P2>>
	, noncopyable
{
	typedef CListener2< P1, P2 > L;
	friend class L;
	friend class CListenerBase<CEventSource2>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, listeners);
	}

	void FireEvent(P1 p1, P2 p2, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, listeners);
	}

protected:
	CEventSource2(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3>
class CListener3;

template <typename P1, typename P2, typename P3>
class CEventSource3
	: public CEventSourceBase<CListener3<P1, P2, P3>>
	, noncopyable
{
	typedef CListener3< P1, P2, P3 > L;
	friend class L;
	friend class CListenerBase<CEventSource3>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2, P3 p3)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, p3, listeners);
	}

	void FireEvent(P1 p1, P2 p2, P3 p3, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, p3, listeners);
	}

protected:
	CEventSource3(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, P3 p3, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2, p3);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4>
class CListener4;

template <typename P1, typename P2, typename P3, typename P4>
class CEventSource4
	: public CEventSourceBase<CListener4<P1, P2, P3, P4>>
	, noncopyable
{
	typedef CListener4< P1, P2, P3, P4 > L;
	friend class L;
	friend class CListenerBase<CEventSource4>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, p3, p4, listeners);
	}

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, p3, p4, listeners);
	}

protected:
	CEventSource4(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, P3 p3, P4 p4, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2, p3, p4);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5>
class CListener5;

template <typename P1, typename P2, typename P3, typename P4, typename P5>
class CEventSource5
	: public CEventSourceBase<CListener5<P1, P2, P3, P4, P5>>
	, noncopyable
{
	typedef CListener5< P1, P2, P3, P4, P5 > L;
	friend class L;
	friend class CListenerBase<CEventSource5>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, p3, p4, p5, listeners);
	}

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, p3, p4, p5, listeners);
	}

protected:
	CEventSource5(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2, p3, p4, p5);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
class CListener6;

template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
class CEventSource6
	: public CEventSourceBase<CListener6<P1, P2, P3, P4, P5, P6>>
	, noncopyable
{
	typedef CListener6< P1, P2, P3, P4, P5, P6 > L;
	friend class L;
	friend class CListenerBase<CEventSource6>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5, p6);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, p3, p4, p5, p6, listeners);
	}

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5, p6);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, p3, p4, p5, p6, listeners);
	}

protected:
	CEventSource6(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2, p3, p4, p5, p6);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class CListener7;

template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class CEventSource7
	: public CEventSourceBase<CListener7<P1, P2, P3, P4, P5, P6, P7>>
	, noncopyable
{
	typedef CListener7< P1, P2, P3, P4, P5, P6, P7> L;
	friend class L;
	friend class CListenerBase<CEventSource7>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5, p6, p7);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, p3, p4, p5, p6, p7, listeners);
	}

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5, p6, p7);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, p3, p4, p5, p6, p7, listeners);
	}

protected:
	CEventSource7(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2, p3, p4, p5, p6, p7);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
class CListener8;

template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
class CEventSource8
	: public CEventSourceBase<CListener8<P1, P2, P3, P4, P5, P6, P7, P8>>
	, noncopyable
{
	typedef CListener8< P1, P2, P3, P4, P5, P6, P7, P8 > L;
	friend class L;
	friend class CListenerBase<CEventSource8>;
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef L Listener;

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5, p6, p7, p8);
			return;
		}

		CListenerContainer listeners;
		listeners.Add(m_Listeners);
		FireEventImpl(p1, p2, p3, p4, p5, p6, p7, p8, listeners);
	}

	void FireEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, const CListenerContainer& excludeListeners)
	{
		int nListenerCount = m_Listeners.GetSize();
		if (!s_bEventFiringEnabled || !nListenerCount)
			return;

		if (nListenerCount == 1)
		{
			m_Listeners[0]->OnGameEvent(p1, p2, p3, p4, p5, p6, p7, p8);
			return;
		}

		CListenerContainer listeners;
		for (int i = 0; i < nListenerCount; ++i)
		{
			Listener* pListener = m_Listeners[i].GetPointer();
			if (excludeListeners.FindIndex(pListener) == -1)
				listeners.Add(pListener);
		}
		FireEventImpl(p1, p2, p3, p4, p5, p6, p7, p8, listeners);
	}

protected:
	CEventSource8(LPCTSTR strEventSourceName)
		: CEventSourceBase(strEventSourceName)
	{}

	void FireEventImpl(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, const CListenerContainer& listeners)
	{
		int nListenerCount = listeners.GetSize();
		if (s_bEventFiringEnabled && nListenerCount)
		{
			for (int i = nListenerCount - 1; i >= 0; --i)
			{
				// Except for the last listener, verify that all other listeners are still in our public list because ActionPerformed() may remove listeners

				bool bFound = false;

				if (i != nListenerCount - 1)
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
					listeners[i]->OnGameEvent(p1, p2, p3, p4, p5, p6, p7, p8);
				}
			}
		}
	}
};

//____________________________________________________________________________
//
template <typename P1>
class CListener1
	: public CListenerBase<CEventSource1<P1>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource1< P1 > E;
	friend class E;
	friend class CEventSourceBase<CListener1>;

protected:
	CListener1(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1)
	{
		if (!m_Callback.empty())
			m_Callback(p1);
	}

	EventCallback			m_Callback;
};

//____________________________________________________________________________
//
template <typename P1, typename P2>
class CListener2
	: public CListenerBase<CEventSource2<P1, P2>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource2< P1, P2 > E;
	friend class E;
	friend class CEventSourceBase<CListener2>;

protected:
	CListener2(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2);
	}

	EventCallback			m_Callback;
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3>
class CListener3
	: public CListenerBase<CEventSource3<P1, P2, P3>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource3< P1, P2, P3 > E;
	friend class E;
	friend class CEventSourceBase<CListener3>;

protected:
	CListener3(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2, P3 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2, P3 p3)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2, p3);
	}

	EventCallback			m_Callback;
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4>
class CListener4
	: public CListenerBase<CEventSource4<P1, P2, P3, P4>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource4< P1, P2, P3, P4> E;
	friend class E;
	friend class CEventSourceBase<CListener4>;

protected:
	CListener4(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2, P3, P4 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2, P3 p3, P4 p4)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2, p3, p4);
	}

	EventCallback			m_Callback;
};


//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5>
class CListener5
	: public CListenerBase<CEventSource5<P1, P2, P3, P4, P5>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource5< P1, P2, P3, P4, P5> E;
	friend class E;
	friend class CEventSourceBase<CListener5>;

protected:
	CListener5(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2, P3, P4, P5 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2, p3, p4, p5);
	}

	EventCallback			m_Callback;
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
class CListener6
	: public CListenerBase<CEventSource6<P1, P2, P3, P4, P5, P6>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource6< P1, P2, P3, P4, P5, P6 > E;
	friend class E;
	friend class CEventSourceBase<CListener6>;

protected:
	CListener6(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2, P3, P4, P5, P6 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2, p3, p4, p5, p6);
	}

	EventCallback			m_Callback;
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class CListener7
	: public CListenerBase<CEventSource7<P1, P2, P3, P4, P5, P6, P7>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource7< P1, P2, P3, P4, P5, P6, P7> E;
	friend class E;
	friend class CEventSourceBase<CListener7>;

protected:
	CListener7(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2, P3, P4, P5, P6, P7) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2, p3, p4, p5, p6, p7);
	}

	EventCallback			m_Callback;
};

//____________________________________________________________________________
//
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
class CListener8
	: public CListenerBase<CEventSource8<P1, P2, P3, P4, P5, P6, P7, P8>>
	, noncopyable
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	typedef CEventSource8< P1, P2, P3, P4, P5, P6, P7, P8 > E;
	friend class E;
	friend class CEventSourceBase<CListener8>;

protected:
	CListener8(LPCTSTR strListenerName)
		: CListenerBase(strListenerName)
	{}

public:
	typedef FastDelegate< void ( P1, P2, P3, P4, P5, P6, P7, P8 ) > EventCallback;
	
	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void OnGameEvent(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
	{
		if (!m_Callback.empty())
			m_Callback(p1, p2, p3, p4, p5, p6, p7, p8);
	}

	EventCallback			m_Callback;
};
