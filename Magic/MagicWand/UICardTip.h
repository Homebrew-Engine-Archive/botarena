// CardTip.h : header file
//

#pragma once

//____________________________________________________________________________
//
// CCardTip window
//

class CCardTip : public CWnd
{
public:
	CCardTip();
	virtual ~CCardTip();

	BOOL Create(CWnd* pParentWnd);

	void Show(CPoint point, const CString& strTip);
	void Hide();

	BOOL GetShow() { return m_bShow; }
	CString GetTipText() { return (m_bShow ? m_strTip : _T("")); }

protected:
	enum CARDTIP_METRICS
	{ 
		TEXTFONTHEIGHT = 12,
		SYMBOLFONTHEIGHT = 14,
		WIDTH = 200
	};

	static CString s_strWndClass; // Registered class name

	CString m_strTip;
	BOOL m_bShow;
	CWnd* m_pParentWnd;
	std::auto_ptr<Gdiplus::Font> m_apTextFont;
	CPoint m_ShowPoint;
	const CMTGSymbol& m_SmallSymbols;

// Overrides
protected:
	virtual BOOL PreTranslateMessage( MSG* pMsg );

// Generated message map functions
protected:
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT nIDEvent);

	DECLARE_MESSAGE_MAP()
};
