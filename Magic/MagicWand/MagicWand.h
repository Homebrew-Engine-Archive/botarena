// MagicWand.h : main header file for the MagicWand application
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

//_____________________________________________________________________________
//

class CMagicWandCommandLineInfo : public CCommandLineInfo
{
public:
	CMagicWandCommandLineInfo()
		: m_bDeveloper(false)
	{}

	virtual void ParseParam(const TCHAR* pszParam, BOOL bFlag, BOOL bLast)
	{
		if (bFlag && !_tcsicmp(pszParam, _T("developer")))
			m_bDeveloper = true;
		else
			__super::ParseParam(pszParam, bFlag, bLast);
	}

	bool Developer() { return m_bDeveloper; }

protected:
	bool m_bDeveloper;
};

//_____________________________________________________________________________
//
// CMagicWandApp
//

class CNetManager;

class CMagicWandApp : public CCoreApp
{
public:
	CMagicWandApp();
	CMagicWandCommandLineInfo* GetCommandLineInfo()	{ return &m_CommandLineInfo; }

	HWND			m_hwndDialog;
	CToolTipCtrl*	m_gpToolTip;

	LPCTSTR GetProductName() const { return m_strProductName; }

protected:
	CMagicWandCommandLineInfo	m_CommandLineInfo;
	CString m_strProductName;

// Overrides
protected:
	virtual BOOL InitInstance();
	virtual BOOL ProcessMessageFilter(int code, LPMSG lpMsg);

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnAppAbout();
	afx_msg void OnAppHotkeys();
	afx_msg void OnConnectToUser();
	afx_msg void OnUpdateDisconnectAllUsers(CCmdUI *pCmdUI);
	afx_msg void OnDisconnectAllUsers();
	afx_msg void OnUpdateConnectToUser(CCmdUI *pCmdUI);
};

extern CMagicWandApp g_MagicWandApp;