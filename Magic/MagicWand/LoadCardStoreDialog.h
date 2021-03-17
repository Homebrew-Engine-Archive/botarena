// LoadCardStoreDialog.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CLoadCardStoreDialog dialog
//

class CLoadCardStoreDialog : public CDialog
{
public:
	CLoadCardStoreDialog(CWnd* pParent = NULL);   // standard constructor

protected:
	enum { IDD = IDD_LOAD_CARD_STORE };

	static DWORD WINAPI LoadCardStoreThreadProc(LPVOID);

	CProgressCtrl	m_LoadProgress;
	CString			m_strExpansionName;
	HANDLE			m_hThread;
	DWORD			m_dwThreadID;
	HCURSOR			m_hCursor;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg LRESULT OnInitCardStore2(WPARAM wParam, LPARAM lParam);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg LRESULT OnUpdateCardStatus(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnUpdateModuleStatus(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnInitialized(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStnClickedLogo();
};

