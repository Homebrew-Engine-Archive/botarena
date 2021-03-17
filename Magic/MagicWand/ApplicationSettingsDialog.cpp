// ApplicationSettingsDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "ApplicationSettingsDialog.h"

// CApplicationSettingsDialog dialog

IMPLEMENT_DYNAMIC(CApplicationSettingsDialog, CDialog)
CApplicationSettingsDialog::CApplicationSettingsDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CApplicationSettingsDialog::IDD, pParent)
	, m_strUserName(_T(""))
	, m_bAllowConnections(FALSE)
	, m_uPort(0)
	, m_nMaxConnections(0)
	, m_bAnnounceNewConnections(FALSE)
	, m_bAnnounceDisconnect(FALSE)
{
}

CApplicationSettingsDialog::~CApplicationSettingsDialog()
{
}

void CApplicationSettingsDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_USER_NAME, m_strUserName);
	DDX_Check(pDX, IDC_ALLOW_CONNECTIONS, m_bAllowConnections);
	DDX_Text(pDX, IDC_LISTENING_PORT, m_uPort);
	DDX_Text(pDX, IDC_MAX_CONNECTIONS, m_nMaxConnections);
	DDX_Check(pDX, IDC_ANNOUNCE_NEW_CONNECTIONS, m_bAnnounceNewConnections);
	DDV_MinMaxUInt(pDX, m_uPort, 1, 65535);
	DDX_Check(pDX, IDC_ANNOUNCE_DISCONNECT, m_bAnnounceDisconnect);
}

BEGIN_MESSAGE_MAP(CApplicationSettingsDialog, CDialog)
	ON_BN_CLICKED(IDC_ALLOW_CONNECTIONS, OnBnClickedAllowConnections)
END_MESSAGE_MAP()

// CApplicationSettingsDialog message handlers

BOOL CApplicationSettingsDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_strUserName = g_pCoreApp->GetNetManager()->GetUserName();
	m_bAllowConnections = g_pCoreApp->GetNetManager()->GetAllowConnections();
	m_nMaxConnections = g_pCoreApp->GetNetManager()->GetMaxConnections();
	m_uPort = g_pCoreApp->GetNetManager()->GetListeningEndPoint().GetPort();
	m_bAnnounceNewConnections = g_pCoreApp->GetNetManager()->GetAnnounceNewConnections();
	m_bAnnounceDisconnect = g_pCoreApp->GetNetManager()->GetAnnounceDisconnect();

	UpdateData(TO_UI);

	if (!m_bAllowConnections)
	{
		GetDlgItem(IDC_LISTENING_PORT)->EnableWindow(FALSE);
		GetDlgItem(IDC_MAX_CONNECTIONS)->EnableWindow(FALSE);
		GetDlgItem(IDC_ANNOUNCE_NEW_CONNECTIONS)->EnableWindow(FALSE);
		GetDlgItem(IDC_ANNOUNCE_DISCONNECT)->EnableWindow(FALSE);
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CApplicationSettingsDialog::OnOK()
{
	UpdateData(FROM_UI);

	g_pCoreApp->GetNetManager()->SetUserName(m_strUserName);
	g_pCoreApp->GetNetManager()->SetAllowConnections(To_bool(m_bAllowConnections));
	g_pCoreApp->GetNetManager()->SetMaxConnections(m_nMaxConnections);
	g_pCoreApp->GetNetManager()->SetPort(m_uPort);
	g_pCoreApp->GetNetManager()->SetAnnounceNewConnections(To_bool(m_bAnnounceNewConnections));
	g_pCoreApp->GetNetManager()->SetAnnounceDisconnect(To_bool(m_bAnnounceDisconnect));

	CDialog::OnOK();
}

void CApplicationSettingsDialog::OnBnClickedAllowConnections()
{
	UpdateData(FROM_UI);

	GetDlgItem(IDC_LISTENING_PORT)->EnableWindow(m_bAllowConnections);
	GetDlgItem(IDC_MAX_CONNECTIONS)->EnableWindow(m_bAllowConnections);
	GetDlgItem(IDC_ANNOUNCE_NEW_CONNECTIONS)->EnableWindow(m_bAllowConnections);
	GetDlgItem(IDC_ANNOUNCE_DISCONNECT)->EnableWindow(m_bAllowConnections);
}
