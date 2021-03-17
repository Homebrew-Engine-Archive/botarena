// EditUsageEntryDialog.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CEditUsageEntryDialog dialog
//

class CEditUsageEntryDialog : public CDialog
{
public:
	CEditUsageEntryDialog(CWnd* pParent = NULL);   // standard constructor

	void SetCaption(UINT uCaptionId);
	void SetAbilityID(LPCTSTR strAbilityID);
	void AddComparer(CardType cardType);

	UsagePatternItem	m_SelectedNode;
	UsagePatternItem	m_SelectedNode2;
	BOOL				m_SelectedUsage;
	BOOL				m_bAnd;

protected:
	enum { IDD = IDD_EDIT_USAGE_ENTRY };

	CComboBox	m_NodeList2;
	CComboBox	m_UsageList;
	CComboBox	m_NodeList;
	CString		m_strUniqueChildAbilityName;

	UINT	m_uCaptionId;
	CardType	m_CardType;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

// Generated message map functions
protected:
	afx_msg void OnAnd();

	DECLARE_MESSAGE_MAP()
};
