#include "stdafx.h"
#include "AboutDialog.h"
#include "resource.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CAboutDlg
//

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

//_____________________________________________________________________________
//
// CAboutDlg - Overrides
//

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BOOL CAboutDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	DWORD dwFileVersionMS = 0;
	DWORD dwFileVersionLS = 0;
	g_pCoreApp->GetVersionInfo(dwFileVersionMS, dwFileVersionLS);

	CString strVersion;
	strVersion.Format(_T("Version %d.%d.%d.%d"),
		HIWORD(dwFileVersionMS), LOWORD(dwFileVersionMS),
		HIWORD(dwFileVersionLS), LOWORD(dwFileVersionLS));

	GetDlgItem(IDC_VERSION)->SetWindowText(strVersion);

	SetWindowText(CString(_T("About ")) + g_MagicWandApp.GetProductName());
	GetDlgItem(IDC_PRODUCT_NAME)->SetWindowText(g_MagicWandApp.GetProductName());
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}

//_____________________________________________________________________________
//
// CAboutDlg - Generated message map functions
//

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()
