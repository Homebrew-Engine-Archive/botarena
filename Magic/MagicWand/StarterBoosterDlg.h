#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "ListViewCtrlEx.h"

// CStarterBoosterDlg dialog

class CStarterBoosterDlg : public CDialog
{
	DECLARE_DYNAMIC(CStarterBoosterDlg)

public:
	CStarterBoosterDlg(UINT nDialogId, CWnd* pParent = NULL);   // standard constructor
	virtual ~CStarterBoosterDlg();

	CString m_strDeck;
	CardEntries m_Cards;
	CString m_strSeed;

// Dialog Data
	enum { IDD = IDD_ADD_STARTER_BOOSTER };
	// IDD_ADD_SEALED_DECK

protected:
	struct SelectionEntry
	{
		CCardModule* pModule;
		int nProductIndex;
	};

	void AddModule(const CCardModule* pModule);

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

	UINT m_nDialogId;

	CComboBoxEx m_ExpansionList;
	CComboBox m_ProductList;
	BOOL m_bRemoveBasicLands;
	CListCtrlEx m_SelectionList;
	CImageList m_ImageList;
	std::map<const CCardModule*, int> m_ModuleIcons;

	DECLARE_MESSAGE_MAP()
	afx_msg void OnCbnSelchangeExpansionList();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedRemove();
	afx_msg void OnLvnItemchangedSelections(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnDeleteitemSelections(NMHDR *pNMHDR, LRESULT *pResult);
};
