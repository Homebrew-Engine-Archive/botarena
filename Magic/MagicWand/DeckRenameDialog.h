// DeckRenameDialog.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CDeckRenameDialog dialog
//

class CDeckRenameDialog : public CDialog
{
public:
	CDeckRenameDialog(CWnd* pParent = NULL);   // standard constructor

	CString	m_strDeckName;

protected:
	enum { IDD = IDD_RENAME_DECK };

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnOK();

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};
