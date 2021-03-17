// ManaStatic.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CManaStatic window
//

class CManaStatic : public CWnd
{
public:
	void SetWindowTextEx(LPCTSTR str) { m_strExtra = str; }

protected:
	CString	m_strExtra;

// Generated message map functions
protected:
	afx_msg void OnPaint();

	DECLARE_MESSAGE_MAP()
};
