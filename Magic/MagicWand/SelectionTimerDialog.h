#pragma once

#include "Resource.h"

// CSelectionTimerDialog dialog

class CSelectionTimerDialog : public CDialog
{
	DECLARE_DYNAMIC(CSelectionTimerDialog)

public:
	CSelectionTimerDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSelectionTimerDialog();

// Dialog Data
	enum { IDD = IDD_SELECTION_TIMER };

	int m_nMaxSeconds;
	int m_nMoveIndex;
	CString m_strAutoMove;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	int m_nCountdown;
	int m_nTimer;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	afx_msg void OnBnClickedSelectNow();
	afx_msg void OnTimer(UINT nIDEvent);
	virtual void PostNcDestroy();
};
