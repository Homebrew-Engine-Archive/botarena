// StartDialog.cpp : implementation file
//

#include "stdafx.h"
#include "StartDialog.h"
#include "DeckDialog.h"
#include "Resource.h"
#include "WaitingForDialog.h"
#include "SealedDeckInfoDlg.h"
#include "MagicWandDoc.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CStartDialog dialog
//

int CStartDialog::s_nDebugRepeat = 0;
unsigned CStartDialog::s_uSeed = 0;
BOOL CStartDialog::s_bSeedIncrease = TRUE;

CStartDialog::CStartDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CStartDialog::IDD, pParent)
	, m_nDebugRepeat(0)
	, m_bMulligan(TRUE)
	, m_bRandom1(FALSE)
	, m_bRandom2(FALSE)
{
	m_strUserName = g_pCoreApp->GetNetManager()->GetUserName();
	m_nRemoteUserID = -1;
	m_bStartFirst = TRUE;
	m_uPlayerSeed = 0;
	m_uOpponentSeed = 0;

	m_strDeck1 = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECK1, _T(""));
	m_strDeck2 = g_pCoreApp->GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECK2, _T(""));
	m_bFullScreen = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_FULL_SCREEN, TRUE);
	m_nStartPreference = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_START_FIRST, 2);
	m_bMulligan = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MULLIGAN, TRUE);

	m_bRandom1 = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_RANDOM_DECK1, FALSE);
	m_bRandom2 = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_RANDOM_DECK2, FALSE);
}

CStartDialog::~CStartDialog()
{
	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECK1, m_strDeck1);
	g_pCoreApp->WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECK2, m_strDeck2);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_FULL_SCREEN, m_bFullScreen);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_START_FIRST, m_nStartPreference);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MULLIGAN, m_bMulligan);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_RANDOM_DECK1, m_bRandom1);
	g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_RANDOM_DECK2, m_bRandom2);
}

bool CStartDialog::SetDeck(LPCTSTR strDeckPath, BOOL bOpponent, CDeck& deck)
{	
	deck.ImportDeck(strDeckPath, true);

	CDeck::DeckStatus deckStatus(deck.GetStatus());

	CString strMessage;
	if (deckStatus == CDeck::DeckStatus::ParseError)
	{
		strMessage.Format(_T("Cannot read deck file: %s"), strDeckPath);
		MessageBox(strMessage, _T("Deck Error"), MB_ICONERROR);
		return false;
	}

	const StringSet& unsupportedCards(deck.GetUnsupportedCards());
	if (unsupportedCards.size())
	{
		strMessage.AppendFormat(_T("Unsupported cards in %s deck:\n\n"), bOpponent ? _T("opponent's") : _T("your"));
		for (StringSet::const_iterator i = unsupportedCards.begin(); i != unsupportedCards.end(); ++i)
			strMessage.AppendFormat(_T(" %s\n"), *i);
	}

	const StringSet& tooMany(deck.GetCardsWithExtraCopiesRemoved());
	if (tooMany.size())
	{
		if (!strMessage.IsEmpty())
			strMessage.Append(_T("\n"));
		strMessage.AppendFormat(_T("Cards with more than 4 copies in %s deck (extras removed):\n\n"), bOpponent ? _T("opponent's") : _T("your"));
		for (StringSet::const_iterator i = tooMany.begin(); i != tooMany.end(); ++i)
			strMessage.AppendFormat(_T(" %s\n"), *i);
	}		

	if (deckStatus == CDeck::DeckStatus::Okay)
	{
		if (!strMessage.IsEmpty())
		{
			strMessage.AppendFormat(_T("\nDo you want to continue to use %s deck?"), bOpponent ? _T("opponent's") : _T("your"));
			return MessageBox(strMessage, _T("Deck Error"), MB_ICONQUESTION | MB_YESNO) == IDYES;
		}

		return true;
	}

	if (!strMessage.IsEmpty())
		strMessage.Append(_T("\n"));

	strMessage.AppendFormat(_T("%s deck cannot be used: %s"), bOpponent ? _T("Opponent's") : _T("Your"), deckStatus.ToString());

	MessageBox(strMessage, _T("Deck Error"), MB_ICONERROR);
	return false;
}

//_____________________________________________________________________________
//
// CStartDialog - Overrides
//

void CStartDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_FULL_SCREEN, m_bFullScreen);
	DDX_Text(pDX, IDC_PLAYER_NAME, m_strUserName);
	DDX_Control(pDX, IDC_OPPONENT_LIST, m_OpponentList);
	DDX_Radio(pDX, IDC_START_FIRST, m_nStartPreference);
	DDX_Text(pDX, IDC_SEED, m_uPlayerSeed);
	DDX_Text(pDX, IDC_REPEAT, m_nDebugRepeat);
	DDX_Control(pDX, IDC_SPIN_REPEAT, m_SpinRepeat);
	DDX_Check(pDX, IDC_SEED_INCREASE, s_bSeedIncrease);
	DDX_Check(pDX, IDC_MULLIGAN, m_bMulligan);
	DDX_Check(pDX, IDC_RANDOM1, m_bRandom1);
	DDX_Check(pDX, IDC_RANDOM2, m_bRandom2);
	DDX_Control(pDX, IDC_DECK_PATH, m_DeckPathButton);
	DDX_Control(pDX, IDC_DECK_PATH2, m_DeckPathButton2);
}

//_____________________________________________________________________________
//
// CStartDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CStartDialog, CDialog)
	ON_CBN_SELCHANGE(IDC_OPPONENT_LIST, OnCbnSelchangeOpponentList)
	ON_BN_CLICKED(IDC_RANDOM1, &CStartDialog::OnBnClickedRandom1)
	ON_BN_CLICKED(IDC_RANDOM2, &CStartDialog::OnBnClickedRandom2)
	ON_BN_CLICKED(IDC_DECK_PATH, &CStartDialog::OnBnClickedDeckPath)
	ON_BN_CLICKED(IDC_DECK_PATH2, &CStartDialog::OnBnClickedDeckPath2)
END_MESSAGE_MAP()

BOOL CStartDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();

	m_DeckPathButton.SetImage(g_pCoreApp->GetBitmapPath() + _T("\\folder.png"));
	m_DeckPathButton2.SetImage(g_pCoreApp->GetBitmapPath() + _T("\\folder.png"));

	m_Deck1.SubclassDlgItem(IDC_DECK1, this);
	m_Deck2.SubclassDlgItem(IDC_DECK2, this);

	m_Deck1.AddImage(IDI_DECK, ~CFile::readOnly);
	m_Deck1.AddImage(IDI_DECK_READONLY, CFile::readOnly);

	m_Deck2.AddImage(IDI_DECK, ~CFile::readOnly);
	m_Deck2.AddImage(IDI_DECK_READONLY, CFile::readOnly);

	int nModuleCount = CCardStore::GetInstance()->GetModuleCount();
	for (int i = 0; i < nModuleCount; ++i)
	{
		CCardModule* pModule = CCardStore::GetInstance()->GetModule(i);
		m_Deck1.AddImage(pModule->GetIcon(), CString(_T("(")) + pModule->GetExpansionName() + _T(")"));
		m_Deck2.AddImage(pModule->GetIcon(), CString(_T("(")) + pModule->GetExpansionName() + _T(")"));
	}

	CString strComputer;
	strComputer.Format(_T("%s (CPU)"), m_strComputerPlayerName);

	int nIndex = m_OpponentList.AddString(strComputer);
	m_OpponentList.SetItemData(nIndex, -1);

	IntArray remoteUserIDs;
	g_pCoreApp->GetNetManager()->GetAllRemoteUserIDs(remoteUserIDs);

	for (IntArray::size_type i = 0; i < remoteUserIDs.size(); ++i)
	{
		CRemoteGameUser* pRemoteUser =
			dynamic_cast<CRemoteGameUser*>(
			g_pCoreApp->GetNetManager()->GetRemoteUser(remoteUserIDs[i]));
		if (pRemoteUser)		
		{
			int nIndex = m_OpponentList.AddString(pRemoteUser->GetRemoteUserName());
			m_OpponentList.SetItemData(nIndex, remoteUserIDs[i]);
			if (m_OpponentList.GetCurSel() == -1)
				m_OpponentList.SetCurSel(nIndex);
		}
	}

	if (m_OpponentList.GetCurSel() == -1)
		m_OpponentList.SetCurSel(nIndex);

	OnCbnSelchangeOpponentList();

	do 
	{
		CString strDeckPath(g_pCoreApp->GetDeckPath());

		m_Deck1.Dir(strDeckPath, _T("txt"));
		m_Deck1.SetCurSel(0);

		m_Deck2.Dir(strDeckPath, _T("txt"));
		m_Deck2.SetCurSel(0);

		m_Deck1.SelectString(m_strDeck1);
		m_Deck2.SelectString(m_strDeck2);

		if (!m_Deck1.GetCount() || !m_Deck2.GetCount())
		{
			if (MessageBox(_T("Cannot find any deck in folder. Do you want to create one now?"),
				_T("Start Game"), MB_ICONQUESTION | MB_YESNO) == IDYES)
			{
				CDeckDialog Dlg;
				Dlg.DoModal();
				continue;
			}
			else
				break;

			PostMessage(WM_CLOSE);
		}
		else
			break;

	} while (TRUE);

	if (g_pCoreApp->GetDeveloper())
	{
			
		GetDlgItem(IDC_STATIC_DEVELOPER)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_STATIC_SEED)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_SEED)->ShowWindow(SW_SHOW);
		//GetDlgItem(IDC_STATIC_REPEAT)->ShowWindow(SW_SHOW);
		//GetDlgItem(IDC_REPEAT)->ShowWindow(SW_SHOW);

		m_SpinRepeat.ShowWindow(SW_SHOW);
		m_SpinRepeat.SetRange(0, 100);
	}
	else
	{
		// Changed Franavalon 30-07-2011. Now this is for all players except change seed
		// Increase checkbox is hidden on Resourceview

			
		//GetDlgItem(IDC_STATIC_DEVELOPER)->ShowWindow(SW_SHOW);
		////GetDlgItem(IDC_STATIC_SEED)->ShowWindow(SW_SHOW);
		////GetDlgItem(IDC_SEED)->ShowWindow(SW_SHOW);
		//GetDlgItem(IDC_STATIC_REPEAT)->ShowWindow(SW_SHOW);
		//GetDlgItem(IDC_REPEAT)->ShowWindow(SW_SHOW);

		//m_SpinRepeat.ShowWindow(SW_SHOW);
		//m_SpinRepeat.SetRange(0, 100);

		//// Hide developer options
			
		CRect rectWindow;
		GetWindowRect(rectWindow);

		CRect rectOkay;
		GetDlgItem(IDOK)->GetWindowRect(rectOkay);

		SetWindowPos(NULL, 0, 0, rectWindow.Width(), rectWindow.Height() - (rectWindow.bottom - rectOkay.bottom) + 10, SWP_NOMOVE | SWP_NOREDRAW | SWP_NOZORDER);
	}

	m_uPlayerSeed = s_uSeed;

	if (s_nDebugRepeat)
	{
		m_nDebugRepeat = s_nDebugRepeat;
		UpdateData(TO_UI);
		OnOK();
	}

	if (m_bRandom1)
		m_Deck1.EnableWindow(FALSE);

	if (m_bRandom2)
		m_Deck2.EnableWindow(FALSE);

	GetDlgItem(IDOK)->EnableWindow(m_Deck1.GetCount() && m_Deck2.GetCount());

	UpdateData(TO_UI);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CStartDialog::OnOK() 
{
	UpdateData(FROM_UI);

	g_pCoreApp->GetNetManager()->SetUserName(m_strUserName);

	if (!m_bRandom1)
	{
		m_strDeck1 = m_Deck1.GetFileTitle();
		m_strDeckPath1 = m_Deck1.GetFilePath();
	}
	else
	{
		int nDeckCount = m_Deck1.GetCount();
		int nDeck = (rand() % nDeckCount);
		m_strDeck1 = m_Deck1.GetFileTitle(nDeck);
		m_strDeckPath1 = m_Deck1.GetFilePath(nDeck);
	}

	if (!m_bRandom2)
	{
		m_strDeck2 = m_Deck2.GetFileTitle();
		m_strDeckPath2 = m_Deck2.GetFilePath();
	}
	else
	{
		int nDeckCount = m_Deck2.GetCount();
		int nDeck = (rand() % nDeckCount);
		m_strDeck2 = m_Deck2.GetFileTitle(nDeck);
		m_strDeckPath2 = m_Deck2.GetFilePath(nDeck);
	}

	if (!SetDeck(m_strDeckPath1, FALSE, m_PlayerDeck))
		return;

	int nIndex = m_OpponentList.GetCurSel();
	m_nRemoteUserID = m_OpponentList.GetItemData(nIndex);

	if (m_nDebugRepeat > 0)
	{
		s_nDebugRepeat = m_nDebugRepeat;
		m_nRemoteUserID = -1;	// Force computer-vs-computer if repeat is not 0 (computer-vs-computer is only available in developer mode and implied by a non-zero repeat)
	}

	if (m_nRemoteUserID == -1)
	{
		m_bWithComputer = TRUE;
		m_strOpponentName = m_strComputerPlayerName;

		if (!SetDeck(m_strDeckPath2, TRUE, m_OpponentDeck))
			return;

		switch (m_nStartPreference)
		{
		case 0: m_bStartFirst = TRUE; break;
		case 1: m_bStartFirst = FALSE; break;
		case 2: m_bStartFirst = (rand() > RAND_MAX / 2);
		}

		if (!m_uPlayerSeed)
		{
			m_uPlayerSeed = (unsigned)time(NULL);
			m_uOpponentSeed = m_uPlayerSeed + 1;
			UpdateData(TO_UI);
		}
		else
		{
			s_uSeed = m_uPlayerSeed;
			m_uOpponentSeed = m_uPlayerSeed + 1;
		}
	}
	else
	{
		m_bWithComputer = FALSE;
		m_strOpponentName = g_pCoreApp->GetNetManager()->GetRemoteUser(m_nRemoteUserID)->GetRemoteUserName();

		CWaitingForDialog WaitingForDlg;
		WaitingForDlg.m_nRemoteUserID = m_nRemoteUserID;
		WaitingForDlg.m_strOpponentName = m_strOpponentName;
		WaitingForDlg.m_Deck = m_PlayerDeck.GetFileLines();
		WaitingForDlg.m_nStartPreference = m_nStartPreference;
		WaitingForDlg.m_bMulligan = m_bMulligan;
		WaitingForDlg.m_uSeed = m_uPlayerSeed;

		if (WaitingForDlg.DoModal() != IDOK)
			return;

		int nRandom = WaitingForDlg.m_nRandom;
		unsigned uSeed = WaitingForDlg.m_uSeed;

		ATLTRACE(_T("My random: %d\nMy seed: %u\nMy start preference: %d\nMy Mulligan: %d"),
			WaitingForDlg.m_nRandom,
			WaitingForDlg.m_uSeed,
			WaitingForDlg.m_nStartPreference,
			WaitingForDlg.m_bMulligan);
			
		m_OpponentDeck.ImportDeck(WaitingForDlg.m_OpponentDeck, true);
		ATLASSERT(m_OpponentDeck.GetStatus() == CDeck::DeckStatus::Okay);
		if (m_OpponentDeck.GetStatus() != CDeck::DeckStatus::Okay)
		{
			CString strMessage;
			strMessage.Format(_T("Unexpected opponent deck error: %s"), m_OpponentDeck.GetStatus().ToString());
			MessageBox(strMessage, _T("Deck Error"), MB_ICONERROR);
			return;
		}
		
		if (m_OpponentDeck.GetSealed())
		{
			CSealedDeckInfoDlg dlg(m_OpponentDeck);

			dlg.m_strCaption = _T("Opponent's Sealed Deck Information");
			dlg.m_strPlayerName = m_strOpponentName;

			dlg.DoModal();
		}

		int nOpponentStartPreference = WaitingForDlg.m_nOpponentStartPreference;
		int nOpponentRandom = WaitingForDlg.m_nOpponentRandom;
		unsigned uOpponentSeed = WaitingForDlg.m_uOpponentSeed;
		BOOL bOpponentMulligan = WaitingForDlg.m_bMulligan;

		ATLTRACE(_T("Remote random: %d\nRemote seed: %u\nRemote start preference: %d\nRemote Mulligan: %d"),
			nOpponentRandom,
			uOpponentSeed,
			nOpponentStartPreference,
			bOpponentMulligan);

		// Determine who starts first

		switch (m_nStartPreference)	
		{
		case 0:	// This player wants to play first
			switch (nOpponentStartPreference)
			{
			case 0: 
				if (nRandom > nOpponentRandom)
					m_bStartFirst = TRUE;
				else
					if (nRandom < nOpponentRandom)
					{
						m_bStartFirst = FALSE;
						m_bMulligan = bOpponentMulligan;
					}
					else
					{
						if (!g_pCoreApp->GetNetManager()->GetRemoteUser(m_nRemoteUserID)->IsInitiator())
							m_bStartFirst = TRUE;
						else
						{
							m_bStartFirst = FALSE;
							m_bMulligan = bOpponentMulligan;
						}
					}
				break;
			case 1: m_bStartFirst = TRUE; break;
			case 2:	m_bStartFirst = TRUE; break;
			}
			break;

		case 1:	// This player doesn't want to play first
			switch (nOpponentStartPreference)
			{
			case 0: m_bStartFirst = FALSE; m_bMulligan = bOpponentMulligan; break;
			case 1: 
				if (nRandom > nOpponentRandom)
					m_bStartFirst = TRUE;
				else
					if (nRandom < nOpponentRandom)
					{
						m_bStartFirst = FALSE;
						m_bMulligan = bOpponentMulligan;
					}
					else
						if (!g_pCoreApp->GetNetManager()->GetRemoteUser(m_nRemoteUserID)->IsInitiator())
							m_bStartFirst = TRUE;
						else
						{
							m_bStartFirst = FALSE;
							m_bMulligan = bOpponentMulligan;
						}
				break;
			case 2:	m_bStartFirst = FALSE; m_bMulligan = bOpponentMulligan; break;
			}
			break;

		case 2:	// This player don't care
			switch (nOpponentStartPreference)
			{
			case 0: m_bStartFirst = FALSE; m_bMulligan = bOpponentMulligan; break;
			case 1: m_bStartFirst = TRUE; break;
			case 2:	// Both don't care
				if (nRandom > nOpponentRandom)
					m_bStartFirst = TRUE;
				else
					if (nRandom < nOpponentRandom)
					{
						m_bStartFirst = FALSE;
						m_bMulligan = bOpponentMulligan; 
					}
					else
						if (!g_pCoreApp->GetNetManager()->GetRemoteUser(m_nRemoteUserID)->IsInitiator())
							m_bStartFirst = TRUE;
						else
						{
							m_bStartFirst = FALSE;
							m_bMulligan = bOpponentMulligan;
						}						
				break;
			}
			break;
		}

		m_uPlayerSeed = uSeed;
		m_uOpponentSeed = uOpponentSeed;
	}

	UpdateData(TO_UI);

	CDialog::OnOK();
}

void CStartDialog::OnCbnSelchangeOpponentList()
{
	int nIndex = m_OpponentList.GetCurSel();
	int nRemoteUserID = m_OpponentList.GetItemData(nIndex);
	m_Deck2.ShowWindow(nRemoteUserID == -1);
	GetDlgItem(IDC_STATIC_DECK)->ShowWindow(nRemoteUserID == -1);
	GetDlgItem(IDC_RANDOM2)->ShowWindow(nRemoteUserID == -1);
	GetDlgItem(IDC_DECK_PATH2)->ShowWindow(nRemoteUserID == -1);
}

void CStartDialog::OnBnClickedRandom1()
{
	UpdateData(FROM_UI);

	m_Deck1.EnableWindow(!m_bRandom1);
}

void CStartDialog::OnBnClickedRandom2()
{
	UpdateData(FROM_UI);

	m_Deck2.EnableWindow(!m_bRandom2);
}

void CStartDialog::OnBnClickedDeckPath()
{
	do
	{
		CString strDeckPath(CMagicWandDoc::GetFolder(g_pCoreApp->GetDeckPath(), GetSafeHwnd()));
		if (strDeckPath.IsEmpty())
			return;

		g_pCoreApp->SetDeckPath(strDeckPath);

		m_Deck1.Dir(strDeckPath, _T("txt"));
		m_Deck1.SetCurSel(0);

		if (!m_Deck1.GetCount())
		{
			if (MessageBox(_T("Cannot find any deck in folder. Do you want to create one now?"),
				_T("Start Game"), MB_ICONQUESTION | MB_YESNO) == IDYES)
			{
				CDeckDialog Dlg;
				Dlg.DoModal();
				continue;
			}

			break;
		}
		else
			break;

	} while (TRUE);

	GetDlgItem(IDOK)->EnableWindow(m_Deck1.GetCount() && m_Deck2.GetCount());
}

void CStartDialog::OnBnClickedDeckPath2()
{
	do
	{
		CString strDeckPath(CMagicWandDoc::GetFolder(g_pCoreApp->GetDeckPath(), GetSafeHwnd()));
		if (strDeckPath.IsEmpty())
			return;

		g_pCoreApp->SetDeckPath(strDeckPath);

		m_Deck2.Dir(strDeckPath, _T("txt"));
		m_Deck2.SetCurSel(0);

		if (!m_Deck2.GetCount())
		{
			if (MessageBox(_T("Cannot find any deck in folder. Do you want to create one now?"),
				_T("Start Game"), MB_ICONQUESTION | MB_YESNO) == IDYES)
			{
				CDeckDialog Dlg;
				Dlg.DoModal();
				continue;
			}

			break;
		}
		else
			break;

	} while (TRUE);

	GetDlgItem(IDOK)->EnableWindow(m_Deck1.GetCount() && m_Deck2.GetCount());
}
