#include "stdafx.h"

#define new DEBUG_NEW

CJobCenter::CJobCenter()
	: m_nNextContractNumber(1)
	, m_dwTLSIndex(-1)
{
	m_dwTLSIndex = TlsAlloc();
	if (m_dwTLSIndex == TLS_OUT_OF_INDEXES) 
		throw GetLastError();

	GetSystemInfo(&m_SystemInfo);
}

CJobCenter::~CJobCenter()
{
	if (m_WorkerThreads.size())
		m_WorkerThreads[0]->Release();
}

void CJobCenter::ReportAsPrimaryWorker()
{
	ATLASSERT(!m_WorkerThreads.size());
	if (m_WorkerThreads.size())
		return;

	counted_ptr<CWorkerThread> cpThread(new CWorkerThread(0, this)); // dummy worker for the primary worker
	cpThread.AddRef();
	cpThread->SetThreadID(GetCurrentThreadId());
	m_WorkerThreads.push_back(cpThread.GetPointer());

	if (!TlsSetValue(m_dwTLSIndex, 0)) 
		throw GetLastError();

	cpThread->SetContractorID(0);

	m_WorkerThreadIDs.insert(GetCurrentThreadId());

	//SetThreadAffinityMask(GetCurrentThread(), 1);
	SetThreadIdealProcessor(GetCurrentThread(), 0);
}

void CJobCenter::RemoveAsPrimaryWorker()
{
	ATLASSERT(m_WorkerThreads.size() == 1);
	if (m_WorkerThreads.size() != 1)
		return;

	m_WorkerThreads[0]->Release();
	m_WorkerThreads.clear();
	m_WorkerThreadIDs.clear();

	if (!TlsSetValue(m_dwTLSIndex, (LPVOID)-1)) 
		throw GetLastError();
}

void CJobCenter::AddWorkerThread()
{
	int nID = m_WorkerThreads.size();

	counted_ptr<CWorkerThread> cpThread(new CWorkerThread(nID, this));
	m_WorkerThreads.push_back(cpThread.GetPointer());

	if (cpThread->Start())
	{
		//SetThreadAffinityMask(cpThread->GetHandle(), 1 << (nID % m_SystemInfo.dwNumberOfProcessors));
		SetThreadIdealProcessor(cpThread->GetHandle(), nID % m_SystemInfo.dwNumberOfProcessors);
	}
}

int CJobCenter::ReserveWorker()
{
	//CReadWriteLock::CScopedWriteLock lock(m_Lock);
	Epoch::Threading::CScopedLock lock(m_Lock);

	int nCount = m_WorkerThreads.size();
	for (int i = 0; i < nCount; ++i)
	{
		CWorkerThread* pWorker = m_WorkerThreads[i];
		if (pWorker->IsAvailable())
		{
			int nContractorID = GetMyWorkerID();
			ATLASSERT(nContractorID != i);
			
			pWorker->SetContractorID(nContractorID);
			m_WorkerThreads[nContractorID]->SetLastIssuedContractNumber(m_nNextContractNumber++);

			return pWorker->GetWorkerID();
		}
	}

	return -1;
}

void CJobCenter::DispatchJob(int nWorkerID, const JobDescription& job, JobContext jobContext)
{
	CWorkerThread* pWorker = m_WorkerThreads[nWorkerID];

	ATLASSERT(GetCurrentThreadId() == m_WorkerThreads[pWorker->GetContractorID()]->GetThreadID());

	std::auto_ptr<JobResultEvent> apResult(new JobResultEvent);
	apResult->jobResult.jobContext = jobContext;
	apResult->nWorkerID = nWorkerID;
	JobResultEvent* pResult = apResult.get();
	m_WorkerThreads[pWorker->GetContractorID()]->AddWaitForResult(nWorkerID, apResult);

	ATLASSERT(pWorker->GetContractorID() == GetMyWorkerID());
	pWorker->SetJob(job, pResult);
}

bool CJobCenter::GetNextResult(bool bWait, JobResult& jobResult)
{
	int nContractorID = GetMyWorkerID();

	ATLASSERT(GetCurrentThreadId() == m_WorkerThreads[nContractorID]->GetThreadID());

	return m_WorkerThreads[nContractorID]->GetNextResult(bWait, jobResult);
}

void CJobCenter::AbandonDispatchedJobs()
{
	int nContractorID = GetMyWorkerID();

	ATLASSERT(GetCurrentThreadId() == m_WorkerThreads[nContractorID]->GetThreadID());

	{
		//CReadWriteLock::CScopedReadLock lock(m_Lock);
		Epoch::Threading::CScopedLock lock(m_Lock);

		int nCount = m_WorkerThreads.size();
		for (int i = 0; i < nCount; ++i)
		{
			CWorkerThread* pWorker = m_WorkerThreads[i];
			if (pWorker->GetContractorID() == nContractorID)
				pWorker->AbandonJob();
		}
	}

	return m_WorkerThreads[nContractorID]->WaitForAllResults();	
}

int CJobCenter::GetContractorID(int nWorkerID) const
{
	return m_WorkerThreads[nWorkerID]->GetContractorID();
}

int CJobCenter::GetJobNumber(int nWorkerID) const
{
	return m_WorkerThreads[nWorkerID]->GetJobNumber();
}

const std::vector<int>& CJobCenter::GetWorkers(int nContractorID) const
{
	return m_WorkerThreads[nContractorID]->GetWorkers();
}

int CJobCenter::GetLastIssuedContractNumber(int nContractorID) const
{
	return m_WorkerThreads[nContractorID]->GetLastIssuedContractNumber();
}

void CJobCenter::CWorkerThread::SetJob(const JobDescription& job, JobResultEvent* pResult)
{ 
	ATLASSERT(m_nContractorID != -1 && m_nContractorID != m_nWorkerID);
	ATLASSERT(GetThreadID() != GetCurrentThreadId());

	m_Job = job;
	m_pResult = pResult;
	++m_nJobNumber;
	m_AbandonJobEvent.Reset();
	m_JobAvailableEvent.Set();
}

DWORD CJobCenter::CWorkerThread::Run(Epoch::Threading::CAutoResetEvent& eventStopping)
{
	ATLASSERT(GetThreadID() == GetCurrentThreadId());

	if (!TlsSetValue(m_dwTLSIndex, (PVOID)m_nWorkerID)) 
		throw GetLastError();

	{
		//CReadWriteLock::CScopedWriteLock lock(m_pJobCenter->m_Lock);
		Epoch::Threading::CScopedLock lock(m_pJobCenter->m_Lock);
		m_pJobCenter->m_WorkerThreadIDs.insert(GetCurrentThreadId());
	}

	HANDLE waits[] =
	{
		eventStopping.GetHandle(),
		m_JobAvailableEvent.GetHandle()
	};

	DWORD dwResult;
	while ((dwResult = WaitForMultipleObjects(ARRAY_SIZE(waits), waits, FALSE, INFINITE)) != WAIT_OBJECT_0)
	{
		DoWork(-1);
	}

	{
		//CReadWriteLock::CScopedWriteLock lock(m_pJobCenter->m_Lock);
		Epoch::Threading::CScopedLock lock(m_pJobCenter->m_Lock);
		m_pJobCenter->m_WorkerThreadIDs.erase(GetCurrentThreadId());
	}

	return 0;
}

void CJobCenter::CWorkerThread::DoWork(int nPreviousContractorID)
{
	m_pResult->jobResult.nResult = m_Job.jobFunc(m_Job.pObject, m_Job.nPly);
	m_pResult->jobResult.bSet = true;

	ATLTRACE(_T("Set: %p\n"), m_pResult->finishEvent.GetHandle());

	m_pResult->finishEvent.Set();
	m_pResult = NULL;
	m_AbandonJobEvent.Reset();
	{
		//CReadWriteLock::CScopedWriteLock lock(m_pJobCenter->m_Lock);
		Epoch::Threading::CScopedLock lock(m_pJobCenter->m_Lock);
		m_pJobCenter->m_WorkerThreads[m_nContractorID]->RemoveWorker(m_nWorkerID);
	}
	m_nContractorID = nPreviousContractorID;
}

bool CJobCenter::CWorkerThread::GetNextResult(bool bWait, JobResult& jobResult)
{
	ATLASSERT(GetThreadID() == GetCurrentThreadId());

	if (!m_DispatchedJobs.size())
		return false;

	for (size_t i = 0; i < m_DispatchedJobs.size(); ++i)
	{
		if (m_DispatchedJobs[i]->jobResult.bSet)
		{
			std::auto_ptr<JobResultEvent> apResult(m_DispatchedJobs[i]);
			m_DispatchedJobs.erase(m_DispatchedJobs.begin() + i);
			jobResult = apResult->jobResult;

			return true;
		}
	}

	if (!bWait)
		return false;

	DWORD dwCount = MIN(10, m_DispatchedJobs.size());

	HANDLE waitHandles[10];

	for (size_t i = 0; i < dwCount; ++i)
		waitHandles[i] = m_DispatchedJobs[i]->finishEvent.GetHandle();

	DWORD dwResult = WaitForMultipleObjects(dwCount, waitHandles, FALSE, INFINITE);
	
	int nJobIndex = dwResult - WAIT_OBJECT_0;
	std::auto_ptr<JobResultEvent> apResult(m_DispatchedJobs[nJobIndex]);
	m_DispatchedJobs.erase(m_DispatchedJobs.begin() + nJobIndex);
	jobResult = apResult->jobResult;

	return true;
}

/*
bool CJobCenter::CWorkerThread::GetNextResult(JobResult& jobResult)
{
	ATLASSERT(GetThreadID() == GetCurrentThreadId());

	if (!m_DispatchedJobs.size())
		return false;

	int nSavedContractorID;
	{
		Epoch::Threading::CScopedLock lock(m_pJobCenter->m_Lock);
		ATLASSERT(m_nContractorID >= 0);
		nSavedContractorID = m_nContractorID;
		m_nContractorID = -1;
	}

	HANDLE* waitHandles = new HANDLE[m_DispatchedJobs.size() + 1];
	waitHandles[0] = m_JobAvailableEvent.GetHandle();

	DWORD nCount = 1;
	for (std::vector<JobResultEvent*>::const_iterator i = m_DispatchedJobs.begin(); i != m_DispatchedJobs.end(); ++i)
		waitHandles[nCount++] = (*i)->finishEvent.GetHandle();

	DWORD dwResult;
	while ((dwResult = WaitForMultipleObjects(nCount, waitHandles, FALSE, INFINITE)) == WAIT_OBJECT_0)
	{
		DoWork(-1);

		delete[] waitHandles;

		waitHandles = new HANDLE[m_DispatchedJobs.size() + 1];
		waitHandles[0] = m_JobAvailableEvent.GetHandle();

		nCount = 1;
		for (std::vector<JobResultEvent*>::const_iterator i = m_DispatchedJobs.begin(); i != m_DispatchedJobs.end(); ++i)
			waitHandles[nCount++] = (*i)->finishEvent.GetHandle();
	}

	delete[] waitHandles;

	int nJobIndex = dwResult - WAIT_OBJECT_0 - 1;
	std::auto_ptr<JobResultEvent> apResult(m_DispatchedJobs[nJobIndex]);
	m_DispatchedJobs.erase(m_DispatchedJobs.begin() + nJobIndex);
	jobResult = apResult->jobResult;

	bool bDoWork = false;
	{
		Epoch::Threading::CScopedLock lock(m_pJobCenter->m_Lock);
		if (m_nContractorID == -1)
			m_nContractorID = nSavedContractorID; // no more idle job
		else
			bDoWork = true;
	}

	if (bDoWork)
	{
		m_JobAvailableEvent.Wait();
		DoWork(nSavedContractorID); // last idle job
	}

	return true;
}
*/

void CJobCenter::CWorkerThread::WaitForAllResults()
{
	ATLASSERT(GetThreadID() == GetCurrentThreadId());

	while (m_DispatchedJobs.size())
	{
		std::auto_ptr<JobResultEvent> apResult(m_DispatchedJobs[0]);
		apResult->finishEvent.Wait(INFINITE);
		m_DispatchedJobs.erase(m_DispatchedJobs.begin());
	}
}