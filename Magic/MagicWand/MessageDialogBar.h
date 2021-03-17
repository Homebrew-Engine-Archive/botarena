// MessageDialogBar.h : header file
//

#pragma once

#include "SizeCBar.h"
#include "MListCtrl2.h"

//_____________________________________________________________________________
//
// CMessageDialogBar dialog
//

class CMessageDialogBar : public CSizingControlBar
{
	friend class CGameSummaryDlg;

public:
	CMessageDialogBar();   // standard constructor
	~CMessageDialogBar();

	void ResetData();
	void RemoveAllMessages();

	void AddMessage(LPCTSTR strMessage, int nImageIndex, int nTurnNumber, MessageImportance importance = MessageImportance::Normal);
	void SpeakMessage(LPCTSTR strMessage, BOOL bWait = FALSE);
	BOOL SpeechAPI();

	int GetComputerImage();
	int GetHumanImage();
	int GetDebugImage();
	int GetBugImage();

	void UpdateMTGFont();

protected:
	struct MessageItem
	{
		CString				strMessage;
		int					nImageIndex;
		int					nTurn;
		int					nTurnMessageNumber;
		int					nMessageNumber;
		MessageImportance	Importance;
	};

	void UpdateList();

	CMListCtrl2			m_MessageList;
	CImageList			m_ImageList;
	CComPtr<ISpVoice>	m_pSpeakObject;
	int					m_nComputerImage;
	int					m_nHumanImage;
	int					m_nDebugImage;
	int					m_nBugImage;
	CFont				m_Font;
	CButton				m_ConciseButton;
	std::vector<MessageItem*>	m_Messages;
	int					m_nTurnNumber;
	int					m_nTurnMessageNumber;
	int					m_nMessageNumber;
	BOOL				m_bConcise;
	CButton				m_OpponentsOnlyButton;
	BOOL				m_bOpponentsOnly;
	CComboBox			m_TurnSelection;
	int					m_nShowTurnNumber;

// Generated message map functions
protected:
	afx_msg LRESULT OnAddMessage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnAddMessageHighImp(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnAddMessageLowImp(WPARAM wParam, LPARAM lParam);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg LRESULT OnSpeakMessage(WPARAM wParam, LPARAM lParam);
	afx_msg void OnConcise();
	afx_msg void OnDestroy();
	afx_msg void OnOpponentsOnly();
	afx_msg void OnSelchangeTurnSelection();

	DECLARE_MESSAGE_MAP()
};
