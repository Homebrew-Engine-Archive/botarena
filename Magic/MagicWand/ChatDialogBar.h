// ChatDialogBar.h : header file
//

#pragma once

#include "SizeCBar.h"

//_____________________________________________________________________________
//
class CChatEdit : public CEdit
{
	//virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);

	HACCEL m_hSavedAccel;
};

//_____________________________________________________________________________
//
// CChatDialogBar dialog
//

class CChatDialogBar : public CSizingControlBar
{
	friend class CChatEdit;
public:
	CChatDialogBar();   // standard constructor
	~CChatDialogBar();

	void AddMessage(LPCTSTR strMessage);
	void RemoveAllMessages();

	void AddRemoteUser(LPCTSTR strRemoteUserName, int nRemoteUserID);
	void RemoveRemoteUser(LPCTSTR strRemoteUserName, int nRemoteUserID);

protected:
	void UpdateList();

	CListCtrl	m_MessageList;
	CFont		m_Font;
	CButton		m_SendButton;
	CComboBox	m_Destinations;
	CChatEdit	m_MessageEdit;
	int			m_nDestination;

// Generated message map functions
protected:
	afx_msg LRESULT OnAddChatMessage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnGameRequest(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnGameRequestCancelled(WPARAM wParam, LPARAM lParam);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSend();

	DECLARE_MESSAGE_MAP()
};
