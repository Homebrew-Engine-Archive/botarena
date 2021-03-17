#pragma once
#include "ListViewCtrlEx.h"

// CDeckInfoDlg dialog

class CDeckInfoDlg : public CDialog
{
	DECLARE_DYNAMIC(CDeckInfoDlg)

public:
	CDeckInfoDlg(const CDeck& deck, CWnd* pParent = NULL);   // standard constructor
	virtual ~CDeckInfoDlg();

	CString m_strDeckName;
	CString m_strHeader;
	BOOL m_bPreconstructed;
	BOOL m_bNoCardLimit;

// Dialog Data
	enum { IDD = IDD_DECK_INFO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	void AddInfo(LPCTSTR strName, LPCTSTR strValue);
	void AddInfo(LPCTSTR strName, int nValue);

	DECLARE_MESSAGE_MAP()

	CListCtrlEx m_InfoList;
	const CDeck& m_Deck;
};
