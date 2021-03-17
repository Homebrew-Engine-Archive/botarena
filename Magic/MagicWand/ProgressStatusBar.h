// ProgressStatusBar.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CProgressStatusBar window
//

class CProgressStatusBar : public CStatusBar
{
public:
	void SetPriorityPlayerText(LPCTSTR strPriorityPlayerText)
	{
		m_strPriorityPlayerText = strPriorityPlayerText;
	}

protected:
	CProgressCtrl	m_ProgressCtrl;
	CString m_strPriorityPlayerText;

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg LRESULT OnHideProgress(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnSetProgress(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnShowProgress(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnStepProgress(WPARAM wParam, LPARAM lParam);
	afx_msg void OnUpdateStatusText(CCmdUI* pCmdUI);

	DECLARE_MESSAGE_MAP()
};
