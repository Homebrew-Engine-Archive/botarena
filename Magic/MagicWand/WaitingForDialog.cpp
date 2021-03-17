// WaitingForDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "WaitingForDialog.h"


// CWaitingForDialog dialog

IMPLEMENT_DYNAMIC(CWaitingForDialog, CDialog)
CWaitingForDialog::CWaitingForDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CWaitingForDialog::IDD, pParent)
	, m_nRemoteUserID(-1)
	, m_pRemoteUser(NULL)
	, m_nStartPreference(-1)
	, m_nOpponentStartPreference(-1)
	, m_nRandom(0)
	, m_uSeed(0)
	, m_nOpponentRandom(0)
	, m_uOpponentSeed(0)
	, m_bMulligan(TRUE)
{
}

CWaitingForDialog::~CWaitingForDialog()
{
	g_pCoreApp->GetNetManager()->SetSendGameRequestGranted(NULL);
	g_pCoreApp->GetNetManager()->SetSendGameRequestRejected(NULL);
}

void CWaitingForDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_MESSAGE, m_strMessage);
}

BEGIN_MESSAGE_MAP(CWaitingForDialog, CDialog)
	ON_BN_CLICKED(IDCANCEL, OnBnClickedCancel)
	ON_MESSAGE(WM_APP_NET_GAME_REQUEST_GRANTED, OnGranted)
	ON_MESSAGE(WM_APP_NET_GAME_REQUEST_REJECTED, OnRejected)
END_MESSAGE_MAP()

// CWaitingForDialog message handlers

BOOL CWaitingForDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_strMessage = _T("Waiting for ") + m_strOpponentName + _T("...");

	UpdateData(TO_UI);

	for (size_t i = 0; i < m_Deck.size(); ++i)
		m_strDeckEntries += m_Deck[i] + _T("\n");

	g_pCoreApp->GetNetManager()->SetSendGameRequestGranted(GetSafeHwnd());
	g_pCoreApp->GetNetManager()->SetSendGameRequestRejected(GetSafeHwnd());

	m_pRemoteUser = dynamic_cast<CRemoteGameUser*>(g_pCoreApp->GetNetManager()->GetRemoteUser(m_nRemoteUserID));
	ATLASSERT(m_pRemoteUser);
	int nResult = m_pRemoteUser->SendGameRequest(m_strDeckEntries, m_nStartPreference,
												 m_nRandom,
												 m_uSeed,
												 m_bMulligan);
	if (nResult != ERROR_SUCCESS)
	{
		CString strMessage;
		strMessage.Format(_T("Request Failed: %s"), GetErrorMessage(HRESULT_FROM_WIN32(nResult)));
		MessageBox(strMessage, _T("Game Request Failed"), MB_OK | MB_ICONERROR);		
		EndDialog(IDCANCEL);
	}
    
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CWaitingForDialog::OnBnClickedCancel()
{
	m_pRemoteUser->SendCancelGameRequest();	
	OnCancel();
}

LRESULT CWaitingForDialog::OnGranted(WPARAM wParam, LPARAM lParam)
{	
	CNetManager::GameRequestEntry* pEntry = reinterpret_cast<CNetManager::GameRequestEntry*>(wParam);

	ATLASSERT(pEntry->cpConnection->GetRemoteUserID() == m_nRemoteUserID);

	StringArray deck;
	SplitString(pEntry->strDeckEntries, _T("\n"), deck);
	m_OpponentDeck.insert(m_OpponentDeck.end(), deck.begin(), deck.end());
	m_uOpponentSeed = pEntry->uSeed;
	m_nOpponentRandom = pEntry->nRandom;
	m_nOpponentStartPreference = pEntry->nStartPreference;
	m_bMulligan = pEntry->bMulligan;

	delete pEntry;

	EndDialog(IDOK);

	return 0;
}

LRESULT CWaitingForDialog::OnRejected(WPARAM wParam, LPARAM lParam)
{	
	CString strMessage;
	strMessage.Format(_T("%s cannot join a game."), m_strOpponentName);
	MessageBox(strMessage, _T("Request Rejected"), MB_OK | MB_ICONINFORMATION);

	EndDialog(IDCANCEL);

	return 0;
}