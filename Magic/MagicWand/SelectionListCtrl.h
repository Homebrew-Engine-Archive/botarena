// SelectionListCtrl.h : header file
//

#pragma once

#include "MListCtrl2.h"

//_____________________________________________________________________________
//

class CSelectionDialogBar;

//_____________________________________________________________________________
//
// CSelectionListCtrl window
//

class CSelectionListCtrl : public CMListCtrl2
{
public:
	CSelectionListCtrl();

	void SetBar(CSelectionDialogBar* pBar);

protected:
	CSelectionDialogBar*	m_pBar;

// Overrides
protected:
	virtual BOOL PreTranslateMessage(MSG* pMsg);

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};
