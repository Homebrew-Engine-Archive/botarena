// UsageEntryDialog.h : header file
//

#pragma once

#include "DialogEx.h"
#include "ListViewCtrlEx.h"
#include "afxwin.h"

//_____________________________________________________________________________
//
// CUsageEntryDialog dialog
//

class CUsageEntryDialog : public CDialogEx
{
public:
	CUsageEntryDialog(CWnd* pParent = NULL);   // standard constructor

	void SetUsageAbility(CUsageAbility* pUsageAbility);

protected:
	enum { IDD = IDD_USAGE_ENTRIES };

	void UpdateControls();
	void UpdateList();

	CComboBox	m_DefaultUsageList;
	CButton		m_PropertiesButton;
	CButton		m_MoveUpButton;
	CButton		m_MoveDownButton;
	CButton		m_RemoveButton;
	CButton		m_AddButton;
	CListCtrlEx	m_EntryList;
	CString		m_strCardName;
	CString		m_strUniqueChildAbilityName;
	CButton		m_UsePreDefinedButton;

	CUsageAbility*	m_pUsageAbility;
	CUsageAbility*	m_pTempUsageAbility;
	BOOL			m_bChanged;

	int			m_nUsableIndex;
	int			m_nNotUsableIndex;

	BOOL		m_bHasPredefinedUsage;
	BOOL		m_bOverrideThisUPInStack;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	virtual void OnOK();

// Generated message map functions
protected:
	afx_msg void OnAddEntry();
	afx_msg void OnDblclkUsageEntryList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnItemchangedUsageEntryList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnMoveDown();
	afx_msg void OnMoveUp();
	afx_msg void OnProperties();
	afx_msg void OnRemoveEntry();
	afx_msg void OnSelchangeUsage();
	afx_msg void OnBnClickedUsePredefined();
	afx_msg void OnBnClickedOverrideThisUPInStack();

	DECLARE_MESSAGE_MAP()
};
