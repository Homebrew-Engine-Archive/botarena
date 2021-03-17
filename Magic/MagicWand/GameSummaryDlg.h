#pragma once

#include "DialogEx.h"
#include "MlistCtrl2.h"

// CGameSummaryDlg dialog

class CGameSummaryDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CGameSummaryDlg)

public:
	CGameSummaryDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CGameSummaryDlg();

// Dialog Data
	enum { IDD = IDD_GAME_SUMMARY };

	CString			m_strStatus;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	void UpdateList();

	HICON			m_hIcon;
	CTabCtrl		m_Tab;
	CMListCtrl2		m_Log;
	BOOL			m_bConcise;
	BOOL			m_bOpponentsOnly;
	int				m_nShowTurnNumber;
	CComboBox		m_TurnSelection;

	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedConcise();
	afx_msg void OnBnClickedOpponentsOnly();
	afx_msg void OnSelchangeTurnSelection();
};
