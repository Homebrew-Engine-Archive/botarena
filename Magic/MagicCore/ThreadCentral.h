#pragma once

typedef int (*JOBFUNC)(PVOID, int);

struct JobDescription
{
	JobDescription()
		: jobFunc(NULL)
		, nPly(-1)
		, pObject(NULL)
	{}

	JOBFUNC jobFunc;

	PVOID pObject;
	int nPly;
};

typedef int JobContext;

struct JobResult
{
	JobResult()
		: bSet(false)
		, jobContext(-1)
		, nResult(-1)
	{}

	bool bSet;
	JobContext jobContext;
	int nResult;
};

class CORE_EXPORT CJobCenter
{
	DECLARE_SINGLETON(CJobCenter);

public:
	// Setup

	int GetWorkerThreadCount() const { return m_WorkerThreads.size(); }
	void AddWorkerThread();
	//CReadWriteLock& GetLock() const { return m_Lock; }
	Epoch::Threading::CCriticalSection& GetLock() const { return m_Lock; }

	// Common

	void ReportAsPrimaryWorker();
	void RemoveAsPrimaryWorker();
	bool IsWorker() const { return m_WorkerThreadIDs.count(GetCurrentThreadId()) > 0; }

	struct ScopedPrimaryWorker
	{
		ScopedPrimaryWorker()
		{
			CJobCenter::GetInstance()->ReportAsPrimaryWorker();
		}

		~ScopedPrimaryWorker()
		{
			CJobCenter::GetInstance()->RemoveAsPrimaryWorker();
		}
	};

	inline int GetMyWorkerID() const 
	{ 
		int nWorkerID = (int)TlsGetValue(m_dwTLSIndex); 
		ATLASSERT(nWorkerID || GetLastError() == ERROR_SUCCESS);
		return nWorkerID;
	}

	// For workers

	int GetContractorID(int nWorkerID) const;
	int GetJobNumber(int nWorkerID) const;

	// For contractors

	int ReserveWorker();
	void DispatchJob(int nWorkerID, const JobDescription& job, JobContext jobContext);
	bool GetNextResult(bool bWait, JobResult& jobResult);
	void AbandonDispatchedJobs();

	const std::vector<int>& GetWorkers(int nContractorID) const;
	int GetLastIssuedContractNumber(int nContractorID) const;

protected:
	struct JobResultEvent
	{
		JobResult jobResult;
		Epoch::Threading::CManualResetEvent finishEvent;
		int nWorkerID;
	};

	class CWorkerThread : public Epoch::Threading::CThread
	{
	public:
		CWorkerThread(int nWorkerID, CJobCenter* pJobCenter)
			: m_nWorkerID(nWorkerID)
			, m_nContractorID(-1)
			, m_pResult(NULL)
			, m_nJobNumber(0)
			, m_nLastIssuedContractNumber(0)
			, m_pJobCenter(pJobCenter)
			, m_dwTLSIndex(pJobCenter->m_dwTLSIndex)
		{}

		~CWorkerThread()
		{
			ATLASSERT(!m_DispatchedJobs.size());
		}

		int GetWorkerID() const { return m_nWorkerID; }

		// For workers

		void SetJob(const JobDescription& job, JobResultEvent* pResult);
		void AbandonJob() { ATLASSERT(GetThreadID() != GetCurrentThreadId()); m_AbandonJobEvent.Set(); }
		int GetJobNumber() const { return m_nJobNumber; }
		void SetContractorID(int nContractorID) { m_nContractorID = nContractorID; }
		int GetContractorID() const { return m_nContractorID; }

		bool IsAvailable() const { return m_nContractorID == -1; }

		// For contractors

		void SetLastIssuedContractNumber(int nContractNumber) { m_nLastIssuedContractNumber = nContractNumber; }
		int GetLastIssuedContractNumber() const { return m_nLastIssuedContractNumber; }

		void AddWaitForResult(int nWorkerID, std::auto_ptr<JobResultEvent>& apResult) 
		{ 
			ATLASSERT(GetThreadID() == GetCurrentThreadId()); 
			m_DispatchedJobs.push_back(apResult.release());
			m_Workers.push_back(nWorkerID);
		}

		void RemoveWorker(int nWorkerID)
		{
			for (std::vector<int>::iterator i = m_Workers.begin(); i != m_Workers.end(); ++i)
				if (*i == nWorkerID)
				{
					m_Workers.erase(i);
					return;
				}

			ATLASSERT(false);
		}

		const std::vector<int>& GetWorkers() const { return m_Workers; }

		bool GetNextResult(bool bWait, JobResult& jobResult);
		void WaitForAllResults();

	protected:
		virtual DWORD Run(Epoch::Threading::CAutoResetEvent& eventStopping);
		void DoWork(int nPreviousContractorID);

	private:
		int m_nWorkerID;
		int m_nContractorID;
		JobDescription m_Job;
		JobResultEvent* m_pResult;
		Epoch::Threading::CAutoResetEvent m_JobAvailableEvent;
		int m_nJobNumber;
		int m_nLastIssuedContractNumber;

		std::vector<JobResultEvent*> m_DispatchedJobs;
		std::vector<int> m_Workers;

		Epoch::Threading::CManualResetEvent m_AbandonJobEvent;

		CJobCenter* m_pJobCenter;

		DWORD m_dwTLSIndex;
	};

private:
	//mutable CReadWriteLock m_Lock;
	mutable Epoch::Threading::CCriticalSection m_Lock;

	std::vector<CWorkerThread*> m_WorkerThreads;	
	std::set<DWORD> m_WorkerThreadIDs;
	DWORD m_dwTLSIndex;

	int m_nNextContractNumber;

	SYSTEM_INFO m_SystemInfo;
};
