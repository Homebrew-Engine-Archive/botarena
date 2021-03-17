// GameSettingsDialog.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CGameSettingsDialog dialog
//

class CGameSettingsDialog : public CDialog
{
public:
	CGameSettingsDialog(CWnd* pParent = NULL);   // standard constructor

	DWORD_PTR	m_dwMaxDuration;
	int		m_nDblClk;
	BOOL	m_bExtraCareful;
	BOOL	m_bBoostProcess;
	int		m_nSelectionTimerCountdown;
	BOOL	m_bDelaySelectInMain;
	BOOL	m_bDelaySelectInOthers;
	BOOL	m_bAutoSelectSingleMove;
	BOOL	m_bAutoSelectUntapMoves;
	BOOL	m_bShowAllMoves;
	BOOL	m_bOverkill;
	BOOL	m_bConservative;
	CString m_strComputerPlayerName;

protected:
	enum { IDD = IDD_GAME_SETTINGS };

	CComboBox	m_MaxTime;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};
