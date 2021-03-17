// UsagePatternDialog.h : header file
//

#pragma once

#include "DialogEx.h"
#include "ListViewCtrlEx.h"

//_____________________________________________________________________________
//
// CUsagePatternDialog dialog
//

class CUsagePatternDialog : public CDialogEx
{
public:
	CUsagePatternDialog(CWnd* pParent = NULL);   // standard constructor

protected:
	enum { IDD = IDD_USAGE_PATTERN };

	CButton	m_RemoveButton;
	CButton	m_PropertiesButton;
	CStatic	m_Card;
	CBitmap	m_CardBitmap;
	CListCtrlEx	m_CardList;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

// Generated message map functions
protected:
	afx_msg void OnAddCard();
	afx_msg void OnDblclkCardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnProperties();
	afx_msg void OnRemoveCard();

	DECLARE_MESSAGE_MAP()
};
