// DialogEx.cpp : implementation file
//

#include "stdafx.h"
#include "DialogEx.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CDialogEx
//

CDialogEx::CDialogEx(UINT nIDTemplate, CWnd* pParentWnd) : 
	CResizeDialog(nIDTemplate, pParentWnd)
{
	m_uIDTemplate = nIDTemplate;
	m_bSaveProfile = TRUE;
}

BOOL CDialogEx::WriteProfile()
{
	CWinApp* pWinApp = ::AfxGetApp();
	if (!pWinApp)
		return FALSE;

	CString strDialogKey;
	strDialogKey.Format(REG_DIALOG_KEY, m_uIDTemplate);

	CRect Rect;
	GetWindowRect(&Rect);

	pWinApp->WriteProfileInt(strDialogKey, REG_DIALOG_X_ENTRY, Rect.left);
	pWinApp->WriteProfileInt(strDialogKey, REG_DIALOG_Y_ENTRY, Rect.top);
	pWinApp->WriteProfileInt(strDialogKey, REG_DIALOG_CX_ENTRY, Rect.Width());
	pWinApp->WriteProfileInt(strDialogKey, REG_DIALOG_CY_ENTRY, Rect.Height());

	return TRUE;
}

BOOL CDialogEx::GetProfile()
{
	CWinApp* pWinApp = ::AfxGetApp();
	if (!pWinApp)
		return FALSE;

	CString strDialogKey;
	strDialogKey.Format(REG_DIALOG_KEY, m_uIDTemplate);

	CRect Rect;
	Rect.left = pWinApp->GetProfileInt(strDialogKey, REG_DIALOG_X_ENTRY, 0);
	Rect.top = pWinApp->GetProfileInt(strDialogKey, REG_DIALOG_Y_ENTRY, 0);
	Rect.right = Rect.left + pWinApp->GetProfileInt(strDialogKey, REG_DIALOG_CX_ENTRY, 0);
	Rect.bottom = Rect.top + pWinApp->GetProfileInt(strDialogKey, REG_DIALOG_CY_ENTRY, 0);

	if (!Rect.Width() || !Rect.Height())
		return FALSE;

	MoveWindow(&Rect);

	return TRUE;
}

UINT CDialogEx::GetDlgID()
{
	return m_uIDTemplate;
}

//_____________________________________________________________________________
//
// CDialogEx - Overrides
//

BOOL CDialogEx::OnInitDialog() 
{
	CResizeDialog::OnInitDialog();

	if (m_bSaveProfile)
		PostMessage(WM_APP_RESIZE);

	SetWindowLong(GetSafeHwnd(), GWL_USERDATA, (DWORD)this);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

//_____________________________________________________________________________
//
// CDialogEx - Generated message map functions
//

BEGIN_MESSAGE_MAP(CDialogEx, CResizeDialog)
	ON_WM_DESTROY()
	ON_MESSAGE(WM_APP_RESIZE, OnResize)
END_MESSAGE_MAP()

void CDialogEx::OnDestroy() 
{
	if (m_bSaveProfile)
		WriteProfile();

	CResizeDialog::OnDestroy();
}

LRESULT CDialogEx::OnResize(WPARAM /*wParam*/, LPARAM /*lParam*/)
{
	GetProfile();

	return 0;
}
