#include "stdafx.h"
#include "GameThread.h"
#include "StartDialog.h"
#include "MagicWandView.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CGameThread::CGameThread(HWND hwndThreadOwner)
	: m_hwndThreadOwner(hwndThreadOwner)
	, m_pStartDlg(NULL)
	, m_pView(NULL)
	, m_pGame(NULL)
{
	RegisterStateEvent(Threading::CThread::State::Stopping, m_eventStopping);
	SetStackSize(1024 * 1024 * 3);	// 3 MB stack size

#ifdef _DEBUG
	_CrtMemCheckpoint(&m_MemState);
#endif
}

CGameThread::~CGameThread()
{
	g_pCoreApp->GetNetManager()->ResetGameState();

	if (m_pGame)
		delete m_pGame;

#ifdef _DEBUG
//	_CrtMemDumpAllObjectsSince(&m_MemState);
#endif
}

HANDLE CGameThread::GetStoppingEvent()
{
	return m_eventStopping.GetHandle();
}

CGame* CGameThread::CreateGame(const CStartDialog* pDlg, const CMagicWandView* pView)
{
	m_pStartDlg = pDlg;
	m_pView = pView;

	__super::Start();

	m_eventGameReady.Wait();

	return m_pGame;
}

DWORD CGameThread::Run(Threading::CAutoResetEvent& eventStopping)
{
	CJobCenter::ScopedPrimaryWorker scopedPrimaryWorker;

	m_pGame = new CGame();
	m_pGame->SetStoppingEvent(m_eventStopping.GetHandle());
	m_pGame->SetOwningThread(this);

	m_pGame->CreatePlayers();
	m_pGame->SetMulligan(m_pStartDlg->m_bMulligan);

	CCard::ResetInstanceID();
	CAbility::ResetInstanceID();

	CPlayer* pOpponent = m_pGame->GetPlayer(0);
	CPlayer* pPlayer = m_pGame->GetPlayer(1);

	pOpponent->SetPlayerName(m_pStartDlg->m_strOpponentName);
	pPlayer->SetPlayerName(m_pStartDlg->m_strUserName);	

	pPlayer->SetSeed(m_pStartDlg->m_uPlayerSeed);
	pOpponent->SetSeed(m_pStartDlg->m_uOpponentSeed);

	ATLTRACE(_T("Player Seed = %u\n"), m_pStartDlg->m_uPlayerSeed);
	ATLTRACE(_T("Opponent Seed = %u\n"), m_pStartDlg->m_uOpponentSeed);

	if (m_pStartDlg->m_bStartFirst)
	{
		pPlayer->SetDeck(m_pStartDlg->m_PlayerDeck);
		pOpponent->SetDeck(m_pStartDlg->m_OpponentDeck);
	}
	else
	{
		pOpponent->SetDeck(m_pStartDlg->m_OpponentDeck);
		pPlayer->SetDeck(m_pStartDlg->m_PlayerDeck);
	}

	// This check is needed to make sure the shuffle order is the same for the remote user
	m_pGame->SetNormalizedPlayerIndex(m_pStartDlg->m_bStartFirst ? 1 : 0);

	if (m_pStartDlg->m_bWithComputer)
	{
		pOpponent->SetComputer();

		if (m_pStartDlg->m_nDebugRepeat > 0)
			pPlayer->SetComputer();
	}

	m_pGame->SetStartFirst(m_pStartDlg->m_bStartFirst ? 1 : 0);

	ATLTRACE(_T("Player start first = %d\n"), m_pStartDlg->m_bStartFirst ? 1 : 0);

	// Define class IDs

	m_pGame->DefineAllClassIDs();		// Has to be later than SetupComputerPatterns

	// Think parameters

	//m_pGame->InitializeThinkParameter();
	m_pGame->SetThinkParameter(m_pView->m_dwMaxDuration,
		To_bool(m_pView->m_bExtraCareful),
		To_bool(m_pView->m_bBoostProcess),
		To_bool(m_pView->m_bOverkill),
		To_bool(m_pView->m_bConservative));

	// Log sealed deck status

	if (pOpponent->GetDeck().GetSealed())
	{
		CString strMessage;
		strMessage.Format(_T("%s used a sealed deck"), pOpponent->GetPlayerName());
		m_pGame->Message(strMessage, pOpponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High);

		if (!pOpponent->GetDeck().GetSealSeed().IsEmpty())
			strMessage.Format(_T("Sealed deck created on %s from seed '%s'"), 
				pOpponent->GetDeck().GetSealCreationDateString(true),
				pOpponent->GetDeck().GetSealSeed());
		else
			strMessage.Format(_T("Sealed deck created on %s from a random seed"), 
				pOpponent->GetDeck().GetSealCreationDateString(true));
	
		m_pGame->Message(strMessage, pOpponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High);

		strMessage.Format(_T("Sealed deck last modified on %s"), pOpponent->GetDeck().GetSealModificationDateString(true));
		m_pGame->Message(strMessage, pOpponent->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High);
	}

	m_eventGameReady.Set();

	HANDLE events[] = { m_eventStopping.GetHandle(), m_eventRun.GetHandle() };

	if (::WaitForMultipleObjects(ARRAY_SIZE(events), events, FALSE, INFINITE) ==
		WAIT_OBJECT_0)
		return 0;

	try
	{
		m_pGame->Run();
	}
	catch(Exception::CRecoverableSEHException& exception)
	{
		Exception::GenerateDump(exception.ExceptionPointers());

		if (m_hwndThreadOwner)
		{
			CString* pstrMessage = new CString;
			pstrMessage->Format(_T("Game Engine Exception\n\n%s"), exception.GetMessage());

			::PostMessage(m_hwndThreadOwner, WM_APP_ENGINE_EXCEPTION, 0, (LPARAM)pstrMessage);
		}
	}
	catch(Exception::CException& exception)
	{
		if (m_hwndThreadOwner)
		{
			CString* pstrMessage = new CString;
			pstrMessage->Format(_T("Game Engine Exception\n\n%s"), exception.GetMessage());

			::PostMessage(m_hwndThreadOwner, WM_APP_ENGINE_EXCEPTION, 0, (LPARAM)pstrMessage);
		}

		throw;	// Couldn't get an accurate stack trace in the dump when GenerateDump() is called here. 
				// Just let the terminate routine to generate the dump which can get an accurate stack trace.
	}
	catch(...)
	{
		if (m_hwndThreadOwner)
			::PostMessage(m_hwndThreadOwner, WM_APP_ENGINE_EXCEPTION, 0, 
				(LPARAM)(new CString(_T("Game Engine Exception\n\nUnknown Exception"))));

		throw;	// Couldn't get an accurate stack trace in the dump when GenerateDump() is called here. 
				// Just let the terminate routine to generate the dump which can get an accurate stack trace.
	}

	GdiFlush();

	return 0;
}
