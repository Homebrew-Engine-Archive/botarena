// ConnectToComputerDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "ConnectToComputerDialog.h"
#include "ModulVer.h"
#include "MainFrm.h"

// CConnectToComputerDialog dialog

IMPLEMENT_DYNAMIC(CConnectToComputerDialog, CDialog)
CConnectToComputerDialog::CConnectToComputerDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CConnectToComputerDialog::IDD, pParent)
	, m_dwIPAddress(0)
{
	m_uPort = g_pCoreApp->GetNetManager()->GetListeningEndPoint().GetPort();
	m_pNetManager = g_pCoreApp->GetNetManager();
}

CConnectToComputerDialog::~CConnectToComputerDialog()
{
	m_pNetManager->SetSendConnectedTo(NULL);
}

void CConnectToComputerDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_IPAddress(pDX, IDC_CONNECT_TO_IP_ADDRESS, m_dwIPAddress);
	DDX_Text(pDX, IDC_CONNECT_TO_PORT, m_uPort);
}

BEGIN_MESSAGE_MAP(CConnectToComputerDialog, CDialog)
	ON_MESSAGE(WM_APP_NET_INCORRECT_VERSION, OnIncorrectVersion)
	ON_MESSAGE(WM_APP_NET_CONNECTED_TO, OnConnect)
END_MESSAGE_MAP()

// CConnectToComputerDialog message handlers

BOOL CConnectToComputerDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_dwIPAddress = CIPAddress::NBO2HBO(m_pNetManager->GetLastRemoteEndPoint().GetIPAddress().GetAddress());
	m_uPort = m_pNetManager->GetLastRemoteEndPoint().GetPort();

	UpdateData(TO_UI);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CConnectToComputerDialog::OnOK()
{
	CWaitCursor WaitCursor;

	UpdateData(FROM_UI);

	CIPEndPoint remoteEndPoint(CIPEndPoint(CIPAddress(CIPAddress::HBO2NBO(m_dwIPAddress)), m_uPort));

	m_pNetManager->SetLastRemoteEndPoint(remoteEndPoint);

	m_pNetManager->SetSendConnectedTo(GetSafeHwnd());

	int nResult = m_pNetManager->ConnectToRemoteUser(remoteEndPoint);
	if (nResult != ERROR_SUCCESS)
	{
		if (nResult == ERROR_ALREADY_EXISTS)
			MessageBox(_T("Connection already exists"), _T("Connect To User"), MB_OK | MB_ICONINFORMATION);
		else
		{
			CString strMessage;
			strMessage.Format(_T("Connection Failed: %s"), GetErrorMessage(HRESULT_FROM_WIN32(nResult)));
			MessageBox(strMessage, _T("Connect To User"), MB_OK | MB_ICONERROR);
		}
		return;
	}

	GetDlgItem(IDOK)->EnableWindow(FALSE);	

	//CDialog::OnOK();
}

LRESULT CConnectToComputerDialog::OnConnect(WPARAM wParam, LPARAM lParam)
{
	int nRemoteUserID = lParam;
	CString* pstrName = reinterpret_cast<CString*>(wParam);

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->GetChatBar()->AddRemoteUser(*pstrName, nRemoteUserID);

	m_pNetManager->GetRemoteUser(nRemoteUserID)->SendFile(
		pMainWnd->GetView()->GetUserAvatarFilePath(), FILETYPE_AVATAR);

	CString strMessage;
	strMessage.Format(_T("Successfully connected to %s."), *pstrName);

	delete pstrName;

	MessageBox(strMessage, _T("Connected"), MB_OK | MB_ICONINFORMATION);

	EndDialog(IDOK);

	return 0;
}

LRESULT CConnectToComputerDialog::OnIncorrectVersion(WPARAM wParam, LPARAM lParam)
{	
	DWORD dwFileVersionMS = wParam;
	DWORD dwFileVersionLS = lParam;

	CModuleVersion ver;
	ver.GetFileVersionInfo(::AfxGetResourceHandle());

	CString strMessage;
	strMessage.Format(_T("Incorrect Version.\nYou are using Version %d.%d.%d.%d and the remote user is using Version %d.%d.%d.%d."),
		HIWORD(ver.dwFileVersionMS), LOWORD(ver.dwFileVersionMS),
		HIWORD(ver.dwFileVersionLS), LOWORD(ver.dwFileVersionLS),
		HIWORD(dwFileVersionMS), LOWORD(dwFileVersionMS),
		HIWORD(dwFileVersionLS), LOWORD(dwFileVersionLS));

	MessageBox(strMessage, _T("Incorrect Version"), MB_OK | MB_ICONEXCLAMATION);

	return 0;
}

void CConnectToComputerDialog::OnCancel()
{
	//m_pNetManager->CancelConnectionRequest(m_dwIPAddress);
	
	CDialog::OnCancel();
}
