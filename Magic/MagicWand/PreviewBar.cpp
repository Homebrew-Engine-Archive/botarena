// PreviewBar.cpp : implementation file
//

#include "stdafx.h"
#include "PreviewBar.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CPreviewBar
//

CPreviewBar::CPreviewBar()
	: CSizingControlBar()
	, m_pCard(NULL)
{
}

void CPreviewBar::SetBitmap(CCardEntry* pCard)
{
	HBITMAP hBitmap;
	if (!pCard)
	{
		hBitmap = CCardStore::GetInstance()->GetBackBitmap().GetHBITMAP();
	}
	else
	{
		if (m_pCard == pCard)
			return;

		hBitmap = pCard->GetBitmap(FALSE).GetHBITMAP();
	}

	m_pCard = pCard;

	m_CardBitmap.DeleteObject();
	m_CardBitmap.Attach(hBitmap);
	HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
	if (hPreviousBitmap)
		::DeleteObject(hPreviousBitmap);

	DIBSECTION ds;
    m_CardBitmap.GetObject(sizeof(DIBSECTION), &ds);
	m_Card.MoveWindow(0, 0, ds.dsBm.bmWidth, ds.dsBm.bmHeight);
}

//_____________________________________________________________________________
//
// CPreviewBar - Generated message map functions
//

BEGIN_MESSAGE_MAP(CPreviewBar, CSizingControlBar)
	ON_WM_CREATE()
//	ON_MESSAGE(WM_APP_PREVIEW_CARD, OnPreviewCard)
END_MESSAGE_MAP()

int CPreviewBar::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
    if (CSizingControlBar::OnCreate(lpCreateStruct) == -1)
        return -1;

	m_Card.Create(_T(""), WS_VISIBLE | WS_VISIBLE | SS_BITMAP, CRect(0, 0, 0, 0), this);

	return 0;
}

/*
LRESULT CPreviewBar::OnPreviewCard(WPARAM wParam, LPARAM lParam)
{
	HBITMAP hBitmap = (HBITMAP)wParam;

	m_Card.SetBitmap(hBitmap);

	return 0;
}
*/