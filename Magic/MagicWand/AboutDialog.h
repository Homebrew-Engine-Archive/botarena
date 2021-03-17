// CAboutDlg dialog used for App About
//

#pragma once

//_____________________________________________________________________________
//
// CAboutDlg
//

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

protected:
	enum { IDD = IDD_ABOUTBOX };

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};
