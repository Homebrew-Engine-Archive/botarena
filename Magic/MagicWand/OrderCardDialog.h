// OrderCardDialog.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// COrderCardDialog dialog
//

class COrderCardDialog : public CDialog
{
public:
	COrderCardDialog(CWnd* pParent = NULL);   // standard constructor

	void SetCardContainer(CCountedCardContainer* pCardContainer) { m_pCardContainer = pCardContainer; }
	void SetReadOnly(BOOL bReadOnly) { m_bReadOnly = bReadOnly; }
	void SetCaption(LPCTSTR strCaption) { m_strCaption = strCaption; }

protected:
	enum { IDD = IDD_ORDER_CARDS };

	CStatic			m_Card;
	CBitmap			m_CardBitmap;
	CButton			m_Up;
	CButton			m_Down;
	CListCtrl		m_CardList;
	CCountedCardContainer*	m_pCardContainer;
	BOOL			m_bReadOnly;
	CString			m_strCaption;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

// Generated message map functions
protected:
	afx_msg void OnDown();
	afx_msg void OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnUp();
	afx_msg void OnTimer(UINT nIDEvent);

	DECLARE_MESSAGE_MAP()
};
