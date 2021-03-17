// CHotkeysDlg dialog used for App Hotkeys
//

#pragma once

//_____________________________________________________________________________
//
// CHotkeysDlg

class CHotkeysDlg : public CDialog
{
	DECLARE_DYNAMIC(CHotkeysDlg)

public:
	CHotkeysDlg(CWnd* pParent = NULL);   // Standardkonstruktor
	virtual ~CHotkeysDlg();

// Dialogfelddaten
	enum { IDD = IDD_HOTKEYSBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

	DECLARE_MESSAGE_MAP()
};
