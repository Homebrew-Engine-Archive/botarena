#pragma once


// CApplicationSettingsDialog dialog

class CApplicationSettingsDialog : public CDialog
{
	DECLARE_DYNAMIC(CApplicationSettingsDialog)

public:
	CApplicationSettingsDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CApplicationSettingsDialog();

// Dialog Data
	enum { IDD = IDD_APPLICATION_SETTINGS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	CString m_strUserName;
	BOOL m_bAllowConnections;
	UINT m_uPort;
	int m_nMaxConnections;
	BOOL m_bAnnounceNewConnections;
	BOOL m_bAnnounceDisconnect;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnBnClickedAllowConnections();
};
