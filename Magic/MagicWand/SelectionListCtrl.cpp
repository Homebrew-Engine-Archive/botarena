// SelectionListCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "SelectionListCtrl.h"
#include "SelectionDialogBar.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CSelectionListCtrl

CSelectionListCtrl::CSelectionListCtrl()
{
	m_pBar = NULL;
}

void CSelectionListCtrl::SetBar(CSelectionDialogBar* pBar)
{
	m_pBar = pBar;
}

//_____________________________________________________________________________
//
// CSelectionListCtrl - Overrides
//

BOOL CSelectionListCtrl::PreTranslateMessage(MSG* pMsg) 
{
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_RETURN)
		{
			POSITION pos = GetFirstSelectedItemPosition();
			if (pos)
			{
				int nItem = GetNextSelectedItem(pos);
				m_pBar->SelectMove(GetItemData(nItem));
				return TRUE;
			}
		}
	}
		
	return __super::PreTranslateMessage(pMsg);
}

//_____________________________________________________________________________
//
// CSelectionListCtrl - Generated message map functions
//

BEGIN_MESSAGE_MAP(CSelectionListCtrl, CMListCtrl2)
END_MESSAGE_MAP()
