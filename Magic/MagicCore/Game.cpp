#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
const double CGame::s_fUpperBoundScore		= 1000.0;
const double CGame::s_fLowerBoundScore		= -1000.0;
const double CGame::s_fMaxNormScore			= s_fUpperBoundScore - 1.0;
const double CGame::s_fMinNormScore			= s_fLowerBoundScore + 1.0;
const double CGame::s_fMaxScore				= 999.999878;
const double CGame::s_fMinScore				= -999.999878;
const double CGame::s_fInvalidScore			= s_fLowerBoundScore;		// 7/21/2002, changed from s_fUpperBoundScore for sorting purposes
const double CGame::s_fBigScore				= s_fUpperBoundScore / 2.0;
const CString CGame::s_strLogFileName		= _T("GameLog");
const CString CGame::s_strLogFileExt		= _T(".txt");
const DWORD CGame::s_dwDefaultMaxDuration	= (3000 * 60);

#define IS_VALID_SCORE(S)	((S > CGame::s_fLowerBoundScore) && (S < CGame::s_fUpperBoundScore))
#define IS_INVALID_SCORE(S)	(!IS_VALID_SCORE(S))

#ifdef _MY_DEBUG
const int CGame::MinimaxTrace::s_nMinimaxTraceThreshold		= 2048;
const CString CGame::MinimaxTrace::s_strMinimaxFileName1	= _T("MINIMAX1.TXT");
const CString CGame::MinimaxTrace::s_strMinimaxFileName2	= _T("MINIMAX2.TXT");
#endif

//____________________________________________________________________________
//
/*
DeckStatus CGame::ReadDeck(LPCTSTR strDeckPath,
							StringArray& deckEntries,
							StringArray& unsupportedCards,
							StringArray& cardsWithMoreThanFourCopies)
{
	deckEntries.clear();
	unsupportedCards.clear();
	cardsWithMoreThanFourCopies.clear();

	CStdioFile deck;
	if (!deck.Open(strDeckPath, CFile::modeRead | CFile::typeText))
		return DeckStatus::ParseError;

	CString strLine;
	while (deck.ReadString(strLine))
		deckEntries.push_back(strLine);

	std::map<CString, int> cardCounts;

	int nTotalCardCount = 0;
	bool bPreconstructed = false;
	bool bFillCommandFound = false;

	for (size_t i = 0; i < deckEntries.size(); ++i)
	{
		CString strLine(deckEntries[i]);
		strLine.Trim();
		if (strLine.IsEmpty())
			continue;

		if (!_tcsicmp(strLine.Left(4), _T("#PRE")))
		{
			bPreconstructed = true;
			continue;
		}
		else
		if (!_tcsicmp(strLine.Left(1), _T("#")) ||
			!_tcsicmp(strLine.Left(2), _T("//")))
		{
			continue;
		}

		CString strCardName;
		int nCount = 1;

		if (!_tcsicmp(strLine.Left(6), _T("#FILL ")))
			strCardName = strLine.Mid(6);
		else
		{
			// e.g. 4 Eager Cadet

			if (_istdigit(strLine[0]))
			{
				int nIndex = strLine.Find(_T(' '));
				if (nIndex != -1)
				{
					strCardName = strLine.Mid(nIndex + 1);
					nCount = _ttoi(strLine);
				}
				else
					strCardName = strLine;
			}
			else
				strCardName = strLine;
		}

		UINT uID = 0;

		if ((strCardName.Find(_T('(')) != -1) &&
			(strCardName.Find(_T(')')) != -1))
		{
			if (!_stscanf_s(strCardName.Mid(strCardName.Find(_T('(')) + 1), _T("%d"), &uID))
				uID = 0;
		}

		if (!uID)
		{
			// Try to search by name

			CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(strCardName, TRUE);
			if (pCardEntry)
				uID = pCardEntry->GetID();
		}

		//if (!uID)
		//{
		//	unsupportedCards.push_back(strCardName);
		//	continue;
		//}

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(strCardName, uID));
		if (!cpCard.GetPointer())
		{
			unsupportedCards.push_back(strCardName);
			continue;
		}

		nTotalCardCount += nCount;

		CString strPrintedCardName(cpCard->GetPrintedCardName());
		strPrintedCardName.MakeUpper();

		int nCurrentCount = nCount;

		std::map<CString, int>::iterator it = cardCounts.find(strPrintedCardName);
		if (it != cardCounts.end())
		{
			it->second += nCount;
			nCurrentCount = it->second;
		}
		else
			cardCounts.insert(std::make_pair(strPrintedCardName, nCount));

		if (!bPreconstructed)
			if (!(cpCard->GetCardType() & CardType::BasicLand).Any() &&
				(nCurrentCount > 4))
				cardsWithMoreThanFourCopies.push_back(cpCard->GetPrintedCardName());

		if (!_tcsicmp(strLine.Left(5), _T("#FILL ")))
			bFillCommandFound  = true;
	}

	if (unsupportedCards.size())
		return DeckStatus::UnsupportedCards;

	if (!bPreconstructed && !bFillCommandFound && (nTotalCardCount < 60))
		return DeckStatus::LessThan60;

	if (cardsWithMoreThanFourCopies.size())
		return DeckStatus::MoreThan4Copies;

	return DeckStatus::Okay;
}
*/

//____________________________________________________________________________
//
CGame::CGame()
	: m_pStateManager(CStateManager::GetInstance())
	, m_cpCurrentNode(::CreateObject<CPtrEventSource<CNode>>(_T("CURRENT NODE")))
	, m_bInitialized(false)
	, m_pActivePlayer(NULL)
	, m_pPriorityPlayer(NULL)
	, m_nGameTurnNumber(0)
	, m_nGameMorphNumber(0)
	, m_nGameDrawNumber(0)
	, m_nActionNumber(0)
	, m_SearchBreak(SearchBreak::Continue)
	, m_hwndMessageOwner(NULL)
	, m_hwndProgressOwner(NULL)
	, m_hwndBoardOwner(NULL)
	, m_hUpdateCompleted(NULL)
	, m_pbDecideNow(NULL)
	//, m_bSuspendAllCreatures(FALSE)
	, m_pTriggeredResolutionPlayer(NULL)
	, m_nComputerImage(-1)
	, m_nHumanImage(-1)
	, m_nDebugImage(-1)
	, m_nBugImage(-1)
	, m_bInDestruction(false)
	, m_hStoppingEvent(NULL)
	, m_bStopping(false)
	, m_pThread(NULL)
	, m_nUniqueId(0)
	, m_bDeveloper(To_bool(g_pCoreApp->GetDeveloper()))
	, m_bVerboseLog(To_bool(g_pCoreApp->GetVerboseLog()))
	, m_bConsoleGame(false)
	, m_bVerboseConsoleOutput(true)
	, m_pSavedPriorityPlayer(NULL)
	, m_bMulligan(TRUE)
	, m_pMulliganPlayer(NULL)
	, m_bStartWith(TRUE)
	, m_pStartWithPlayer(NULL)
	, m_cpMulliganSelectionListener(VAR_NAME(m_cpMulliganSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CGame::OnMulliganSelectionDone))
	//, m_cpStartWithSelectionListener(VAR_NAME(m_cpMulliganSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CGame::OnStartWithSelectionDone))
	, m_StartWithSelection(this, CSelectionSupport::SelectionCallback(this, &CGame::OnStartWithSelectionDone))
	, m_cpTargetSubjectEventSource(::CreateObject<TargetSubjectEventSource>(VAR_NAME(m_cpTargetSubjectEventSource)))
	, m_Stack(this)
	, m_Selection(this)
{
	STATIC_CHECK(sizeof(int) == sizeof(void*));
	STATIC_CHECK(sizeof(DWORD) == sizeof(void*));
	STATIC_CHECK(sizeof(BOOL) == sizeof(void*));
	STATIC_CHECK(sizeof(size_t) == sizeof(void*));

	CString strModulePath(g_pCoreApp->GetModulePath());
	CString strLogFilePath(g_pCoreApp->GetAppDataPath() + _T("\\") + s_strLogFileName + s_strLogFileExt);

	if (g_pCoreApp->GetMultipleGameLogs())
	{
		// Don't overwrite game log files
	
		int nIndex = 1;
		while (PathFileExists(strLogFilePath))
			strLogFilePath.Format(_T("%s\\%s%d%s"), g_pCoreApp->GetAppDataPath(), s_strLogFileName, ++nIndex, s_strLogFileExt);
	}

	if (!m_LogFile.Open(strLogFilePath,
		CFile::modeCreate | CFile::modeWrite | CFile::typeText | 
#ifdef _DEBUG
			CFile::shareDenyNone
#else
			CFile::shareDenyRead
#endif
			))
	{
		ATLTRACE(_T("Failed to open log file: %d\n"), GetLastError());
		ATLASSERT(false);
	}

#ifdef _MY_DEBUG
	m_MT.Open();

	ATLTRACE(_T("Creature type count = %d\n"), SingleCreatureType::_SingleTypeCount);
	ATLASSERT(!_tcscmp(SingleCreatureType::s_Text[SingleCreatureType::Imp], _T("Imp")));
	ATLASSERT(!_tcscmp(SingleCreatureType::s_Text[SingleCreatureType::Zombie], _T("Zombie")));
#endif

#ifdef THINK_HISTORY
	m_nGameTurnNumber.SetUseInThinkHistory(false);
	m_nGameDrawNumber.SetUseInThinkHistory(false);
	m_nActionNumber.SetUseInThinkHistory(false);
	m_nUniqueId.SetUseInThinkHistory(false);
#endif
}

CGame::~CGame()
{
	m_bInDestruction = true;

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		delete pPlayer;
	}

	m_LogFile.Close();

#ifdef _DEBUG
	m_pStateManager->ClearFreeList();
	ATLASSERT(m_pStateManager->IsEmpty());
#endif
}

CPlayer* CGame::GetNextPlayer(const CPlayer* pPlayer) const
{
	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer1 = m_Players.GetAt(i);
		if (pPlayer1 == pPlayer)
		{
			if (i + 1 == m_Players.GetSize())
				return m_Players.GetAt(0);
			else
				return m_Players.GetAt(i+1);
		}
	}
	ATLASSERT(FALSE);
	return NULL;
}

void CGame::SetNextActivePlayer()
{
	m_pActivePlayer = GetNextPlayer(m_pActivePlayer);
}

void CGame::SetNextPriorityPlayer()
{
	SetPriorityPlayer(GetNextPlayer(m_pPriorityPlayer));
}

void CGame::SetPriorityPlayer(CPlayer* pPlayer)
{
	if (pPlayer != m_pPriorityPlayer)
	{
		if (!IsThinking() && IsDeveloper())
		{
			CString strMessage;
			strMessage.Format(_T("Priority player is %s (previously %s)"), 
				pPlayer->GetPlayerName(), m_pPriorityPlayer->GetPlayerName());
			Message(strMessage, GetDebugImage(), MessageImportance::Low);
		}

		m_pPriorityPlayer = pPlayer;
	}
}

CPlayer* CGame::GetThinkingPlayer() const
{
	return m_TD.m_pThinkingPlayer;
}

void CGame::SetThinkingPlayer(CPlayer* pPlayer)
{
	m_TD.m_pThinkingPlayer = pPlayer;
}

CPlayerContainer CGame::GetPlayersInNormalizedOrder() const
{
	CPlayerContainer players;
	int nPlayerCount = m_Players.GetSize();
	for (int i = 0; i < nPlayerCount; ++i)
		players.Add(m_Players.GetAt((i + m_nNormalizedPlayerIndex) % nPlayerCount));

	return players;
}

void CGame::SetCurrentNode(CNode* pNode)
{
	*m_cpCurrentNode = pNode;
}

bool CGame::IsMainPhase(bool bPrecombat) const
{	
	if (GetCurrentNode()->GetNodeId() != NodeId::MainPhaseStep)
		return false;

	CMainNode* pMainNode = (CMainNode*)GetCurrentNode();

	if (bPrecombat)
		return To_bool(pMainNode->IsPreCombat());

	return !pMainNode->IsPreCombat();
}

int CGame::GetHumanPlayerCount() const
{
	int nCount = 0;

	for (int i = 0; i < m_Players.GetSize(); ++i)
		if (!m_Players.GetAt(i)->IsComputer())
			++nCount;

	return nCount;
}

void CGame::CreatePlayers(int nPlayerCount)
{
	for (int i = 0; i < nPlayerCount; ++i)
	{
		// Create player
		CPlayer* pPlayer = new CPlayer(this);
		m_Players.Add(pPlayer);

		pPlayer->SetFinishedMulligan(m_bMulligan ? FALSE : TRUE);

		CString strName;
		strName.Format(_T("Player %d"), i + 1);
		pPlayer->SetPlayerName(strName);

		// Create graph
		CGraph* pGraph(new CGraph(pPlayer));

		// Create nodes
		CBeforeBeginningNode* pBeforeBeginningNode = new CBeforeBeginningNode(pGraph);
		ATLASSERT(pBeforeBeginningNode);
		pGraph->CNodeContainer::Add(pBeforeBeginningNode);
		pGraph->SetStartNode(pBeforeBeginningNode);

		CBeginningNode* pBeginningNode = new CBeginningNode(pGraph);
		ATLASSERT(pBeginningNode);
		pGraph->CNodeContainer::Add(pBeginningNode);

		CUntapNode* pUntapNode = new CUntapNode(pGraph);
		ATLASSERT(pUntapNode);
		pGraph->CNodeContainer::Add(pUntapNode);

		CUpkeepNode* pUpkeepNode = new CUpkeepNode(pGraph);
		ATLASSERT(pUpkeepNode);
		pGraph->CNodeContainer::Add(pUpkeepNode);

		CDrawNode1* pDrawNode1 = new CDrawNode1(pGraph);
		ATLASSERT(pDrawNode1);
		pGraph->CNodeContainer::Add(pDrawNode1);

		CDrawNode2* pDrawNode2 = new CDrawNode2(pGraph);
		ATLASSERT(pDrawNode2);
		pGraph->CNodeContainer::Add(pDrawNode2);

		CMainNode* pMainNode = new CMainNode(pGraph);
		ATLASSERT(pMainNode);
		pGraph->CNodeContainer::Add(pMainNode);

		CEndOfTurnNode* pEndOfTurnNode = new CEndOfTurnNode(pGraph);
		ATLASSERT(pEndOfTurnNode);
		pGraph->CNodeContainer::Add(pEndOfTurnNode);

		CCleanUpNode1* pCleanUpNode1 = new CCleanUpNode1(pGraph);
		ATLASSERT(pCleanUpNode1);
		pGraph->CNodeContainer::Add(pCleanUpNode1);

		CCleanUpNode2* pCleanUpNode2 = new CCleanUpNode2(pGraph);
		ATLASSERT(pCleanUpNode2);
		pGraph->CNodeContainer::Add(pCleanUpNode2);

		CBeginOfCombatNode* pBeginOfCombatNode = new CBeginOfCombatNode(pGraph);
		ATLASSERT(pBeginOfCombatNode);
		pGraph->CNodeContainer::Add(pBeginOfCombatNode);

		CAttackDeclarationNode1* pAttackDeclarationNode1 = new CAttackDeclarationNode1(pGraph);
		ATLASSERT(pAttackDeclarationNode1);
		pGraph->CNodeContainer::Add(pAttackDeclarationNode1);

		CAttackDeclarationNode2* pAttackDeclarationNode2 = new CAttackDeclarationNode2(pGraph);
		ATLASSERT(pAttackDeclarationNode2);
		pGraph->CNodeContainer::Add(pAttackDeclarationNode2);

		CBlockDeclarationNode1* pBlockDeclarationNode1 = new CBlockDeclarationNode1(pGraph);
		ATLASSERT(pBlockDeclarationNode1);
		pGraph->CNodeContainer::Add(pBlockDeclarationNode1);

#ifdef M10_COMBAT
		CBlockDeclarationNode1a* pBlockDeclarationNode1a = new CBlockDeclarationNode1a(pGraph);
		ATLASSERT(pBlockDeclarationNode1a);
		pGraph->CNodeContainer::Add(pBlockDeclarationNode1a);
#endif

		CBlockDeclarationNode2* pBlockDeclarationNode2 = new CBlockDeclarationNode2(pGraph);
		ATLASSERT(pBlockDeclarationNode2);
		pGraph->CNodeContainer::Add(pBlockDeclarationNode2);

		CCombatDamageNode1a* pCombatDamageNode1a = new CCombatDamageNode1a(pGraph);
		ATLASSERT(pCombatDamageNode1a);
		pGraph->CNodeContainer::Add(pCombatDamageNode1a);

		CCombatDamageNode1b* pCombatDamageNode1b = new CCombatDamageNode1b(pGraph);
		ATLASSERT(pCombatDamageNode1b);
		pGraph->CNodeContainer::Add(pCombatDamageNode1b);

		CCombatDamageNode2a* pCombatDamageNode2a = new CCombatDamageNode2a(pGraph);
		ATLASSERT(pCombatDamageNode2a);
		pGraph->CNodeContainer::Add(pCombatDamageNode2a);

		CCombatDamageNode2b* pCombatDamageNode2b = new CCombatDamageNode2b(pGraph);
		ATLASSERT(pCombatDamageNode2b);
		pGraph->CNodeContainer::Add(pCombatDamageNode2b);

		CEndOfCombatNode* pEndOfCombatNode = new CEndOfCombatNode(pGraph);
		ATLASSERT(pEndOfCombatNode);
		pGraph->CNodeContainer::Add(pEndOfCombatNode);

		pPlayer->SetGraph(pGraph);
	}

	m_Stack.Initialize();
}

/* deprecated
DeckStatus CGame::SetDeck(int nPlayer, const StringArray& deckEntries)
{
	DeckStatistic deckStatistic;

	CPlayer* pPlayer = m_Players.GetAt(nPlayer);
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);

	Log(_T("// Deck %d (%s)\n"), nPlayer + 1, pPlayer->GetPlayerName());

	bool bNoShuffle = false;
	int nTotalCardCount = 0;
	int nTotalReferenceScore = 0;

	CString strFillCardName;

	for (size_t i = 0; i < deckEntries.size(); ++i)
	{
		CString strLine(deckEntries[i]);

		strLine.Trim();
		if (strLine.IsEmpty())
			continue;

		if (!_tcsicmp(strLine.Left(10), _T("#NOSHUFFLE")))
		{
			Log(_T("%s\n"), strLine);

			bNoShuffle = true;
		}
		else
		if (!_tcsicmp(strLine.Left(5), _T("#LIFE")))
		{
			Log(_T("%s\n"), strLine);

			CString strLife(strLine.Mid(6));
			strLife.TrimLeft();
			pPlayer->SetLife(Life(_ttoi(strLife)));			
		}
		else
		if (!_tcsicmp(strLine.Left(6), _T("#FILL ")))
		{
			Log(_T("%s\n"), strLine);

			strFillCardName = strLine.Mid(6);
			continue;
		}
		else
		if (!_tcsicmp(strLine.Left(1), _T("#")) ||
			!_tcsicmp(strLine.Left(2), _T("//")))
		{
			Log(_T("%s\n"), strLine);

			continue;
		}
		else
		{
			CString strCardName;
			int nCount = 1;

			if (_istdigit(strLine[0]))
			{
				int nIndex = strLine.Find(_T(' '));
				if (nIndex != -1)
				{
					strCardName = strLine.Mid(nIndex + 1);
					nCount = _ttoi(strLine);
				}
				else
					strCardName = strLine;
			}
			else
				strCardName = strLine;

			UINT uID = 0;

			if ((strCardName.Find(_T('(')) != -1) &&
				(strCardName.Find(_T(')')) != -1))
			{
				if (!_stscanf_s(strCardName.Mid(strCardName.Find(_T('(')) + 1), _T("%d"), &uID))
					uID = 0;
			}

			if (!uID)
			{
				// Try to search by name

				CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(strCardName, TRUE);
				if (pCardEntry)
					uID = pCardEntry->GetID();
			}

			
			//if (!uID)
			//{
			//	Log(_T("%s\n"), strCardName);
			//	return DeckStatus::UnsupportedCards;
			//}

			int nScore = -1;
			for (int j = 0; j < nCount; ++j)
			{
				counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(strCardName, uID));
				if (!cpCard.GetPointer())
				{
					Log(_T("%s\n"), strCardName);
					return DeckStatus::UnsupportedCards;
				}

				if ((cpCard->GetCardType() & CardType::Creature).Any())
				{
					++deckStatistic.nCreatureCount;

					const CreatureType_& creatureType = ((CCreatureCard*)cpCard.GetPointer())->GetCreatureType();

					ATLASSERT(creatureType.GetSize() || 
						(cpCard->GetCardType() & CardType::_ArtifactCreature).Any() 
						//e.g. Ornithopter
					);

					for (CreatureType_::Iterator j = creatureType.Begin(); j != creatureType.End(); ++j)
					{
						deckStatistic.creatureTypes.insert(*j);
						m_TP.m_PlayerCreatureTypes.insert(*j);
					}
				}
				else
				if ((cpCard->GetCardType() & CardType::_Land).Any())
					++deckStatistic.nLandCount;
				else
					++deckStatistic.nSpellCount;

				pLibrary->_AddInitialCard(cpCard.GetPointer());
				++nTotalCardCount;

				nScore = cpCard->GetScore();
				nTotalReferenceScore += nScore;

				if (!j)
					deckStatistic.cardNames.insert(cpCard->GetPrintedCardName());
			}

			if (m_bDeveloper)
			{
				if (nCount == 1)
					Log(_T("%s [%d]\n"), strCardName, nScore);
				else
					Log(_T("%d %s [%d]\n"), nCount, strCardName, nScore);
			}
			else
			{
				if (nCount == 1)
					Log(_T("%s\n"), strCardName);
				else
					Log(_T("%d %s\n"), nCount, strCardName);
			}
		}
	}

	if (!strFillCardName.IsEmpty())
	{
		int nFillCount = MAX(0, 60 - nTotalCardCount);

		Log(_T("Filling in %d %s cards\n"), nFillCount, strFillCardName);
		
		UINT uID = 0;

		if ((strFillCardName.Find(_T('(')) != -1) &&
			(strFillCardName.Find(_T(')')) != -1))
		{
			if (!_stscanf_s(strFillCardName.Mid(strFillCardName.Find(_T('(')) + 1), _T("%d"), &uID))
				uID = 0;
		}

		if (!uID)
		{
			// Try to search by name

			CCardEntry* pCardEntry = CCardStore::GetInstance()->GetCard(strFillCardName, TRUE);
			if (pCardEntry)
				uID = pCardEntry->GetID();
		}

		if (!uID)
			return DeckStatus::UnsupportedCards;

		for (int i = 0; i < nFillCount; ++i)
		{
			counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(strFillCardName, uID));
			if (!cpCard.GetPointer())
				return DeckStatus::UnsupportedCards;

			pLibrary->_AddInitialCard(cpCard.GetPointer());
			++nTotalCardCount;
			nTotalReferenceScore += cpCard->GetScore();

			if (!i)
				deckStatistic.cardNames.insert(cpCard->GetPrintedCardName());
		}
	}

	deckStatistic.nReferenceScore = nTotalReferenceScore / nTotalCardCount;
	pLibrary->GetCardColorSummary(deckStatistic.manaColorCountByCard, deckStatistic.prominentManaColorByCard, false);
	pLibrary->GetCardColorSummary(deckStatistic.manaColorCount, deckStatistic.prominentManaColor, true);
	deckStatistic.nCardCount = pLibrary->GetSize();
	pPlayer->SetDeckStatistic(deckStatistic);

	if (!bNoShuffle)
		pLibrary->Shuffle();

#ifdef _MY_DEBUG
	Log(_T("\n// Library after shuffle:\n"));
	for (int i = 0; i < pLibrary->GetSize(); ++i)
		Log(_T("// %2d) %s\n"), i, pLibrary->GetAt(i)->GetCardName());
#endif

	for (int i = 0; i < 7; ++i)
	{
		CCard* pCard = pLibrary->GetTopCard().GetPointer();
#ifdef _MY_DEBUG
		Log(_T(" Drew %s\n"), pCard->GetCardName());
#endif
		pHand->_AddCard(pCard, NULL, MoveType::Others);
	}

	Log(_T("\n// Statistics\n"));
	Log(_T("// ==========\n"));
	Log(_T("//     Cards: %d (unique: %d)\n"), deckStatistic.nCardCount, deckStatistic.cardNames.size());
	Log(_T("//     Lands: %d (%.2f%%)\n"), deckStatistic.nLandCount, static_cast<double>(deckStatistic.nLandCount) * 100.0 / static_cast<double>(deckStatistic.nCardCount));
	Log(_T("// Creatures: %d\n"), deckStatistic.nCreatureCount);
	Log(_T("//    Spells: %d\n"), deckStatistic.nSpellCount);
	Log(_T("// Deck Reference Score: %d\n"), deckStatistic.nReferenceScore);
	Log(_T("// Prominent Mana Color: %s\n"), CManaPool::Color::ToString(deckStatistic.prominentManaColor));
	Log(_T("// Prominent Card Color: %s\n"), CManaPool::Color::ToString(deckStatistic.prominentManaColorByCard));

	Log(_T("//       Creature Types: %d\n"), deckStatistic.creatureTypes.size());
	for (std::set<SingleCreatureType>::const_iterator i = deckStatistic.creatureTypes.begin(); 
		i != deckStatistic.creatureTypes.end(); ++i)
		Log(_T("//       %s\n"), i->ToString());

	Log(_T("\n"));

	return DeckStatus::Okay;
}
*/

void CGame::SetStartFirst(int nPlayer)
{
	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		CGraph* pGraph = pPlayer->GetGraph();

		if (i == nPlayer)
		{
			CNode* pBeginningNode = pGraph->GetNodeById(NodeId::BeginningStep);
			*m_cpCurrentNode = pBeginningNode;
			m_pActivePlayer = pPlayer;
			m_pPriorityPlayer = pPlayer;

			pGraph->SetCurrentNode(pBeginningNode);
			pBeginningNode->OnAfterEntry();

			pPlayer->SetStartingPlayer(TRUE);

			if (m_bMulligan)
				m_pMulliganPlayer = pPlayer;			
			else
				if (m_bStartWith)
					m_pStartWithPlayer = pPlayer;

			if (pPlayer->GetZoneById(ZoneId::_Planes)->GetSize())
			{
				CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::_Planes, ZoneId::_Effects, TRUE, MoveType::Others, pPlayer);
				pModifier3.ApplyTo(pPlayer->GetZoneById(ZoneId::_Planes)->GetTopCard());
			}
			else
			if (GetNextPlayer(pPlayer)->GetZoneById(ZoneId::_Planes)->GetSize())
			{
				GetNextPlayer(pPlayer)->GetZoneById(ZoneId::_Planes)->GetTopCard()->Move(pPlayer->GetZoneById(ZoneId::_Effects), pPlayer, MoveType::Others);
			}
		}
	}
}

void CGame::Mulligan()
{
	if (m_bMulligan && m_pMulliganPlayer)
		if (m_pMulliganPlayer->IsCommander() && !m_pMulliganPlayer->IsComputer())
		{
			CCountedCardContainer pContainer;

			int previous = 0;
			int next = 1;
			CZoneModifier pModifier2 = CZoneModifier(this, ZoneId::Hand,SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.AddSelection(MinimumValue(0), MaximumValue(100), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // what cards
			ZoneId::_ExileFaceDown, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player			

			for (int i = 0; previous != next; ++i)
			{
				previous = m_pMulliganPlayer->GetZoneById(ZoneId::Hand)->GetSize();
				
				pModifier2.ApplyTo(m_pMulliganPlayer);
				
				next = m_pMulliganPlayer->GetZoneById(ZoneId::Hand)->GetSize();


				if (previous - next > 0)
				{
					CDrawCardModifier pModifier = CDrawCardModifier(this, MinimumValue(previous - next - 1), 
						MaximumValue(previous - next - 1));
					pModifier.ApplyTo(m_pMulliganPlayer);					
				}
				else
				{
				
					CZoneCardModifier* pModifier4 = new CZoneCardModifier(ZoneId::_ExileFaceDown, CCardFilter::GetFilter(_T("cards")),
						std::auto_ptr<CCardModifier>(new CMoveCardModifier (ZoneId::_ExileFaceDown, ZoneId::Library,TRUE)));

					pModifier4->ApplyTo(m_pMulliganPlayer);


					m_pMulliganPlayer->GetZoneById(ZoneId::Library)->Shuffle();

					CPlayer* pNextMulliganPlayer = GetNextPlayer(m_pMulliganPlayer);
					if (pNextMulliganPlayer->GetStartingPlayer())
					{
						m_pStartWithPlayer =  pNextMulliganPlayer;
						m_pMulliganPlayer = NULL;
						return; // done
					}

					m_pMulliganPlayer = pNextMulliganPlayer;
					return;
				}
			}


		}

		else
		MulliganAsk();	
	
	
		
}
void CGame::StartWith()
{
	if (m_pStartWithPlayer && !m_pStartWithPlayer->IsPlanechase() && GetNextPlayer(m_pStartWithPlayer)->IsPlanechase())
	{
		

		CZone* peOppZone = GetNextPlayer(m_pStartWithPlayer)->GetZoneById(ZoneId::_Effects);
			for (int i = 0; i <  peOppZone->GetSize(); ++i)
				if (peOppZone->GetAt(i)->GetPrintedCardName() == _T("Planechase") )
				{
					counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateCard(this,_T("Planechase"), peOppZone->GetAt(i)->GetImageID()));
		m_pStartWithPlayer->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		cpToken->Move(m_pStartWithPlayer->GetZoneById(ZoneId::_Effects), m_pStartWithPlayer, MoveType::Others);
		m_pStartWithPlayer->SetPlanechase();
				}
	}
	if (m_bStartWith && m_pStartWithPlayer && !m_pMulliganPlayer )
	{
		CCardFilter temp;
		temp.AddComparer(new LeylineCardNameComparer());
		if (temp.CountIncluded(m_pStartWithPlayer->GetZoneById(ZoneId::Hand)->GetCardContainer())>0)
		StartWithAsk();
		else
		{
			CPlayer* pNextStartWithPlayer = GetNextPlayer(m_pStartWithPlayer);
			if (pNextStartWithPlayer->GetStartingPlayer())
			{
			m_pStartWithPlayer = NULL;
			return; // done
			}
			else
			{
			m_pStartWithPlayer = pNextStartWithPlayer;
			StartWithAsk();
			}
		}
	}
}

void CGame::MulliganAsk()
{
	if (!m_pMulliganPlayer->IsComputer())
	{
		// Ask current milligan player for the selections: shuffles all cards and draws X cards to hand; or keeps current cards in hand

		std::vector<SelectionEntry> entries;

		ATLASSERT(m_pMulliganPlayer->GetZoneById(ZoneId::Hand)->GetSize());
		SelectionEntry entry;

		if (!m_pMulliganPlayer->IsCommander())
		{
		
		entry.dwContext = 0;
		entry.strText.Format(_T("shuffles all cards and draws %d new card(s) to hand"), m_pMulliganPlayer->GetZoneById(ZoneId::Hand)->GetSize() - 1);
		entries.push_back(entry);

		entry.dwContext = 1;
		entry.strText.Format(_T("keeps hand"));
		entries.push_back(entry);
		}

		else
		{
			entry.dwContext = 0;
			entry.strText.Format(_T("pass to commander mulligan"));
			entries.push_back(entry);
		}

		m_Selection.AddSelectionRequest(m_cpMulliganSelectionListener.GetPointer(), entries, 1, 1, NULL, m_pMulliganPlayer);
	}
	else
	{
		// Computer

		CZone* pHand = m_pMulliganPlayer->GetZoneById(ZoneId::Hand);
		CZone* pLibrary = m_pMulliganPlayer->GetZoneById(ZoneId::Library);
		
		for (int i = 0; i < 3; ++i)
		{
			int nCurrentHandSize = pHand->GetSize();
			ATLASSERT(nCurrentHandSize);

			int nLandCount = 0;
			for (int j = 0; j < nCurrentHandSize; ++j)
				if ((pHand->GetAt(j)->GetCardType() & CardType::_Land).Any())
					++nLandCount;

			if (nLandCount >= 2 - i)
				break;

			while (pHand->GetSize())
				pLibrary->AddCard(pHand->GetAt(0), m_pMulliganPlayer);
			pLibrary->Shuffle();

			--nCurrentHandSize;

			CString strMessage;
			strMessage.Format(_T("%s shuffles all cards and draws %d new card(s) to hand"), 
				m_pMulliganPlayer->GetPlayerName(),
				nCurrentHandSize);
			Message(strMessage, GetComputerImage(), MessageImportance::High);

			for (int i = 0; i < nCurrentHandSize; ++i)
				pHand->AddCard(pLibrary->GetTopCard());
		}

		CString strMessage;
		strMessage.Format(_T("%s keeps hand"), 
			m_pMulliganPlayer->GetPlayerName());
		Message(strMessage, GetComputerImage(), MessageImportance::High);
			
		CPlayer* pNextMulliganPlayer = GetNextPlayer(m_pMulliganPlayer);
		if (pNextMulliganPlayer->GetStartingPlayer())
		{
			m_pStartWithPlayer = pNextMulliganPlayer;
			m_pMulliganPlayer = NULL;
			return; // done
		}

		m_pMulliganPlayer = pNextMulliganPlayer;
		MulliganAsk();
	}
}

void CGame::OnMulliganSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext) // 0 -> redraw
			{

				if (m_pMulliganPlayer->IsCommander())
				{
					CCountedCardContainer pContainer;

					int previous = 0;
					int next = 1;
					CZoneModifier pModifier2 = CZoneModifier(this, ZoneId::Hand,SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
					pModifier2.AddSelection(MinimumValue(0), MaximumValue(100), // select cards to reorder
						CZoneModifier::RoleType::PrimaryPlayer, // select by
						CZoneModifier::RoleType::PrimaryPlayer, // reveal to
						NULL, // what cards
						ZoneId::_ExileFaceDown, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player			

					for (int i = 0; previous != next; ++i)
					{
						previous = m_pMulliganPlayer->GetZoneById(ZoneId::Hand)->GetSize();

						pModifier2.ApplyTo(m_pMulliganPlayer);

						next = m_pMulliganPlayer->GetZoneById(ZoneId::Hand)->GetSize();


						if (previous - next > 0)
						{
							CDrawCardModifier pModifier = CDrawCardModifier(this, MinimumValue(previous - next - 1), 
								MaximumValue(previous - next - 1));
							pModifier.ApplyTo(m_pMulliganPlayer);					
						}
						else
						{

							CZoneCardModifier* pModifier4 = new CZoneCardModifier(ZoneId::_ExileFaceDown, CCardFilter::GetFilter(_T("cards")),
								std::auto_ptr<CCardModifier>(new CMoveCardModifier (ZoneId::_ExileFaceDown, ZoneId::Library,TRUE)));

							pModifier4->ApplyTo(m_pMulliganPlayer);


							m_pMulliganPlayer->GetZoneById(ZoneId::Library)->Shuffle();

							CPlayer* pNextMulliganPlayer = GetNextPlayer(m_pMulliganPlayer);
							if (pNextMulliganPlayer->GetStartingPlayer())
							{
								m_pStartWithPlayer =  pNextMulliganPlayer;
								m_pMulliganPlayer = NULL;
								return; // done
							}

							m_pMulliganPlayer = pNextMulliganPlayer;
							return;
						}
					}


				}
				else
				{
					if (!it->dwContext)
					{
					CZone* pHand = pSelectionPlayer->GetZoneById(ZoneId::Hand);
					int nCurrentHandSize = pHand->GetSize();
					ATLASSERT(nCurrentHandSize);

					CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);
					while (pHand->GetSize())
						pLibrary->AddCard(pHand->GetAt(0), pSelectionPlayer);
					pLibrary->Shuffle();

					--nCurrentHandSize;

					for (int i = 0; i < nCurrentHandSize; ++i)
						pHand->AddCard(pLibrary->GetTopCard());

					if (nCurrentHandSize)
						break;

					// otherwise ask next player

					CString strMessage;
					strMessage.Format(_T("%s keeps hand"), 
						pSelectionPlayer->GetPlayerName());
					Message(strMessage, GetHumanImage(), MessageImportance::High);
					}
				}
			}
				// 1 -> keep cards
				CPlayer* pNextMulliganPlayer = GetNextPlayer(pSelectionPlayer);
				if (pNextMulliganPlayer->GetStartingPlayer())
				{
					m_pStartWithPlayer =  pNextMulliganPlayer;
					m_pMulliganPlayer = NULL;
					return; // done
				}

				m_pMulliganPlayer = pNextMulliganPlayer;

				break;
			}
		
}
void CGame::StartWithAsk()
{
	CCardFilter temp;
	temp.AddComparer(new LeylineCardNameComparer());

	if (!m_pStartWithPlayer->IsComputer())
	{
	std::vector<SelectionEntry> entries;		

		{
			// Choose player
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; // player
			selectionEntry.strText.Format(_T("%s doesn't put any cards into battlefield"), m_pStartWithPlayer->GetPlayerName());
			entries.push_back(selectionEntry);
		}

		CCountedCardContainer pCards;

		if (temp.GetIncluded(*m_pStartWithPlayer->GetZoneById(ZoneId::Hand), pCards))			
		{
			for (int i = 0; i < pCards.GetSize(); ++i)
			{						
			const CCard* pCard =  pCards.GetAt(i);		
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("put %s card onto battlefield"), pCard->GetCardName());

			entries.push_back(selectionEntry);
			}
			
			m_StartWithSelection.AddSelectionRequest(entries, 1, 1, NULL, m_pStartWithPlayer);
		}
		
	}
	else
	{
		CCountedCardContainer pCards;
	//	CMoveCardModifier pModifier = CMoveCardModifier (ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pPlayer);
		if (temp.GetIncluded(*m_pStartWithPlayer->GetZoneById(ZoneId::Hand), pCards))		
		{
			CZone* pBattlefield = m_pStartWithPlayer->GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pCards.GetSize(); ++i)
		//		pModifier.ApplyTo(pCards.GetAt(i));
			
			pBattlefield->AddCard(pCards.GetAt(i), m_pStartWithPlayer);
		}
		
		CPlayer* pNextStartWithPlayer = GetNextPlayer(m_pStartWithPlayer);
		if (pNextStartWithPlayer->GetStartingPlayer())
		{
			m_pStartWithPlayer = NULL;
			return; // done
		}
		m_pStartWithPlayer = pNextStartWithPlayer;
		StartWithAsk();
	}
}
void CGame::OnStartWithSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext) // 0 -> redraw
			{
				CCard* pCard = (CCard*)(it->dwContext);
				//CMoveCardModifier pModifier = CMoveCardModifier (ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
				//pModifier.ApplyTo(pCard);

				CZone* pBattlefield = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				pBattlefield->AddCard( pCard, pSelectionPlayer);

				CCardFilter temp;
				temp.AddComparer(new CardNameComparer(_T("Leyline of Punishment")));

				if (temp.CountIncluded(pSelectionPlayer->GetZoneById(ZoneId::Hand)->GetCardContainer())>0)
				return;
				else
				{
					CPlayer* pNextStartWithPlayer = GetNextPlayer(m_pStartWithPlayer);
					if (pNextStartWithPlayer->GetStartingPlayer())
					{
						m_pStartWithPlayer = NULL;
						return; // done
					}
					m_pStartWithPlayer = pNextStartWithPlayer;

					break;
				}
			}	
			else
			{
			CPlayer* pNextStartWithPlayer = GetNextPlayer(m_pStartWithPlayer);
			if (pNextStartWithPlayer->GetStartingPlayer())
			{
				m_pStartWithPlayer = NULL;
				return; // done
			}
			m_pStartWithPlayer = pNextStartWithPlayer;

			break;
			}

		}
}
void CGame::StatebasedCheck()
{
	if (GetSelection().Pending() ||		// wait until all selections are gone to support Primal Plasma
		GetTriggeredResolutionPlayer())	//    and until all triggered selections are done (to support Flash + Crovax, Ascendant Hero + 1/1 creature)
		return;

	CheckPlayersLost();

	bool bRemovedCards;
	int k = 0;
	do
	{
		bRemovedCards = false;
		CCountedCardContainer cardsToRemove;
		CCountedCardContainer dyingCreatures;
		CCountedCardContainer destroyTokens;
		CCountedCardContainer removeCounters;
		CCountedCardContainer removePlanes;

		if ((m_StatebasedHint & StatebasedHint::LegendaryCards).Any())
		{
			CheckLegendaryCards(cardsToRemove);
		}

		if ((m_StatebasedHint & StatebasedHint::WorldCards).Any())
		{
			CheckWorldCards(cardsToRemove);
		}

		if ((m_StatebasedHint & StatebasedHint::PlaneswalkerCards).Any())
		{
			CheckPlaneswalkerCards(cardsToRemove);
		}

		if ((m_StatebasedHint & StatebasedHint::CreatureCards).Any())
		{
			CheckCreatureCards(dyingCreatures);
		}

		if ((m_StatebasedHint & StatebasedHint::AuraCards).Any())
		{
			CheckOrphanedAuras(cardsToRemove);
		}

		if ((m_StatebasedHint & StatebasedHint::TokenDestruction).Any())
		{
			CheckMisplacedTokens(destroyTokens);
		}

		if ((m_StatebasedHint & StatebasedHint::CounterDestruction).Any())
		{
			CheckMisplacedCounters(removeCounters);
		}

		if ((m_StatebasedHint & StatebasedHint::PhenomenonRemoval).Any() && GetPlayer(0)->IsPlanechase())
		{
			CheckPhenomenon(removePlanes);
		}

		for (int i = 0; i < destroyTokens.GetSize(); ++i)
		{
			counted_ptr<CCard> cpCard(destroyTokens.GetAt(i));
			if (cpCard->IsInplay())
				continue;
			CCard* pCard = (CCard*)(destroyTokens.GetAt(i));
			pCard->Destroy(pCard->GetController(), MoveType::Others);			

			bRemovedCards = true;
		}

		for (int i = 0; i < cardsToRemove.GetSize(); ++i)
		{
			counted_ptr<CCard> cpCard(cardsToRemove.GetAt(i));
			if (!cpCard->IsInplay())
				continue;

			cpCard->Move(cpCard->GetOwner()->GetZoneById(ZoneId::Graveyard), NULL, MoveType::Others);
			
			if (!IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s moved %s from %s to the player's %s"), 
					cpCard->GetOwner()->GetPlayerName(),
					cpCard->GetCardName(),
					ZoneId::ToString(ZoneId::Battlefield),
					ZoneId::ToString(ZoneId::Graveyard));
				Message(
					strMessage, 
					cpCard->GetOwner()->IsComputer() ? GetComputerImage() : GetHumanImage(),
					MessageImportance::High
					);
			}

			bRemovedCards = true;
		}

		for (int i = 0; i < dyingCreatures.GetSize(); ++i)
		{
			counted_ptr<CCard> cpCard(dyingCreatures.GetAt(i));
			if (!cpCard->IsInplay())
				continue;
			
			((CCreatureCard*)(dyingCreatures.GetAt(i)))->CheckDying(FALSE);
			bRemovedCards = true;
		}

		for (int i = 0; i < removeCounters.GetSize(); ++i)
		{
			counted_ptr<CCard> cpCard(removeCounters.GetAt(i));
			if (!cpCard->IsInplay())
				continue;
			CCard* pCard = (CCard*)(removeCounters.GetAt(i));
			pCard->GetCounterContainer()->CheckLimits(FALSE);			

			bRemovedCards = true;
		}

		for (int i = 0; i <removePlanes.GetSize(); ++i)
		{
			counted_ptr<CCard> cpCard(removePlanes.GetAt(i));
			if (!(cpCard->GetZoneId() == ZoneId::_Effects))
				continue;
			CCard* pCard = (CCard*)(removePlanes.GetAt(i));
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::_Planes),pCard->GetController(), MoveType::Others, CardPlacement::Bottom);		
			if (i == removePlanes.GetSize() - 1)
			{
				if (this->GetActivePlayer()->GetZoneById(ZoneId::_Planes)->GetSize())
				{
					pCard = this->GetActivePlayer()->GetZoneById(ZoneId::_Planes)->GetTopCard();
					pCard->Move(this->GetActivePlayer()->GetZoneById(ZoneId::_Effects), this->GetActivePlayer(), MoveType::Others);

				}
				else
				{
					pCard = GetNextPlayer(this->GetActivePlayer())->GetZoneById(ZoneId::_Planes)->GetTopCard();
					pCard->Move(this->GetActivePlayer()->GetZoneById(ZoneId::_Effects), this->GetActivePlayer(), MoveType::Others);
				}

			}

			bRemovedCards = true;
		}

	//	if (removePlanes.GetSize())
		//{
		   // CCardPlaneswalkModifier pModifier = CCardPlaneswalkModifier(this, TRUE, TRUE);
		//	pModifier.ApplyTo(removePlanes.GetAt(0));
	//	}

		++k;
		if (k > 50)
		{
			if (!IsThinking())
				Message(_T("Engine error: too many card removals in state-based checking"), GetDebugImage(), MessageImportance::High);
			break;
		}

	} while (bRemovedCards);

	m_StatebasedHint = StatebasedHint::Null;
}

void CGame::CheckPlayersLost()
{
	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer1 = m_Players.GetAt(i);
		pPlayer1->UpdateLost();
	}
}

void CGame::CheckPhenomenon(CCountedCardContainer& phenomenon)
{
	for (int j = 0; j < m_Players.GetSize(); ++j)
			{
				CPlayer* pPlayer = m_Players.GetAt(j);
				CZone* pInplay = pPlayer->GetZoneById(ZoneId::_Effects);
				for (int i = 0; i < pInplay->GetSize(); ++i)
				{
					CCard* pCard = pInplay->GetAt(i);
					if (!(pCard->GetCardType() & CardType::Plane).Any())
						continue;
					else 
						if (((CPlaneCard*)pCard)->GetPlaneType() == PlaneType::Phenomenon)
						{
							phenomenon.AddCard(pCard, CardPlacement::Top);
							 break;
						}
				}
			}
}

void CGame::CheckLegendaryCards(CCountedCardContainer& cardsToRemove)
{
	std::set<CString> legendaryCards;
	CString strToRemove;

	bool bFirstBrother = false;

	for (int j = 0; j < m_Players.GetSize(); ++j)
	{
		CPlayer* pPlayer = m_Players.GetAt(j);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoLegendRule)) continue;

		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (!(pCard->GetCardType() & CardType::Legendary).Any())
				continue;

			if (!legendaryCards.count(pCard->GetPrintedCardName()))
			{
				if (pCard->GetPrintedCardName() == _T("Brothers Yamazaki") && !bFirstBrother)
					bFirstBrother = true;
				else
					legendaryCards.insert(pCard->GetPrintedCardName());
				continue;
			}

			// Remove all legendary cards with this name
			strToRemove = pCard->GetPrintedCardName();
			break;
		}
	}

	if (strToRemove.IsEmpty())
		return;

	for (int j = 0; j < m_Players.GetSize(); ++j)
	{
		CPlayer* pPlayer = m_Players.GetAt(j);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoLegendRule)) continue;

		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (!(pCard->GetCardType() & CardType::Legendary).Any())
				continue;

			if (pCard->GetPrintedCardName() == strToRemove)
				cardsToRemove.AddCard(pCard, CardPlacement::Top);
		}
	}
}

bool compare_card_move_number(const CCard* first, const CCard* second)
{
	return first->GetZoneMoveNumber() < second->GetZoneMoveNumber();
}

void CGame::CheckWorldCards(CCountedCardContainer& cardsToRemove)
{
	std::set<CString> worldCards;
	CString strToRemove;

	for (int j = 0; j < m_Players.GetSize(); ++j)
	{
		CPlayer* pPlayer = m_Players.GetAt(j);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (!(pCard->GetCardType() & CardType::World).Any())
				continue;

			if (!worldCards.count(pCard->GetPrintedCardName()))
			{
				worldCards.insert(pCard->GetPrintedCardName());
				continue;
			}

			// Remove world cards with this name
			strToRemove = pCard->GetPrintedCardName();
			break;
		}
	}

	if (strToRemove.IsEmpty())
		return;

	std::list<CCard*> sameWorldCards;

	for (int j = 0; j < m_Players.GetSize(); ++j)
	{
		CPlayer* pPlayer = m_Players.GetAt(j);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (!(pCard->GetCardType() & CardType::World).Any())
				continue;

			if (pCard->GetPrintedCardName() == strToRemove)
				sameWorldCards.push_back(pCard);
		}
	}
	sameWorldCards.sort(compare_card_move_number);
	
	std::list<CCard*>::reverse_iterator rit = sameWorldCards.rbegin();
	int nLastMoveId = (*rit)->GetZoneMoveNumber();
	++rit;
	int nPreviousMoveId = (*rit)->GetZoneMoveNumber();
	bool bRemoveAll = (nLastMoveId == nPreviousMoveId);

	for (std::list<CCard*>::iterator it = sameWorldCards.begin(); it != sameWorldCards.end(); ++it)
		if (bRemoveAll)
			cardsToRemove.AddCard(*it, CardPlacement::Top);
		else if ((*it)->GetZoneMoveNumber() < nLastMoveId)
			cardsToRemove.AddCard(*it, CardPlacement::Top);
}

void CGame::CheckPlaneswalkerCards(CCountedCardContainer& cardsToRemove)
{
	std::set<PlaneswalkerType> planeswalkers;
	PlaneswalkerType toRemove;
	for (int j = 0; j < m_Players.GetSize(); ++j)
	{
		CPlayer* pPlayer = m_Players.GetAt(j);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (!(pCard->GetCardType() & CardType::Planeswalker).Any())
				continue;

			CPlaneswalkerCard* pPlaneswalker = (CPlaneswalkerCard*)pCard;

			if (!planeswalkers.count(pPlaneswalker->GetSubtype()))
			{
				planeswalkers.insert(pPlaneswalker->GetSubtype());

				// Zero loyalty counter?
				if (pPlaneswalker->GetLoyaltyCounter()->GetCount() <= 0)
					cardsToRemove.AddCard(pPlaneswalker, CardPlacement::Top);

				continue;
			}

			// Remove all planeswalker cards with this subtype
			toRemove = pPlaneswalker->GetSubtype();
			break;
		}
	}

	if (!cardsToRemove.GetSize() && toRemove == PlaneswalkerType::Null)
		return;

	if (toRemove != PlaneswalkerType::Null)
		for (int j = 0; j < m_Players.GetSize(); ++j)
		{
			CPlayer* pPlayer = m_Players.GetAt(j);
			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

			for (int i = 0; i < pInplay->GetSize(); ++i)
			{
				CCard* pCard = pInplay->GetAt(i);
				if (!(pCard->GetCardType() & CardType::Planeswalker).Any())
					continue;

				CPlaneswalkerCard* pPlaneswalker = (CPlaneswalkerCard*)pCard;

				if (pPlaneswalker->GetSubtype() == toRemove)
					cardsToRemove.AddCard(pPlaneswalker, CardPlacement::Top);
			}
		}
}

void CGame::CheckMisplacedTokens(CCountedCardContainer& cardsToRemove)
{
	for (int j = 0; j < m_Players.GetSize(); ++j)
	{
		CPlayer* pPlayer = m_Players.GetAt(j);
		CZone* pGrave = pPlayer->GetZoneById(ZoneId::Graveyard);
		CZone* pExile = pPlayer->GetZoneById(ZoneId::Exile);
		CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
		CZone* pLib = pPlayer->GetZoneById(ZoneId::Library);
		CCard* pCard;

		for (int i = 0; i < pGrave->GetSize(); ++i)
		{
			pCard = pGrave->GetAt(i);
			if ((pCard->GetCardType() & CardType::Token).Any())
				cardsToRemove.AddCard(pCard, CardPlacement::Top);					
		}

		for (int i = 0; i < pExile->GetSize(); ++i)
		{
			pCard = pExile->GetAt(i);
			if ((pCard->GetCardType() & CardType::Token).Any())
				cardsToRemove.AddCard(pCard, CardPlacement::Top);
		}

		for (int i = 0; i < pHand->GetSize(); ++i)
		{
			pCard = pHand->GetAt(i);
			if ((pCard->GetCardType() & CardType::Token).Any())
				cardsToRemove.AddCard(pCard, CardPlacement::Top);
		}

		for (int i = 0; i < pLib->GetSize(); ++i)
		{
			pCard = pLib->GetAt(i);
			if ((pCard->GetCardType() & CardType::Token).Any())
				cardsToRemove.AddCard(pCard, CardPlacement::Top);
		}
	}
}

void CGame::CheckCreatureCards(CCountedCardContainer& dyingCreatures)
{
	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);

		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
				if (pCreatureCard->CheckDying(TRUE))
					dyingCreatures.AddCard(pCreatureCard, CardPlacement::Top);
			}
		}
	}
}

void CGame::CheckMisplacedCounters(CCountedCardContainer& removeCounters)
{
	CPlayer* pPlayer = m_pActivePlayer; 
	do
	{
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (pCard->GetCounterContainer()->CheckLimits(TRUE))
				removeCounters.AddCard(pCard, CardPlacement::Top);
		}

	} while ((pPlayer = GetNextPlayer(pPlayer)) != m_pActivePlayer);
}

void CGame::CheckOrphanedAuras(CCountedCardContainer& orphanedAuras)
{
	CPlayer* pPlayer = m_pActivePlayer; 
	do
	{
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if ((pCard->GetCardType() & CardType::_Aura).Any())
			{
				CEnchant* pEnchantAbility = NULL;
				for (int i = 0; i < pCard->GetAbilityCount(); ++i)
				{
					pEnchantAbility = dynamic_cast<CEnchant*>(pCard->GetAbility(i));
					if (pEnchantAbility)
						break;
				}

				if (!pEnchantAbility)
				{
					ATLASSERT(false);
					continue;
				}

				if (pEnchantAbility->GetEnchantedOnCard())
				{
					BOOL bTrick;
					// Added this check to support removing auras that can only
					// enchant permanents from specific controller : 3/4/2011
					if (!pEnchantAbility->GetTargeting()->SubjectAllowed(
						pEnchantAbility->GetEnchantedOnCard(), TRUE, bTrick))
						orphanedAuras.AddCard(pCard, CardPlacement::Top);
					continue;
				}

				if (!pEnchantAbility->SelectEnchantTarget())
				{
					ATLASSERT(false); // aura cards with no legal targets shouldn't be in the battlefield in the first place
					orphanedAuras.AddCard(pCard, CardPlacement::Top);
					continue;
				}

				return; // ask for one attachment selection at a time
			}
		}

	} while ((pPlayer = GetNextPlayer(pPlayer)) != m_pActivePlayer);
}

void CGame::GetActions(CActionContainer& actionContainer, bool bSetNames)
{
	StatebasedCheck();

	m_TP.m_ActionAbilities.RemoveAll();
	m_TP.m_ActionCards.RemoveAll();

	int nPlayerCount = m_Players.GetSize();

	Mulligan();
	StartWith();

	if (!m_pTriggeredResolutionPlayer)
	{
		if (m_pSavedPriorityPlayer)
		{
			SetPriorityPlayer(m_pSavedPriorityPlayer);
			m_pSavedPriorityPlayer = NULL;
		}

		m_Selection.GetSelectionActionContainer(actionContainer);
		if (actionContainer.GetSize())
			return;
	}
	else
	{
		if (m_pPriorityPlayer != m_pTriggeredResolutionPlayer)
		{
			ATLASSERT(!m_pSavedPriorityPlayer); 

			m_pSavedPriorityPlayer = m_pPriorityPlayer;
			SetPriorityPlayer(m_pTriggeredResolutionPlayer);
		}
	}

	// 7/11/2002: Triggered spells do not use IsPlayable and are created if triggered. However they are only added
	// to the stack in the next available chance when triggered effects are allowed.
	if (!m_pTriggeredResolutionPlayer &&
		(GetCurrentNode()->GetValidAbilityType() &
		AbilityType::_TriggerOkay) == AbilityType::_TriggerOkay)
	{
		// Triggered abilities of active player
		CTriggeredActionContainer* pTriggeredActionContainer = 
			m_pActivePlayer->GetTriggeredActionContainer();	// No need to free this container

		if (pTriggeredActionContainer->GetSize())
		{
			actionContainer.AddClones((const CActionContainer&)*pTriggeredActionContainer);
											// Need to clone triggered actions because actions in action
											// containers cannot be changed when other actions in the
											// same container are performed. This requirement is 
											// needed to support push/pop actions in MinimaxAB() so
											// that the actions contained in the local variable
											// actionContainer can be reused in iterations.
											// Since performing triggered actions may change other
											// actions' m_nIndex member, cloning actions here is needed.

			if (!m_pSavedPriorityPlayer)
				m_pSavedPriorityPlayer = m_pPriorityPlayer;

			SetPriorityPlayer(m_pActivePlayer);

			if (GetCurrentNode()->GetNodeId() == NodeId::CleanupStep2)
			{
				((CCleanUpNode2*)GetCurrentNode())->SetTriggered(TRUE);
			}

			return;
		}
		else
		{
			// Triggered abilities of other players
			for (int i = 0; i < nPlayerCount; ++i)	
			{
				CPlayer* pPlayer = m_Players.GetAt(i);
				if (pPlayer != m_pActivePlayer)
				{
					pTriggeredActionContainer = 
						pPlayer->GetTriggeredActionContainer();	// No need to free this container

					if (pTriggeredActionContainer->GetSize())
					{
						actionContainer.AddClones((const CActionContainer&)*pTriggeredActionContainer);	// See note above

						if (!m_pSavedPriorityPlayer)
							m_pSavedPriorityPlayer = m_pPriorityPlayer;

						SetPriorityPlayer(pPlayer);

						if (GetCurrentNode()->GetNodeId() == NodeId::CleanupStep2)
						{
							((CCleanUpNode2*)GetCurrentNode())->SetTriggered(TRUE);
						}

						return;
					}
				}
			}
		}
	}

	bool bThinking = IsThinking();

	if (!m_pTriggeredResolutionPlayer)
	{
		if (m_pSavedPriorityPlayer)
		{
			SetPriorityPlayer(m_pSavedPriorityPlayer);
			m_pSavedPriorityPlayer = NULL;
		}

		// Get stack actions
		m_Stack.GetDenialActions(actionContainer,
			!bThinking,					// Include tricks?
			bSetNames);

		// Get current graph node actions
		if (!m_Stack.GetStackSize())
			for (int i = 0; i < nPlayerCount; ++i)	
			{
				CPlayer* pPlayer = m_Players.GetAt(i);
				CNode* pNode = pPlayer->GetGraph()->GetCurrentNode();

				if (pNode)
					pNode->GetNodeActions(actionContainer);
			}
	}

	// Ability actions

	/*
	NodeId nodeId = m_pActivePlayer->GetGraph()->GetCurrentNode()->GetNodeId();
	bool bOptimizationAllowed = bThinking && !m_Stack.GetStackSize() && !m_pTriggeredResolutionPlayer;

	CAbilityContainer nodeAbilities;
	if (bOptimizationAllowed && (nodeId & NodeId::_Optimized).Any())
	{
		//std::set<DWORD> const * pNodeAbilities = NULL;
		//if (IsThinking() &&
		//	!m_Stack.GetStackSize() &&
		//	(nodeId & m_TP.m_NodeAbilityNodes).Any() &&
		//	!m_pTriggeredResolutionPlayer)
		//{
		//	std::map<NodeId::Enum, std::set<DWORD>>::const_iterator it = m_TP.m_NodeAbilities.find(nodeId.Get());
		//	if (it != m_TP.m_NodeAbilities.end() &&
		//		it->second.size())
		//		pNodeAbilities = &(it->second);
		//}

		int nOptimizedAbilityCount = m_OptimizedAbilities.GetSize();
		for (int i = 0; i < nOptimizedAbilityCount; ++i)
		{
			CAbility* pAbility = m_OptimizedAbilities.GetAt(i).GetPointer();
			if (pAbility->GetUseInSpecificNode().Any() &&
				(pAbility->GetUseInSpecificNode() & nodeId).Any())
				nodeAbilities.Add(pAbility);
		}

		if (!nodeAbilities.GetSize())
			return; // none of the optimized abilities can be used right now
	}

	// Get all ability actions in zones
	for (int i = 0; i < nPlayerCount; ++i) 
	{
		CPlayer* pPlayer = m_Players.GetAt(i);

		if (pPlayer != m_pPriorityPlayer) // 5/7/2001
			continue;

		int nZoneCount = pPlayer->GetZoneCount();
		for (int j = 0; j < nZoneCount; ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);

			if ((pZone->GetZoneId() & ZoneId::_SecondaryZones).Any())
				continue; // e.g. Stack and tokens

			if (!pZone->IsVisibleToOwner() && !pZone->IsVisibleToOthers())
				continue;

			// Usually just deal with Hand, In-play and Graveyard zones here

			CAbilityContainer zoneAbilities;
			if (bOptimizationAllowed && (pZone->GetZoneId() & ZoneId::_OptimizedZones).Any())		
			{
				if ((nodeId & NodeId::_Optimized).Any())
				{
					int nNodeAbilityCount = nodeAbilities.GetSize();
					for (int k = 0; k < nNodeAbilityCount; ++k)
					{
						CAbility* pAbility = nodeAbilities.GetAt(k).GetPointer();
						if ((pAbility->GetPlayableFrom() & pZone->GetZoneId()).Any())
							zoneAbilities.Add(pAbility);
					}
				}
				else
				{
					int nOptimizedAbilityCount = m_OptimizedAbilities.GetSize();
					for (int k = 0; k < nOptimizedAbilityCount; ++k)
					{
						CAbility* pAbility = m_OptimizedAbilities.GetAt(k).GetPointer();
						if ((pAbility->GetPlayableFrom() & pZone->GetZoneId()).Any())
							zoneAbilities.Add(pAbility);
					}
				}

				if (!zoneAbilities.GetSize())
					continue; // none of the optimized abilities can be used in this zone
			}

			GetActionsInZone(actionContainer, pZone, bSetNames,
				zoneAbilities); // when this list is non-empty, consider only these abilities or any mana producing abilities
		}

		// Undo action

		if (pPlayer->GetUndoActions()->GetSize())
			actionContainer.Add(pPlayer->GetUndoActions()->GetAt(
				pPlayer->GetUndoActions()->GetSize() - 1).GetPointer());	
	}
*/

	NodeId nodeId = m_pActivePlayer->GetGraph()->GetCurrentNode()->GetNodeId();

	GetActionAbilities(m_TP.m_ActionAbilities, m_TP.m_ActionCards);
	const CAbilityContainer& actionAbilities(m_TP.m_ActionAbilities);

	int nAbilityCount(actionAbilities.GetSize());
	for (int i = 0; i < nAbilityCount; ++i)
	{
		CAbility* pAbility(actionAbilities.GetAt(i).GetPointer());

		CActionContainer* pActionContainer = pAbility->GetAbilityActions(
			!bThinking,					// Include tricks?
			bSetNames
			);

		if (pActionContainer)
		{
			actionContainer.Add(*pActionContainer);

#ifdef	_MY_DEBUG
			if (!bSetNames)
				for (int k = 0; k < pActionContainer->GetSize(); ++k)
					VERIFY(pActionContainer->GetAt(k)->GetActionName().IsEmpty() &&
						pActionContainer->GetAt(k)->GetCostName().IsEmpty());
#endif
			delete pActionContainer;

			// Optimization for damage assignments

			if (nodeId == NodeId::CombatDamageStep1a ||
				nodeId == NodeId::CombatDamageStep2a ||
				nodeId == NodeId::DeclareBlockersStep1a)
			{
				if (actionContainer.GetSize())
				{
					// Serialize all assignments and show them one by one from each creature (may impact GUI_COMBAT_WIP)
					break;
				}
			}
		}
	}

	// Undo action

	for (int i = 0; i < nPlayerCount; ++i) 
	{
		CPlayer* pPlayer = m_Players.GetAt(i);

		if (pPlayer != m_pPriorityPlayer) // 5/7/2001
			continue;

		if (pPlayer->GetUndoActions()->GetSize())
			actionContainer.Add(pPlayer->GetUndoActions()->GetAt(
				pPlayer->GetUndoActions()->GetSize() - 1).GetPointer());	
	}

	/* Moved into CCombatDamageAssignmentAction::SetToSimpleAssignment()
	// Optimizations for damage assignment actions

	NodeId nodeId = m_pActivePlayer->GetGraph()->GetCurrentNode()->GetNodeId();

	if (nodeId == NodeId::CombatDamageStep1a ||
		nodeId == NodeId::CombatDamageStep2a)
	{
		// Set transient move Ids for simple assignments so that all such actions
		// can be performed in series with no permutation in thinking.

		for (int i = 0; i < actionContainer.GetSize(); ++i)
		{
			CAction* pAction = actionContainer.GetAt(i).GetPointer();
			if (pAction->IsCombatDamageAssignment())
			{
				CCombatDamageAssignmentAction* pAction2 = (CCombatDamageAssignmentAction*)pAction;
				if (!pAction2->IsSimpleAssignment())
					continue;

				pAction2->SetRequiredTransientActionId(ActionTransientId::CombatDamageAssignment);
			}
		}
	}
	*/
}

/*
void CGame::GetActionsInZone(CActionContainer& actionContainer, CZone* pZone, bool bSetNames, const CAbilityContainer& zoneAbilities)
{
	bool bThinking = IsThinking();
	bool bOptimizationAllowed = bThinking && !m_Stack.GetStackSize() && !m_pTriggeredResolutionPlayer;

	ZoneId zoneId = pZone->GetZoneId();
	NodeId nodeId = GetCurrentNode()->GetNodeId();
	bool bPostCombat = (nodeId == NodeId::MainPhaseStep && !static_cast<CMainNode*>(GetCurrentNode())->IsPreCombat());

	if (bOptimizationAllowed && bPostCombat)
	{
		if (zoneId == ZoneId::Battlefield) 
			return;
	}

	int nZoneAbilityCount(zoneAbilities.GetSize());

	std::set<DWORD> processedCards;

	int nCardCount = pZone->GetSize();
	for (int k = 0; k < nCardCount; ++k)
	{
		CCard* pCard = pZone->GetAt(k).GetPointer();

		if (pCard->GetOrientation()->IsFaceDown())	// 5/7/2001
			continue;

		if (bThinking)
		{
			if (!IsCardVisible(pCard))
				continue;

			if (bOptimizationAllowed && bPostCombat)
			{
				// Optimization: only consider in-play spells in post combat
				if (zoneId == ZoneId::Hand) 
				{
					bool bFound = false;

					const CPtrContainer_<CAbility>& spells(pCard->GetSpells());
					for (int i = 0; i < spells.GetSize(); ++i)
						if (((CSpell*)spells.GetAt(i))->GetInPlayIfSuccess())
						{
							bFound = true;
							break;
						}

					if (!bFound)
						continue;

					// currently not considering mana production spells from hand
				}
			}

			if ((zoneId != ZoneId::Battlefield) ||
				((pCard->GetCardType() & CardType::_Land).Any() && 
					!pCard->GetOrientation()->IsTapped() &&
					!pCard->IsModified() &&
					!pCard->IsEnchanted()))
			{
				// Skip dupliate cards but limit the comparsions to non-enchanted land cards
				if (processedCards.count(pCard->GetGameClassID()))
					continue;

				processedCards.insert(pCard->GetGameClassID());
			}
		}

		int nAbilityCount = pCard->GetAbilityCount();
		for (int l = 0; l < nAbilityCount; ++l)
		{
			CAbility* pAbility = pCard->GetAbility(l).GetPointer();

			if (nZoneAbilityCount
				//&& !(pAbility->GetAbilityType() & AbilityType::_ProduceMana).Any()
				)
			{
				if (zoneAbilities.FindIndex(pAbility) == -1)
					continue;
			}

			CActionContainer* pActionContainer = pAbility->GetAbilityActions(
				!bThinking,					// Include tricks?
				bSetNames
				);

			if (pActionContainer)
			{
				actionContainer.Add(*pActionContainer);

#ifdef	_MY_DEBUG
				if (!bSetNames)
					for (int k = 0; k < pActionContainer->GetSize(); ++k)
						VERIFY(pActionContainer->GetAt(k)->GetActionName().IsEmpty() &&
							pActionContainer->GetAt(k)->GetCostName().IsEmpty());
#endif
				delete pActionContainer;
			}
		}
	}
}
*/

void CGame::GetActionAbilities(CAbilityContainer& actionAbilities, CCountedCardContainer& actionCards)
{
	// Ability actions

	bool bThinking = IsThinking();
	NodeId nodeId = m_pActivePlayer->GetGraph()->GetCurrentNode()->GetNodeId();
	bool bOptimizationAllowed = bThinking && !m_Stack.GetStackSize() && !m_pTriggeredResolutionPlayer;

	CAbilityContainer nodeAbilities;
	if (bOptimizationAllowed && (nodeId & NodeId::_Optimized).Any())
	{
		int nOptimizedAbilityCount = m_OptimizedAbilities.GetSize();
		for (int i = 0; i < nOptimizedAbilityCount; ++i)
		{
			CAbility* pAbility = m_OptimizedAbilities.GetAt(i).GetPointer();
			if (pAbility->GetUseInSpecificNode().Any() &&
				(pAbility->GetUseInSpecificNode() & nodeId).Any())
				nodeAbilities.Add(pAbility);
		}

		if (!nodeAbilities.GetSize())
			return; // none of the optimized abilities can be used right now
	}

	// Get all abilities in zones
	int nPlayerCount = m_Players.GetSize();
	for (int i = 0; i < nPlayerCount; ++i) 
	{
		CPlayer* pPlayer = m_Players.GetAt(i);

		if (pPlayer != m_pPriorityPlayer) // 5/7/2001
			continue;

		int nZoneCount = pPlayer->GetZoneCount();
		for (int j = 0; j < nZoneCount; ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);

			if ((pZone->GetZoneId() & ZoneId::_SecondaryZones).Any())
				continue; // e.g. Stack and tokens
						

			if (!pZone->IsVisibleToOwner() && !pZone->IsVisibleToOthers() && pZone->GetZoneId() != ZoneId::Library)
				//!(pZone->GetZoneId() == ZoneId::Library && pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop)))
				continue;

		//	if  (pZone->GetZoneId() == ZoneId::Library && !pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop))
			//	continue;

			// Usually just deal with Hand, In-play and Graveyard zones here

			CAbilityContainer zoneAbilities;
			if (bOptimizationAllowed && (pZone->GetZoneId() & ZoneId::_OptimizedZones).Any())		
			{
				if ((nodeId & NodeId::_Optimized).Any())
				{
					int nNodeAbilityCount = nodeAbilities.GetSize();
					for (int k = 0; k < nNodeAbilityCount; ++k)
					{
						CAbility* pAbility = nodeAbilities.GetAt(k).GetPointer();
						if ((pAbility->GetPlayableFrom() & pZone->GetZoneId()).Any())
							zoneAbilities.Add(pAbility);
					}

					if (!zoneAbilities.GetSize())
						continue; // none of the optimized abilities can be used in this zone
				}
				else
				{
					int nOptimizedAbilityCount = m_OptimizedAbilities.GetSize();
					for (int k = 0; k < nOptimizedAbilityCount; ++k)
					{
						CAbility* pAbility = m_OptimizedAbilities.GetAt(k).GetPointer();
						if ((pAbility->GetPlayableFrom() & pZone->GetZoneId()).Any())
							zoneAbilities.Add(pAbility);
					}

					if (!zoneAbilities.GetSize())
					{
						if (pZone->GetZoneId() == ZoneId::Graveyard)
						{
							if (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromGraveyard))
								continue; // none of the optimized abilities can be used in this zone, skip this zone

							// If cards can be played from graveyard, just let GetActionAbilitiesInZone() to go through all the cards
						}
						else
							//continue; // none of the optimized abilities can be used in this zone, skip this zone
						
						if (pZone->GetZoneId() == ZoneId::Library)
						{
							if (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop))
								continue; // none of the optimized abilities can be used in this zone, skip this zone

							// If cards can be played from graveyard, just let GetActionAbilitiesInZone() to go through all the cards
						}
						else
							continue; // none of the optimized abilities can be used in this zone, skip this zone
					}
				}
			}

			GetActionAbilitiesInZone(actionAbilities, actionCards, pZone, 
				zoneAbilities); // when this list is non-empty, consider only these abilities or any mana producing abilities
		}
	}
}

void CGame::GetActionAbilitiesInZone(CAbilityContainer& actionAbilities, CCountedCardContainer& actionCards, CZone* pZone, const CAbilityContainer& zoneAbilities)
{
	bool bThinking = IsThinking();
	bool bOptimizationAllowed = bThinking && !m_Stack.GetStackSize() && !m_pTriggeredResolutionPlayer;

	ZoneId zoneId = pZone->GetZoneId();
	NodeId nodeId = GetCurrentNode()->GetNodeId();
	bool bPostCombat = (nodeId == NodeId::MainPhaseStep && !static_cast<CMainNode*>(GetCurrentNode())->IsPreCombat());

	/*if (bOptimizationAllowed && bPostCombat) // 20-01-2011 disabled to force AI to think during second main phase
	{
		if (zoneId == ZoneId::Battlefield) 
			return;
	}*/

	int nZoneAbilityCount(zoneAbilities.GetSize());

	std::set<DWORD> processedCards;

	int nCardCount = pZone->GetSize();

	if (pZone->GetZoneId() != ZoneId::Library)

		for (int k = 0; k < nCardCount; ++k)
		{
			CCard* pCard = pZone->GetAt(k);

			if (pCard->GetOrientation()->IsFaceDown())	// 5/7/2001		
				continue;
			//else                      // Still can't understand why it doesn't work
			//	if (!(pZone->GetZoneId() == ZoneId::Library && pZone->GetTopCard() == pCard 
			//	&&  pZone->GetPlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop)))
			//	continue;

			bool bCheckForManaProducingAbilities = false;
			if (bThinking)
			{
				if (!IsCardVisible(pCard))
					//&& !(pZone->GetZoneId() == ZoneId::Library && pZone->GetTopCard() == pCard           // Still can't understand why it doesn't work
					//	&&  pZone->GetPlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop)))
					continue;

				if (bOptimizationAllowed && bPostCombat)
				{
					// Optimization: only consider in-play spells in post combat
					if (zoneId == ZoneId::Hand) 
					{
						bool bFound = false;

						const CPtrContainer_<CSpell>& spells(pCard->GetSpells());
						for (int i = 0; i < spells.GetSize(); ++i)
							if (spells.GetAt(i)->GetInPlayIfSuccess())
							{
								bFound = true;
								break;
							}

							if (!bFound)
								continue;

							// currently not considering mana production spells from hand
					}
				}

				if ((zoneId != ZoneId::Battlefield) || // if not in Battlefield, same class of card should behave exactly the same
					((//pCard->GetCardType() & CardType::_Land).Any() && 
					!(nodeId & (NodeId::UntapStep | NodeId::DrawStep1 | NodeId::DeclareAttackersStep1 | NodeId::DeclareBlockersStep1 | NodeId::DeclareBlockersStep1a | NodeId::CombatDamageStep1a | NodeId::CombatDamageStep2a)).Any() &&
					!pCard->GetOrientation()->IsTapped() && // or if in Battlefield, cards are supposed to be the same if they are not modified in any way
					!pCard->IsModified() &&
					!pCard->IsEnchanted())))
				{
					if (processedCards.count(pCard->GetGameClassID()))
						bCheckForManaProducingAbilities = true; // we already processed this type of class here but check to see if has mana producing abilities, if yes, we still allow it for CheckManaActions.
					else
						processedCards.insert(pCard->GetGameClassID());
				}
			}

			bool bAddAbilities = !bCheckForManaProducingAbilities;
			CAbilityContainer abilities;
			int nAbilityCount = pCard->GetAbilityCount();
			for (int l = 0; l < nAbilityCount; ++l)
			{
				CAbility* pAbility = pCard->GetAbility(l);

				if (nZoneAbilityCount)
				{
					if (zoneAbilities.FindIndex(pAbility) == -1)
						continue;
				}

				if (bCheckForManaProducingAbilities)
				{
					if (!(pAbility->GetAbilityType() & AbilityType::_ProduceMana).Any())
						continue;

					bAddAbilities = true;
				}

				abilities.Add(pAbility);
			}

			if (abilities.GetSize() && bAddAbilities)
			{
				actionAbilities.Add(abilities);
				actionCards.AddCard(pCard, CardPlacement::Top);
			}
		}
	else
	{
		if (nCardCount == 0) return;

		CCard* pCard = pZone->GetTopCard();

		bool bCheckForManaProducingAbilities = false;
		if (bThinking)
		{			

			/*if (bOptimizationAllowed && bPostCombat)
			{
				// Optimization: only consider in-play spells in post combat
				if (zoneId == ZoneId::Hand) 
				{
					bool bFound = false;

					const CPtrContainer_<CSpell>& spells(pCard->GetSpells());
					for (int i = 0; i < spells.GetSize(); ++i)
						if (spells.GetAt(i)->GetInPlayIfSuccess())
						{
							bFound = true;
							break;
						}

						if (!bFound)
							return;

						// currently not considering mana production spells from hand
				}
			}*/
			
			/*if ((zoneId != ZoneId::Battlefield) || // if not in Battlefield, same class of card should behave exactly the same
				((//pCard->GetCardType() & CardType::_Land).Any() && 
				!(nodeId & (NodeId::UntapStep | NodeId::DrawStep1 | NodeId::DeclareAttackersStep1 | NodeId::DeclareBlockersStep1 | NodeId::DeclareBlockersStep1a | NodeId::CombatDamageStep1a | NodeId::CombatDamageStep2a)).Any() &&
				!pCard->GetOrientation()->IsTapped() && // or if in Battlefield, cards are supposed to be the same if they are not modified in any way
				!pCard->IsModified() &&
				!pCard->IsEnchanted())))
			{*/
				if (processedCards.count(pCard->GetGameClassID()))
					bCheckForManaProducingAbilities = true; // we already processed this type of class here but check to see if has mana producing abilities, if yes, we still allow it for CheckManaActions.
				else
					processedCards.insert(pCard->GetGameClassID());
			//}
		}

		bool bAddAbilities = !bCheckForManaProducingAbilities;
		CAbilityContainer abilities;
		int nAbilityCount = pCard->GetAbilityCount();
		for (int l = 0; l < nAbilityCount; ++l)
		{
			CAbility* pAbility = pCard->GetAbility(l);

			if (nZoneAbilityCount)
			{
				if (zoneAbilities.FindIndex(pAbility) == -1)
					continue;
			}

			if (bCheckForManaProducingAbilities)
			{
				if (!(pAbility->GetAbilityType() & AbilityType::_ProduceMana).Any())
					continue;

				bAddAbilities = true;
			}

			abilities.Add(pAbility);
		}

		if (abilities.GetSize() && bAddAbilities)
		{
			actionAbilities.Add(abilities);
			actionCards.AddCard(pCard, CardPlacement::Top);
		}
	}
}

int CGame::Think(const CActionContainer& actionContainer,
				 CStrategy& strategy,
				 CScore* pBestScore)
{
#ifdef _MY_DEBUG
	if (m_MT.RollOverNeeded())
		m_MT.RollOver();
#endif

	ShowProgress();

	m_TD.Reset();
	m_TD.m_pThinkingPlayer = m_pPriorityPlayer;
	m_TD.m_nTurnStartedThinking = m_nGameTurnNumber;
	m_TD.m_nDrawStartedThinking = m_nGameDrawNumber;
	m_TD.m_nActionStartedThinking = m_nActionNumber;
	m_TD.m_pRootActionContainer = &actionContainer;

	m_SearchBreak = SearchBreak::Continue;

	NodeId nodeId = GetCurrentNode()->GetNodeId();
	if (m_pActivePlayer != m_pPriorityPlayer)
	{
		// Opponent's turn

		if ((nodeId & NodeId::_BeginningPhase).Any())
			m_TD.m_nDrawLookAhead = OPPONENTS_BEGINNING_PHASE_DRAW_LOOKAHEAD;
		else
		if ((nodeId & NodeId::_CombatPhase).Any())
			m_TD.m_nDrawLookAhead = DEFENSIVE_DRAW_LOOKAHEAD;
		else
			m_TD.m_nDrawLookAhead = OPPONENT_TURNS_DRAW_LOOKAHEAD;
	}
	else
	{
		// My turn

		if ((nodeId & NodeId::_BeginningPhase).Any())
			m_TD.m_nDrawLookAhead = MY_BEGINNING_PHASE_DRAW_LOOKAHEAD;
		else
		if ((nodeId & NodeId::_CombatPhase).Any())
			m_TD.m_nDrawLookAhead = OFFENSIVE_DRAW_LOOKAHEAD;
		else
			m_TD.m_nDrawLookAhead = MY_TURNS_DRAW_LOOKAHEAD;
	}

#ifdef USE_HIGH_CREATURE_COUNT_LOOKAHEAD

	if (m_TD.m_nDrawLookAhead + HIGH_CREATURE_COUNT_DRAW_LOOKAHEAD_DELTA >= 1)
	{
		int nCount = 0;
		for (int j = 0; j < m_Players.GetSize(); ++j)
		{
			CPlayer* pPlayer = m_Players.GetAt(j);
			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

			for (int k = 0; k < pInplay->GetSize(); ++k)
				if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any())
					++nCount;			
		}

		if (nCount >= HIGH_CREATURE_COUNT_THRESHOLD)
		{
			m_TD.m_nDrawLookAhead += HIGH_CREATURE_COUNT_DRAW_LOOKAHEAD_DELTA;
		}
	}

#endif

	//if (m_bDeveloper)
	//	Log(_T(" Lookahead: %d draw(s)\n"), m_TD.m_nDrawLookAhead);

	m_TD.m_bRemoveNegativeActions = true;

	ThinkingStarted();	

	if (m_TP.m_bBoostProcess)
		SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);

	try
	{
		do
		{
			strategy.RemoveAll();

			m_TS = ThinkStatistic();

#ifdef USE_NS_CUT
			DWordArray temp1;
#endif

			Push();

			*pBestScore =  MinimaxAB(0,
									CScore::s_Minimum,
									CScore::s_Maximum,
#ifdef USE_NS_CUT
									NULL, temp1,
#endif
									strategy,
									m_TS.m_nExpirations,
									m_TP.m_dwMaxDuration
#ifdef TRACE_ACTION_NAMES
									, _T("Start")
#endif
									);

			Pop();

			if (!strategy.GetSize())
			{
				ATLASSERT(false);

				ATLASSERT(m_TD.m_bRemoveNegativeActions);
				m_TD.m_bRemoveNegativeActions = false;
			}

		} while (!strategy.GetSize());

	}
	catch (...)
	{
		m_TD.m_pThinkingPlayer = NULL;

		HideProgress();
		ThinkingStopped();

		if (m_TP.m_bBoostProcess)
			SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);

		throw;
	}

#ifdef _MY_DEBUG
	m_MT.Log(_T("[FINAL]"));
	for (int j = 0; j < strategy.GetSize(); ++j)
	{
		m_MT.Log(_T("%s; "), strategy.GetActionAt(j)->GetActionName());

		ATLTRACE(_T("[strategy:%d][%s]\n"),
			j, strategy.GetActionAt(j)->GetActionName());
	}
	m_MT.Log(_T("\n\n"));
#endif

	/*
	if (m_bDeveloper)
	{
		Log(_T(" Final:"));
		for (int j = 0; j < strategy.GetSize(); ++j)
			Log(_T(" %s;"), strategy.GetActionAt(j)->GetActionName());
		Log(_T("\n"));
	}
	*/

	counted_ptr<CAction> cpRootMove(strategy.GetFirstAction());
	strategy.RemoveFirstAction();

	int nRootMoveIndex = -1;
	for (int i = 0; i < actionContainer.GetSize(); ++i)
		if (*actionContainer.GetAt(i) == *cpRootMove)
		{
#ifdef _MY_DEBUG
			ATLASSERT(actionContainer.GetAt(i)->GetActionText() == cpRootMove->GetActionText()); // Check CXXXAction::Equals()
#endif
			nRootMoveIndex = i;
			break;
		}

	ATLASSERT(nRootMoveIndex != -1);
	if (nRootMoveIndex == -1)
	{
		Log(_T("Error: decided-root-action not found\n"));
		nRootMoveIndex = 0;
	}

	m_TD.m_pThinkingPlayer = NULL;

#ifdef THINK_HISTORY
	m_TD.m_ThinkHistory.Clear();
#endif

	HideProgress();
	ThinkingStopped();

	if (m_TP.m_bBoostProcess)
		SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);

#ifdef GATHER_CHANGED_VARIABLE_STATS
	Log(_T("Max no. of changed variables per think-step: %d\n"),
		m_TS.m_nMaxChangedVariableCount);

	Log(_T("Average no. of changed variables per think-step: %.2f\n"),
		m_TS.m_AverageChangedVariableCount.GetAverage());
#endif

	return nRootMoveIndex;
}

//_____________________________________________________________________________
//
void CGame::Run()
{
	ScopedLogTime logTime(this);

	OnGameStarting();

	m_bInitialized = true;
	
	if (!WaitForRemotePlayers())
		return;

	do
	{
		if (m_bDeveloper &&
			m_nGameTurnNumber > 100)
		{
			int nPlayerCount = m_Players.GetSize();
			bool bHuman = false;
			for (int i = 0; i < nPlayerCount; ++i)
				if (!m_Players.GetAt(i)->IsComputer())
				{
					bHuman = true;
					break;
				}

			if (!bHuman)
			{
				if (m_hwndMessageOwner)
					MessageBox(m_hwndMessageOwner, _T("Review Strategy"), _T("Strategy Error Detected"), MB_OK | MB_ICONEXCLAMATION);
				else
					DebugBreak();
			}
		}

		CActionContainer actionContainer;

#ifdef _MY_DEBUG
		if (m_nActionNumber == BREAK_AT_ACTION)
			ATLASSERT(FALSE);
#endif

		if (m_pPriorityPlayer->IsComputer())
		{
			ATLASSERT(!m_TD.m_pThinkingPlayer);

			m_TD.m_pThinkingPlayer = m_pPriorityPlayer;
			SetupVisibilityMap(m_TD.m_pThinkingPlayer);	// Moved from Think()

			GetActions(actionContainer, TRUE);			// GetActions() may change priority player

			m_TD.m_pThinkingPlayer = NULL;
		}
		else
			GetActions(actionContainer, TRUE);			// GetActions() may change priority player

		if (Ended())
			break;

		VERIFY(actionContainer.GetSize());

		UpdateGame();

#ifdef TEST_BUILD
		/* TODO, low priority
		if (m_Stack.GetStackSize())
		{
			CString strAffectedCards;

			for (int j = 0; j < m_Players.GetSize(); ++j)
			{
				CPlayer* pPlayer = m_Players.GetAt(j);

				CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int k = 0; k < pInplay->GetSize(); ++k)
				{
					CCard* pCard = pInplay->GetAt(k);

					int nAffected = m_Stack.IsCardAffected(pCard);
					if (nAffected)
					{
						if (!strAffectedCards.IsEmpty())
							strAffectedCards += _T(", ");
						strAffectedCards += pCard->GetCardName();
						if (nAffected & CAction::AFFECTED_LIFE)
							strAffectedCards += _T("*");
					}
				}
			}

			if (!strAffectedCards.IsEmpty())
				Message(_T("Affected cards: ") + strAffectedCards,
					GetDebugImage(), MessageImportance::Low);
		}
		*/
#endif

		CPlayer* pMovePlayer = m_pPriorityPlayer;
		
		if (m_pPriorityPlayer->IsComputer())
		{
			//____________________________________________________________________
			//
			// Action selection: Computer
			//____________________________________________________________________

			ATLASSERT(!m_TD.m_pThinkingPlayer);

			// Here we go
			int nIndex = -1;
			CScore bestScore;

			counted_ptr<CAction> cpStrategy(m_pPriorityPlayer->GetNextStrategy());
			m_pPriorityPlayer->RemoveNextStrategy();
			if (cpStrategy != NULL)
			{
#ifdef _MY_DEBUG
				if (false)
				{
					ATLTRACE(_T("Current strategy: %s\n"), cpStrategy->GetActionName());

					ATLTRACE(_T("Available actions (%d):\n"), actionContainer.GetSize());
					for (int i = 0; i < actionContainer.GetSize(); ++i)
						ATLTRACE(_T("%d) %s\n"), i, actionContainer.GetAt(i)->GetActionName());

					ATLTRACE(_T("\n"));
				}
#endif

				for (int i = 0; i < actionContainer.GetSize(); ++i)
					if (cpStrategy->Equals(actionContainer.GetAt(i).GetPointer()))
					{
						ATLASSERT(cpStrategy->GetActionText() == actionContainer.GetAt(i)->GetActionText()); // Check CXXXAction::Equals()

						nIndex = i;
#ifdef _MY_DEBUG			
						/* Removed: triggered stack action may be the same
						for (int j = i + 1; j < actionContainer.GetSize(); ++j)
							ATLASSERT(cpStrategy.GetPointer() != actionContainer.GetAt(j)));
						*/
#endif
						break;
					}

				if (m_bDeveloper && nIndex == -1)
				{
					if (GetCurrentNode()->GetNodeId() != NodeId::CleanupStep1)	// 2/11/2005: Discard actions are completely ignored during thinking now
					{
						CString strMessage;
						strMessage.Format(_T("A.I. error detected: action name %s action type %08x (%s %d)"), 
							cpStrategy->GetActionName(),
							cpStrategy->m_ActionType.Get(), CString(__FILE__), __LINE__);
#ifdef _MY_DEBUG
						Message(strMessage, GetBugImage(), MessageImportance::High);

						if (m_hwndMessageOwner)
							MessageBox(m_hwndMessageOwner, strMessage, _T("A.I. Error Detected"), MB_OK | MB_ICONEXCLAMATION);
						else
							DebugBreak();

						ATLASSERT(false);	// Check pStrategy against each action in actionContainer
#else
						Log(_T(" %s\n"), strMessage);
#endif
					}
				}
//#endif
			}

			COleDateTime startTime(COleDateTime::GetCurrentTime());
			if (nIndex == -1)
			{
				CStrategy strategy;

				int nActionCount = actionContainer.GetSize();

				nIndex = Think(actionContainer,
							   strategy,
							   &bestScore);

				m_pPriorityPlayer->SetStrategy(strategy);
			}
			COleDateTimeSpan elapsed(COleDateTime::GetCurrentTime() - startTime);

			if (elapsed.GetTotalSeconds() > 3.0)
				Log(elapsed.Format(_T("%H:%M:%S\n")));

			ATLASSERT(nIndex >= 0);

			CString strMessage;
			if (bestScore.IsValid())
			{
				if (m_bDeveloper && m_TS.m_nMaxPlySearched)
				{
					strMessage.AppendFormat(
						_T(" score %s plys %d nodes %d exps %d push %ld alpha %d beta %d")
#ifdef THINK_HISTORY
						_T(" hist %d")
#endif
#ifdef USE_NS_CUT
						_T(" ns %d")
#endif
#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
						_T(" tc %d")
#endif
						, 
						bestScore.ToString(this),
						m_TS.m_nMaxPlySearched,
						m_TS.m_nNodes,
						m_TS.m_nExpirations,
						m_TS.m_lPushCount,
						m_TS.m_nAlphaCutCount,
						m_TS.m_nBetaCutCount,
#ifdef THINK_HISTORY
						m_TS.m_nHistoryHits,
#endif
#ifdef USE_NS_CUT
						m_TS.m_nNonStackCutCount,
#endif
#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
						m_TS.m_nRequiredTransientCutCount
#endif
						);

					Message(strMessage, GetDebugImage(), MessageImportance::Low);
				}
			}

			strMessage.Format(_T("%s %s"), 
				m_pPriorityPlayer->GetPlayerName(),
				actionContainer.GetAt(nIndex)->GetActionName());				

			Message(
				strMessage,
				m_pPriorityPlayer->IsComputer() ? GetComputerImage() : GetHumanImage(),
				actionContainer.GetAt(nIndex)->IsHideInConcise() ? MessageImportance::Normal : MessageImportance::High
				);

			if (actionContainer.GetAt(nIndex)->IsAnnounce())
				Speak(actionContainer.GetAt(nIndex)->GetActionName());

			// In case we have more than one computer players
			for (int i = 0; i < m_Players.GetSize(); ++i)
			{
				CPlayer* pPlayer = m_Players.GetAt(i);
				if ((pPlayer != m_pPriorityPlayer) && pPlayer->IsComputer())
				{
					counted_ptr<CAction> cpStrategy(pPlayer->GetNextStrategy());
					pPlayer->RemoveNextStrategy();
					if (cpStrategy != NULL)
					{
						if (!cpStrategy->Equals(actionContainer.GetAt(nIndex).GetPointer()))
						{
							pPlayer->RemoveStrategy(StrategyRemovalReason::UnexpectedComputerAction);
						}
					}
				}
			}

			if (!actionContainer.PerformAction(nIndex))
			{
				if (Ended())
					break;

				Message(
					CString(_T("Cannot perform action '")) + actionContainer.GetAt(nIndex)->GetActionName() + _T("'"),
					m_pPriorityPlayer->IsComputer() ? GetComputerImage() : GetHumanImage());

//				Speak(CString(_T("Cannot perform action '")) + actionContainer.GetMove(nIndex)->GetActionName() + _T("'"));
			}
		}
		else
		{
			//____________________________________________________________________
			//
			// Action selection: Human
			//____________________________________________________________________

			CheckManaActions(&actionContainer);

			actionContainer.Sort();

			// Present actions to user

			int nIndex = m_pPriorityPlayer->GetInterface()->SelectAction(&actionContainer);

			if (nIndex >= 0)
			{
				CString strMessage;

				strMessage.Format(_T("%s %s"), 
					m_pPriorityPlayer->GetPlayerName(),
					actionContainer.GetAt(nIndex)->GetActionName());

				Message(
					strMessage,
					m_pPriorityPlayer->IsComputer() ? GetComputerImage() : GetHumanImage(),
					actionContainer.GetAt(nIndex)->IsHideInConcise() ? MessageImportance::Normal : MessageImportance::High
					);

				for (int i = 0; i < m_Players.GetSize(); ++i)
				{
					CPlayer* pPlayer = m_Players.GetAt(i);
					if (pPlayer->IsComputer())
					{
						counted_ptr<CAction> cpStrategy(pPlayer->GetNextStrategy());
						pPlayer->RemoveNextStrategy();
						if (cpStrategy != NULL)
						{
							if (!cpStrategy->Equals(actionContainer.GetAt(nIndex).GetPointer()))
							{
								pPlayer->RemoveStrategy(StrategyRemovalReason::UnexpectedHumanAction);
							}
						}
					}
				}

				if (!actionContainer.PerformAction(nIndex))
				{
					if (Ended())
						break;

					Message(
						CString(_T("Cannot perform action '")) + actionContainer.GetAt(nIndex)->GetActionName() + _T("'"),
						m_pPriorityPlayer->IsComputer() ? GetComputerImage() : GetHumanImage());

//					Speak(CString(_T("Cannot perform action '")) + actionContainer.GetMove(nIndex)->GetActionName() + _T("'"));
				}
				else
				{
					// Can this action be undone?

					counted_ptr<CAction> cpAction(actionContainer.GetAt(nIndex));
					if (cpAction->IsUndoable())
					{
						pMovePlayer->GetUndoActions()->Add(cpAction->CreateUndoAction().GetPointer());
					}
					else
						if (!cpAction->IsUndo())
							pMovePlayer->GetUndoActions()->RemoveAll();
				}
			}
			else
			{
				if (nIndex == -1)
					Stop();

				RemoveAllStrategies(StrategyRemovalReason::EndGame);
			}
		}

		for (int i = 0; i < m_Players.GetSize(); ++i)
		{
			CPlayer* pPlayer = m_Players.GetAt(i);
			if (pPlayer != pMovePlayer)
			{
				pPlayer->GetUndoActions()->RemoveAll();
			}
		}

	} while(!Ended());

	// Needed to free triggered actions because they may have references to reference counted objects

	for (int i = 0; i < m_Players.GetSize(); ++i)
		m_Players.GetAt(i)->GetTriggeredActionContainer()->RemoveAll();

	CUsagePattern::GetInstance()->RemoveComputerPatterns();

	m_apScheduler.reset();
}

bool CGame::Ended() const
{
	if (IsStopping())
		return true;

	// removed: no need to wait
	//if (m_Stack.GetStackSize())
	//	return false;		// Wait until the stack is cleared

	int nLosts = 0;
	CString strLosts;
	CString strWins;

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);

		if (pPlayer->GetTriggeredActionContainer()->GetSize())
			return FALSE;	// Wait until all triggered abilities are resolved
		
		if (pPlayer->GetLost())
		{
			++nLosts;

			if (!IsThinking())
			{
				Log(_T("%s lost\n"), pPlayer->GetPlayerName());

				if (m_hwndBoardOwner)
				{
					if (!strLosts.IsEmpty())
						strLosts += _T("\r\n");

					strLosts += pPlayer->GetPlayerName() + _T(" lost");
				}
			}
		}
		else
			if (!IsThinking() && m_hwndBoardOwner)
			{
				if (!strWins.IsEmpty())
					strWins += _T("\r\n");
				
				strWins += pPlayer->GetPlayerName() + _T(" won"); // not true until we have evaluated all the players
			}
	}

	if (nLosts && !IsThinking())
	{
		UpdateGame();

		if (m_hwndBoardOwner)
		{
			if (m_Players.GetSize() - nLosts == 1)
				::PostMessage(m_hwndBoardOwner, WM_APP_GAME_ENDED, 0,
					(LPARAM)(new CString(strWins)));
			else
				::PostMessage(m_hwndBoardOwner, WM_APP_GAME_ENDED, 0,
					(LPARAM)(new CString(strLosts)));
		}
	}

	return nLosts > 0;
}

void CGame::Stop()
{
	m_bStopping = true;

	if (m_pThread)
		m_pThread->Stop();
}

bool CGame::IsStopping() const
{
	return m_bStopping;
}

void CGame::Concede()
{
	// Send concede to all other remote players

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
			pNetInterface->SendConceded();
	}
}

bool CGame::HasCombatDamageAssignment(const CCreatureCard* pCreature) const
{
	return m_CombatDamageAssignment.HasSourceCard(pCreature) ? true : false;
}

void CGame::Push()
{
	++m_TS.m_lPushCount;

	m_pStateManager->Push();
}

void CGame::Pop()
{
	m_TD.m_bRestoring = true;
	s_bEventFiringEnabled = false;

	m_pStateManager->Pop();

	s_bEventFiringEnabled = true;
	m_TD.m_bRestoring = false;
}

void CGame::Peek()
{
	m_TD.m_bRestoring = true;
	s_bEventFiringEnabled = false;

	m_pStateManager->Peek();

	s_bEventFiringEnabled = true;
	m_TD.m_bRestoring = false;
}

void CGame::IncreaseGameTurnNumber()
{
	++m_nGameTurnNumber;

	if (!IsThinking())
	{
		if (!m_BeginningOfTurnCallback.empty())
		{
			m_BeginningOfTurnCallback();
		}
	}
}

void CGame::IncreaseGameMorphNumber()
{
	m_nGameMorphNumber = m_nGameMorphNumber+1;
}

void CGame::IncreaseGameDrawNumber()
{
	++m_nGameDrawNumber;
} 

void CGame::PerformedAction(const CAction* pAction)
{
	m_cpLastPerformedAction = counted_ptr<const CAction>(pAction);
	++m_nActionNumber;
} 

void CGame::RemoveAllStrategies(StrategyRemovalReason reason)
{
	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		if (pPlayer->IsComputer())
		{
			pPlayer->RemoveStrategy(reason);
		}
	}		
}

void CGame::ClearVisibilityMap()
{
	m_VisibleCards.RemoveAll();
}

void CGame::AddVisibleCard(const CCard* pCard)
{
	m_VisibleCards.Set(pCard);
}

void CGame::RemoveVisibleCard(const CCard* pCard)
{
	m_VisibleCards.Remove(pCard);
}

bool CGame::IsCardVisible(const CCard* pCard) const
{
	return m_VisibleCards.Contains(pCard);
}

//_____________________________________________________________________________
//
CScore CGame::MinimaxAB(int nPly,
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
						)
{
	DWORD dwNodeStartTime = GetTickCount();
	nExpirations = 0;

	bool bMaxNode = (m_TD.m_pThinkingPlayer == m_pPriorityPlayer);
	int nTurnSearched = m_nGameTurnNumber - m_TD.m_nTurnStartedThinking;

	if (nPly > m_TS.m_nMaxPlySearched)
		m_TS.m_nMaxPlySearched = nPly;

#ifdef _MY_DEBUG

	++m_MT.MinimaxNumber();

	DWORD dwLocalMinimaxNumber = m_MT.MinimaxNumber();	// Use this to determine BREAK_AT_MINIMAX

	if ((m_MT.MinimaxNumber() == BREAK_AT_MINIMAX) && 
		(nPly == BREAK_AT_PLY))
		ATLASSERT(FALSE);

	CString strIndent;
	for (int m = 0; m < nPly; ++m)
		strIndent += _T(" ");

	CString strIndentFormat;
	strIndentFormat.Format(_T("%s[%d] [%cPLY %d] [%s's %s] [%%s] "),
		strIndent, m_MT.MinimaxNumber(), (bMaxNode ? _T('+') : _T('-')), nPly,
		m_pActivePlayer->GetPlayerName(),
		m_pActivePlayer->GetGraph()->GetCurrentNode()->GetNodeName());
#endif

	SearchStatus searchStatus = GetSearchStatus();
	if (searchStatus.Any() ||
			(dwTimeAllowed < MIN_TIME_ALLOWED
				//&& !m_Stack.GetStackSize()	// 8/13/2001: Added to allow stack to clear (removed because the thinking time will exceed the specified limit)
			)
		)	
	{
		if (dwTimeAllowed < MIN_TIME_ALLOWED)
		{
			//++m_TS.m_nExpirations;
			if (!searchStatus.Any())
				nExpirations = 1;

			// 1/28/2005: Check for mana burn

			if (!(searchStatus & SearchStatus::ManaBurn).Any())
			{
				for (int i = 0; i < m_Players.GetSize(); ++i)
					if (m_Players.GetAt(i)->GetManaPool().GetTotal())
					{
						m_SearchBreak |= SearchBreak::ManaBurn;
						searchStatus |= SearchStatus::ManaBurn;
						break;
					}
			}
		}

		CScore score;
		if (!(searchStatus & SearchStatus::_Bad).Any())
			score.Calculate(m_TD.m_pThinkingPlayer);

#ifdef _MY_DEBUG
		CString strNodeType;

		if ((searchStatus & SearchStatus::Cancelled).Any())
			strNodeType += _T(" CANCEL");

		if ((searchStatus & SearchStatus::GameEnded).Any())
			strNodeType += _T(" ENDED");

		if ((searchStatus & SearchStatus::DepthReached).Any())
			strNodeType += _T(" DEPTH");

		if ((searchStatus & SearchStatus::NullAttack).Any())
			strNodeType += _T(" NULLATTACK");
		
		if ((searchStatus & SearchStatus::ManaBurn).Any())
			strNodeType += _T(" MANABURN");

		if ((searchStatus & SearchStatus::PassWithManaInPool).Any())
			strNodeType += _T(" POSSMANABURN");

		if ((searchStatus & SearchStatus::TooMuchMana).Any())
			strNodeType += _T(" TOOMUCHMANA");

		if ((searchStatus & SearchStatus::NotEnoughInformation).Any())
			strNodeType += _T(" NOTENOUGHINFO");

		if (dwTimeAllowed < MIN_TIME_ALLOWED)
			strNodeType += _T(" EXPIRED");

		m_MT.Log(_T("%s[%d] [%cPLY %d] [%s] [SCORE %s]\n"),
			strIndent, m_MT.MinimaxNumber(), (bMaxNode ? _T('+') : _T('-')), nPly, strNodeType.Mid(1), score.ToString(this));
#endif
		return score;
	}

	std::auto_ptr<CActionContainer> apMoveContainer(new CActionContainer);
	if (nPly)
	{
		GetActions(*apMoveContainer,
#ifdef TRACE_ACTION_NAMES
			TRUE						// Get action names?
#else
			FALSE
#endif
			);
		ATLASSERT(apMoveContainer->GetSize());

		bMaxNode = (m_TD.m_pThinkingPlayer == m_pPriorityPlayer);		// 2/16/2005: CSelection may change the priority player
	}
	else
	{
		apMoveContainer->AddClones(*(m_TD.m_pRootActionContainer));
	}

#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
	// Optimization
	CutRequiredTransientActions(apMoveContainer.get());
#endif

#ifdef LAND_ACTIONS_FIRST
	// Optimization
	CutNonLandActions(apMoveContainer.get());
#endif

#ifdef USE_NS_CUT
	// Optimization
	// NS Cut data

/*
		-> ACTION A -> ACTION B -> ...

		-> ACTION B -> ACTION A -> X  currentTriedNonStackEntry = (ACTION A, ACTION B),
								  pTriedNonStack = ((ACTION A, ACTION B), ...)
								  bFoundMatchingNonStack = TRUE
								  bThisIsNonStackNode = TRUE

								  if X is NonStack -> okay
								  if X is not NonStack -> already tried so skip

		...
*/
	// Remove extra (no-state) non-stack actions from the same ability class 
	// (further optimization of no-state non-stack actions optimization)
	for (int l = apMoveContainer->GetSize() - 2; l >= 0; --l)
	{
		CAction* pAction1 = apMoveContainer->GetAt(l).GetPointer();
		ATLASSERT(!pAction1->IsTrick());

		if (pAction1->IsBasicNonStackAction())
		{
			bool bFound = false;
			DWORD dwCutID1 = ((CNonStackAbilityAction*)pAction1)->GetCutID();
			if (!dwCutID1)
				continue;

			for (int i = apMoveContainer->GetSize() - 1; i > l; --i)
			{
				CAction* pAction2 = apMoveContainer->GetAt(i).GetPointer();
				ATLASSERT(!pAction2->IsTrick());

				if (pAction2->IsBasicNonStackAction())
				{
					DWORD dwCutID2 = ((CNonStackAbilityAction*)pAction2)->GetCutID();
					if (dwCutID2 && dwCutID2 == dwCutID1)
					{
						bFound = true;
						break;
					}
				}
			}

			if (bFound)
				apMoveContainer->RemoveAt(l);
		}
	}

	bool bFoundMatchingNonStack = false;
	bool bThisIsNonStackNode = !currentTriedNonStackEntry.empty();
	std::auto_ptr<std::vector<DWordArray>> apLocalTriedNonStack;

	DWordArray localTriedNonStackEntry;
	DWordArray emptyNonStackEntry;

	if (!pTriedNonStack)
	{
		apLocalTriedNonStack = std::auto_ptr<std::vector<DWordArray>>(new std::vector<DWordArray>);
		pTriedNonStack = apLocalTriedNonStack.get();
	}
	else
	{
		if (bThisIsNonStackNode)
			for (size_t i = 0; i < pTriedNonStack->size(); ++i)
			{
				const DWordArray& tried((*pTriedNonStack)[i]);
				if (CompareDWordArray(currentTriedNonStackEntry, tried))
				{
					bFoundMatchingNonStack = true;
					break;
				}
			}
	}

	// Clean up before check mana actions
	if (bFoundMatchingNonStack)
		for (int l = apMoveContainer->GetSize() - 1; l >= 0; --l)
		{
			CAction* pAction = apMoveContainer->GetAt(l).GetPointer();
			ATLASSERT(!pAction->IsTrick());

			if (!pAction->IsBasicNonStackAction())
			{
				apMoveContainer->RemoveAt(l);
			
#ifdef _MY_DEBUG
				m_MT.Log(strIndentFormat + _T("[%d]\n"),
					_T("###NCUT###"),
					currentTriedNonStackEntry.size());
#endif
				++m_TS.m_nNonStackCutCount;
			}
		}

	bool bAddMPCutInfo = false;
#endif

	// Optimization
	CheckManaActions(apMoveContainer.get());

	CScore alphaBeta(bMaxNode ? CScore::s_Minimum : CScore::s_Maximum);

	int nActionCount = apMoveContainer->GetSize();
	if (!nActionCount)
		return alphaBeta;

	if ((nActionCount == 1) && !nPly)
	{
		counted_ptr<CAction> cpBestStrategy(apMoveContainer->GetAt(0)->Clone());		// 9/29/2003: Added Clone() to disconnect with the regular action container because CStrategy will release dynamic abilities.

		ATLASSERT(cpBestStrategy->Equals(apMoveContainer->GetAt(0).GetPointer()));

		bestStrategy.RemoveAll();
		bestStrategy.Add(cpBestStrategy.GetPointer());

		//m_TD.m_cpDecidedRootAction = apMoveContainer->GetAt(0)->Clone();

		nExpirations = 0;

		return CScore(0);
	}

	if (!nPly)
		Message(
			m_pPriorityPlayer->GetPlayerName() + _T(" is thinking"),
			m_pPriorityPlayer->IsComputer() ? GetComputerImage() : GetHumanImage(),
			MessageImportance::Low,
			m_bConsoleGame ? false : true);

	apMoveContainer->Sort();

	bool bPushed = false;

	// Allocate time for actions

	TimePlan timePlan(nActionCount);
	{
#ifdef USE_ACTION_SCORE_IN_THINK_TIME_CALC
		int nTotalUnits = 0;
		for (int k = 0; k < nActionCount; ++k)
		{
			CAction* pAction = apMoveContainer->GetAt(k).GetPointer();
			nTotalUnits += pAction->GetScore().Get();

			ATLASSERT(!pAction->IsTrick());
		}
#endif

		for (int k = 0; k < nActionCount; ++k)
		{
			TimePlanEntry& entry = timePlan[k];

#ifdef USE_ACTION_SCORE_IN_THINK_TIME_CALC
			CAction* pAction = apMoveContainer->GetAt(k).GetPointer();

			entry.m_fAllocPercentage = 
				(k == nActionCount - 1 ? 1.0 : (double)pAction->GetScore().Get() / (double)nTotalUnits);

			nTotalUnits -= pAction->GetScore().Get();
#else
			entry.m_fAllocPercentage = 
				(k == nActionCount - 1 ? 1.0 : THINK_TIME_FRACTION);
				//(1.0 / (double)nActionCount);
#endif
			if (k == nActionCount - 1)
				entry.m_bLast = true;
		}
	}

	//int nBestIndex = -1;
	bool bAlphaBetaCut = false;

#ifdef _MY_DEBUG
	CScore lastScore;
#endif

	nExpirations = 0;

	for (int i = 0; i < nActionCount; ++i)
	{
		CAction* pAction = apMoveContainer->GetAt(i).GetPointer();
		TimePlanEntry& timePlanEntry = timePlan[i];

		ATLASSERT(!pAction->IsTrick());

		DWORD dwCurrentTime = GetTickCount();
		DWORD dwLastReportTime = dwCurrentTime - m_TS.m_dwLastProgressTime;
		if (dwLastReportTime > m_TP.m_dwMaxDuration / 60)
		{
			m_TS.m_dwLastProgressTime = dwCurrentTime;
			SetProgress((dwCurrentTime - m_TS.m_dwStartTime) * 60 / m_TP.m_dwMaxDuration);
		}

		bool bNonStackAction = To_bool(pAction->IsBasicNonStackAction());

#ifdef USE_NS_CUT
		if (bNonStackAction)
		{
			localTriedNonStackEntry = currentTriedNonStackEntry;
			localTriedNonStackEntry.push_back(((CNonStackAbilityAction*)pAction)->GetCutID());
		}
		else
		{
			ATLASSERT(!bFoundMatchingNonStack); // should be cleaned up before the loop
			//localTriedNonStackEntry.RemoveAll();
		}
#endif

		//###################################################################################

		if (!timePlanEntry.m_bLast && !bPushed)
		{
			Push();
			bPushed = true;
		}
		else
			if (bPushed)
			{
				Peek();
			}

#ifdef _MY_DEBUG
		CString strIndentFormat1(strIndentFormat + _T("[") +
			m_pPriorityPlayer->GetPlayerName() + _T(" ") +
			pAction->GetActionText() + _T("] "));

		CString strTemp;
		strTemp.Format(_T("TRY %d/%d"), i, nActionCount);

		m_MT.Log(strIndentFormat1 + _T("[ACTION SCORE %d]\n"), strTemp, pAction->GetScore());
#endif

#ifdef GATHER_CHANGED_VARIABLE_STATS
		m_TS.ChangedVariableCheckPoint();
#endif

		apMoveContainer->PerformAction(i);	// ******************

#ifdef _MY_DEBUG
#ifdef LOG_MANA_POOL
		if (pAction->IsManaProducing())
			m_MT.Log(strIndentFormat + _T("[%s]\n"), _T("POOL"), m_pPriorityPlayer->GetManaPool()->GetText());
#endif
#endif

		CStrategy childBestStrategy;
		CScore childNodeScore;

#ifdef THINK_HISTORY
		std::auto_ptr<CGameState> apGameState(new CGameState);

		/*
		if (nPly < 50 && 
			!GetStack().GetStackSize() &&
			!GetSelection().Pending())//((GetCurrentNode()->GetNodeId() & NodeId::_CombatPhase).Any() || nPly < 20)
		*/

		if (!GetStack().GetStackSize() &&
			!GetSelection().Pending() && 
			(GetCurrentNode()->GetNodeId() & NodeId::DeclareAttackersStep1).Any())
		{
			m_pStateManager->GetGameState(*apGameState, true);

			if (apGameState->IsValid())
			{
#ifdef TRACE_ACTION_NAMES
				apGameState->SetPath(strPath + _T(";") + pAction->GetActionName());
#endif

				if (m_TD.m_ThinkHistory.Find(*apGameState, nPly))
				{
					++m_TS.m_nHistoryHits;
					goto Skip_Child_Minimax;
				}
			}
		}
#endif

		if ( dwTimeAllowed != std::numeric_limits<DWORD_PTR>::max() )
		{
			long lTimeRemaining = MAX(0, (long)dwTimeAllowed - ((long)dwCurrentTime - (long)dwNodeStartTime));
			timePlanEntry.m_dwAllocTime = (DWORD)((double)lTimeRemaining * timePlanEntry.m_fAllocPercentage);
		}
		else
			timePlanEntry.m_dwAllocTime = std::numeric_limits<DWORD_PTR>::max();

		childNodeScore = MinimaxAB(nPly + 1,
									bMaxNode ? CScore::Maximum(alpha, alphaBeta) : alpha,
									bMaxNode ? beta : CScore::Minimum(beta, alphaBeta),
#ifdef USE_NS_CUT
									(bNonStackAction ? pTriedNonStack : NULL),
									(bNonStackAction ? localTriedNonStackEntry : emptyNonStackEntry),
#endif
									childBestStrategy,
									timePlanEntry.m_nExpirations,
									timePlanEntry.m_dwAllocTime
#ifdef TRACE_ACTION_NAMES
									, strPath + _T(";") + pAction->GetActionName()
#endif
									);

#ifdef _MY_DEBUG
		lastScore = childNodeScore;
#endif

		timePlanEntry.m_dwActualTime = GetTickCount() - dwCurrentTime;

		nExpirations += timePlanEntry.m_nExpirations;

#ifdef FIND_EXPENSIVE_ACTIONS
		if (dwCurrentTime + EXPENSIVE_ACTION_TIME < GetTickCount())
			m_MT.Log(strIndentFormat1 + _T("\n"), _T("$$$FOUND$$$"));
#endif

		//###################################################################################

		if (!nPly)
			m_TS.m_nRootNodes = i + 1;

#ifdef USE_NS_CUT
		if (!bAddMPCutInfo && bThisIsNonStackNode && !bNonStackAction)
			bAddMPCutInfo = true;
#endif

#ifdef THINK_HISTORY
Skip_Child_Minimax:
#endif

		if (childNodeScore.IsValid())
		{
#ifdef THINK_HISTORY
			if (apGameState.get() && apGameState->IsValid())
			{
				m_TD.m_ThinkHistory.Add(apGameState, nPly);
			}
#endif
			
			if ((!bMaxNode && alphaBeta > childNodeScore) ||	// Minimize node: if child node's score is less than the current one
				(bMaxNode && alphaBeta < childNodeScore))		// Maximize node: if child node's score is more than the current one
			{
#ifdef _MY_DEBUG
				//CString strNewScore = childNodeScore.ToString();
				//CString strAlphaBeta = alphaBeta.ToString();

				CScore oldAlphaBeta = alphaBeta;
#endif

				alphaBeta = childNodeScore;
				//nBestIndex = i;

				bestStrategy.RemoveAll();

				counted_ptr<CAction> cpStrategy(pAction->Clone());

				ATLASSERT(cpStrategy->Equals(pAction));

				bestStrategy.Add(cpStrategy.GetPointer());	
				bestStrategy.Add(childBestStrategy);

				if ((!bMaxNode && alpha >= childNodeScore) ||	// Minimize node: if current alpha value is larger than or equal to the child node's score
					(bMaxNode && childNodeScore >= beta))		// Maximize node: if current beta value is less than or equal to the child node's score
				{
					ATLASSERT(nPly);

#ifdef _MY_DEBUG
					CString strTemp;
					strTemp.Format(_T("RESULT %d/%d"), i, nActionCount);
					
					if (!bMaxNode)
						m_MT.Log(strIndentFormat1 + _T("[@@@ACUT@@@]\n"), strTemp);
					else
						m_MT.Log(strIndentFormat1 + _T("[@@@BCUT@@@]\n"), strTemp);
#endif
					if (!bMaxNode)
						++m_TS.m_nAlphaCutCount;
					else
						++m_TS.m_nBetaCutCount;

					bAlphaBetaCut = true;

					break;
				}

				if (!nPly)
				{
					++m_TS.m_nRootNodesWithUpdate;
					if (m_hwndBoardOwner)
						::PostMessage(m_hwndBoardOwner, WM_APP_GAME_CAN_DECIDE_NOW, 0, 0);
				}

#ifdef _MY_DEBUG
				CString strTemp;
				strTemp.Format(_T("RESULT %d/%d"), i, nActionCount);
				m_MT.Log(strIndentFormat1 + _T("[BEST UPDATED] [PREVIOUS %s] [SCORE %s]\n"),
					strTemp, oldAlphaBeta.ToString(this), alphaBeta.ToString(this));
#endif
			}
#ifdef _MY_DEBUG
			else
			{
				CString strTemp;
				strTemp.Format(_T("RESULT %d/%d"), i, nActionCount);

				if (bestStrategy.GetSize())
					m_MT.Log(strIndentFormat1 + _T("[BEST NOT UPDATED] [SCORE %s]\n"),
						strTemp, alphaBeta.ToString(this));
				else
					m_MT.Log(strIndentFormat1 + _T("[UNDETERMINED]\n"),
						strTemp);
			}
#endif
		}
#ifdef _MY_DEBUG
		else
		{
			CString strTemp;
			strTemp.Format(_T("RESULT %d/%d"), i, nActionCount);

			if (bestStrategy.GetSize())
				m_MT.Log(strIndentFormat1 + _T("[BEST NOT UPDATED] [SCORE %s]\n"),
					strTemp, alphaBeta.ToString(this));
			else
				m_MT.Log(strIndentFormat1 + _T("[UNDETERMINED]\n"),
					strTemp);
		}
#endif
	}

	if (bPushed)
		Pop();		

#ifdef USE_NS_CUT
	if (!apLocalTriedNonStack.get())
		if (!bAlphaBetaCut && bAddMPCutInfo)
		{
			pTriedNonStack->push_back(currentTriedNonStackEntry);

#ifdef _MY_DEBUG
			/*
			CString strTemp;
			for (int k = 0; k < currentTriedNonStackEntry.GetSize(); ++k)
			{
				CString strTemp2;
				strTemp2.Format(_T("%08x"), currentTriedNonStackEntry[k]);
				if (!strTemp.IsEmpty())
					strTemp += _T(":");
				strTemp += strTemp2;
			}

			m_MT.Log(strIndentFormat1 + _T("[%d:%s]\n"),
				_T("NCUTINFO"),
				currentTriedNonStackEntry.GetSize(), strTemp);
			*/
#endif
		}

#endif

	/*
	if (m_bDeveloper && !nPly)
	{
		for (int i = 0; i < nActionCount; ++i)
		{
			CAction* pAction = apMoveContainer->GetAt(i).GetPointer();
			TimePlanEntry& timePlanEntry = timePlan[i];

			Log(_T(" Action (%d)%s: score %d alloc time %d actual time %d;"),
				i, pAction->GetActionName(), pAction->GetScore(), timePlanEntry.m_dwAllocTime, timePlanEntry.m_dwActualTime);
		}

		if (nActionCount)
			Log(_T("\n"));
	}
	*/

	if (alphaBeta.IsMinimum() || alphaBeta.IsMaximum())
	{
		CScore score;
		if (!(searchStatus & SearchStatus::_Bad).Any())
			score.Calculate(m_TD.m_pThinkingPlayer);
		return score;
	}

	ATLASSERT(alphaBeta.IsValid());

	return alphaBeta;
}

void CGame::SetupVisibilityMap(CPlayer* pThinkingPlayer)
{
	ClearVisibilityMap();

	for (int i = 0; i < m_Players.GetSize(); ++i)	
	{
		CPlayer* pPlayer1 = m_Players.GetAt(i);
		pPlayer1->ResetInPlayBonus();
		pPlayer1->ResetInHandBonus();
		pPlayer1->ResetMiscBonus();

		if (pPlayer1 == pThinkingPlayer)
		{
			for (int j = 0; j < pThinkingPlayer->GetZoneCount(); ++j)
			{
				CZone* pZone = pThinkingPlayer->GetZone(j);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					CCard* pCard = pZone->GetAt(k);

					if (pZone->IsVisibleToOwner())
					{
						if (!pCard->GetOrientation()->IsFaceDown())
							AddVisibleCard(pCard);
					}

					pCard->GetOrientation()->ResetTapUntapCount();
				}
			}

			// Add currently memorized cards into the visibility map. No more new memorized
			// cards will be added to the player's memorized cards during the thinking but
			// to the visibility map, e.g. search the library for a specific type of cards.
			const CCountedPtrSet<const CCard>& memorizedCards = pThinkingPlayer->GetMemorizedCards();
			for (CCountedPtrSet<const CCard>::Iterator j = memorizedCards.Begin(); j != memorizedCards.End(); ++j)
				AddVisibleCard((*j).GetPointer());
		}
		else
			for (int j = 0; j < pPlayer1->GetZoneCount(); ++j)
			{
				CZone* pZone = pPlayer1->GetZone(j);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					CCard* pCard = pZone->GetAt(k);

					if (pZone->IsVisibleToOthers())
					{
						if (!pCard->GetOrientation()->IsFaceDown())
							AddVisibleCard(pCard);
					}

					pCard->GetOrientation()->ResetTapUntapCount();
				}
			}
	}

#ifdef _MY_DEBUG
	/*
	POSITION pos = m_TP.m_VisibilityMap.GetStartPosition();
	CCard* pCard;
	bool bVisible;
	while (pos != NULL)
	{
		m_TP.m_VisibilityMap.GetNextAssoc(pos, pCard, bVisible);
		//ATLTRACE(_T("[%s] is visible\n"), pCard->GetCardName());
	}
	*/
#endif	
}

CGame::SearchStatus CGame::GetSearchStatus()
{
	if (m_pbDecideNow && *m_pbDecideNow)
	{
		*m_pbDecideNow = false;
		return SearchStatus::Cancelled;
	}

	if (Ended())
	{
		++m_TS.m_nNodes;
		return SearchStatus::GameEnded;
	}

	if (m_nGameDrawNumber - m_TD.m_nDrawStartedThinking >= m_TD.m_nDrawLookAhead/* ||
		m_SearchBreak & SB_END_OF_COMBAT*/)
	{
		++m_TS.m_nNodes;
		return SearchStatus::DepthReached;
	}

	if (m_TD.m_bRemoveNegativeActions)
	{
		if ((m_SearchBreak & SearchBreak::ManaBurn).Any())
		{
			++m_TS.m_nNodes;
			return SearchStatus::ManaBurn;
		}

		if ((m_SearchBreak & SearchBreak::PassWithMana).Any())
		{
			++m_TS.m_nNodes;
			return SearchStatus::PassWithManaInPool;
		}

		if ((m_SearchBreak & SearchBreak::NotEnoughInformation).Any())
		{
			++m_TS.m_nNodes;
			return SearchStatus::NotEnoughInformation;
		}

		if ((m_SearchBreak & SearchBreak::NullAttack).Any())
		{
			++m_TS.m_nNodes;
			return SearchStatus::NullAttack;
		}
	}

	if ((m_SearchBreak & SearchBreak::TooMuchMana).Any())
	{
		++m_TS.m_nNodes;
		return SearchStatus::TooMuchMana;
	}

	return SearchStatus::Continue;
}

void CGame::Log(LPCTSTR lpszFormat, ...) const
{
	va_list args;
	va_start(args, lpszFormat);

	int nBuf;
	TCHAR szBuffer[2048];

	nBuf = _vsntprintf_s(szBuffer, ARRAY_SIZE(szBuffer), _TRUNCATE, lpszFormat, args);

	ATLASSERT(nBuf >= 0);

#ifdef _MY_DEBUG
	CString strBuffer(szBuffer);
	strBuffer.Replace(_T("%"), _T("%%"));
	ATLTRACE(strBuffer);
#endif

	if (m_LogFile.m_hFile != CFile::hFileNull)
	{
		m_LogFile.WriteString(szBuffer);
		m_LogFile.Flush();
	}

	va_end(args);
}

void CGame::GetChecksum(CMD5Checksum& Checksum) const
{
#ifdef LOG_CHECKSUM
	if (IsDeveloper())
	{
		Log(_T("  GAME CHECKSUM INPUT BEGIN\n"));
		Log(_T("   [DrawNumber:%02x][MoveNumber:%02x][CurrentNode:%08x]\n"), 
			static_cast<BYTE>(GetGameDrawNumber()),
			static_cast<BYTE>(GetActionNumber()),
			GetCurrentNode()->GetNodeId());
		Log(_T("   [Priority:%s][Active:%s]\n"),
			GetPriorityPlayer()->GetPlayerName(),
			GetActivePlayer()->GetPlayerName());
		if (GetStack().GetStackSize())
		{
			for (int i = 0; i < GetStack().GetStackSize(); ++i)
				Log(_T("   [Stack:%s(%d)]"),
					GetStack().GetStackAction(i)->GetActionName(), i);
			Log(_T("\n"));
		}
		for (int i = 0; i < m_Players.GetSize(); ++i)
		{
			int nPlayerIndex = (i + m_nNormalizedPlayerIndex) % m_Players.GetSize();
			CPlayer* pPlayer = m_Players.GetAt(nPlayerIndex);

			Log(_T("   [PlayerLife:%02x][PlayerPool:%02x]\n"),
				static_cast<BYTE>(GET_INTEGER(pPlayer->GetLife())),
				static_cast<BYTE>(pPlayer->GetManaPool().GetTotal()));

			if (pPlayer->GetTriggeredActionContainer()->GetSize())
			{
				for (int j = 0; j < pPlayer->GetTriggeredActionContainer()->GetSize(); ++j)
					Log(_T("   [Triggered:%s(%d)]"),
						pPlayer->GetTriggeredActionContainer()->GetActionAt(j)->GetActionName(),
						j);

				Log(_T("\n"));
			}
			CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
			if (pHand->GetSize())
			{
				for (int j = 0; j < pHand->GetSize(); ++j)
					Log(_T("   [Hand:%s(%d:%d)]"), pHand->GetAt(j)->GetCardName(), j, ZoneId::Hand);
				Log(_T("\n"));
			}
	        
			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
			if (pInplay->GetSize())
			{
				for (int j = 0; j < pInplay->GetSize(); ++j)
					Log(_T("   [InPlay:%s(%d:%d)]"), pInplay->GetAt(j)->GetCardName(), j, ZoneId::Battlefield);
				Log(_T("\n"));
			}
		}
		Log(_T("  GAME CHECKSUM INPUT END\n"));
	}
#endif

	Checksum.Update(static_cast<BYTE>(GetGameDrawNumber()));
	Checksum.Update(static_cast<BYTE>(GetActionNumber()));
	Checksum.Update(static_cast<DWORD>(GetCurrentNode()->GetNodeId().Get()));

	Checksum.Update(GetPriorityPlayer()->GetPlayerName());
	Checksum.Update(GetActivePlayer()->GetPlayerName());

	for (int i = 0; i < GetStack().GetStackSize(); ++i)
		Checksum.Update(GetStack().GetStackAction(i)->GetActionName());

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		int nPlayerIndex = (i + m_nNormalizedPlayerIndex) % m_Players.GetSize();
		CPlayer* pPlayer = m_Players.GetAt(nPlayerIndex);

		Checksum.Update(static_cast<BYTE>(GET_INTEGER(pPlayer->GetLife())));
		Checksum.Update(static_cast<BYTE>(pPlayer->GetManaPool().GetTotal()));

		StringArray strings;

		for (int j = 0; j < pPlayer->GetTriggeredActionContainer()->GetSize(); ++j)
			strings.push_back(pPlayer->GetTriggeredActionContainer()->GetActionAt(j)->GetActionName());

		Checksum.Update(strings);

		strings.clear();

		CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
		for (int j = 0; j < pHand->GetSize(); ++j)
		{
			CString str;
			str.Format(_T("%d:%s"), ZoneId::Hand, pHand->GetAt(j)->GetCardName());
			strings.push_back(str);
		}

		Checksum.Update(strings);

		strings.clear();

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CString str;
			str.Format(_T("%d:%s"), ZoneId::Battlefield, pInplay->GetAt(j)->GetCardName());
			strings.push_back(str);
		}

		Checksum.Update(strings);
	}
}

void CGame::LogState() const
{
	if (!m_bInitialized)
		return;

	// Show current node info
	Log(_T("\n%s's %s\n"),
		GetActivePlayer()->GetPlayerName(),
		GetActivePlayer()->GetGraph()->GetCurrentNode()->GetNodeName());

	StringArray lines;

	// Player info
	for (int i = 0; i < m_Players.GetSize(); ++i)
		m_Players.GetAt(i)->GetState(lines, TRUE, TRUE);

	// Stack info
	GetStack().GetState(lines);

	for (size_t j = 0; j < lines.size(); ++j)
		Log(_T("%s\n"), lines[j]);

	if (Ended())
		for (int i = 0; i < m_Players.GetSize(); ++i)
		{
			CPlayer* pPlayer = m_Players.GetAt(i);
			if (pPlayer->GetLost())
				Log(_T("%s loses\n"), pPlayer->GetPlayerName());
		}
}

//_____________________________________________________________________________
//
// Set action scores and mark trick actions according to the current mana situation
//
/*

	The purpose of CheckManaActions() is to mark all mana producing or filtering actions
	as tricks if those actions will cause mana burns.



	*CMM1: Any mana producing or filtering actions? --NO--> [ Exit ]

						|
					   YES
						|
						V

	*CMM2: Make a list of all cards visible to the active player (Cards)

						|
						V

	*CMM3: For all cards with no mana groups, add all mana pools from all mana
			producing abilities to (pMaxManaPool)

						|
						V

	*CMM4: Add active player's mana pool to (pMaxManaPool)

						|
						V

	*CMM5: If no mana groups, just add a single entry of (pMaxManaPool) into
			(manaPools) and set the corresponding entry of (wantedManaCosts) to	-----> CMM7
			NULL which means this possible pool requires no cost (not a filter).     

	*CMM6: If has mana groups, there will be multiple configurations of mana
			pools possible at this moment. Generate all possible pools and add them
			to (manaPools) and indictes required mana costs for those pools and
			put those costs into (wantedManaCosts). Uses NULL in (wantedManaCosts) to
			indicate no cost is required for a pool (not a filter). See below for details
			for ProcessManaGroups().

						|
						V

	*CMM7: For each card we are considering, use AddWantedMana() to find
			out required mana and add required mana to (wantedMana). Each
			card will use (manaPools) and (wantedManaCosts) to decide whether
			a particular ability can be used and if so the associated costs
			will be added to (wantedMana).

						|
						V

	*CMM8: If (wantedMana) is empty (possibly no ability can be used at this
			moment), set a flag (bRemoveManaActions) which indicates we can
			safely remove all mana producing or filtering actions.

	*CMM9: If (wantedMana) is not empty, go through each mana producing or
			filtering actions and see if the mana pool is required in
			(wantedMana).
  
*/
void CGame::CheckManaActions(CActionContainer* pActionContainer)
{
	// CMM1
	//
	std::vector<std::pair<CAction*, const CManaPool*>> manaActions;
	int nActionSize = pActionContainer->GetSize();
	CManaPool::Colors allActionManaColors; // red, blue, ...., colorless (can only pay generic cost)

	for (int i = 0; i < nActionSize; ++i)
	{
		CAction* pAction = pActionContainer->GetAt(i).GetPointer();

		CManaFilterSpellAction* pFilterAction = NULL;
		CManaProductionAbilityAction* pProductionAction = NULL;

		if (pAction->IsManaProducing())
			pProductionAction = (CManaProductionAbilityAction*)pAction;
		else
		if (pAction->IsManaFiltering())
			pFilterAction = (CManaFilterSpellAction*)pAction;

		if (pProductionAction || pFilterAction)
		{
			const CManaPool& manaPool = (pProductionAction ? pProductionAction->GetManaPool() : pFilterAction->GetManaPool());
			manaActions.push_back(std::make_pair(pAction, &manaPool));
			allActionManaColors |= manaPool.GetNormalizedColors();
		}
	}

	if (!manaActions.size())
		return;

	// CMM2
	//

	// Narrow down cards in question: get all cards which can potentially use mana

	const CCountedCardContainer& Cards(m_TP.m_ActionCards); // for both mana producing cards and mana consuming cards

	// CMM3
	//

	CManaPool maxManaPool;	// Holds the fixed portion of maximum mana pool
	const CManaPool& playerManaPool(m_pPriorityPlayer->GetManaPool());
	maxManaPool.AddMana(playerManaPool);	// Add current mana pool of the priority player

	std::vector<const CCost_*> abilityCosts;
	std::vector<const CCost*> stackDenialCosts;
	std::vector<std::vector<const CManaCost*>> hintCosts;
	std::vector<std::vector<const CManaPool*>> hintPools;
	bool bNoCostPoolInHints = false;
	{
		// First check card abilities

		for (int k = 0; k < Cards.GetSize(); ++k)
		{
			CCard* pCard = Cards.GetAt(k);

			CManaProductionHint* pHint = pCard->GetManaProductionHint();
			int nHintSize = pHint->GetSize();
			std::vector<const CManaCost*> hintCost;
			std::vector<const CManaPool*> hintPool;

			int nAbilityCount = pCard->GetAbilityCount();
			for (int i = 0; i < nAbilityCount; ++i)
			{
				CAbility* pAbility = pCard->GetAbility(i);

				// Consider only playable mana consuming abilities
				bool bFilterMana = (pAbility->GetAbilityType() & AbilityType::_FilterMana).Any();
				if ((pAbility->GetAbilityType() & AbilityType::_ConsumeMana).Any() &&
					!bFilterMana)
				{
					if (pAbility->IsPlayable(m_TP.m_bTrick, TRUE))
					{
						const CCost_& abilityCost(pAbility->GetCost());
						abilityCosts.push_back(&abilityCost);
					}
				}

				if (nHintSize) 
				{
					if (pAbility->IsPlayable(m_TP.m_bTrick, TRUE)) // a valid hint?
						for (int j = 0; j < nHintSize; ++j)
							if (pHint->GetAbilityAt(j) == pAbility)
							{
								const CManaCost* pManaCost = &(pHint->GetManaCostAt(j));
								if (!bNoCostPoolInHints && !pManaCost->GetTotal())
									bNoCostPoolInHints = true;

								hintCost.push_back(pManaCost);
								hintPool.push_back(&(pHint->GetManaPoolAt(j)));
							}
				}
				else
					// Do not consider production abilities if this card already has hints; the hint should already contain this as a no-cost pool
					if ((pAbility->GetAbilityType() & AbilityType::_ProduceMana).Any())
					{
						CManaProductionAbility* pAbility1 = (CManaProductionAbility*)pAbility;

						if (pAbility1->IsPlayable(m_TP.m_bTrick,			// Include tricks?
													FALSE))					// Assume sufficient mana?
							maxManaPool.AddMana(pAbility1->GetManaPool());	// Update the current maximum mana pool
					}
			}

			if (hintCost.size())
			{
				hintCosts.push_back(hintCost);
				hintPools.push_back(hintPool);
			}
		}

		// Next check stack denial actions
		CPlayer* pPriorityPlayer = GetPriorityPlayer();
		for (int i = 0; i < m_Stack.GetStackSize(); ++i)
		{
			// Create one or more CStackDenialAction for each stack action which can be denied
			const CStackAbilityAction* pStackAction = m_Stack.GetStackAction(i).GetPointer();

			if (!(m_Stack.GetActionStatus(i) & StackActionStatus::Denied).Any() &&
				pStackAction->CanBeDeniedBy(pPriorityPlayer))
			{
				// Search for any existing CStackDenialAction against this stack action

				bool bFound = false;
				for (int j = i + 1; j < m_Stack.GetStackSize(); ++j)
				{
					const CStackDenialAction* pDenialAction = dynamic_cast<const CStackDenialAction*>(m_Stack.GetStackAction(i).GetPointer());
					if (pDenialAction && (pDenialAction->GetDeniedStackMoveIndex() == i))
					{
						bFound = true;
						break;
					}
				}

				if (bFound)
					continue;

				// Add cost

				const CCost& costBase = pStackAction->GetDenialCost();

				if (!costBase.IsPlayable(pPriorityPlayer, m_TP.m_bTrick, TRUE))
					continue;

				stackDenialCosts.push_back(&costBase);
			}
		}
	}

	// CMM4
	//

#ifdef _MY_DEBUG
	//if (!IsThinking())
	//	ATLTRACE(_T("Regular mana pool [%s]\n"), maxManaPool.GetText());
#endif

	// CMM7
	//
	CManaPool::Colors wantedMana;

	if (abilityCosts.size() || stackDenialCosts.size())
	{
		if (hintCosts.size())
		{
			// CMM6
			//

			// Generate multiple pools with all combinations of mana groups
			ProcessManaGroups(hintCosts, hintPools, bNoCostPoolInHints, abilityCosts, stackDenialCosts, maxManaPool, m_TP.m_bTrick, allActionManaColors, wantedMana);

			if ((wantedMana & allActionManaColors) == allActionManaColors)
				return;
		}
		else
		{
			// CMM5
			//

			// If there are no mana groups, just add the fixed portion to the wanted list with no associated cost
			// Calculate the wanted mana against the maximum mana pool we can generate
			if (AddWantedMana(abilityCosts, stackDenialCosts, maxManaPool, CManaCost(), m_TP.m_bTrick, allActionManaColors, wantedMana))
				return; // all mana color in allActionManaColors is wanted, no need to mark anything as trick
		}

#ifdef _MY_DEBUG
		/*
		if (!IsThinking())
		{
			ATLTRACE(_T("Wanted mana [%s]\n"), wantedMana.GetText());
			ATLTRACE(_T("\n"));
		}
		*/
#endif

	}

	// CMM8
	//
	bool bRemoveManaActions = !wantedMana.Any();
	bool bTrickSet = false;

	for (std::vector<std::pair<CAction*, const CManaPool*>>::const_iterator i = manaActions.begin(); i != manaActions.end(); ++i)
	{
		CAction* pAction = i->first;
		if (bRemoveManaActions)
		{
			pAction->SetTrick();
			bTrickSet = true;
		}
		else
		{
			const CManaPool& manaPool = *(i->second);

			// CMM9
			//
			CManaPool::Colors poolColors(manaPool.GetNormalizedColors());

			if (!(wantedMana & poolColors).Any())
			{
				pAction->SetTrick();
				bTrickSet = true;
			}
			else
			{
				// Reduce score of actions with extra unneeded mana

				CManaPool::Colors temp(~wantedMana & poolColors);
				pAction->SetScore(MAX(pAction->GetScore() - temp.GetCount(), ActionScore::ProduceManaMinimum));
			}
		}
	}

	if (bTrickSet && IsThinking())
		for (int i = nActionSize - 1; i >= 0; --i)
		{
			CAction* pAction = pActionContainer->GetAt(i).GetPointer();
			if (pAction->IsTrick())
				pActionContainer->RemoveAt(i);
		}
}

bool CGame::AddWantedMana(const std::vector<const CCost_*>& abilityCosts,
						  const std::vector<const CCost*>& stackDenialCosts,
						  const CManaPool& manaPool, const CManaCost& filterCost,
						  bool bTrick,
						  const CManaPool::Colors& allActionManaColors,
						  CManaPool::Colors& wantedMana)
{
	// First add wanted manas from card abilities
	for (size_t k = 0; k < abilityCosts.size(); ++k)
	{
		AddWantedManaImpl(*(abilityCosts[k]), manaPool, filterCost, wantedMana);
		if ((wantedMana & allActionManaColors) == allActionManaColors)
			return true;
	}

	// Next add wanted manas from stack denial actions
	for (size_t k = 0; k < stackDenialCosts.size(); ++k)
	{
		AddWantedManaImpl(*(stackDenialCosts[k]), manaPool, filterCost, wantedMana);
		if ((wantedMana & allActionManaColors) == allActionManaColors)
			return true;
	}

	return false;
}

//_____________________________________________________________________________
//
void CGame::ProcessManaGroups(std::vector<std::vector<const CManaCost*>>& hintCosts,
						      std::vector<std::vector<const CManaPool*>>& hintPools,
							  bool bNoCostPoolInHints,
							  const std::vector<const CCost_*>& abilityCosts,
						      const std::vector<const CCost*>& stackDenialCosts,
							  const CManaPool& currentPool,
							  bool bTrick,
							  const CManaPool::Colors& allActionManaColors, 
							  CManaPool::Colors& wantedMana) // wanted mana so far, if we reach all 6 colors, we can stop
{
	// Put here to optimize array allocations and deallocations of local variables
	static int* groupIndex = NULL;
	static int nGroupIndexSize = 0;
	static int nGroupIndexCount = 0;
	static int* config1 = NULL;
	static int nConfigSize1 = 0;
	static int* bound1 = NULL;
	static int nBoundSize1 = 0;

	struct StaticCleanup
	{
		~StaticCleanup()
		{
			if (groupIndex)
			{
				delete[] groupIndex;
				groupIndex = NULL;
			}
			nGroupIndexSize = 0;
			nGroupIndexCount = 0;

			if (config1)
			{
				delete[] config1;
				config1 = NULL;
			}
			nConfigSize1 = 0;

			if (bound1)
			{
				delete[] bound1;
				bound1 = NULL;
			}
			nBoundSize1 = 0;
		}
	};
	static StaticCleanup cleanup;

	if (!hintPools.size() && !currentPool.GetTotal())
		return;

	if (!hintPools.size() && currentPool.GetTotal())
	{
		AddWantedMana(abilityCosts, stackDenialCosts, currentPool, CManaCost(), bTrick, allActionManaColors, wantedMana);
		return;
	}

	if ((hintPools.size() == 1) && !currentPool.GetTotal())
	{
		// Special case of only one group
		const std::vector<const CManaPool*>& groupPool(hintPools[0]);
		const std::vector<const CManaCost*>& groupCost(hintCosts[0]);

		// Just add all no cost pools
		for (size_t i = 0; i < groupPool.size(); ++i)
			if (!groupCost[i]->GetTotal())
			{
				if (AddWantedMana(abilityCosts, stackDenialCosts, *(groupPool[i]), CManaCost(), bTrick, allActionManaColors, wantedMana))
					break;
			}

		return;
	}

	// Add current mana pool as if it is a no-cost mana pool
	if (currentPool.GetTotal())
	{
		static CManaCost emptyCost;
		std::vector<const CManaCost*> tempGroupCost;
		tempGroupCost.push_back(&emptyCost);

		std::vector<const CManaPool*> tempGroupPool;
		tempGroupPool.push_back(&currentPool);

		hintPools.push_back(tempGroupPool);
		hintCosts.push_back(tempGroupCost);
	}
	else
		if (!bNoCostPoolInHints)	// We have no current pool and also we have no no-cost pool, not possible to filter anything
			return;

	// Diagram (A)
	// allGroupPool[0] ---> GroupPool[0] ---> Pool 00 ------------+   \__ From card 0
	//                      GroupPool[1] ---> Pool 01             |   /
	//                         ...              ...               |
	//                                                            |
	// allGroupPool[1] ---> GroupPool[0] ---> Pool 10             |   \__ From card 1
	//                      GroupPool[1] ---> Pool 11             |   /
	//                         ...              ...               |
	//                                                            |
	//       ...                                                  |
	//                                                            |
	// allGroupCost[0] ---> GroupCost[0] ---> Cost 00 (or NULL) <-+   \__ From card 0
	//                      GroupCost[1] ---> Cost 01 (or NULL)       /
	//                         ...              ...
	//
	// allGroupCost[1] ---> GroupCost[0] ---> Cost 10 (or NULL)       \__ From card 1
	//                      GroupCost[1] ---> Cost 11 (or NULL)       /
	//                         ...              ...
	//
	// Example:
	//
	// Card [0]: [0] U -> WW
	//           [1]   -> W   (min group cost = 0)
	// Card [1]: [0] W -> G   (min group cost = 1)
	// Card [2]: [0]   -> RU
	//           [1]   -> RB  (min group cost = 0)
	//
	// Example2:
	//
	// Card [0]: [0] UUUUU -> UBGWR
	//           [1] BBBBB -> UBGWR
	//           [2] GGGGG -> UBGWR
	//           [3] WWWWW -> UBGWR
	//           [4] RRRRR -> UBGWR
	//           [5] UBBBB -> UBGWR
	//			 ...
	// Card [1]: [0] UUUUU -> UBGWR
	//           [1] BBBBB -> UBGWR
	//           [2] GGGGG -> UBGWR
	//           [3] WWWWW -> UBGWR
	//           [4] RRRRR -> UBGWR
	//           [5] UBBBB -> UBGWR
	//			 ...
	//
	// Outer loop:                   
	//
	// config[] = {0, 0, 0}: U -> WW       Inner loop:
	//                       W -> G  
	//                         -> RU        NoCostPool: *RU (this one can be optimized out)
	//                                      Inner for loop: (1) Pool: RU, Cost:, U -> WW
	//                                                      (2) Pool: RWW, Cost: U, W -> G
	//                                                       *  Pool: RWG, Cost: UW
	//
	//                                      NoCostPool: RU
	//                                      Inner for loop: (2) Pool: RU, Cost:, W -> G (fail)
	//
	//                                      NoCostPool: RU
	//                                      Inner for loop: (1) Pool: RU, Cost:, U -> WW
	//                                                       *  Pool: RWW, Cost: U
	//
	//                                      NoCostPool: RU
	//                                      Inner for loop: (2) Pool: RU, Cost:, W -> G (fail)
	//
	// config[] = {0, 0, 1}: U -> WW       Inner loop:
	//                       W -> G  
	//                         -> RB        NoCostPool: *RB (this one can be optimized out)
	//                                      Inner for loop: (1) Pool: RB, Cost:, U -> WW (fail)
	//
	//                                      NoCostPool: RB
	//                                      Inner for loop: (2) Pool: RB, Cost:, W -> G (fail)
	//
	//                                      
	// config[] = {1, 0, 0}:   -> W        Inner loop:      
	//                       W -> G
	//                         -> RU        NoCostPool: *WRU
	//                                      Inner for loop: (1) Pool: WRU, Cost:, W -> G
	//                                                       *  Pool: GRU, Cost: W
	//
	// config[] = {1, 0, 1}:   -> W        Inner loop:      
	//                       W -> G
	//                         -> RB        NoCostPool: *WRB
	//                                      Inner for loop: (1) Pool: WRB, Cost:, W -> G
	//                                                       *  Pool: GRB, Cost: W
	//
	//
	//
	//

	// Diagram (B)
	// Inner loop: (another example, not related to the above)
	//
	//			j = 1: 0         
	//                 1                     
	//                 2         
	//                           
	//          j = 2: 0 1     
	//                 0 2
	//                 1 0
	//                 1 2  
	//                 2 0
	//				   2 1
	//
    //          j = 3: 0 1 2
	//			       0 2 1
	//				   1 0 2
	//				   1 2 0
	//				   2 0 1
	//				   2 1 0
	//
	// All numbers are just index into the same array (Cost[])
	//

	// Set up first permutation arrays

	size_t nCount = hintPools.size();

	IntArray config;
	config.resize(nCount);

	IntArray bound;
	bound.resize(nCount);

	if (!groupIndex)
	{
		groupIndex = new int[nCount];
		nGroupIndexSize = nCount;
	}
	else
		if (nCount > (size_t)nGroupIndexSize)
		{
			delete[] groupIndex;

			groupIndex = new int[nCount];
			nGroupIndexSize = nCount;
		}

	for (size_t i = 0; i < nCount; ++i)
	{
		config[i] = 0;

		const std::vector<const CManaPool*>& groupPool(hintPools[i]);

#ifdef _MY_DEBUG
		const std::vector<const CManaCost*>& groupCost(hintCosts[i]);
		ATLASSERT(groupPool.size() == groupCost.size());
		ATLASSERT(groupPool.size());
#endif

		bound[i] = groupPool.size() - 1;	// Permutation() will create configs up to the bound
	}

	std::map< CString, std::pair< int, std::set< CString > > > poolCostMap; // map from pool to all the costs (cost total, first cost); only lowest costs is kept

	do
	{
		CManaPool noCostPool;

		nGroupIndexCount = 0;

		for (size_t i = 0; i < nCount; ++i)
		{
			const CManaPool& groupPool(*(hintPools[i][config[i]]));
			const CManaCost& groupCost(*(hintCosts[i][config[i]]));

			if (groupCost.GetTotal())	// Group with cost
			{
				groupIndex[nGroupIndexCount++] = i;
			}
			else			// Group without cost
			{
				noCostPool.AddMana(groupPool);
			}
		}

		if (noCostPool.GetTotal())
		{
			if (AddWantedMana(abilityCosts, stackDenialCosts, noCostPool, CManaCost(), bTrick, allActionManaColors, wantedMana))
				return;

			if (nGroupIndexCount)
			{
				// At least one group with cost, noCostPool contains available mana

				// A pre-check here to make sure under the noCostPool can at least one cost
				// in this group. Otherwise we don't have to try any combinations here.

				bool bCanPay = false;
				for (int i = 0; i < nGroupIndexCount; ++i)
				{
					int n = groupIndex[i];
					const CManaCost& groupCost(*(hintCosts[n][config[n]]));

					if (groupCost.CompareToPool(noCostPool, FALSE))
					{
						bCanPay = true;
						break;
					}
				}

				if (!bCanPay)
					continue;

				// Allocate buffers

				if (!config1 || !nConfigSize1)
				{
					config1 = new int[nGroupIndexCount];
					nConfigSize1 = nGroupIndexCount;
				}
				else
					if (nConfigSize1 < nGroupIndexCount)
					{
						delete[] config1;

						config1 = new int[nGroupIndexCount];
						nConfigSize1 = nGroupIndexCount;
					}

				if (!bound1 || !nBoundSize1)
				{
					bound1 = new int[nGroupIndexCount];
					nBoundSize1 = nGroupIndexCount;
				}
				else
					if (nBoundSize1 < nGroupIndexCount)
					{
						delete[] bound1;

						bound1 = new int[nGroupIndexCount];
						nBoundSize1 = nGroupIndexCount;
					}

				// Setup bounds which are the same for any combinations

				for (int i = 0; i < nGroupIndexCount; ++i)
					bound1[i] = nGroupIndexCount - 1;

				for (int j = 1; j <= nGroupIndexCount; ++j)
				{
					for (int i = 0; i < j; ++i)
						config1[i] = i;

					do
					{
						CManaPool tempPool(noCostPool);
						CManaPool playerManaPool(m_pPriorityPlayer->GetManaPool());
						CManaCost tempCost;
						CManaCost firstCost;

						// See if tempPool can pay costs[config1[i] - 1], one by one.
						bool bInvalid = false;
						for (int i = 0; i < j; ++i)
						{
							int n = groupIndex[config1[i]];
							
							//const CManaCost& manaCost(costs[config1[i]]);
							const CManaCost& manaCost(*(hintCosts[n][config[n]]));
							if (!manaCost.CompareToPool(tempPool, FALSE))
							{
								bInvalid = true; // if one of the cost cannot be used, skip the whole set since this combintation (one without this cost) will be the equivalent.
								break;
							}

#ifdef _MY_DEBUG
//								ATLTRACE(_T("[%s] can pay [%s]\n"), tempPool.GetText(), manaCost.GetText());
#endif
							
							CManaPool tempPool1(manaCost.RemoveColorCostFromPool(tempPool));
							DWORD dwGenericCost = manaCost.GetCost(CManaCost::Color::Generic);
							if (dwGenericCost)
							{
								// Tricky part: since all generic costs have been expanded into distinct costs by CManaProductionHint,
								// pay generic costs with colorless mana only.
								// Example: original cost {2U}
								//          expanded to: {RRU}, {BBU}, {BRU}, ..., {2U}

								if (tempPool1.GetMana(CManaPool::Color::Colorless) < dwGenericCost)
									continue;

								tempPool1.RemoveMana(CManaPool::Color::Colorless, dwGenericCost, true);
							}
							tempPool = tempPool1;

							//const CManaPool& manaPool(pools[config1[i]]);
							const CManaPool& manaPool(*(hintPools[n][config[n]]));
							tempPool.AddMana(manaPool);
							tempCost.AddCost(manaCost);

							if (!firstCost.GetTotal())
							{
								firstCost = manaCost;
								if (playerManaPool.GetTotal())
								{
									// Pay all cost from this player's current mana pool first.
									// Since the player already has those mana in his/her pool, the cost (if can be paid from 
									// pool) is not what we want to add to wantedMana.
									firstCost.Pay(playerManaPool);
								}
							}
						}

						if (!bInvalid)
						{
							// See if we already have a cost->pool entry

							CString strPool(tempPool.ToString());
							if (!strPool.IsEmpty())
							{
								std::map< CString, std::pair< int, std::set< CString > > >::iterator it = poolCostMap.find(strPool);
								if (it == poolCostMap.end())
								{
									std::set< CString > firstCosts;
									firstCosts.insert(firstCost.ToString());
									poolCostMap[strPool] = std::make_pair(tempCost.GetTotal(), firstCosts);
								}
								else
								{
									int nThisCostCount = tempCost.GetTotal();
									int nCurrentCostCount = it->second.first;
									if (nThisCostCount == nCurrentCostCount)
										it->second.second.insert(firstCost.ToString());
									else
										if (nThisCostCount < nCurrentCostCount)
										{
											it->second.second.clear();
											it->second.second.insert(firstCost.ToString());
											it->second.first = nThisCostCount;
										}
								}
							}
						}
					} while (Permutation(bound1, nGroupIndexCount, j, config1, FALSE, TRUE));
				}
			}
		}

	} while (Permutation(bound,	nCount, config, FALSE, FALSE));

	// poolCostMap now contains all the feasible pools and their corresponding minimum costs. Loop through all the pool and change wantedMana.

	for (std::map< CString, std::pair< int, std::set< CString > > >::const_iterator it = poolCostMap.begin(); it != poolCostMap.end(); ++it)
	{
#ifdef _DEBUG
		ATLTRACE(_T("POOL: %s\n"), it->first);
#endif
		for (std::set< CString >::const_iterator it2 = it->second.second.begin(); it2 != it->second.second.end(); ++it2)
		{
#ifdef _DEBUG
			ATLTRACE(_T("     COST: %s\n"), *it2);
#endif
			if (AddWantedMana(abilityCosts, stackDenialCosts, CManaPool(it->first), CManaCost(*it2) /* first cost */, bTrick, allActionManaColors, wantedMana))
				return;
		}
	}
}

//_____________________________________________________________________________
//
#ifdef CUT_REQUIRED_TRANSIENT_ACTIONS
void CGame::CutRequiredTransientActions(CActionContainer* pActionContainer)
{
	std::set<ActionTransientId> requiredTransientActions;

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		CAction* pAction = pActionContainer->GetAt(i).GetPointer();

		ATLASSERT(!pAction->IsTrick());

		ActionTransientId requiredTransientId = pAction->GetRequiredTransientActionId();
		if (requiredTransientId != ActionTransientId::NotSupported)
		{
			std::set<ActionTransientId>::iterator it = requiredTransientActions.find(requiredTransientId);
			if (it != requiredTransientActions.end())
			{
#ifdef _MY_DEBUG
//				m_MT.Log(_T("[TRANSIENT CUT:%s]\n"), pActionContainer->GetAt(i)->GetActionText());
#endif
				pActionContainer->RemoveAt(i);
				++m_TS.m_nRequiredTransientCutCount;
			}
			else
			{
				requiredTransientActions.insert(requiredTransientId);
			}
		}
	}
}
#endif

#ifdef LAND_ACTIONS_FIRST
void CGame::CutNonLandActions(CActionContainer* pActionContainer)
{
	bool bFoundLandActions = false;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CAction* pAction = pActionContainer->GetAt(i).GetPointer();
		ATLASSERT(!pAction->IsTrick());

		if (pAction->IsPlayLand())
		{
			bFoundLandActions = true;
			break;
		}
	}

	if (!bFoundLandActions)
		return;

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		CAction* pAction = pActionContainer->GetAt(i).GetPointer();
		if (!pAction->IsPlayLand() && !pAction->IsNodeAction())
			pActionContainer->RemoveAt(i);
	}
}
#endif

//_____________________________________________________________________________
//
void CGame::SetMessageOwner(HWND hwndOwner,
							int nComputerImage,
							int nHumanImage,
							int nDebugImage,
							int nBugImage)
{
	m_hwndMessageOwner = hwndOwner;

	m_nComputerImage = nComputerImage;
	m_nHumanImage = nHumanImage;
	m_nDebugImage = nDebugImage;
	m_nBugImage = nBugImage;
}

void CGame::SetProgressOwner(HWND hwndOwner)
{
	m_hwndProgressOwner = hwndOwner;
}

void CGame::SetBoardOwner(HWND hwndOwner, HANDLE hUpdateComplete, bool* pbDecideNow)
{
	m_hwndBoardOwner = hwndOwner;
	m_hUpdateCompleted = hUpdateComplete;
	m_pbDecideNow = pbDecideNow;
}

void CGame::Message(LPCTSTR strMessage, int nImageIndex, MessageImportance importance,
					BOOL bToPastTense)
{
	CString strMessage2;
	if (bToPastTense)
		strMessage2 = EnglishToPastTense(strMessage);
	else
		strMessage2 = strMessage;

	if (m_bVerboseLog || importance == MessageImportance::High)
		Log(_T("%s\n"), strMessage2);

	if (m_bConsoleGame)
	{
		if (m_bVerboseConsoleOutput || 	importance == MessageImportance::High)
			_tprintf(_T("%s\n"), strMessage2);
	}

	if (m_hwndMessageOwner)
	{
		UINT uMessage = WM_APP_GAME_MESSAGE;

		if (importance == MessageImportance::High)
			uMessage = WM_APP_GAME_MESSAGE_HIGH_IMP;
		else
			if (importance == MessageImportance::Low)
				uMessage = WM_APP_GAME_MESSAGE_LOW_IMP;

		::PostMessage(m_hwndMessageOwner, uMessage,
			MAKEWPARAM(nImageIndex, m_nGameTurnNumber / m_Players.GetSize() + 1), (LPARAM)(new CString(strMessage2)));
	}
}

void CGame::Speak(LPCTSTR strMessage) const
{
	if (m_hwndMessageOwner)
		::PostMessage(m_hwndMessageOwner, WM_APP_GAME_SPEAK, NULL, (LPARAM)(new CString(strMessage)));
}

void CGame::DefineAllClassIDs()
{
	for (int i = 0; i < m_Players.GetSize(); ++i)	
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		for (int j = 0; j < pPlayer->GetZoneCount(); ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);

			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);

				pCard->DefineGameClassID();
				pCard->UpdateManaProductionHint();

#ifdef _MY_DEBUG
				ATLTRACE(_T("Card ID [%s]: 0x%08x\n"), pCard->GetCardName(), pCard->GetGameClassID());
#endif
			
				int nAbilityCount = pCard->GetAbilityCount();
				for (int l = 0; l < nAbilityCount; ++l)
				{
					CAbility* pAbility = pCard->GetAbility(l);
					
					pAbility->DefineGameClassID();

#ifdef _MY_DEBUG
					ATLTRACE(_T("\tCardAbility ID [%s]: 0x%08x\n"), pAbility->GetAbilityName(), pAbility->GetCardAbilityClassID());
#endif
				}
			}
		}
	}
}

/*
void CGame::InitializeThinkParameter()
{
	for (int i = 0; i < m_Players.GetSize(); ++i)	
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		for (int j = 0; j < pPlayer->GetZoneCount(); ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);

			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k).GetPointer();
			
				int nAbilityCount = pCard->GetAbilityCount();
				for (int l = 0; l < nAbilityCount; ++l)
				{
					CAbility* pAbility = pCard->GetAbility(l).GetPointer();
					
					// Node ability optimization preparations

					// TODO: dynamically created abilities with node specific
					// behaviors may not be used by the computer during those nodes.
					// Complication: removal of node Ids and may be cardAbility Ids from the m_TP member when the ability is removed
					// See also CAbilityEnchant::AddAbilityToCard()

					CUsageAbility* pUsageAbility = pAbility->GetComputerUsage();
					if (pUsageAbility)
						for (unsigned int m = 0; m < pUsageAbility->GetEntryCount(); ++m)
						{
							CUsageEntry* pUsageEntry(pUsageAbility->GetEntry(m));
							for (int n = 0; n < pUsageEntry->m_nCount; ++n)
							{
								NodeId nodeId = CUsagePattern::MapUsagePatternItem(pUsageEntry->m_Items[n]);
								if ((nodeId & NodeId::_Optimized).Any())
								{
									m_TP.m_GetActionNodes |= nodeId;
									m_TP.m_NodeAbilityNodes |= nodeId;
									m_TP.m_NodeAbilities[nodeId.Get()].insert(pAbility->GetCardAbilityClassID());
								}
							}
						}

					NodeId specificNode(pAbility->GetUseInSpecificNode());

					if ((specificNode & NodeId::_Optimized).Any())
					{
						m_TP.m_GetActionNodes |= specificNode;
						m_TP.m_NodeAbilityNodes |= specificNode;
						m_TP.m_NodeAbilities[specificNode.Get()].insert(pAbility->GetCardAbilityClassID());
					}
				}
			}
		}
	}

	if (m_bDeveloper)
	{
		Log(_T("// Get action nodes:     %08x\n"), m_TP.m_GetActionNodes.Get());
		Log(_T("// Node ability nodes: %08x\n"), m_TP.m_NodeAbilityNodes.Get());
	
		for (std::map<NodeId::Enum, std::set<DWORD>>::const_iterator it = m_TP.m_NodeAbilities.begin();
			it != m_TP.m_NodeAbilities.end();
			++it)
		{
			Log(_T("// Node %s:\n"), NodeId(it->first).ToString());

			const std::set<DWORD>& abilities(it->second);

			for (std::set<DWORD>::const_iterator it2 = abilities.begin();
				it2 != abilities.end();
				++it2)
				Log(_T("//  Ability: %08x\n"), *it2);
		}

		Log(_T("\n"));
	}
}
*/

void CGame::SetThinkParameter(DWORD dwMaxDuration,
						      bool bExtraCareful,
							  bool bBoostProcess,
							  bool bOverkill,
							  bool bConservative)
{
	m_TP.m_dwMaxDuration = dwMaxDuration;
	m_TP.m_bExtraCareful = bExtraCareful;
	m_TP.m_bBoostProcess = bBoostProcess;
	m_TP.m_bOverkill = bOverkill;
	m_TP.m_bConservative = bConservative;
}

void CGame::OnAbilityAddedToCard(CAbility* pAbility)
{
	CUsagePattern::GetInstance()->UpdateAbility(pAbility);

	int nIndex = m_OptimizedAbilities.FindIndex(pAbility);
	if (nIndex != -1)
		return;

	if ((pAbility->GetUseInSpecificNode() & NodeId::_Optimized).Any() ||
		(pAbility->GetPlayableFrom() & ZoneId::_OptimizedZones).Any())
	{
		m_OptimizedAbilities.Add(pAbility);
		return;
	}

	CUsageAbility* pUsageAbility = pAbility->GetComputerUsage();
	if (pUsageAbility)
		for (unsigned int m = 0; m < pUsageAbility->GetEntryCount(); ++m)
		{
			CUsageEntry* pUsageEntry(pUsageAbility->GetEntry(m));
			for (int n = 0; n < pUsageEntry->m_nCount; ++n)
			{
				NodeId nodeId = CUsagePattern::MapUsagePatternItem(pUsageEntry->m_Items[n]);
				if ((nodeId & NodeId::_Optimized).Any())
				{
					m_OptimizedAbilities.Add(pAbility);
					return;
				}
			}
		}
}

void CGame::OnAbilityRemovedFromCard(CAbility* pAbility)
{
	m_OptimizedAbilities.Remove(pAbility);
}

void CGame::UpdateAbility(CAbility* pAbility)
{
	m_OptimizedAbilities.Remove(pAbility);
	OnAbilityAddedToCard(pAbility);
}

void CGame::AddSearchBreak(SearchBreak toAdd)
{
	m_SearchBreak |= toAdd;
}

void CGame::GetAttackingCreatures(CCountedCardContainer& AttackingCreatures) const
{
	AttackingCreatures.RemoveAll();

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int j = 0; j < pInplay->GetSize(); ++j)
			if ((pInplay->GetAt(j)->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(j);
				if (pCreatureCard->IsAttacking())
					AttackingCreatures.AddCard(pCreatureCard, CardPlacement::Top);
			}
	}
}

void CGame::GetBlockingCreatures(CCountedCardContainer& BlockingCreatures) const
{
	BlockingCreatures.RemoveAll();

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int j = 0; j < pInplay->GetSize(); ++j)
			if ((pInplay->GetAt(j)->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(j);
				if (pCreatureCard->IsBlocking())
					BlockingCreatures.AddCard(pCreatureCard, CardPlacement::Top);
			}
	}
}

void CGame::GetBlockedCreatures(CCountedCardContainer& BlockedCreatures) const
{
	BlockedCreatures.RemoveAll();

	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int j = 0; j < pInplay->GetSize(); ++j)
			if ((pInplay->GetAt(j)->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(j);
				if (pCreatureCard->GetBlockedByCount())
					BlockedCreatures.AddCard(pCreatureCard, CardPlacement::Top);
			}
	}
}

/* Changed to state-based approach
void CGame::SuspendAllCreatures(bool bSuspendAllCreatures)
{
	m_bSuspendAllCreatures = bSuspendAllCreatures;

	if (!m_bSuspendAllCreatures)		// Dying check now
	{
		// 1/30/2005, need to take a snapshot of all the createure cards because CheckDying() may bury other creatures 

		vector<CCreatureCard*> creatureCards;

		// 5/30/2002, moved from CCleanUpNode::OnAfterEntry()
		for (int i = 0; i < m_Players.GetSize(); ++i)
		{
			CPlayer* pPlayer = m_Players.GetAt(i);

			CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k).GetPointer();
				if ((pCard->GetCardType() & CardType::Creature).Any())
				{
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
					if (pCreatureCard->CheckDying(TRUE))
						creatureCards.push_back(pCreatureCard);
				}
			}
		}

		for (vector<CCreatureCard*>::iterator it = creatureCards.begin(); it != creatureCards.end(); ++it)
			(*it)->Die();
	}
}
*/

void CGame::SetTriggeredResolutionPlayer(CPlayer* pPlayer)
{
	ATLASSERT(m_pTriggeredResolutionPlayer != pPlayer); 
	
	m_pTriggeredResolutionPlayer = pPlayer;
}

void CGame::SetMainWindow(HWND hwndMain)
{
	m_hwndMainWindow = hwndMain;
}

void CGame::SetStoppingEvent(HANDLE hStoppingEvent)
{
	m_hStoppingEvent = hStoppingEvent;
}

void CGame::SetOwningThread(Threading::CThread* pThread)
{
	m_pThread = pThread;
}

void CGame::ShowProgress() const
{
	if (m_hwndProgressOwner)
		::PostMessage(m_hwndProgressOwner, WM_APP_GAME_PROGRESS_SHOW, 0, 0);
}

void CGame::StepProgress() const
{
	if (m_hwndProgressOwner)
		::PostMessage(m_hwndProgressOwner, WM_APP_GAME_PROGRESS_STEPIT, 0, 0);
}

void CGame::SetProgress(int nProgress) const
{
	if (m_hwndProgressOwner)
		::PostMessage(m_hwndProgressOwner, WM_APP_GAME_PROGRESS_SET, nProgress, 0);
}

void CGame::HideProgress() const
{
	if (m_hwndProgressOwner)
		::PostMessage(m_hwndProgressOwner, WM_APP_GAME_PROGRESS_HIDE, 0, 0);
}

void CGame::UpdateGame() const
{
	if (m_hwndBoardOwner)
	{
		::PostMessage(m_hwndBoardOwner, WM_APP_GAME_UPDATE_GAME, 0, 0);
		::WaitForSingleObject(m_hUpdateCompleted, INFINITE);
	}
}

void CGame::ThinkingStarted() const
{
	if (m_hwndMainWindow)
		::PostMessage(m_hwndMainWindow, WM_APP_GAME_THINKING_STARTED, 0, 0);
}

void CGame::ThinkingStopped() const
{
	if (m_hwndMainWindow)
		::PostMessage(m_hwndMainWindow, WM_APP_GAME_THINKING_STOPPED, 0, 0);
}

bool CGame::WaitForRemotePlayers()
{
	for (int i = 0; i < m_Players.GetSize(); ++i)
	{
		CPlayer* pPlayer = m_Players.GetAt(i);
		CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(pPlayer->GetInterface());
		if (pNetInterface)
		{
			// Send ready signal to this remote player

			if (pNetInterface->SendGameReady() != ERROR_SUCCESS)
				return false;

			// Wait for ready signal to come back from this player

			if (!pNetInterface->WaitForGameReady(m_hStoppingEvent))
				return false;
		}
	}

	return true;
}

void CGame::OnGameStarting()
{
	m_apScheduler = std::auto_ptr<CScheduler>(new CScheduler(this));
}

int CGame::GetCertainTypeDiedCount(CardType pType) const
{
	int count = 0;

	for (int i = 0; i < m_Players.GetSize(); ++i)
		count += m_Players.GetAt(i)->GetCertainTypeDiedCount(pType);
	
	return count;
}

int CGame::GetTurnCastedSpellCount() const
{
	int count = 0;

	for (int i = 0; i < m_Players.GetSize(); ++i)
		count += m_Players.GetAt(i)->GetTurnCastedSpellCount();
	
	return count;
}

int CGame::GetLastTurnCastedSpellCount() const
{
	int count = 0;

	for (int i = 0; i < m_Players.GetSize(); ++i)
		count += m_Players.GetAt(i)->GetLastTurnCastedSpellCount();
	
	return count;
}
