// StackDialog.h : header file
//

#pragma once

#include "DialogEx.h"

//_____________________________________________________________________________
//
// CStackDialog dialog
//

class CStackDialog : public CDialogEx
{
public:
	CStackDialog(CWnd* pParent = NULL);   // standard constructor

	void InitDialog(CGame* pGame);

	enum { IDD = IDD_STACK };

protected:
	CTreeCtrl	m_StackTree;
	CImageList	m_ImageList;

// Overrides
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void PostNcDestroy();

// Generated message map functions
protected:
	afx_msg void OnSetfocusStackTree(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnNMClickStackTree(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnTvnSelchangedStackTree(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg LRESULT OnFocusMainWnd(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP()
};
