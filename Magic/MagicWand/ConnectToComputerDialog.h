#pragma once


// CConnectToComputerDialog dialog

class CConnectToComputerDialog : public CDialog
{
	DECLARE_DYNAMIC(CConnectToComputerDialog)

public:
	CConnectToComputerDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CConnectToComputerDialog();

// Dialog Data
	enum { IDD = IDD_CONNECT_TO_COMPUTER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DWORD			m_dwIPAddress;
	UINT			m_uPort;
	CNetManager*	m_pNetManager;

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
	afx_msg LRESULT OnConnect(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnIncorrectVersion(WPARAM wParam, LPARAM lParam);
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
};
