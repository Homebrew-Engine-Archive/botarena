// CardDialog.h : header file
//

#pragma once

#include "DialogEx.h"
#include "ListViewCtrlEx.h"

//_____________________________________________________________________________
//
// CCardDialog dialog
//

class CCardDialog : public CDialogEx
{
public:
	CCardDialog(CWnd* pParent = NULL);   // standard constructor

	void SetCaption(LPCTSTR strCaption) { m_strCaption = strCaption; }
	void SetTitle(LPCTSTR strTitle) { m_strTitle = strTitle; }
	void SetMinSelections(int nMinSelect) { m_nMinSelect = nMinSelect; }
	void SetMaxSelections(int nMaxSelect) { m_nMaxSelect = nMaxSelect; }
	void SetCardFilter(const CCardFilter* pCardFilter) { m_pCardFilter = pCardFilter; }

	void SetCardContainer(const CCountedCardContainer* pCardContainer) { m_pCardContainer = pCardContainer; }
	void SetSelectedCards(CCountedCardContainer* pSelectedCards) { m_pSelectedCards = pSelectedCards; }

	void SetSorting(BOOL bSorting) { m_bSorting = bSorting; }

	void GetSelectedCards(StringArray& selectedCards);

protected:
	enum { IDD = IDD_CARDS };

	CBitmap			m_CardBitmap;
	CStatic			m_Card;
	CListCtrlEx		m_CardList;

	CString			m_strCaption;
	CString			m_strTitle;
	const CCountedCardContainer*	m_pCardContainer;
	int				m_nMinSelect;
	int				m_nMaxSelect;
	CCountedCardContainer*	m_pSelectedCards;
	const CCardFilter*	m_pCardFilter;
	StringArray	m_SelectedCards;

	BOOL			m_bSorting;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	virtual void OnOK();

// Generated message map functions
protected:
	afx_msg void OnDblclkCardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnItemchangedCardList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnTimer(UINT nIDEvent);

	DECLARE_MESSAGE_MAP()
};
