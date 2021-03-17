#pragma once

#include <set>
#include <queue>
#include <map>
#include <objbase.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Threading {

struct EPOCH_EXPORT ILock
{
	virtual bool Lock(DWORD dwTimeout = INFINITE) = 0;
	virtual void Unlock() = 0;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CCriticalSection : public ILock
{
public:
	CCriticalSection()
	{
		InitializeCriticalSection(&m_CS);
	}

	virtual ~CCriticalSection()
	{
		DeleteCriticalSection(&m_CS);
	}

	virtual bool Lock(DWORD dwTimeout)	{ EnterCriticalSection(&m_CS); return true; }
	virtual void Unlock()				{ LeaveCriticalSection(&m_CS); }

protected:
	CRITICAL_SECTION m_CS;

private:
	CCriticalSection(const CCriticalSection& cs);
    const CCriticalSection& operator=(const CCriticalSection& cs);
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CScopedLock
{
public:
	CScopedLock(ILock& lockObject, bool bLock, DWORD dwTimeout);
	CScopedLock(ILock& lockObject, DWORD dwTimeout = INFINITE);

	~CScopedLock()
	{
		if (m_bLocked)
			m_LockObject.Unlock();
	}

	bool Lock(DWORD dwTimeout);

protected:
	bool m_bLocked;
	ILock& m_LockObject;

private:
	CScopedLock(const CScopedLock& cs);
    const CScopedLock& operator=(const CScopedLock& cs);
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CEvent
{
public:
	static DWORD WaitAll(HANDLE WaitHandles[], DWORD dwCount, DWORD dwTimeout = INFINITE)
	{
		return WaitForMultipleObjects(dwCount, WaitHandles, TRUE, dwTimeout);
	}

	static DWORD WaitAny(HANDLE WaitHandles[], DWORD dwCount, DWORD dwTimeout = INFINITE)
	{
		return WaitForMultipleObjects(dwCount, WaitHandles, FALSE, dwTimeout);
	}

	CEvent(bool bManualReset, bool bInitialState = FALSE, LPCTSTR strName = NULL, LPSECURITY_ATTRIBUTES pSa = NULL);

	virtual ~CEvent()
	{
		if (m_hEvent)
			CloseHandle(m_hEvent);
	}

	void Set();
	void Reset();

	bool Wait(DWORD dwTimeout = INFINITE)
	{
		return WaitForSingleObject(m_hEvent, dwTimeout) == WAIT_OBJECT_0;
	}

	operator HANDLE()
	{
		return GetHandle();
	}

	HANDLE GetHandle() const { return m_hEvent; }

protected:
	HANDLE m_hEvent;

private:
	CEvent(const CEvent& event);
    const CEvent& operator=(const CEvent& event);
};

typedef std::list<CEvent> EventList;
typedef std::vector<CEvent> EventArray;

//_____________________________________________________________________________
//

class EPOCH_EXPORT CManualResetEvent : public CEvent
{
public:
	CManualResetEvent(bool bInitialState = false, LPCTSTR strName = NULL, LPSECURITY_ATTRIBUTES pSa = NULL)
		: CEvent(true, bInitialState, strName, pSa)
	{}
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CAutoResetEvent : public CEvent
{
public:
	CAutoResetEvent(bool bInitialState = false, LPCTSTR strName = NULL, LPSECURITY_ATTRIBUTES pSa = NULL)
		: CEvent(false, bInitialState, strName, pSa)
	{}
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CSemaphore : public ILock
{
public:
	CSemaphore(int nMax, int nInitial = -1, LPCTSTR strName = NULL, LPSECURITY_ATTRIBUTES pSa = NULL)
	{
		m_hSemaphore = CreateSemaphore(pSa, nInitial == -1 ? nMax : nInitial, nMax, strName);
	}

	virtual ~CSemaphore()
	{
		CloseHandle(m_hSemaphore);
	}

	virtual bool Lock(DWORD dwTimeout = INFINITE)	{ return WaitForSingleObject(m_hSemaphore, dwTimeout) != WAIT_TIMEOUT; }
	virtual void Unlock()							{ ReleaseSemaphore(m_hSemaphore, 1, NULL); }

protected:
	HANDLE m_hSemaphore;

private:
	CSemaphore(const CSemaphore& se);
    const CSemaphore& operator=(const CSemaphore& se);
};

//_____________________________________________________________________________
//
// http://www.codeproject.com/KB/threads/ReadWriteLock.aspx
class EPOCH_EXPORT CReadWriteLock 
{
public:
	class CScopedReadLock
	{
	public:
		CScopedReadLock(CReadWriteLock& lock, bool bLock = true)
			: m_Lock(lock)
			, m_bLocked(false)
		{
			if (bLock)
			{
				m_Lock.LockReader();
				m_bLocked = true;
			}
		}

		~CScopedReadLock()
		{
			if (m_bLocked)
				m_Lock.UnlockReader();
		}

		void Lock()
		{
			if (!m_bLocked)
			{
				m_Lock.LockReader();
				m_bLocked = true;
			}
		}

	protected:
		CReadWriteLock& m_Lock;
		bool m_bLocked;

	private:
		CScopedReadLock(const CScopedReadLock& s);
		const CScopedReadLock& operator=(const CScopedReadLock& s);
	};

	class CScopedWriteLock
	{
	public:
		CScopedWriteLock(CReadWriteLock& lock, bool bLock = true)
			: m_Lock(lock)
			, m_bLocked(false)
		{
			if (bLock)
			{
				m_Lock.LockWriter();
				m_bLocked = true;
			}
		}

		~CScopedWriteLock()
		{
			if (m_bLocked)
				m_Lock.UnlockWriter();
		}

		void Lock()
		{
			if (!m_bLocked)
			{
				m_Lock.LockWriter();
				m_bLocked = true;
			}
		}

	protected:
		CReadWriteLock& m_Lock;
		bool m_bLocked;

	private:
		CScopedWriteLock(const CScopedWriteLock& s);
		const CScopedWriteLock& operator=(const CScopedWriteLock& s);
	};

    //! Constructor.
    CReadWriteLock(void);
    //! Destructor.
    virtual ~CReadWriteLock(void);
    
    //! Lock for reader access.
    void LockReader();
    //! Unlock reader access.
    void UnlockReader();
    
    //! Lock for writer access.
    void LockWriter();
    //! Unlock writer access.
    void UnlockWriter();

private:
    //! Private copy constructor.
    CReadWriteLock(const CReadWriteLock &cReadWriteLock);
    //! Private assignment operator.
    const CReadWriteLock& operator=(const CReadWriteLock &cReadWriteLock);

    //! Increment number of readers.
    void IncrementReaderCount();
    //! Decrement number of readers.
    void DecrementReaderCount();

    //! Writer access event.
    CManualResetEvent m_hWriterEvent;
    //! No readers event.
    CManualResetEvent m_hNoReadersEvent;
    //! Number of readers.
    int m_nReaderCount;
    
    //! Critical section for protecting lock writer method.
    CCriticalSection m_csLockWriter;
    //! Critical section for protecting reader count.
    CCriticalSection m_csReaderCount;
};

//_____________________________________________________________________________
//

template <typename T, class C = std::queue<T> >
class CJobQueue
{
public:
	CJobQueue(int nMaxJobs = -1)
		: m_nMaxJobs(nMaxJobs)
	{
		if (m_nMaxJobs != -1)
			m_apJobSlots = std::auto_ptr<CSemaphore>(new CSemaphore(m_nMaxJobs));
	}

	bool AddJob(const T& t, DWORD dwTimeout = INFINITE)
	{
		if (m_apJobSlots.get())
			if (!m_apJobSlots->Lock(dwTimeout))
				return false;

		CScopedLock lock(m_csJobs);

		m_Jobs.push(t);

		m_eventJobs.Set();

		return true;
	}

	bool RemoveJob(T& t, DWORD dwTimeout = INFINITE)
	{
		if (!m_eventJobs.Wait(dwTimeout))
			return false;

		CScopedLock lock(m_csJobs);

		t = m_Jobs.front();

		m_Jobs.pop();

		if (!m_Jobs.size())
			m_eventJobs.Reset();

		if (m_apJobSlots.get())
			m_apJobSlots->Unlock();

		return true;
	}

	CManualResetEvent& GetJobsEvent()
	{
		return m_eventJobs;
	}

	int GetJobCount()
	{
		CScopedLock lock(m_csJobs);
		return static_cast<int>(m_Jobs.size());
	}

protected:
	CCriticalSection			m_csJobs;
	CManualResetEvent			m_eventJobs;
	std::auto_ptr<CSemaphore>	m_apJobSlots;
	C							m_Jobs;
	int							m_nMaxJobs;
};

//_____________________________________________________________________________
//

class CThreadPool;

class EPOCH_EXPORT CThread : public CReferenceCounted<>
{
	friend class CThreadPool;
public:
	struct State
	{
		enum Enum
		{
			None				= 0x00000000,

			Queued				= 0x00000001,
			Running				= 0x00000002,
			Suspending			= 0x00000004,
			Suspended			= 0x00000008,
			Resuming			= 0x00000010,
			Stopping			= 0x00000020,
			Stopped				= 0x00000040,

			All					= 0xffffffff
		};
	};

	typedef std::vector<State::Enum> StateArray;

	CThread();
	virtual ~CThread();

	void SetPriority(int nPriority);
	void SetUseCOM(bool bUseCOM, COINIT coInit = COINIT_MULTITHREADED);
	void SetStackSize(DWORD dwStackSize);	// In bytes
	
	HANDLE GetHandle() const { return m_hThread; }
	DWORD GetThreadID() const { return m_dwThreadID; }
	void SetThreadID(DWORD dwThreadID) { m_dwThreadID = dwThreadID; }

	virtual bool Start(DWORD dwTimeout = INFINITE);
	virtual void Stop();
	virtual void Suspend();
	virtual void Resume();

	bool Join(DWORD dwTimeout = INFINITE, bool bTerminateAfterTimeout = true);	// Wait until the thread reaches the STOPPED state

	bool IsAlive() const;
	bool Started() const;
	bool Stopped() const;
	bool Suspended() const;
	bool Queued() const;

	State::Enum GetCurrentState() const;
	void RegisterStateEvent(State::Enum state, CEvent& event);

	DWORD GetLastExitCode() const { return m_dwLastExitCode; }

protected:
	static DWORD WINAPI ThreadProc(LPVOID pParameter);

	virtual void OnThreadStopping();
	virtual DWORD Run(CAutoResetEvent& eventStopping) = 0;

	void ChangeState(DWORD dwFromStates,
		State::Enum ToState,
		State::Enum stateEvent = State::None,
		CEvent* pEvent = NULL,
		State::Enum* pPreviousState = NULL);

private:
	typedef std::map<State::Enum, HandleList> StateChangeEvents;

	void CreateStopEvent();

	mutable CCriticalSection	m_StateCS;
	State::Enum					m_State;
	HANDLE						m_hThread;
	int							m_nPriority;
	bool						m_bUseCom;
	COINIT						m_CoInit;
	StateChangeEvents			m_StateChangeEvents;
	DWORD						m_dwLastExitCode;
	DWORD						m_dwStackSize;
	DWORD						m_dwThreadID;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CWaitThread : public CThread
{
	friend class CThreadPool;
public:
	CWaitThread(HANDLE hWaitObject, DWORD dwTimeout = INFINITE, ULONG ulFlags = WT_EXECUTEDEFAULT)
		: m_hWaitObject(hWaitObject)
		, m_dwTimeout(dwTimeout)
		, m_ulFlags(ulFlags)
		, m_hRegistration(NULL)
		, m_bTimedOut(false)
	{
	}

protected:
	/* ??? May need to uncomment this
	virtual void OnThreadStopping()
	{
		ChangeState(State::Stopping, State::Queued);
	}
	*/

	HANDLE	m_hWaitObject;
	DWORD	m_dwTimeout;
	ULONG	m_ulFlags;
	bool	m_bTimedOut;

private:
	static VOID CALLBACK SysWaitCallback(PVOID lpParameter, BOOLEAN bTimerOrWaitFired);

	CCriticalSection	m_HandleCS;
	HANDLE				m_hRegistration;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CTimerThread : public CThread
{
	friend class CThreadPool;
public:
	CTimerThread(DWORD dwPeriod, DWORD dwDueTime = 0, ULONG ulFlags = WT_EXECUTEDEFAULT)
		: m_dwTimeout(dwPeriod)
		, m_dwDueTime(dwDueTime)
		, m_ulFlags(ulFlags)
		, m_hRegistration(NULL)
	{
	}

protected:
	virtual void OnThreadStopping();

	DWORD	m_dwTimeout;
	DWORD	m_dwDueTime;
	bool	m_bTimedOut;
	ULONG	m_ulFlags;

private:
	static VOID CALLBACK SysTimerCallback(PVOID lpParameter, BOOLEAN bTimerOrWaitFired);

	CCriticalSection	m_HandleCS;
	HANDLE				m_hRegistration;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CIoThread : public CThread
{
	friend class CThreadPool;
public:
	struct COverlapped
	{
		COverlapped(CIoThread* pThread)
		{
			memset(&m_Overlapped, 0, sizeof(m_Overlapped));
			m_pThread = pThread;
		}

		OVERLAPPED* GetPointer()
		{
			return &m_Overlapped;
		}

		OVERLAPPED	m_Overlapped;
		CIoThread*	m_pThread;		// Since CIoThread owns this, no need to use counted pointers
	};

	CIoThread()
		: m_dwErrorCode(0)
		, m_dwNumberOfBytesTransfered(0)
	{
	}

	virtual HANDLE GetIoObject() = 0;

protected:
	DWORD						m_dwErrorCode;
	DWORD						m_dwNumberOfBytesTransfered;
	std::auto_ptr<COverlapped>	m_apOverlapped;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CThreadPool
{
public:
	typedef FastDelegate< void ( DWORD, DWORD ) >	IoCallback;
	typedef FastDelegate< void ( bool ) >			WaitCallback;
	typedef FastDelegate< void () >					TimerCallback;

	static void Queue(CThread* pThread, ULONG ulFlags = WT_EXECUTEDEFAULT);

	static void Queue(CWaitThread* pThread);
	static void Queue(CTimerThread* pThread);
	static void Queue(CIoThread* pThread);	// Must use CIoThread::COverlapped object when invoking asynchronous APIs

	static counted_ptr<CWaitThread> Queue(HANDLE hWaitObject, WaitCallback waitCallback, DWORD dwTimeout = INFINITE, ULONG ulFlags = WT_EXECUTEDEFAULT);
	static counted_ptr<CTimerThread> Queue(DWORD dwPeriod, TimerCallback timerCallback, DWORD dwDueTime = 0, ULONG ulFlags = WT_EXECUTEDEFAULT);
	static counted_ptr<CIoThread> Queue(HANDLE hIoObject, IoCallback ioCallback);

	static void Dequeue(CWaitThread* pThread);
	static void Dequeue(CTimerThread* pThread);
	static void Dequeue(CIoThread* pThread);

	static int GetThreadCount()
	{
		Threading::CScopedLock lock(s_csThreads);
		return static_cast<int>(s_Threads.size());
	}

	static void RegisterThread(CThread* pThread)
	{
		Threading::CScopedLock lock(s_csThreads);
		s_Threads.insert(pThread);
	}

	static void UnregisterThread(CThread* pThread)
	{
		Threading::CScopedLock lock(s_csThreads);
		s_Threads.erase(pThread);
	}

protected:
	class CDelegateIoThread : public CIoThread
	{
	public:
		CDelegateIoThread(IoCallback ioCallback,
						  HANDLE hIoObject)
			: m_IoCallback(ioCallback)
			, m_hIoObject(hIoObject)
		{}

		virtual HANDLE GetIoObject() { return m_hIoObject; }

	protected:
		virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
		{
			m_IoCallback(m_dwErrorCode, m_dwNumberOfBytesTransfered);
			return 0;
		}

		IoCallback	m_IoCallback;
		HANDLE		m_hIoObject;
	};

	class CDelegateWaitThread : public CWaitThread
	{
	public:
		CDelegateWaitThread(WaitCallback waitCallback,
							HANDLE hWaitObject,
							DWORD dwTimeout = INFINITE,
							ULONG ulFlags = WT_EXECUTEDEFAULT)
			: CWaitThread(hWaitObject, dwTimeout, ulFlags)
			, m_WaitCallback(waitCallback)
		{}

	protected:
		virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
		{
			m_WaitCallback(m_bTimedOut);
			return 0;
		}

		WaitCallback m_WaitCallback;
	};

	class CDelegateTimerThread : public CTimerThread
	{
	public:
		CDelegateTimerThread(TimerCallback timerCallback,
							 DWORD dwPeriod,
							 DWORD dwDueTime = 0,
							 ULONG ulFlags = WT_EXECUTEDEFAULT)
			: CTimerThread(dwPeriod, dwDueTime, ulFlags)
			, m_TimerCallback(timerCallback)
		{}

	protected:
		virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
		{
			m_TimerCallback();
			return 0;
		}

		TimerCallback	m_TimerCallback;
	};

	static CCriticalSection		s_csThreads;
	static std::set<CThread*>	s_Threads;

private:
	static HANDLE s_hTimerQueue;

	static HANDLE GetTimerQueue();
	
	static void CALLBACK IoCompletionRoutine(DWORD dwErrorCode, DWORD dwNumberOfBytesTransfered, LPOVERLAPPED lpOverlapped);
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CCoInitializeEx
{
public:
	CCoInitializeEx(COINIT coInit = COINIT_MULTITHREADED);

	~CCoInitializeEx()
	{
		if (m_bInitialized)
			::CoUninitialize();
	}

protected:
	bool m_bInitialized;
};

}	// namespace Threading
}	// namespace Epoch

#pragma warning( pop )