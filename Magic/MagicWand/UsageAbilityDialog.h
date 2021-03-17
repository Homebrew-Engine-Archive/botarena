// UsageAbilityDialog.h : header file
//

#pragma once

#include "dialogex.h"
#include "ListViewCtrlEx.h"

//_____________________________________________________________________________
//
// CUsageAbilityDialog dialog
//

class CUsageAbilityDialog : public CDialogEx
{
public:
	CUsageAbilityDialog(CWnd* pParent = NULL);   // standard constructor

	void SetUsageCard(CUsageCard* pUsageCard);

protected:
	enum { IDD = IDD_USAGE_ABILITIES };

	void UpdateControls();

	CButton		m_PropertiesButton;
	CListCtrlEx	m_AbilityList;
	CString		m_strCardName;
	BOOL		m_bEnabled;

	CUsageCard*	m_pUsageCard;
	CUsageCard*	m_pTempUsageCard;
	BOOL		m_bChanged;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	virtual void OnOK();

// Generated message map functions
protected:
	afx_msg void OnDblclkAbilityList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnEnabled();
	afx_msg void OnItemchangedAbilityList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnProperties();

	DECLARE_MESSAGE_MAP()
};
