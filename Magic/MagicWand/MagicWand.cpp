// MagicWand.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"

#include "MainFrm.h"
#include "AboutDialog.h"
#include "HotkeysDialog.h"
#include "MagicWandDoc.h"
#include "MagicWandView.h"
#include "ConnectToComputerDialog.h"
#include "ModulVer.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//

CMagicWandApp	g_MagicWandApp;

//_____________________________________________________________________________
//
// CMagicWandApp
//

CMagicWandApp::CMagicWandApp()
	: CCoreApp(REG_COMPANY_NAME)
	, m_hwndDialog(NULL)
	, m_gpToolTip (NULL)
{
	m_strProductName = GetModuleFileName();
	LPTSTR str = m_strProductName.GetBufferSetLength(MAX_PATH);
	PathStripPath(str);
	PathRemoveExtension(str);
	m_strProductName.ReleaseBuffer();	
}

//_____________________________________________________________________________
//
// CMagicWandApp - Overrides
//

BOOL CMagicWandApp::InitInstance()
{
	if (!__super::InitInstance())
		return FALSE;

	setlocale(LC_ALL, "English");

	LoadStdProfileSettings(0);  // Load standard INI file options (including MRU)

	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.

	InitCommonControls();

	// Initialize MFC

	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}

	AfxEnableControlContainer();

	// Register the application's document templates.  Document templates
	// serve as the connection between documents, frame windows and views

	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CMagicWandDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CMagicWandView));
	AddDocTemplate(pDocTemplate);

	// Parse command line for standard shell commands, DDE, file open

	ParseCommandLine(m_CommandLineInfo);
	SetDeveloper(m_CommandLineInfo.Developer());
	SetMultipleGameLogs(TRUE); //SetMultipleGameLogs(m_CommandLineInfo.Developer());

	// Dispatch commands specified on the command line.  Will return FALSE if
	// app was launched with /RegServer, /Register, /Unregserver or /Unregister.

	if (!ProcessShellCommand(m_CommandLineInfo))
		return FALSE;

	// The one and only window has been initialized, so show and update it

	m_pMainWnd->ShowWindow(SW_SHOWMAXIMIZED);
	m_pMainWnd->UpdateWindow();

	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand

	return TRUE;
}

BOOL CMagicWandApp::ProcessMessageFilter(int code, LPMSG lpMsg)
{
	if (m_hwndDialog != NULL)
		if (lpMsg->hwnd == m_hwndDialog || ::IsChild(m_hwndDialog, lpMsg->hwnd))
		{
			if (NULL != m_gpToolTip)
				m_gpToolTip->RelayEvent(lpMsg);
		}

	return CWinApp::ProcessMessageFilter(code, lpMsg);
}

//_____________________________________________________________________________
//
// CMagicWandApp - Generated message map functions
//

BEGIN_MESSAGE_MAP(CMagicWandApp, CCoreApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
	ON_COMMAND(ID_APP_HOTKEYS, OnAppHotkeys)
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
	ON_COMMAND(IDM_CONNECT_TO_USER, OnConnectToUser)
	ON_UPDATE_COMMAND_UI(IDM_DISCONNECT_ALL_USERS, OnUpdateDisconnectAllUsers)
	ON_COMMAND(IDM_DISCONNECT_ALL_USERS, OnDisconnectAllUsers)
	ON_UPDATE_COMMAND_UI(IDM_CONNECT_TO_USER, OnUpdateConnectToUser)
END_MESSAGE_MAP()

void CMagicWandApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

void CMagicWandApp::OnAppHotkeys()
{
	CHotkeysDlg hotkeysDlg;
	hotkeysDlg.DoModal();
}

void CMagicWandApp::OnConnectToUser()
{
	CConnectToComputerDialog ConnectToUserDlg;
	ConnectToUserDlg.DoModal();
}

void CMagicWandApp::OnUpdateDisconnectAllUsers(CCmdUI *pCmdUI)
{
	pCmdUI->Enable(m_apNetManager->GetConnectedCount());
}

void CMagicWandApp::OnDisconnectAllUsers()
{
	m_apNetManager->DisconnectAll();
}

void CMagicWandApp::OnUpdateConnectToUser(CCmdUI *pCmdUI)
{
	pCmdUI->Enable(m_apNetManager->GetAllowConnections());
}
