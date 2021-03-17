// DeckRenameDialog.cpp : implementation file
//

#include "stdafx.h"
#include "DeckRenameDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CDeckRenameDialog dialog
//

CDeckRenameDialog::CDeckRenameDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CDeckRenameDialog::IDD, pParent)
{
	m_strDeckName = _T("");
}

//_____________________________________________________________________________
//
// CDeckRenameDialog - Overrides
//

void CDeckRenameDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DECK_NAME, m_strDeckName);

	if (pDX->m_bSaveAndValidate)
		if (m_strDeckName.FindOneOf(_T("\\/:*?\"<>|")) != -1)
		{
			MessageBox(_T("A deck name cannot contain any of the following characters:\n\\/:*?\"<>|"), _T("Rename"), MB_ICONSTOP | MB_OK); 
			pDX->Fail();
		}
}

void CDeckRenameDialog::OnOK() 
{
	CDialog::OnOK();

	m_strDeckName.TrimLeft();
	m_strDeckName.TrimRight();

	CString strDeck(m_strDeckName);
	strDeck.MakeUpper();

	if (strDeck.Right(4) == _T(".TXT"))
		m_strDeckName = m_strDeckName.Left(m_strDeckName.GetLength() - 4);
}

//_____________________________________________________________________________
//
// CDeckRenameDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CDeckRenameDialog, CDialog)
END_MESSAGE_MAP()
