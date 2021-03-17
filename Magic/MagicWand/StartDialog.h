// StartDialog.h : header file
//

#pragma once

#include "FileComboBox.h"
#include "afxcmn.h"
#include "afxwin.h"
#include "ImageButtonWithStyle.h"

//_____________________________________________________________________________
//
// CStartDialog dialog
//

class CStartDialog : public CDialog
{
public:
	static int		s_nDebugRepeat;
	static unsigned s_uSeed;
	static BOOL		s_bSeedIncrease;

	CStartDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CStartDialog();

	BOOL			m_bFullScreen;
	CString			m_strUserName;
	CString			m_strOpponentName;
	int				m_nRemoteUserID;
	CDeck			m_PlayerDeck;
	CDeck			m_OpponentDeck;
	BOOL			m_bStartFirst;
	BOOL			m_bWithComputer;
	unsigned		m_uPlayerSeed;
	unsigned		m_uOpponentSeed;
	int				m_nDebugRepeat;
	BOOL			m_bMulligan;
	CString			m_strComputerPlayerName;

protected:
	enum { IDD = IDD_START };

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

	bool SetDeck(LPCTSTR strDeckPath, BOOL bOpponent, CDeck& deck);

	CComboBox		m_OpponentList;

	CFileComboBox	m_Deck1;
	CFileComboBox	m_Deck2;
	CString			m_strDeckPath1;
	CString			m_strDeckPath2;
	int				m_nStartPreference;
	CString			m_strDeck1;
	CString			m_strDeck2;
	CSpinButtonCtrl m_SpinRepeat;
	BOOL m_bRandom1;
	BOOL m_bRandom2;

	CImageButton m_DeckPathButton;
	CImageButton m_DeckPathButton2;

	// Generated message map functions
	
	DECLARE_MESSAGE_MAP()

	afx_msg void OnCbnSelchangeOpponentList();
	afx_msg void OnBnClickedRandom1();
	afx_msg void OnBnClickedRandom2();
	afx_msg void OnBnClickedDeckPath();
	afx_msg void OnBnClickedDeckPath2();
public:
	afx_msg void OnBnClickedStaticDeveloper();
};
