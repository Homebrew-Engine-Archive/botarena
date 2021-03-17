// DeckBot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DeckBot.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//_____________________________________________________________________________
//
extern int AFXAPI AfxWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPTSTR lpCmdLine, int nCmdShow);

extern "C" int _tmain( int /*argc*/, TCHAR** /*argv*/, TCHAR** /*envp*/)
{
	return AfxWinMain(GetModuleHandle(NULL), NULL, GetCommandLine(), SW_SHOW);
}

//_____________________________________________________________________________
//
/*
	deckbot

	[-developer]
	[-start #]
	[-seed #]
	[-clock secs]
	[-verbose]
	[-help | -?]
	[-player name]
	
	deck1 deck2
*/

class CDeckBotCommandLineInfo : public CCommandLineInfo
{
public:
	CDeckBotCommandLineInfo()
		: m_bSuccess(true)
		, m_bHelp(false)
		, m_bDeveloper(false)
		, m_bVerboseLog(false)
		, m_uSeed(0)
		, m_bParsingSeed(false)
		, m_bParsingClock(false)
		, m_bParsingStart(false)
		, m_nClock(3)	// 3 minutes
		, m_nStart(0)
		, m_bPlayer(false)
		, m_strPlayerName(_T("Player"))
		, m_bParsingPlayerName(false)
	{}

	virtual void ParseParam(const TCHAR* pszParam, BOOL bFlag, BOOL bLast)
	{
		CString strParam(pszParam);
		strParam.Trim();

		if (m_bParsingSeed)
		{
			m_bParsingSeed = false;
			m_uSeed = _ttoi(strParam);
			return;
		}

		if (m_bParsingClock)
		{
			m_bParsingClock = false;
			m_nClock = _ttoi(strParam);
			if (m_nClock < 1)
				m_bSuccess = false;
			return;
		}

		if (m_bParsingStart)
		{
			m_bParsingStart = false;
			m_nStart = _ttoi(strParam);
			if (m_nStart < 0 || m_nStart > 1)
				m_bSuccess = false;
			return;
		}

		if (m_bParsingPlayerName)
		{
			m_bParsingPlayerName = false;
			if (!bFlag)
			{
				m_strPlayerName = strParam;
				return;
			}

			m_bSuccess = false;
			return;
		}

		if (bFlag)
		{
			if (!strParam.CompareNoCase(_T("help")) || strParam == _T("?"))
			{
				m_bHelp = true;
				return;
			}

			if (!strParam.CompareNoCase(_T("developer")))
			{
				m_bDeveloper = true;
				return;
			}

			if (!strParam.CompareNoCase(_T("verbose")))
			{
				m_bVerboseLog = true;
				return;
			}

			if (!strParam.CompareNoCase(_T("seed")))
			{
				m_bParsingSeed = true;
				return;
			}

			if (!strParam.CompareNoCase(_T("clock")))
			{
				m_bParsingClock = true;
				return;
			}

			if (!strParam.CompareNoCase(_T("start")))
			{
				m_bParsingStart = true;
				return;
			}

			if (!strParam.CompareNoCase(_T("player")))
			{
				m_bParsingPlayerName = true;
				m_bPlayer = true;
				return;
			}

			m_bSuccess = false;
			return;
		}

		if (m_strDeck1.IsEmpty())
		{
			m_strDeck1 = strParam;
			return;
		}
					
		if (m_strDeck2.IsEmpty())
		{
			m_strDeck2 = strParam;
			return;
		}

		m_bSuccess = false;
	}

	bool Success() const	{ return m_bSuccess && !m_bParsingSeed && !m_bParsingClock && 
							  !m_strDeck1.IsEmpty() && !m_strDeck2.IsEmpty(); }
	bool Help()	const		{ return m_bHelp; }
	bool Developer() const	{ return m_bDeveloper; }
	bool VerboseLog() const	{ return m_bVerboseLog; }
	unsigned Seed() const	{ return m_uSeed; }
	int Clock() const		{ return m_nClock; }
	CString Deck1() const	{ return m_strDeck1; }
	CString Deck2() const	{ return m_strDeck2; }
	int Start() const		{ return m_nStart; }
	bool Player() const		{ return m_bPlayer; }
	CString PlayerName() const { return m_strPlayerName; }

protected:
	bool m_bSuccess;
	bool m_bHelp;
	bool m_bDeveloper;
	bool m_bVerboseLog;
	unsigned m_uSeed;
	int	m_nClock;
	CString m_strDeck1;
	CString m_strDeck2;
	int m_nStart;
	bool m_bPlayer;
	CString m_strPlayerName;

private:
	bool m_bParsingSeed;
	bool m_bParsingClock;
	bool m_bParsingStart;
	bool m_bParsingPlayerName;
};

//_____________________________________________________________________________
//
class CDeckBotApp : public CCoreApp
{
public:
	CDeckBotCommandLineInfo* GetCommandLineInfo()	{ return &m_CommandLineInfo; }

protected:
	virtual BOOL InitInstance()
	{
		if (!__super::InitInstance())
			return FALSE;

		std::auto_ptr<CLogWriter> apLogWriter(new CConsoleLogWriter);
		apLogWriter->SetFilter(std::auto_ptr<CLogFilter>(new CLogFilter(
			Logging::Category::Enum(Logging::Category::All & ~Logging::Category::Debug))));
		m_apLogPublisher->AddWriter(apLogWriter);

		ParseCommandLine(m_CommandLineInfo);
		SetMultipleGameLogs(TRUE);
		SetDeveloper(m_CommandLineInfo.Developer());
		SetVerboseLog(m_CommandLineInfo.VerboseLog());

		return TRUE;
	}

	void OnBeginningOfTurn()
	{
		if (!m_CommandLineInfo.Player())
		{
			_tprintf(_T("Turn: %d, %s Life: %d, %s Life: %d...\n"),
				m_pGame->GetGameTurnNumber(),
				m_pGame->GetPlayer(0)->GetPlayerName(),
				m_pGame->GetPlayer(0)->GetLife(),
				m_pGame->GetPlayer(1)->GetPlayerName(),
				m_pGame->GetPlayer(1)->GetLife());
		}
	}

	int Run()
	{
#ifdef _DEBUG
		//_CrtSetBreakAlloc(172121);
#endif

		if (!m_CommandLineInfo.Help() && !m_CommandLineInfo.Success())
		{
			LOG_INFORMATION(_T("Bad command line"));
		}

		if (m_CommandLineInfo.Help() || !m_CommandLineInfo.Success())
		{
			_tprintf(_T("usage: \"DeckBot\" [/?|/help] [/seed _num_] [/clock _min_] [/verbose] [/player _name_] _deck1_txt_file_ _deck2_txt_file_\n"));
			return __super::Run();
		}

		LOG_INFORMATION(_T("DeckBot v%d.%d.%d.%d"),
			HIWORD(m_dwFileVersionMS), LOWORD(m_dwFileVersionMS),
			HIWORD(m_dwFileVersionLS), LOWORD(m_dwFileVersionLS));

		if (m_CommandLineInfo.Seed())
			LOG_INFORMATION(_T("Seed: %u"), m_CommandLineInfo.Seed());
		LOG_INFORMATION(_T("Clock: %d minute(s)"), m_CommandLineInfo.Clock());

		// Initialize game

		LOG_INFORMATION(_T("Initializing game..."));

#ifdef _DEBUG
		_CrtMemState memState;
#endif

		do
		{
			CJobCenter::ScopedPrimaryWorker scopedPrimaryWorker;

			CGame game;
			m_pGame = &game;
			m_pGame->SetBeginningOfTurnCallback(CGame::BeginningOfTurnCallback(
				this, &CDeckBotApp::OnBeginningOfTurn));

			LOG_DEBUG(_T("Seed = %u"), m_CommandLineInfo.Seed());

			CCardFactory::GetInstance()->Initialize();

			// Initialize players

			LOG_INFORMATION(_T("Initializing players..."));

			m_pGame->CreatePlayers();

			CPlayer* pPlayer1 = m_pGame->GetPlayer(0);
			pPlayer1->SetSeed(m_CommandLineInfo.Seed());

			CPlayer* pPlayer2 = m_pGame->GetPlayer(1);
			pPlayer2->SetSeed(pPlayer1->GetSeed() + 1);
			pPlayer2->SetComputer();			
			
			if (m_CommandLineInfo.Player())
			{
				pPlayer1->SetPlayerName(m_CommandLineInfo.PlayerName());
				pPlayer1->SetInterface(new CConsoleInterface(pPlayer1));
				m_pGame->SetConsoleGame(true);

				pPlayer2->SetPlayerName(_T("Computer"));	
			}
			else
			{
				pPlayer1->SetPlayerName(_T("Computer 1"));
				pPlayer1->SetComputer();

				pPlayer2->SetPlayerName(_T("Computer 2"));	
			}

			// Initialize decks

			CString strDeck1;
			if (m_CommandLineInfo.Deck1().Find(_T('\\')) == -1)
				strDeck1 = GetModulePath() + _T("\\") + m_CommandLineInfo.Deck1();
			else
				strDeck1 = m_CommandLineInfo.Deck1();

			CDeck deck1;
			if (!GetDeck(pPlayer1->GetPlayerName(), strDeck1, deck1))
				break;

			pPlayer1->SetDeck(deck1);

			CString strDeck2;
			if (m_CommandLineInfo.Deck2().Find(_T('\\')) == -1)
				strDeck2 = GetModulePath() + _T("\\") + m_CommandLineInfo.Deck2();
			else
				strDeck2 = m_CommandLineInfo.Deck2();

			CDeck deck2;
			if (!GetDeck(pPlayer2->GetPlayerName(), strDeck2, deck2))
				break;

			pPlayer2->SetDeck(deck2);

			// Define class IDs

			m_pGame->DefineAllClassIDs();		// Has to be later than SetupComputerPatterns

			// Think parameters

			//m_pGame->InitializeThinkParameter();
			m_pGame->SetThinkParameter(m_CommandLineInfo.Clock() * 1000 * 60);

			LOG_DEBUG(_T("Time allowed for each move: %d minute(s)"), m_CommandLineInfo.Clock());

			// Run

			LOG_INFORMATION(_T("Running..."));

			m_pGame->SetStartFirst(m_CommandLineInfo.Start());

#ifdef _DEBUG
			_CrtMemCheckpoint(&memState);

			//_CrtSetBreakAlloc(2435660);
#endif
			game.Run();

			if (pPlayer1->GetLost())
				LOG_INFORMATION(_T("%s won (%s)."), pPlayer2->GetPlayerName(), strDeck2);
			else
			if (pPlayer2->GetLost())
				LOG_INFORMATION(_T("%s won (%s)."), pPlayer1->GetPlayerName(), strDeck1);

		} while (false);

#ifdef _DEBUG
		_CrtMemDumpAllObjectsSince(&memState);
#endif

		m_pGame = NULL;

		return __super::Run(); // calls ExitInstance and exits right away when m_pMainWnd=NULL
	}

	bool GetDeck(LPCTSTR strPlayerName, LPCTSTR strDeck, CDeck& deck)
	{
		LOG_INFORMATION(_T("Initializing deck %s (%s)..."), strDeck, strPlayerName);

		deck.ImportDeck(strDeck, true);

		CDeck::DeckStatus deckStatus(deck.GetStatus());

		if (deckStatus == CDeck::DeckStatus::ParseError)
		{
			LOG_ERROR(_T("Cannot read deck file: %s"), strDeck);
			return false;
		}

		const StringSet& unsupportedCards(deck.GetUnsupportedCards());
		if (unsupportedCards.size())
		{
			LOG_WARNING(_T("Unsupported cards:"));
			for (StringSet::const_iterator i = unsupportedCards.begin(); i != unsupportedCards.end(); ++i)
				LOG_WARNING(_T(" %s"), *i);
		}

		const StringSet& tooMany(deck.GetCardsWithExtraCopiesRemoved());
		if (tooMany.size())
		{
			LOG_WARNING(_T("Cards with more than 4 copies (extras removed):"));
			for (StringSet::const_iterator i = tooMany.begin(); i != tooMany.end(); ++i)
				LOG_WARNING(_T(" %s"), *i);
		}		

		if (deckStatus == CDeck::DeckStatus::Okay)
		{
			return true;
		}
		
		if (deckStatus == CDeck::DeckStatus::NotEnoughCards)
		{
			LOG_ERROR(_T("Deck has not enough cards."));
			return false;
		}

		LOG_ERROR(_T("Deck has unknown errors."));
		return false;
	}

	CDeckBotCommandLineInfo	m_CommandLineInfo;
	CGame* m_pGame;
};

CDeckBotApp g_DeckBotApp;

