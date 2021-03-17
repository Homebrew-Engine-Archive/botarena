#pragma once

class CStateSupport;

#ifdef THINK_HISTORY
//____________________________________________________________________________
//
class CGameState
{
public:
	CGameState() 
		: m_dwChecksum(0)
	{}

	~CGameState();

	std::list<CStateSupport*>& Variables() { return m_Variables; }
	StateStack& States() { return m_States; }
#ifdef _DEBUG
	void SetPath(LPCTSTR strPath) { m_strPath = strPath; }
	LPCTSTR GetPath() const { return m_strPath; }
#endif

	void UpdateChecksum();

	DWORD GetChecksum() const { return m_dwChecksum; }

	bool operator==(const CGameState& gameState) const;

	bool IsValid() const { return m_Variables.size() && m_States.GetCount(); }

protected:
	std::list<CStateSupport*> m_Variables;
	StateStack m_States;
	DWORD m_dwChecksum;
#ifdef _DEBUG
	CString m_strPath;
#endif
};
#endif

//____________________________________________________________________________
//
class CORE_EXPORT CStateManager
{
	DECLARE_SINGLETON_POOL(CStateManager, 2);

public:
	static CStateManager* GetInstance()
	{
		static CJobCenter* pJobCenter = CJobCenter::GetInstance();
		if (!pJobCenter->IsWorker())
			return NULL;
		return GetInstance(pJobCenter->GetMyWorkerID());
	}

	void Push();
	void Pop();
	void Peek();

	bool IsEmpty() const { return m_CheckPoints.size() == 0; }
 
	void Created(CStateSupport* pVariable);

	bool StateSaved(CStateSupport* pVariable) const;
	void RemoveSavedState(CStateSupport* pVariable, bool bPop = true);

	void SetModified(CStateSupport* pVariable);

	void ClearFreeList()
	{
		for (CheckPoints::const_iterator i = m_FreeList.begin(); i != m_FreeList.end(); ++i)
		{
			CheckedVariables* pVars = *i;

			ATLASSERT(!pVars->size());

			delete pVars;
		}

		m_FreeList.clear();
	}

#ifdef THINK_HISTORY
	void GetGameState(CGameState& gameState, bool bThinkHistory = false) const;
#endif

protected:
	typedef std::vector<CStateSupport*> CheckedVariables;	// using a list to maintain change order
	typedef std::vector<CheckedVariables*> CheckPoints;

	CheckPoints	m_CheckPoints;
	CheckPoints	m_FreeList;
	CheckedVariables m_ProcessingVariables;

	bool		m_bRestoring;
};

//____________________________________________________________________________
//
class CStateSupport
{
	friend class CStateManager;
	friend class CGameState;

	PRIVATE_VIRTUAL(void, Push)(StateStack& stateStack) = 0;
	PRIVATE_VIRTUAL(void, Pop)() = 0;
	PRIVATE_VIRTUAL(void, Peek)() = 0;
#ifdef THINK_HISTORY
	PRIVATE_VIRTUAL(void, Cleanup)(const StateStack& stateStack, StateStack::Position pos) {}
#endif

public:
	CStateSupport()
		: m_pStateManager(CStateManager::GetInstance())
		, m_bEnableStateSupport(true)
#ifdef THINK_HISTORY
		, m_bUseInThinkHistory(true)
#endif
	{
		if (m_pStateManager)
			m_pStateManager->Created(this);
	}

	virtual ~CStateSupport()
	{
		if (m_pStateManager)
		{
			ATLASSERT(!m_pStateManager->StateSaved(this));
			// Call RemoveSavedState() in the derived class' destructor. Must be in
			// a derived class which implements the Pop() function. This is needed for any
			// derived class to clean up any pushed resources, e.g. reference counted pointers.
			// Note that the most derived class must do this (calls to RemoveSavedState()
			// from superclasses will be ignored) because the most derived Pop() virtual function 
			// is needed for the cleanup.

			m_pStateManager->RemoveSavedState(this, false); // This is a safeguard and if the variable is not cleaned up before this, there may be memory leaks as a result
		}
	}

	void SetStateManager(CStateManager* pStateManager)
	{
		m_pStateManager = pStateManager;
	}

#define VAR_NAME(V) (ToString(__LINE__) + _T("(") _T(__FUNCTION__) _T(")") _T(#V))

#ifdef _MY_DEBUG
	void SetVariableDisplayName(LPCTSTR strDisplayName) { m_strDisplayName = strDisplayName; }
#endif
	void SetStateSupportEnabled(bool bEnable = true) { m_bEnableStateSupport = bEnable; }

#ifdef THINK_HISTORY
	void SetUseInThinkHistory(bool bUse) { m_bUseInThinkHistory= bUse; }
	bool GetUseInThinkHistory() const { return m_bUseInThinkHistory; }
#endif

	CStateSupport& operator=(const CStateSupport& stateSupport)
	{
		return *this;
	}

protected:
	void RemoveSavedState()
	{
		if (m_pStateManager)
			m_pStateManager->RemoveSavedState(this);
	}

	VIRTUAL(void, NotifyStateChanging)()
	{
		if (m_pStateManager && m_bEnableStateSupport)
			m_pStateManager->SetModified(this);
	}

	VIRTUAL(void, NotifyStateChanged)()
	{
	}

	CStateManager*	m_pStateManager;
	bool			m_bEnableStateSupport;
	StateStack		m_Stack;

#ifdef THINK_HISTORY
	bool			m_bUseInThinkHistory;
#endif

#ifdef _MY_DEBUG
	CString			m_strDisplayName;
	CString			m_strTypeName;
#endif
};
