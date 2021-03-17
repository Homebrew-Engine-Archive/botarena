// PreviewBar.h : header file
//

#pragma once

#include "SizeCBar.h"

//_____________________________________________________________________________
//
// CPreviewBar
//

class CPreviewBar : public CSizingControlBar
{
public:
	CPreviewBar();

	void SetBitmap(CCardEntry* pCard);

protected:
	const CCardEntry* m_pCard;
	CBitmap	m_CardBitmap;
	CStatic	m_Card;

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//afx_msg LRESULT OnPreviewCard(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP()
};
