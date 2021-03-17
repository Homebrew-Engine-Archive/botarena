#pragma once
#include "afxwin.h"


// CAvatarDlg dialog

class CAvatarDlg : public CDialog
{
	DECLARE_DYNAMIC(CAvatarDlg)

public:
	CAvatarDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAvatarDlg();

// Dialog Data
	enum { IDD = IDD_AVATAR };

	CString m_strAvatarPath1;
	CString m_strAvatarPath2;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	void UpdateAvatarImage1();
	void UpdateAvatarImage2();

	CBitmap m_AvatarBitmap1;
	CBitmap m_AvatarBitmap2;
	CStatic m_AvatarImage1;
	CStatic m_AvatarImage2;

	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedBrowseAvatar1();
	afx_msg void OnBnClickedBrowseAvatar2();
};
