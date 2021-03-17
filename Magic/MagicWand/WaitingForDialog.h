#pragma once

#include "Resource.h"

// CWaitingForDialog dialog

class CWaitingForDialog : public CDialog
{
	DECLARE_DYNAMIC(CWaitingForDialog)

public:
	CWaitingForDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CWaitingForDialog();

// Dialog Data
	enum { IDD = IDD_WAITING_FOR };

	CString m_strOpponentName;
	StringArray m_Deck;
	int m_nRemoteUserID;
	int m_nStartPreference;
	int m_nRandom;
	unsigned m_uSeed;
	BOOL m_bMulligan;

	// Received information

	StringArray m_OpponentDeck;
	int m_nOpponentStartPreference;
	int m_nOpponentRandom;
	unsigned m_uOpponentSeed;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	CString m_strMessage;
	CRemoteGameUser* m_pRemoteUser;
	CString m_strDeckEntries;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg LRESULT OnGranted(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnRejected(WPARAM wParam, LPARAM lParam);
};
