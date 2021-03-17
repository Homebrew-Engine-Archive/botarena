#pragma once

class CNode;

//____________________________________________________________________________
//
enum WM_APP_GAME_
{
	WM_APP_GAME_MESSAGE = WM_APP_GAME,
	WM_APP_GAME_MESSAGE_HIGH_IMP,
	WM_APP_GAME_MESSAGE_LOW_IMP,	
	WM_APP_GAME_PROGRESS_SHOW,	
	WM_APP_GAME_PROGRESS_STEPIT,
	WM_APP_GAME_PROGRESS_SET,		
	WM_APP_GAME_PROGRESS_HIDE,	
	WM_APP_GAME_UPDATE_GAME,		
	WM_APP_GAME_THINKING_STARTED,	
	WM_APP_GAME_THINKING_STOPPED,	
	WM_APP_GAME_ENDED,	
	WM_APP_GAME_CAN_DECIDE_NOW,	
	WM_APP_GAME_SPEAK,			
};

//____________________________________________________________________________
//
class CORE_EXPORT CGame 
	: noncopyable
{
	friend class CStateManager;
	friend class CScore;
public:
	static const double	s_fUpperBoundScore;
	static const double	s_fLowerBoundScore;
	static const double	s_fMaxNormScore;
	static const double	s_fMinNormScore;
	static const double	s_fMaxScore;
	static const double	s_fMinScore;
	static const double	s_fInvalidScore;
	static const double	s_fBigScore;

	static const DWORD s_dwDefaultMaxDuration;

	typedef FastDelegate< void () > BeginningOfTurnCallback;

	struct StatebasedHint
	{
		enum Enum : DWORD
		{
			Null				= 0x00000000,
			CreatureCards		= 0x00000001,
			LegendaryCards		= 0x00000002,
			PlaneswalkerCards	= 0x00000004,
			WorldCards			= 0x00000008,
			AuraCards			= 0x00000010,
			TokenDestruction	= 0x00000020,
			CounterDestruction	= 0x00000040,
			PhenomenonRemoval	= 0x00000080,
		};

		DEFINE_BITFLAG_ENUM_OPS(StatebasedHint, DWORD);
		ENUM_CONTAINER_STATE_SUPPORT(StatebasedHint);
	};

	//________________________________________________________________________
	// Event Sources

	CPtrEventSource<CNode>* GetCurrentNodeEventSource()		const { return m_cpCurrentNode.GetPointer();			  }

	// OnSubjectTargeted(const CSubjectGroup& subjectGroup)
	TargetSubjectEventSource* GetTargetSubjectEventSource() const { return m_cpTargetSubjectEventSource.GetPointer(); }


	//________________________________________________________________________
	//

	CGame();
	virtual ~CGame();

	bool HasInitialized()						const		{ return m_bInitialized;		 }
	bool InDestruction()						const		{ return m_bInDestruction;		 }

	void DefineAllClassIDs();

	void SetConsoleGame(bool bConsoleGame)					{ m_bConsoleGame = bConsoleGame; }
	void SetVerboseConsoleOutput(bool bVerboseConsoleOutput){ m_bVerboseConsoleOutput = bVerboseConsoleOutput; }
	bool GetVerboseConsoleOutput()				const		{ return m_bVerboseConsoleOutput;}
		
	void Run();
	bool Ended()								const;

	void Stop();
	bool IsStopping()							const;

	int GetGameTurnNumber()						const		{ return m_nGameTurnNumber;		 }
	void IncreaseGameTurnNumber();

	int GetGameMorphNumber()								{ return m_nGameMorphNumber;	 }
	void IncreaseGameMorphNumber();

	int GetGameDrawNumber()						const		{ return m_nGameDrawNumber;		 }
	void IncreaseGameDrawNumber();

	int GetActionNumber()						const		{ return m_nActionNumber;		 }
	void PerformedAction(const CAction* pAction);
	const CAction* GetLastPerformedAction()		const		{ return m_cpLastPerformedAction.GetPointer(); }

	void SetStoppingEvent(HANDLE hStoppingEvent);
	HANDLE GetStoppingEvent()					const		{ return m_hStoppingEvent;		 }

	void SetOwningThread(Threading::CThread* pThread);

	void GetChecksum(CMD5Checksum& Checksum)	const;

	int GetUniqueId()										{ ++m_nUniqueId; return m_nUniqueId; }

	void SetBeginningOfTurnCallback(BeginningOfTurnCallback callback) { m_BeginningOfTurnCallback = callback; }

	void AddStatebasedHint(StatebasedHint hint)				{ m_StatebasedHint |= hint;			 }

	//________________________________________________________________________
	// U.I. and Logging

	void Log(LPCTSTR lpszFormat, ...) const;
	void LogState() const;
	void SetVerboseLog(bool bVerbose)						{ m_bVerboseLog = bVerbose; }

	void SetMessageOwner(HWND hwndOwner,
						 int nComputerImage,
						 int nHumanImage,
						 int nDebugImage,
						 int nBugImage);
	void SetProgressOwner(HWND hwndOwner);
	void SetBoardOwner(HWND hwndOwner, HANDLE hUpdateCompleted, bool* pbDecideNow);
	void SetMainWindow(HWND hwndMain);
	
	void Message(LPCTSTR strMessage, int nImageIndex, 
				 MessageImportance importance = MessageImportance::Normal,
				 BOOL bToPastTense = TRUE);
	int GetComputerImage()			const							{ return m_nComputerImage; }
	int GetHumanImage()				const							{ return m_nHumanImage;	   }
	int GetDebugImage()				const							{ return m_nDebugImage;    }
	int GetBugImage()				const							{ return m_nBugImage;	   }

	void Speak(LPCTSTR strMessage)  const;

	//________________________________________________________________________
	// Players

	void CreatePlayers(int nPlayerCount = 2);
	void SetStartFirst(int nPlayer);

	BOOL GetMulligan()							   const	{ return m_bMulligan;				   }
	void SetMulligan(BOOL bMulligan)						{ m_bMulligan = bMulligan;			   }

	int GetHumanPlayerCount()					   const;

	int GetPlayerCount()						   const	{ return m_Players.GetSize();		   }
	CPlayer* GetPlayer(int nIndex)							{ return m_Players.GetAt(nIndex);	   }
	const CPlayer* GetPlayer(int nIndex) const				{ return m_Players.GetAt(nIndex);	   }
	const CPlayerContainer& GetPlayerContainer()   const	{ return m_Players;					   }

	int GetPlayerIndex(const CPlayer* pPlayer)     const	{ return m_Players.FindIndex(pPlayer); }

	CPlayer* GetActivePlayer()					   const 	{ return m_pActivePlayer.GetPointer(); }
	CPlayer* GetPriorityPlayer()				   const	{ return m_pPriorityPlayer.GetPointer(); }

	CPlayer* GetNextPlayer(const CPlayer* pPlayer) const;
	void SetNextActivePlayer();
	void SetActivePlayer(CPlayer* pPlayer)                  { m_pActivePlayer = pPlayer;		   } 
	void SetNextPriorityPlayer();
	void SetPriorityPlayer(CPlayer* pPlayer);
	CPlayer* GetThinkingPlayer()				   const;
	void SetThinkingPlayer(CPlayer* pPlayer);

	// These normalized operations are needed to maintain network checksum orders and interface orders
	void SetNormalizedPlayerIndex(int nNormalizedPlayerIndex) { m_nNormalizedPlayerIndex = nNormalizedPlayerIndex; }
	CPlayerContainer GetPlayersInNormalizedOrder() const;

	bool IsDeveloper()							   const	{ return m_bDeveloper;				   }

	void Concede();

	void SetTriggeredResolutionPlayer(CPlayer* pPlayer);
	CPlayer* GetTriggeredResolutionPlayer()		   const	{ return m_pTriggeredResolutionPlayer.GetPointer(); }

	/*
	const std::set<SingleCreatureType>* GetPlayerCreatureTypes() const	{ return &m_TP.m_PlayerCreatureTypes; }
	std::set<SingleCreatureType>* GetPlayerCreatureTypes()				{ return &m_TP.m_PlayerCreatureTypes; }
	*/

	//________________________________________________________________________
	// Global information

	int GetCertainTypeDiedCount(CardType pType) const;
	//int GetDeadZuberas()						const		{ return m_nDeadZuberas; };
	//void IncreaseDeadZuberas(CCard* pCard);
	//void ResetDeadZuberas()								{ m_nDeadZuberas = 0;    };
	int GetTurnCastedSpellCount()				const;
	int GetLastTurnCastedSpellCount()			const;

	//________________________________________________________________________
	// Steps

	CNode* GetCurrentNode()						const		{ return m_cpCurrentNode->GetPointer(); }
	void SetCurrentNode(CNode* pNode);

	bool IsMainPhase(bool bPrecombat)			const;
	bool IsFirstMainPhase()						const;

	//BOOL IsAfterUpkeep()						const		{ return m_bAfterUpkeep; } // needed for Reset to work correctly with upkeep-skipping effects
	//void SetAfterUpkeep(BOOL bAfterUpkeep)				{ m_bAfterUpkeep = bAfterUpkeep; } // needed for Reset to work correctly with upkeep-skipping effects

	const CSelection& GetSelection()			const		{ return m_Selection;		  }
	CSelection& GetSelection()								{ return m_Selection;		  }

	CScheduler* GetScheduler()								{ return m_apScheduler.get(); }

	//________________________________________________________________________
	// Stack

	const CStack& GetStack()										 const	{ return m_Stack; }
	CStack& GetStack()														{ return m_Stack; }

	BOOL HasTarget(const CCard* pCard)								 const	{ return m_Stack.HasTarget(pCard) || m_Selection.HasTarget(pCard); }
	BOOL HasTargetedCards(const CPlayer* pControlledBy)				 const	{ return m_Stack.HasTargetedCards(pControlledBy) || m_Selection.HasTargetedCards(pControlledBy); }
	BOOL HasTargetedCreatures(const CPlayer* pControlledBy)			 const	{ return m_Stack.HasTargetedCreatures(pControlledBy) || m_Selection.HasTargetedCreatures(pControlledBy); }
	BOOL HasTarget(const CPlayer* pPlayer)							 const	{ return m_Stack.HasTarget(pPlayer) || m_Selection.HasTarget(pPlayer); }
	BOOL HasOtherCardTargets(const CPlayer* pExceptControlledBy)	 const	{ return m_Stack.HasOtherCardTargets(pExceptControlledBy) || m_Selection.HasOtherCardTargets(pExceptControlledBy); }
	BOOL HasOtherCreatureTargets(const CPlayer* pExceptControlledBy) const	{ return m_Stack.HasOtherCreatureTargets(pExceptControlledBy) || m_Selection.HasOtherCreatureTargets(pExceptControlledBy); }
	BOOL HasOtherPlayerTargets(const CPlayer* pExceptThisPlayer)	 const	{ return m_Stack.HasOtherPlayerTargets(pExceptThisPlayer) || m_Selection.HasOtherPlayerTargets(pExceptThisPlayer); }

	//________________________________________________________________________
	// Combat

	const CSubjectGroupContainer_& GetCombatDamageAssignment()		 const	{ return m_CombatDamageAssignment; }
	CSubjectGroupContainer_& GetCombatDamageAssignment()					{ return m_CombatDamageAssignment; }
	bool HasCombatDamageAssignment(const CCreatureCard* pCreature)   const;

	void GetAttackingCreatures(CCountedCardContainer& AttackingCreatures) const;
	void GetBlockingCreatures(CCountedCardContainer& BlockingCreatures)   const;
	void GetBlockedCreatures(CCountedCardContainer& BlockedCreatures)	  const;

	//bool SuspendAllCreatures()									 const	{ return To_bool(m_bSuspendAllCreatures); }
	//void SuspendAllCreatures(bool bSuspend);

	//________________________________________________________________________
	//

	void OnAbilityAddedToCard(CAbility* pAbility);
	void OnAbilityRemovedFromCard(CAbility* pAbility);
	void UpdateAbility(CAbility* pAbility);
	//_____________________________________________________________________________
	// For restarting
	void SetMulliganAgain()              { m_bMulligan = TRUE; m_bStartWith = TRUE; }				// not state managed
	void ResetTurnNumbers()				 { m_nGameTurnNumber = 0;					}
	void NullMulliganPlayers()			 { m_pMulliganPlayer = NULL; m_pStartWithPlayer = NULL;}
	
	//________________________________________________________________________
	// A.I.

	bool IsThinking()								const						{ return m_TD.m_pThinkingPlayer != NULL; }
	int GetTurnStartedThinking()					const						{ return m_TD.m_nTurnStartedThinking;	 }

	void RemoveAllStrategies(StrategyRemovalReason reason);

	bool IsRestoring()								const						{ return m_TD.m_bRestoring;				 }

	bool ExtraCareful()								const						{ return m_TP.m_bExtraCareful;			 }

	void ClearVisibilityMap();
	void AddVisibleCard(const CCard* pCard);				// Applicable only when in thinking
	void RemoveVisibleCard(const CCard* pCard);
	bool IsCardVisible(const CCard* pCard) const;			// "

	void TrickInManaControl(bool bTrick)										{ m_TP.m_bTrick = bTrick;				 }	// Call only when stalled

	int Think(const CActionContainer& actionContainer,
			  CStrategy& strategy,
			  CScore* pBestScore);

	//void InitializeThinkParameter();
	void SetThinkParameter(DWORD dwMaxDuration = s_dwDefaultMaxDuration,
						   bool bExtraCareful  = true,	// in combat
						   bool bBoostProcess  = false,
						   bool bOverkill	   = true,
						   bool bConservative  = false);

	void AddSearchBreak(SearchBreak toAdd);

#ifdef _MY_DEBUG
	void MinimaxTrace(LPCTSTR lpszFormat, ...);
#endif

	void Push();
	void Pop();
	void Peek();

protected:
	//________________________________________________________________________
	//
	struct SearchStatus
	{
		enum Enum : DWORD // Node Reached constants
		{
			Continue			 = 0x00000000,
			Cancelled			 = 0x00000001,
			GameEnded			 = 0x00000002,
			DepthReached		 = 0x00000004,
			ManaBurn			 = 0x00000010,
			NullAttack			 = 0x00000020,
			PassWithManaInPool	 = 0x00000040,
			TooMuchMana			 = 0x00000080,
			NotEnoughInformation = 0x00000100,

			_Bad
				= ManaBurn
				| NullAttack
				| PassWithManaInPool
				| TooMuchMana
				| NotEnoughInformation
		};

		DEFINE_BITFLAG_ENUM_OPS(SearchStatus, DWORD);
	};

	//________________________________________________________________________
	//
	struct ThinkStatistic								// Non-essential variables used during a minimax search
	{
		ThinkStatistic()
			: m_lPushCount(0)		
			, m_nMaxPlySearched(0)
			, m_nAlphaCutCount(0)		
			, m_nBetaCutCount(0)		
#ifdef USE_NS_CUT
			, m_nNonStackCutCount(0)
#endif
#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
			, m_nRequiredTransientCutCount(0)
#endif
			, m_dwLastProgressTime(GetTickCount())
			, m_dwStartTime(GetTickCount())				
			, m_nExpirations(0)	
			, m_nNodes(0)			
			, m_nRootNodes(0)
			, m_nRootNodesWithUpdate(0)
#ifdef GATHER_CHANGED_VARIABLE_STATS
			, m_nMaxChangedVariableCount(0)
			, m_nCurrentChangedVariableCount(0)
#endif
#ifdef THINK_HISTORY
			, m_nHistoryHits(0)
#endif
		{}

		long			m_lPushCount;					// Push count
		int				m_nMaxPlySearched;				// Maximum ply searched
		int				m_nAlphaCutCount;				// Alpha cut count
		int				m_nBetaCutCount;				// Beta cut count
#ifdef USE_NS_CUT
		int				m_nNonStackCutCount;			// Non-stack cut count
#endif
#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
		int				m_nRequiredTransientCutCount;	// Required-Transient cut count
#endif
		DWORD			m_dwLastProgressTime;			// Last UI update time (tick count)
		DWORD			m_dwStartTime;					// Thinking start time (tick count)
		int				m_nExpirations;					// Expirations
		int				m_nNodes;						// Nodes finished
		int				m_nRootNodes;					// Number of root nodes searched
		int				m_nRootNodesWithUpdate;			// Number of root nodes with results (used for 'Decide' now button)

#ifdef GATHER_CHANGED_VARIABLE_STATS
		void ChangedVariableCheckPoint()
		{
			if (m_nCurrentChangedVariableCount >
				m_nMaxChangedVariableCount)
				m_nMaxChangedVariableCount = m_nCurrentChangedVariableCount;
			m_AverageChangedVariableCount.AddValue(m_nCurrentChangedVariableCount);
			m_nCurrentChangedVariableCount = 0;
		}

		int				m_nMaxChangedVariableCount;		// Maximum no. of changed variables per think-step
		int				m_nCurrentChangedVariableCount;
		Average<double>	m_AverageChangedVariableCount;
#endif
#ifdef THINK_HISTORY
		int				m_nHistoryHits;
#endif
	};

#ifdef THINK_HISTORY
	//________________________________________________________________________
	//
	class CThinkHistory
	{
	public:
		CThinkHistory()
		{}

		~CThinkHistory()
		{
			Clear();
		}

		void Add(std::auto_ptr<CGameState>& apGameState, int nPly)
		{
			if (nPly >= (int)m_History.size())
				m_History.resize(nPly + 1);

			CGameState* pGameState = apGameState.release();
			DWORD dwChecksum = pGameState->GetChecksum();

			bool bFound = false;
			std::map<DWORD, std::set<int>>::iterator i = m_ChecksumPlyMap.find(dwChecksum);
			if (i != m_ChecksumPlyMap.end())
			{
				std::set<int>& plys(i->second);
				for (std::set<int>::iterator j = plys.begin(); j != plys.end();)
					if (*j > nPly)
					{
						std::map<DWORD, std::list<CGameState*>>::iterator k = m_History[*j].find(dwChecksum);
						if (k == m_History[*j].end())
						{
							ATLASSERT(false); // m_ChecksumPlyMap contains invalid entry
							plys.erase(j++);
						}
						else
						{
							bool bFound2 = false;
							for (std::list<CGameState*>::iterator l = k->second.begin(); l != k->second.end();)
								if (*pGameState == **l)
								{
									delete *l;
									k->second.erase(l++);
								}
								else
								{
									if ((*l)->GetChecksum() == dwChecksum)
										bFound2 = true;
									++l;
								}

							if (!bFound2)
								plys.erase(j++);
							else
								++j;
						}
					}
					else
					{
						if (*j == nPly)
							bFound = true;
						++j;
					}
			}
			
			m_History[nPly][dwChecksum].push_back(pGameState);

			if (!bFound)
				m_ChecksumPlyMap[dwChecksum].insert(nPly); 
		}

		bool Find(const CGameState& gameState, int nPly) const
		{
			DWORD dwChecksum = gameState.GetChecksum();

			std::map<DWORD, std::set<int>>::iterator i = m_ChecksumPlyMap.find(dwChecksum);
			if (i == m_ChecksumPlyMap.end())
				return false;

			std::set<int>& plys(i->second);
			for (std::set<int>::iterator j = plys.begin(); j != plys.end();)
			{
				if (*j > nPly)
				{
					++j;
					continue;
				}

				std::map<DWORD, std::list<CGameState*>>::const_iterator k = m_History[*j].find(gameState.GetChecksum());
				if (k == m_History[*j].end())
				{
					ATLASSERT(false); // m_ChecksumPlyMap contains invalid entry
					plys.erase(j++);
					continue;
				}

				for (std::list<CGameState*>::const_iterator l = k->second.begin(); l != k->second.end(); ++l)
					if (gameState == **l)
					{
#ifdef _DEBUG
						CString strHistory((*l)->GetPath());
						CString strCurrent(gameState.GetPath());
						ATLTRACE(_T("history:\n%s\n\n"), strHistory);
						ATLTRACE(_T("current:\n%s\n\n"), strCurrent);
#endif
						return true;
					}

				++j;
			}

			return false;
		}

		void Clear()
		{
			for (int i = m_History.size() - 1; i >= 0; --i)
			{
				for (std::map<DWORD, std::list<CGameState*>>::const_iterator j = m_History[i].begin();
					 j != m_History[i].end(); ++j)
				{
					for (std::list<CGameState*>::const_iterator k = j->second.begin(); k != j->second.end(); ++k)
						delete *k;
				}
			}

			m_History.clear();
			m_ChecksumPlyMap.clear();
		}

	protected:
		std::vector<std::map<DWORD, std::list<CGameState*>>> m_History;
		mutable std::map<DWORD, std::set<int>> m_ChecksumPlyMap;
	};
#endif

	//________________________________________________________________________
	//
	struct ThinkData									// Essential variables used during a minimax search
	{
		ThinkData()
		{
			Reset();
		}

		~ThinkData()
		{
			Reset();
		}

		void Reset()
		{
			m_pThinkingPlayer		 = NULL;
			m_nTurnStartedThinking	 = -1;
			m_nDrawStartedThinking	 = -1;
			m_nActionStartedThinking = -1;
			m_nDrawLookAhead		 = -1;
			m_bRemoveNegativeActions = true;
			m_bRestoring			 = false;
			m_pRootActionContainer	 = NULL;
#ifdef THINK_HISTORY
			m_ThinkHistory.Clear();
#endif
		}

		CPlayer*	m_pThinkingPlayer;					// Currently thinking player
		int			m_nTurnStartedThinking;				// Turn number when the thinking started
		int			m_nDrawStartedThinking;				// Draw number when the thinking started
		int			m_nActionStartedThinking;			// Action number when the thinking started
		int			m_nDrawLookAhead;					// Number of draws to look ahead
		bool		m_bRemoveNegativeActions;			// Prevent some type of actions during thinking
		bool		m_bRestoring;						// Popping data off the stack

		const CActionContainer*	m_pRootActionContainer;	// Next available actions for the thinking player

#ifdef THINK_HISTORY
		CThinkHistory m_ThinkHistory;
#endif
	};

	//________________________________________________________________________
	//
	struct ThinkParameter
	{
		ThinkParameter()
			: m_dwMaxDuration(CGame::s_dwDefaultMaxDuration)
			, m_bTrick(false)
			, m_bBoostProcess(false)
			, m_bExtraCareful(true)
			, m_bOverkill(true)
			, m_bConservative(false)
			{}

		DWORD	m_dwMaxDuration;
		bool	m_bTrick;
		bool	m_bBoostProcess;
		bool	m_bExtraCareful; // in combat
		int		m_nStartChecksumFromPlayer;
		bool	m_bOverkill;
		bool	m_bConservative;

		CAbilityContainer	m_ActionAbilities;
		CCountedCardContainer		m_ActionCards;

		//std::set<SingleCreatureType>	m_PlayerCreatureTypes;
	};

	//________________________________________________________________________
	//
	struct TimePlanEntry
	{
		TimePlanEntry()
			: m_fAllocPercentage(0.0)
			, m_bLast(false)
			, m_nExpirations(0)
			, m_dwAllocTime(0)
			, m_dwActualTime(0)
		{}

		double	m_fAllocPercentage;
		bool	m_bLast;
		int		m_nExpirations;
		DWORD	m_dwAllocTime;
		DWORD	m_dwActualTime;
	};

	typedef std::vector<TimePlanEntry> TimePlan;

	//________________________________________________________________________
	//
	struct ScopedLogTime
	{
		ScopedLogTime(CGame* pGame)
			: m_pGame(pGame)
		{
			m_StartTime = COleDateTime::GetCurrentTime();
			m_pGame->Log(_T("%s\n"), m_StartTime.Format());
		}

		~ScopedLogTime()
		{
			COleDateTime endTime(COleDateTime::GetCurrentTime());
			m_pGame->Log(_T("%s - %s\n"), 
				endTime.Format(),
				(endTime - m_StartTime).Format(_T("%H:%M.%S")));
		}

		CGame* m_pGame;
		COleDateTime m_StartTime;
	};

#ifdef _MY_DEBUG
	//________________________________________________________________________
	//
	class MinimaxTrace
	{
	public:
		static const int		s_nMinimaxTraceThreshold;
		static const CString	s_strMinimaxFileName1;
		static const CString	s_strMinimaxFileName2;

		MinimaxTrace()
			: m_nMinimaxTraceLines(0)
			, m_dwMinimaxNumber(0)
			, m_strAppDataPath(g_pCoreApp->GetAppDataPath())
		{
		}

		~MinimaxTrace()
		{
			m_MinimaxTraceFile.Close();
		}

		void Open()
		{
			m_MinimaxTraceFile.Open(m_strAppDataPath + _T("\\") + s_strMinimaxFileName1, 
				CFile::modeCreate | CFile::modeWrite | CFile::typeText | CFile::shareDenyNone);
			m_nMinimaxTraceLines = 0;
			m_dwMinimaxNumber = 0;
		}

		void Log(LPCTSTR lpszFormat, ...)
		{
			va_list args;
			va_start(args, lpszFormat);

			int nBuf;
			TCHAR szBuffer[2048];

			nBuf = _vsntprintf_s(szBuffer, ARRAY_SIZE(szBuffer), _TRUNCATE, lpszFormat, args);

			ATLASSERT(nBuf >= 0);

			m_MinimaxTraceFile.WriteString(szBuffer);
			m_MinimaxTraceFile.Flush();

			++m_nMinimaxTraceLines;

			va_end(args);
		}

		void RollOver()
		{
			m_MinimaxTraceFile.Close();

			::CopyFile(m_strAppDataPath + _T("\\") + s_strMinimaxFileName1, m_strAppDataPath + _T("\\") + s_strMinimaxFileName2, FALSE);

			m_MinimaxTraceFile.Open(m_strAppDataPath + _T("\\") + s_strMinimaxFileName1, CFile::modeCreate | CFile::modeWrite | CFile::typeText | CFile::shareDenyWrite);
			m_nMinimaxTraceLines = 0;
		}

		bool RollOverNeeded()
		{
			return m_nMinimaxTraceLines > s_nMinimaxTraceThreshold;
		}

		DWORD& MinimaxNumber()
		{
			return m_dwMinimaxNumber;
		}

	protected:
		CString		m_strAppDataPath;

		CStdioFile	m_MinimaxTraceFile;
		int			m_nMinimaxTraceLines;
		DWORD		m_dwMinimaxNumber;

	} m_MT;
#endif

	//________________________________________________________________________
	// 

	bool WaitForRemotePlayers();
	void OnGameStarting();
	void Mulligan();
	void StartWith();
	void MulliganAsk();
	void StartWithAsk();
	void OnMulliganSelectionDone (const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnStartWithSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	//void OnGemstoneCavernsSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void UpdateGame() const;

	void StatebasedCheck();
	void CheckPlayersLost();
	void CheckLegendaryCards(CCountedCardContainer& cardsToRemove);
	void OnLegendarySelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void CheckWorldCards(CCountedCardContainer& cardsToRemove);
	void CheckPlaneswalkerCards(CCountedCardContainer& cardsToRemove);
	void CheckMisplacedTokens(CCountedCardContainer& cardsToRemove);
	void CheckMisplacedCounters(CCountedCardContainer& alteredCounterCards);
	void CheckCreatureCards(CCountedCardContainer& dyingCreatures);
	void CheckOrphanedAuras(CCountedCardContainer& orphanedAuras);
	void CheckPhenomenon(CCountedCardContainer& phenomenon);

	void GetActions(CActionContainer& MoveContainer, bool bSetNames);
	//void GetActionsInZone(CActionContainer& MoveContainer, CZone* pZone, bool bSetNames, const CAbilityContainer& zoneAbilities);
	void GetActionAbilities(CAbilityContainer& actionAbilities, CCountedCardContainer& actionCards);
	void GetActionAbilitiesInZone(CAbilityContainer& actionAbilities, CCountedCardContainer& actionCards, CZone* pZone, const CAbilityContainer& zoneAbilities);

	void CheckManaActions(CActionContainer* pActionContainer);
	
	template <class C>
	void AddWantedManaImpl(const C& costBase,
						   const CManaPool& manaPool, const CManaCost& filterCost,
						   CManaPool::Colors& wantedMana)
	{
		CManaCost abilityManaCost = costBase.GetManaCost();
		if (abilityManaCost.CompareToPool(manaPool, FALSE))
			if (filterCost.GetTotal())
				wantedMana |= CManaCost::ToPoolColors(filterCost.GetNormalizedColors()); // generic cost -> colorless mana
			else
				wantedMana |= costBase.GetWantedManaColors(&manaPool);
	}

	bool AddWantedMana(const std::vector<const CCost_*>& abilityCosts,
					   const std::vector<const CCost*>& stackDenialCosts,
					   const CManaPool& manaPool, const CManaCost& filterCost,
					   bool bTrick,
					   const CManaPool::Colors& allActionManaColors, 
					   CManaPool::Colors& WantedMana);

	void ProcessManaGroups(std::vector<std::vector<const CManaCost*>>& hintCosts,
						   std::vector<std::vector<const CManaPool*>>& hintPools,
						   bool bNoCostPoolInHints,
						   const std::vector<const CCost_*>& abilityCosts,
						   const std::vector<const CCost*>& stackDenialCosts,
						   const CManaPool& currentPool, 
						   bool bTrick, 
						   const CManaPool::Colors& allActionManaColors, 
						   CManaPool::Colors& wantedMana);

	//________________________________________________________________________
	// A.I.

	CScore MinimaxAB(int nPly,
					 const CScore& alpha,
					 const CScore& beta,
#ifdef USE_NS_CUT			
				     std::vector<DWordArray>* pTriedNonStack,
					 DWordArray& currentTriedNonStackEntry,
#endif
					 CStrategy& bestStrategy,
					 int& nExpirations,
				     DWORD dwTimeAllowed
#ifdef TRACE_ACTION_NAMES
					 , CString strPath
#endif
					 );

#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
	void CutRequiredTransientActions(CActionContainer* pActionContainer);
#endif

#ifdef LAND_ACTIONS_FIRST
	void CutNonLandActions(CActionContainer* pActionContainer);
#endif

	void SetupVisibilityMap(CPlayer* pPlayer);
	SearchStatus GetSearchStatus();

	void ShowProgress()				const;
	void StepProgress()				const;
	void SetProgress(int nProgress) const;
	void HideProgress()				const;

	void ThinkingStarted()			const;
	void ThinkingStopped()			const;

	//________________________________________________________________________
	//

	static const CString	s_strLogFileName;
	static const CString	s_strLogFileExt;

	bool					m_bInitialized;
	bool					m_bStopping;
	bool					m_bInDestruction;
	bool					m_bDeveloper;

	mutable CStdioFile		m_LogFile;
	bool					m_bVerboseLog;
	bool					m_bConsoleGame;
	bool					m_bVerboseConsoleOutput;

	int						m_nComputerImage;
	int						m_nHumanImage;
	int						m_nDebugImage;
	int						m_nBugImage;

	HWND					m_hwndMessageOwner;
	HWND					m_hwndProgressOwner;
	HWND					m_hwndBoardOwner;
	HANDLE					m_hUpdateCompleted;
	HWND					m_hwndMainWindow;
	bool*					m_pbDecideNow;
	HANDLE					m_hStoppingEvent;
	Threading::CThread*		m_pThread;

	CStateManager*			m_pStateManager;

	BeginningOfTurnCallback m_BeginningOfTurnCallback;

	counted_ptr<CPtrEventSource<CNode>>	m_cpCurrentNode;

	CPlayerContainer				m_Players;

	CStateSupportPtrType<CPlayer>	m_pActivePlayer;
	CStateSupportPtrType<CPlayer>	m_pPriorityPlayer;
	CStateSupportPtrType<CPlayer>	m_pSavedPriorityPlayer;
	CStateSupportPtrType<CPlayer>	m_pTriggeredResolutionPlayer;
	int								m_nNormalizedPlayerIndex;

	int_							m_nGameTurnNumber;
	int_							m_nGameDrawNumber;
	int_							m_nActionNumber;
	int_							m_nGameMorphNumber;
	CStateSupportCountedPtrType<const CAction> m_cpLastPerformedAction;
	//BOOL_							m_bSuspendAllCreatures;
	int_							m_nUniqueId;
	//int_							m_nDeadZuberas;
	
	//BOOL_							m_bAfterUpkeep;						// needed for Reset
	
	CSubjectGroupContainer_			m_CombatDamageAssignment;			// changed to CSubjectGroupContainer
	CStack							m_Stack;

	CSelection						m_Selection;
	

	std::auto_ptr<CScheduler>		m_apScheduler;

	BOOL							m_bMulligan;
	CStateSupportPtrType<CPlayer>	m_pMulliganPlayer;
	BOOL							m_bStartWith;
	CStateSupportPtrType<CPlayer>	m_pStartWithPlayer;
	ListenerPtr<SelectionEventSource::Listener>		m_cpMulliganSelectionListener;
	//ListenerPtr<SelectionEventSource::Listener>	m_cpStartWithSelectionListener;
	ListenerPtr<SelectionEventSource::Listener>		m_cpLegendarySelectionListener;
	CSelectionSupport		m_StartWithSelection;
	//CSelectionSupport		m_GemstoneCavernsSelection;

	counted_ptr<TargetSubjectEventSource>	m_cpTargetSubjectEventSource;

	CStateSupportEnumType<StatebasedHint>	m_StatebasedHint;

	//________________________________________________________________________
	// A.I.

	ThinkStatistic			m_TS;					// Think statistics, reset by Think()
	ThinkData				m_TD;					// Think data, reset by Think()
	ThinkParameter			m_TP;					// Parameters affecting Think()

	CStateSupportEnumType< SearchBreak >	m_SearchBreak;
	CCountedPtrSet_<const CCard>			m_VisibleCards;
	CAbilityContainer_						m_OptimizedAbilities;
};

