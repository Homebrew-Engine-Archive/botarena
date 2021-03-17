#pragma once

class CCard;
class CZone;
class CPlayer;
class CounterContainer;

class CORE_EXPORT Counter
{
public:
	Counter(LPCTSTR strFullName, int nInitialCount = 0);

	void SetContainer(const CounterContainer* pCounterContainer);

	int GetCount() const;
	CString GetFullName() const;
	CString GetName() const;
	TCHAR GetAbbreviation() const;
	bool IsPTCounter() const;

	const CounterContainer* GetContainer() const {return m_pCounterContainer;}

	void SetCount(int nCount);
	void IncreaseCount(int nCount = 1);
	void DecreaseCount(int nCount = 1);
	void SetStopped()   { m_pStopped = m_pStopped + 1; }
	void SetStart()   { m_pStopped = m_pStopped - 1; }
	void SetStoppedValue(int stopped) {m_pStopped = stopped;}
	//BOOL IsStopped()  { return m_pStopped>0; }
	const BOOL IsStopped() const { return m_pStopped>0; }

	CString ToString() const;

protected:
	void ChangePTCounter(int nCount);
		
	const CounterContainer* m_pCounterContainer;
	CString m_strFullName;
	CString m_strName;
	int_ m_nCount;
	TCHAR m_Abbreviation;
	Power m_nPowerDelta;
	Life m_nToughnessDelta;
	int_ m_pStopped;
};

class CORE_EXPORT CounterContainer
{
	friend class Counter;

public:
	CounterContainer(CCard* pCard);
	~CounterContainer();

	void AddCounter(std::auto_ptr<Counter>& apCounter);
	void ScheduleCounter(LPCTSTR strName, int nCount,		// change this counter's value
						 bool bReplace,						// true - replace the counter value; false - add/subtract the counter value
						 ZoneId fromZone, ZoneId toZone,	// when the associated card changes zone
						 bool bBefore = false);				// true - set the counter before the zone change; false - after the zone change

	Counter* GetCounter(LPCTSTR strName);
	CCard* GetCard()				{return m_pCard;}
	const CCard* GetCard()const		{return m_pCard;}

	ZoneId GetActiveZones()			{return m_ActiveZones;}

	void SetActiveZones(ZoneId pZones)	{m_ActiveZones = pZones;}

	const bool HasAnyCounters() const; 
	const bool CheckLimits(BOOL bCheckOnly) const;
	const Counter* GetCounter(LPCTSTR strName) const;
	int GetCount(LPCTSTR strName) const;
	int GetTotalCount() const;
	//const LPCTSTR GetCounterNameAt(int pos) const;
	//const int GetSize() const;
	
	template<class Fn>
	Fn ForEachCounter(Fn Func)		{return for_each(m_Counters.begin(),m_Counters.end(),Func);}
	void RemoveAll();
	void RemoveAllPTCounters();

	CString ToString() const;

protected:
	struct ScheduleEntry
	{
		CString strCounter;
		int nCount;
		bool bReplace;
		ZoneId fromZone;
		ZoneId toZone;
		bool bBefore;
	};

	void WhenCardMoved(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CCard* m_pCard;
	CWhenSelfMoved m_WhenMoved;

	std::list<Counter*> m_Counters;
	std::list<ScheduleEntry> m_Scheduled;

	ZoneId m_ActiveZones;
};