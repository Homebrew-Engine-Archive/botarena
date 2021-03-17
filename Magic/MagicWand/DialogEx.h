// DialogEx.h : header file
//

#pragma once

#include "resize.h"

//_____________________________________________________________________________
//
// CDialogEx
//

class CDialogEx : public CResizeDialog
{
public:
	CDialogEx(UINT nIDTemplate, CWnd* pParentWnd = NULL);

	BOOL GetSaveProfile() { return  m_bSaveProfile; }
	void SetSaveProfile(BOOL bSaveProfile) { m_bSaveProfile = bSaveProfile; }

	BOOL WriteProfile();
	BOOL GetProfile();

	UINT GetDlgID();

protected:
	UINT m_uIDTemplate;
	BOOL m_bSaveProfile;

// Overrides
protected:
	virtual BOOL OnInitDialog();

// Generated message map functions
protected:
	afx_msg void OnDestroy();
	LRESULT OnResize(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP()
};
