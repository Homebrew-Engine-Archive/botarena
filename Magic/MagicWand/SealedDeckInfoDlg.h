#pragma once
#include "afxcmn.h"
#include "ListViewCtrlEx.h"

// CSealedDeckInfoDlg dialog

class CSealedDeckInfoDlg : public CDialog
{
	DECLARE_DYNAMIC(CSealedDeckInfoDlg)

public:
	CSealedDeckInfoDlg(const CDeck& deck, CWnd* pParent = NULL);   // standard constructor
	virtual ~CSealedDeckInfoDlg();

	CString m_strCaption;
	CString m_strPlayerName;
	CString m_strDeckName;

// Dialog Data
	enum { IDD = IDD_SEAL_INFO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	void AddInfo(LPCTSTR strName, LPCTSTR strValue, int nImage = -1);
	void AddInfo(LPCTSTR strName, int nValue, int nImage = -1);

	DECLARE_MESSAGE_MAP()
	CListCtrlEx m_InfoList;
	CImageList m_ImageList;
	const CDeck& m_Deck;
};
