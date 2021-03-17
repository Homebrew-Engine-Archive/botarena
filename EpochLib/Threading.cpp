#include "stdafx.h"
#include <Epoch.h>
#include <Threading.h>

namespace Epoch {
namespace Threading {

CScopedLock::CScopedLock(ILock& lockObject, bool bLock, DWORD dwTimeout)
	: m_LockObject(lockObject)
	, m_bLocked(false)
{
	if (bLock)
		if (!Lock(dwTimeout))
			throw Exception::CTimeoutException(dwTimeout, __FILE__, __FUNCTION__, __LINE__);
}

CScopedLock::CScopedLock(ILock& lockObject, DWORD dwTimeout)
	: m_LockObject(lockObject)
	, m_bLocked(false)
{
	if (!Lock(dwTimeout))
		throw Exception::CTimeoutException(dwTimeout, __FILE__, __FUNCTION__, __LINE__);
}

bool CScopedLock::Lock(DWORD dwTimeout)
{
	if (m_bLocked)
		return true;

	if (!m_LockObject.Lock(dwTimeout))
		return false;

	m_bLocked = true;

	return true;
}

//_____________________________________________________________________________
//

CEvent::CEvent(bool bManualReset, bool bInitialState, LPCTSTR lpszName, LPSECURITY_ATTRIBUTES lpsaAttribute)
{
	m_hEvent = CreateEvent(lpsaAttribute, bManualReset, bInitialState, lpszName);
	if (!m_hEvent)
		THROW_LAST_WIN32();
}

void CEvent::Set()
{
	if (!m_hEvent)
		THROW_WIN32(ERROR_INVALID_HANDLE);
	SetEvent(m_hEvent);
}

void CEvent::Reset()
{
	if (!m_hEvent)
		THROW_WIN32(ERROR_INVALID_HANDLE);
	ResetEvent(m_hEvent);
}

//_____________________________________________________________________________
//
CReadWriteLock::CReadWriteLock(void)
 : m_nReaderCount(0)
 , m_hWriterEvent(true)
 , m_hNoReadersEvent(true)
{
    // Create writer event with manual reset and default signaled state.
    // 
    // State:
    //          Signaled     = Writer has currently not access.
    //          Non-signaled = Writer has currently access, block readers.
    //
    
    // Create no readers event with manual reset and default signaled state.
    // 
    // State:
    //          Signaled     = No readers have currently access.
    //          Non-signaled = Some readers have currently access, block writer.
    //
}

CReadWriteLock::~CReadWriteLock()
{
}

void CReadWriteLock::LockReader()
{
    while(true)
    {
        // Wait for Writer event to be signaled.
        m_hWriterEvent.Wait();
        // Increment number of readers.
        IncrementReaderCount();
        // If writer is become non-signaled fall back (double locking).
        if(!m_hWriterEvent.Wait(0))
        {
            // Decrement number of readers.
            DecrementReaderCount();
        }
        else
        {
            // Breakout.
            break;
        }
    }
}

void CReadWriteLock::UnlockReader()
{
    // Decrement number of readers.
    DecrementReaderCount();
}

void CReadWriteLock::LockWriter()
{
    // Enter critical section (prevent more than one writer).
	CScopedLock writerLock(m_csLockWriter);

    // Wait for current writer.
    m_hWriterEvent.Wait();
    // Set writer to non-signaled.
	m_hWriterEvent.Reset();
    // Wait for current readers to finish.
    m_hNoReadersEvent.Wait();
}

void CReadWriteLock::UnlockWriter()
{
    // Set writer event to signaled.
    m_hWriterEvent.Set();
}

void CReadWriteLock::IncrementReaderCount()
{
    // Enter critical section.
	CScopedLock readerLock(m_csReaderCount);

	// Increase reader count.
    m_nReaderCount++;
    // Reset the no readers event.
    m_hNoReadersEvent.Reset();
}

void CReadWriteLock::DecrementReaderCount()
{
    // Enter critical section.
	CScopedLock readerLock(m_csReaderCount);

	// Decrease reader count.
	--m_nReaderCount;
    // Are all readers out?
    if(m_nReaderCount <= 0)
    {
        // Set the no readers event.
        m_hNoReadersEvent.Set();
    }
}

//_____________________________________________________________________________
//

DWORD WINAPI CThread::ThreadProc(LPVOID pParameter)
{
	Exception::CException::Initialize();		// Setup structured exception translations and out-of-memory hooks

	counted_ptr<CThread> cpThis;
	cpThis.Attach(reinterpret_cast<CThread*>(pParameter));
	if (!cpThis.GetPointer())
		THROW_WIN32(ERROR_INVALID_PARAMETER);

	std::auto_ptr<CCoInitializeEx> apComInit;

	try
	{
		HANDLE hProcess = GetCurrentProcess();

		// Get handle from pseudo handle if this thread is launched from the system thread pool
		if (!cpThis->m_hThread &&
			!DuplicateHandle(hProcess, GetCurrentThread(), hProcess, &(cpThis->m_hThread), 0, TRUE, DUPLICATE_SAME_ACCESS))
			THROW_LAST_WIN32();
		
		SetThreadPriority(cpThis->m_hThread, cpThis->m_nPriority);

		if (cpThis->m_bUseCom)
			apComInit = std::auto_ptr<CCoInitializeEx>(new CCoInitializeEx(cpThis->m_CoInit));

		CAutoResetEvent eventStopping;
		cpThis->ChangeState(State::Queued, State::Running, State::Stopping, &eventStopping);

		LOG_DEBUG(_T("Thread %08x running."), cpThis->m_hThread);

		cpThis->m_dwLastExitCode = cpThis->Run(eventStopping);
	}
	catch(Exception::CException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		LOG_CAUGHT(_T("Unhandled exception caught. Re-throwing..."));
		throw;
	}
	catch(...)
	{
		LOG_CAUGHT(_T("Unhandled unknown exception caught. Re-throwing..."));
		throw;
	}

	try
	{
		cpThis->ChangeState(State::All & ~State::Stopped, State::Stopping);	// State can be Stopping if Stop() is called, it can never be stopped though

		cpThis->OnThreadStopping();		// If not overriden, just change state from Stopping to Stopped

		LOG_DEBUG(_T("Thread %08x stopped with exit code %08x."), cpThis->m_hThread, cpThis->m_dwLastExitCode);

		if (cpThis->m_hThread)
		{
			CloseHandle(cpThis->m_hThread);
			cpThis->m_hThread = NULL;
		}
	}
	catch(Exception::CThreadStateException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
	}

	return cpThis->m_dwLastExitCode;
}

CThread::CThread()
	: m_hThread(NULL)
	, m_nPriority(THREAD_PRIORITY_NORMAL)
	, m_State(State::Stopped)
	, m_bUseCom(false)
	, m_dwLastExitCode(0)
	, m_dwStackSize(0)
	, m_CoInit(COINIT_MULTITHREADED)
	, m_dwThreadID(0)
{
	CThreadPool::RegisterThread(this);
}

CThread::~CThread()
{
	try
	{
		Stop();
		Join();
	}
	catch(...)
	{}

	CThreadPool::UnregisterThread(this);
}

void CThread::SetPriority(int nPriority)
{
	m_nPriority = nPriority;

	if (m_hThread)
		if (!SetThreadPriority(m_hThread, m_nPriority))
			THROW_LAST_WIN32();
}

void CThread::SetUseCOM(bool bUseCOM, COINIT coInit)
{
	m_bUseCom = bUseCOM;
	m_CoInit = coInit;
}

void CThread::SetStackSize(DWORD dwStackSize)	// In bytes
{
	m_dwStackSize = dwStackSize;
}

bool CThread::Start(DWORD dwTimeout)
{
	ChangeState(State::Stopped, State::Queued);

	CAutoResetEvent event;
	RegisterStateEvent(State::Running, event);

	AddRef();

	m_dwThreadID = 0;
	m_hThread = CreateThread(NULL, m_dwStackSize, ThreadProc,
							reinterpret_cast<LPVOID>(this),
							0, &m_dwThreadID);

	if (!m_hThread)
	{
		Release();
		ChangeState(State::Queued, State::Stopped);
		THROW_LAST_WIN32();
	}

	return event.Wait(dwTimeout);
}

void CThread::Stop()
{
	try
	{
		ChangeState(State::Running, State::Stopping);
	}
	catch(Exception::CThreadStateException& exception)
	{
		if ((exception.GetState() != State::Stopping) && (exception.GetState() != State::Stopped))
			throw;
	}
}

/* Changed to let Join() to wait
bool CThread::Stop(DWORD dwTimeout)
{
	HANDLE hThread = m_hThread;

	try
	{
		ChangeState(State::Running, State::Stopping);
	}
	catch(Exception::CThreadStateException& exception)
	{
		if ((exception.GetState() != State::Stopping) && (exception.GetState() != State::Stopped))
			throw;

		if (exception.GetState() == State::Stopped)
			return true;
	}

	if (WaitForSingleObject(hThread, dwTimeout) == WAIT_TIMEOUT)
	{
		TerminateThread(hThread, 0);
		ChangeState(State::All, State::Stopped);
		return false;
	}
	else
		ChangeState(State::Stopping, State::Stopped);

	return true;
}
*/

void CThread::Suspend()
{
	ChangeState(State::Running, State::Suspending);

	if (!m_hThread)
	{
		ChangeState(State::Suspending, State::Running);
		THROW_WIN32(ERROR_INVALID_HANDLE);
	}

	if (SuspendThread(m_hThread) == -1)
	{
		ChangeState(State::Suspending, State::Running);
		THROW_LAST_WIN32();
	}

	ChangeState(State::Suspending, State::Suspended);
}

void CThread::Resume()
{
	ChangeState(State::Suspended, State::Resuming);

	if (!m_hThread)
	{
		ChangeState(State::Suspending, State::Running);
		THROW_WIN32(ERROR_INVALID_HANDLE);
	}

	if (ResumeThread(m_hThread) == -1)
	{
		ChangeState(State::Resuming, State::Suspended);
		THROW_LAST_WIN32();
	}

	ChangeState(State::Resuming, State::Running);
}

bool CThread::Started() const
{
	return GetCurrentState() == State::Running;
}

bool CThread::Stopped() const
{
	return GetCurrentState() == State::Stopped;
}

bool CThread::Suspended() const
{
	return GetCurrentState() == State::Suspended;
}

bool CThread::Queued() const
{
	return GetCurrentState() == State::Queued;
}

bool CThread::Join(DWORD dwTimeout, bool bTerminateAfterTimeout)
{
	HANDLE hThread = m_hThread;
	if (!hThread)
		return true;

	if (WaitForSingleObject(hThread, dwTimeout) == WAIT_OBJECT_0)
		return true;

	if (!bTerminateAfterTimeout)
		return false;

	LOG_DEBUG(_T("Terminating thread %08x..."), hThread);

	TerminateThread(hThread, 0);
	ChangeState(State::All, State::Stopped);

	if (m_hThread)
	{
		CloseHandle(m_hThread);
		m_hThread = NULL;
	}

	return true;
}

CThread::State::Enum CThread::GetCurrentState() const
{
	CScopedLock lock(m_StateCS);
	return m_State;
}

void CThread::ChangeState(DWORD dwFromStates,
						  State::Enum ToState,
						  State::Enum stateEvent,
						  CEvent* pEvent,
						  State::Enum* pPreviousState)
{
	CScopedLock lock(m_StateCS);

	if (!((DWORD)m_State & dwFromStates))
		throw Exception::CThreadStateException(m_State, static_cast<State::Enum>(dwFromStates));

	if (pPreviousState)
		*pPreviousState = m_State;

	m_State = ToState;

	if ((stateEvent != State::None) && pEvent)
		RegisterStateEvent(stateEvent, *pEvent);

	StateChangeEvents::iterator it = m_StateChangeEvents.find(m_State);
	if (it != m_StateChangeEvents.end())	
	{
		HandleList& handleList = it->second;
		for (HandleList::iterator it2 = handleList.begin(); it2 != handleList.end(); ++it2)
			SetEvent(*it2);

		handleList.clear();
	}
}

void CThread::RegisterStateEvent(State::Enum state, CEvent& event)
{
	CScopedLock lock(m_StateCS);

	if (m_State == state)
	{
		event.Set();
		return;
	}

	event.Reset();

	StateChangeEvents::iterator it = m_StateChangeEvents.find(state);
	if (it != m_StateChangeEvents.end())
	{
		it->second.push_back(event.GetHandle());
		return;
	}

	HandleList handleList;
	handleList.push_back(event.GetHandle());

	m_StateChangeEvents[state] = handleList;
}

bool CThread::IsAlive() const
{
	return WaitForSingleObject(m_hThread, 0) == WAIT_TIMEOUT;
}

void CThread::OnThreadStopping()
{
	ChangeState(State::Stopping, State::Stopped);
}

//_____________________________________________________________________________
//
HANDLE CThreadPool::s_hTimerQueue = NULL;
CCriticalSection CThreadPool::s_csThreads;
std::set<CThread*> CThreadPool::s_Threads;

HANDLE CThreadPool::GetTimerQueue()
{
	if (!s_hTimerQueue)
	{
		s_hTimerQueue = CreateTimerQueue();
		if (!s_hTimerQueue)
			THROW_LAST_WIN32();
	}

	return s_hTimerQueue;
}

void CThreadPool::Queue(CThread* pThread, ULONG ulFlags)
{
	pThread->ChangeState(CThread::State::Stopped, CThread::State::Queued);
	pThread->AddRef();

	if (!QueueUserWorkItem(CThread::ThreadProc, pThread, ulFlags))
	{
		pThread->Release();
		pThread->ChangeState(CThread::State::Queued, CThread::State::Stopped);
		THROW_LAST_WIN32();
	}
}

void CThreadPool::Queue(CWaitThread* pThread)
{
	CScopedLock lock(pThread->m_HandleCS);

	if (pThread->m_hRegistration)
		THROW_WIN32(ERROR_INVALID_HANDLE);

	if (!pThread->m_hWaitObject)
		THROW_HR(E_INVALIDARG);

	pThread->ChangeState(CThread::State::Stopped, CThread::State::Queued);
	pThread->AddRef();

	if (!RegisterWaitForSingleObject(
		&(pThread->m_hRegistration),
		pThread->m_hWaitObject,
		CWaitThread::SysWaitCallback,
		pThread,
		pThread->m_dwTimeout,
		pThread->m_ulFlags | WT_EXECUTEONLYONCE))
	{
		pThread->m_hRegistration = NULL;
		pThread->Release();
		pThread->ChangeState(CThread::State::Queued, CThread::State::Stopped);
		THROW_LAST_WIN32();
	}
}

counted_ptr<CWaitThread> CThreadPool::Queue(HANDLE hWaitObject, WaitCallback waitCallback, DWORD dwTimeout, ULONG ulFlags)
{
	counted_ptr<CWaitThread> cpThread = counted_ptr<CWaitThread>(new CDelegateWaitThread(waitCallback, hWaitObject, dwTimeout, ulFlags));
//	cpThread->SetAutoRelease(true);
	Queue(cpThread.GetPointer());
	return cpThread;
}

void CThreadPool::Queue(CTimerThread* pThread)
{
	CScopedLock lock(pThread->m_HandleCS);

	if (pThread->m_hRegistration)
		THROW_WIN32(ERROR_INVALID_HANDLE);

	pThread->ChangeState(CThread::State::Stopped, CThread::State::Queued);
	pThread->AddRef();

	if (!CreateTimerQueueTimer(
		&(pThread->m_hRegistration),
		GetTimerQueue(),
		CTimerThread::SysTimerCallback,
		pThread,
		pThread->m_dwDueTime,
		pThread->m_dwTimeout,
		pThread->m_ulFlags))
	{
		pThread->m_hRegistration = NULL;
		pThread->Release();
		pThread->ChangeState(CThread::State::Queued, CThread::State::Stopped);
		THROW_LAST_WIN32();
	}
}

counted_ptr<CTimerThread> CThreadPool::Queue(DWORD dwPeriod, TimerCallback timerCallback, DWORD dwDueTime, ULONG ulFlags)
{
	counted_ptr<CTimerThread> cpThread = counted_ptr<CTimerThread>(new CDelegateTimerThread(timerCallback, dwPeriod, dwDueTime, ulFlags));
//	cpThread->SetAutoRelease(true);
	Queue(cpThread.GetPointer());
	return cpThread;
}

void CThreadPool::Dequeue(CWaitThread* pThread)
{
	CScopedLock lock(pThread->m_HandleCS);

	if (!pThread->m_hRegistration)
		return;					// The handle will be reset after the callback
		//THROW_WIN32(ERROR_INVALID_HANDLE);

	if (!UnregisterWaitEx(pThread->m_hRegistration,
		INVALID_HANDLE_VALUE))	// INVALID_HANDLE_VALUE - Block until pending callback is finished
		THROW_LAST_WIN32();

	pThread->m_hRegistration = NULL;

	try
	{
		pThread->ChangeState(CThread::State::Queued, CThread::State::Stopped);
		pThread->Release();	// Compensate for increased reference count originally planned for ThreadProc
	}
	catch (Exception::CThreadStateException& exception)
	{
		if (exception.GetState() != CThread::State::Stopped)
			throw;
	}
}

void CThreadPool::Dequeue(CTimerThread* pThread)
{
	CScopedLock lock(pThread->m_HandleCS);

	if (!pThread->m_hRegistration)
		return;					// The handle will be reset after the callback
		//THROW_WIN32(ERROR_INVALID_HANDLE);

	if (!DeleteTimerQueueTimer(GetTimerQueue(),
		pThread->m_hRegistration,
		INVALID_HANDLE_VALUE))	// INVALID_HANDLE_VALUE - Block until pending callback is finished
		THROW_LAST_WIN32();

	pThread->m_hRegistration = NULL;

	try
	{
		pThread->ChangeState(CThread::State::Queued, CThread::State::Stopped);
		pThread->Release();	// Compensate for increased reference count originally planned for ThreadProc
	}
	catch (Exception::CThreadStateException& exception)
	{
		if (exception.GetState() != CThread::State::Stopped)
			throw;
	}
}

void CThreadPool::Dequeue(CIoThread* pThread)
{
	CancelIo(pThread->GetIoObject());
}

void CThreadPool::Queue(CIoThread* pThread)
{
	static std::set<HANDLE> s_CompletionPortHandles;
		
	pThread->ChangeState(CThread::State::Stopped, CThread::State::Queued);

	HANDLE hIoObject = pThread->GetIoObject();

	std::set<HANDLE>::iterator it = s_CompletionPortHandles.find(hIoObject);
	if (it == s_CompletionPortHandles.end())
	{
		pThread->AddRef();
		if (!BindIoCompletionCallback(hIoObject, IoCompletionRoutine, 0))
		{
			pThread->Release();
			THROW_LAST_WIN32();
		}
		else
			s_CompletionPortHandles.insert(hIoObject);
	}
	else
		pThread->AddRef();
}

counted_ptr<CIoThread> CThreadPool::Queue(HANDLE hIoObject, IoCallback ioCallback)
{
	counted_ptr<CIoThread> cpThread = counted_ptr<CIoThread>(new CDelegateIoThread(ioCallback, hIoObject));
//	cpThread->SetAutoRelease(true);
	Queue(cpThread.GetPointer());
	return cpThread;
}

void CALLBACK CThreadPool::IoCompletionRoutine(DWORD dwErrorCode, DWORD dwNumberOfBytesTransfered, LPOVERLAPPED lpOverlapped)
{
	if (!lpOverlapped)
		THROW_HR(E_INVALIDARG);

	CIoThread::COverlapped* pOverlapped = CONTAINING_RECORD(lpOverlapped, CIoThread::COverlapped, m_Overlapped);
	if (!pOverlapped || !pOverlapped->m_pThread)
		THROW_HR(E_INVALIDARG);

	// IO threads are different because a reference addition is implied when an IO operation is queues. 
	// The added reference will be released when an IO is completed or when the IO is canceled.
	// At this point there should be at least one reference count on this thread object. This reference
	// is added in CThreadPool::Queue(CIoThread*).
	// This reference is then released later inside the ThreadProc.
	counted_ptr<CIoThread> cpThread = counted_ptr<CIoThread>(pOverlapped->m_pThread);

	cpThread->m_dwErrorCode = dwErrorCode;
	cpThread->m_dwNumberOfBytesTransfered = dwNumberOfBytesTransfered;
	cpThread->m_apOverlapped = std::auto_ptr<CIoThread::COverlapped>(pOverlapped);
	
	CThread::ThreadProc(cpThread.GetPointer());
}

//_____________________________________________________________________________
//

VOID CALLBACK CWaitThread::SysWaitCallback(PVOID lpParameter, BOOLEAN bTimerOrWaitFired)
{
	CWaitThread* pThis = reinterpret_cast<CWaitThread*>(lpParameter);
	if (!pThis)
		THROW_WIN32(ERROR_INVALID_PARAMETER);

	bool bRun = false;

	{
		CScopedLock lock(pThis->m_HandleCS);

		if (pThis->m_hRegistration)
		{
			pThis->m_hRegistration = NULL;
			pThis->m_bTimedOut = bTimerOrWaitFired ? true : false;
			bRun = true;
		}
	}

	if (bRun)
		CThread::ThreadProc(lpParameter);
}

//_____________________________________________________________________________
//

void CTimerThread::OnThreadStopping()
{
	if (!m_dwTimeout)
	{
		__super::OnThreadStopping();
		return;
	}

	try
	{
		ChangeState(State::Stopping, State::Queued);
		AddRef();
	}
	catch (Exception::CThreadStateException& exception)
	{
		if (exception.GetState() != CThread::State::Stopped)
			throw;
	}
}

VOID CALLBACK CTimerThread::SysTimerCallback(PVOID lpParameter, BOOLEAN bTimerOrWaitFired)
{
	CTimerThread* pThis = reinterpret_cast<CTimerThread*>(lpParameter);
	if (!pThis)
		THROW_WIN32(ERROR_INVALID_PARAMETER);

	bool bRun = false;

	{
		CScopedLock lock(pThis->m_HandleCS);

		if (pThis->m_hRegistration)
		{
			if (!pThis->m_dwTimeout)	// Remove registration handle if this is a one time callback
				pThis->m_hRegistration = NULL;
			bRun = true;
		}
	}

	if (bRun)
		CThread::ThreadProc(lpParameter);	
}

//_____________________________________________________________________________
//

CCoInitializeEx::CCoInitializeEx(COINIT coInit)
	: m_bInitialized(false)
{
	HRESULT hr = ::CoInitializeEx(0, coInit);
	if (FAILED(hr))
		throw Exception::CRecoverableException(hr, __FILE__, __FUNCTION__, __LINE__);
	m_bInitialized = true;
}

}	// namespace Threading
}	// namespace Epoch