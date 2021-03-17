#include "stdafx.h"
#include "HotkeysDialog.h"
#include "MagicWand.h"

#define new DEBUG_NEW


// CHotkeysDlg

IMPLEMENT_DYNAMIC(CHotkeysDlg, CDialog)

CHotkeysDlg::CHotkeysDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHotkeysDlg::IDD, pParent)
{

}

CHotkeysDlg::~CHotkeysDlg()
{
}

void CHotkeysDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CHotkeysDlg, CDialog)
END_MESSAGE_MAP()


// CHotkeysDlg-messagehandler
