#pragma once

class CListCtrlEx;

//____________________________________________________________________________
//
// Declaration of "workhorse" class "CListBase" 
//
class CListBase
{
public:
	CListBase(CListCtrlEx* pListCtrl);
	virtual ~CListBase();

	UINT GetID() const { return m_nID; }

	virtual void Initialize(UINT nID, CWnd* pParent);

	void Sort()											{ SortColumn(m_nSortColumn, m_bSortAscending); }
	void SortColumn(int nCol, BOOL bAscending = TRUE);
	void SetCompareFunction(PFNLVCOMPARE pfnCompare)	{ m_pfnCompare = pfnCompare; }
	int GetSortColumn()									{ return m_nSortColumn; }
	BOOL GetSortOrder()									{ return m_bSortAscending; }
	
	BOOL GetSaveProfile()								{ return m_bSaveProfile; }
	void SetSaveProfile(BOOL bSaveProfile)				{ m_bSaveProfile = bSaveProfile; }

	BOOL WriteProfile(LPCTSTR strKey = NULL);
	BOOL GetProfile(LPCTSTR strKey = NULL);				// You need to call this function manually after you've created all columns

	int GetColumnCount();
	void DeselectAllItems();
	BOOL SelectItem(int nItem);
	BOOL FocusItem(int nItem);

	BOOL GetColumnOrders(CUIntArray& ColumnOrders);
	BOOL SetColumnOrders(const CUIntArray& ColumnOrders);

protected:
	static int CALLBACK DefaultCompareProc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);

	void SetSortIcon();

	void OnCustomDraw(NMHDR* pNMHDR, LRESULT* pResult);
	BOOL OnColumnclick(NMHDR* pNMHDR, LRESULT* pResult);
	void OnDestroy();

	virtual bool DrawSubItemText(HDC hdc, int nItem, int nSubitem, LPCTSTR strText, const CRect& itemRect, const CRect& subitemRect, int iStateId) { return false; }
	virtual bool DrawSubItemText(LPNMLVCUSTOMDRAW pCustomDraw, const CRect& subitemRect, COLORREF textColor, COLORREF backgroundColor) { return false; } //old method!
	void DrawSubItemBackground(HDC hdc, const CRect& itemRect, const CRect& subitemRect, int iStateId);
	CRect DrawSubItemImage(HDC hdc, int nItem, int nSubitem, const CRect& subitemRect, int iStateId);

	CListCtrlEx*	m_pListCtrl;
	CWnd*			m_pParent;
	UINT			m_nID;

	int				m_nSortColumn;
	BOOL			m_bSortAscending;
	PFNLVCOMPARE	m_pfnCompare;
	
	BOOL			m_bSaveProfile;
	
	HTHEME			m_hTheme;
};

//____________________________________________________________________________
//
// Declaration of class "CListCtrlEx" 
//
class CListCtrlEx: public CListCtrl, public CListBase
{
	DECLARE_DYNCREATE(CListCtrlEx);

public:
	CListCtrlEx();

// Overrides
protected:

// Generated message map functions
protected:
	afx_msg void OnDestroy();
	afx_msg BOOL OnColumnclick(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomDraw (NMHDR* pNMHDR, LRESULT* pResult);

	DECLARE_MESSAGE_MAP()
};

//____________________________________________________________________________
//
// Declaration of class "CListViewEx" 
//
class CListViewEx: public CListView, public CListBase
{
	DECLARE_DYNCREATE(CListViewEx);

public:
	CListViewEx();

// Overrides
protected:

// Generated message map functions
protected:
	afx_msg void OnDestroy();
	afx_msg BOOL OnColumnclick(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomDraw (NMHDR* pNMHDR, LRESULT* pResult);

	DECLARE_MESSAGE_MAP()
};
