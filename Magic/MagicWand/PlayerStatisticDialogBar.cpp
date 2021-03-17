// PlayerStatisticDialogBar.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "PlayerStatisticDialogBar.h"
#include "MainFrm.h"

// CPlayerStatisticDialogBar dialog

CPlayerStatisticDialogBar::CPlayerStatisticDialogBar()
	: CDialogBar()
{
}

BOOL CPlayerStatisticDialogBar::Create(CWnd* pParentWnd, UINT nStyle, UINT nID)
{
	if (!CDialogBar::Create(pParentWnd, IDD, nStyle, nID))
		return FALSE;

	SetWindowText(_T("Player Statistic"));

	m_PlayerIcon1.SubclassDlgItem(IDC_PLAYERICON1, this);
	m_PlayerIcon2.SubclassDlgItem(IDC_PLAYERICON2, this);

	m_Name1.SubclassDlgItem(IDC_NAME1, this);
	m_Life1.SubclassDlgItem(IDC_LIFE1, this);
	m_Hand1.SubclassDlgItem(IDC_HAND1, this);
	m_Library1.SubclassDlgItem(IDC_LIBRARY1, this);
	m_Graveyard1.SubclassDlgItem(IDC_GRAVEYARD1, this);

	m_rcManaPool1.left = 35;
	m_rcManaPool1.top = 44;
	m_rcManaPool1.right = 143;
	m_rcManaPool1.bottom = 61;
	m_ManaPool1.Create(NULL, _T(""), WS_CHILD | WS_VISIBLE, m_rcManaPool1, this, IDC_MANAPOOL1);
//	m_ManaPool1.SetWindowText(_T("1234567890"));
//	m_ManaPool1.SetWindowTextEx(_T("{@go@kG@ro@kR@bo@kB@uo@kU@wo@kW@ao@k9@go@kG@ro@kR@bo@kB@uo@kU@wo@kW@ao@k9}"));

	m_Name2.SubclassDlgItem(IDC_NAME2, this);
	m_Life2.SubclassDlgItem(IDC_LIFE2, this);
	m_Hand2.SubclassDlgItem(IDC_HAND2, this);
	m_Library2.SubclassDlgItem(IDC_LIBRARY2, this);
	m_Graveyard2.SubclassDlgItem(IDC_GRAVEYARD2, this);

	m_rcManaPool2.left = 35;
	m_rcManaPool2.top = 106;
	m_rcManaPool2.right = 143;
	m_rcManaPool2.bottom = 123;
	m_ManaPool2.Create(NULL, _T(""), WS_CHILD | WS_VISIBLE, m_rcManaPool2, this, IDC_MANAPOOL1);
//	m_ManaPool2.SetWindowText(_T("1234567890"));
//	m_ManaPool2.SetWindowTextEx(_T("{@go@kG@ro@kR@bo@kB@uo@kU@wo@kW@ao@k9@go@kG@ro@kR@bo@kB@uo@kU@wo@kW@ao@k9}"));

	m_Name1.SetWindowText(_T("Player"));
	m_Life1.SetWindowText(_T("0"));

	m_Name2.SetWindowText(_T("Player"));
	m_Life2.SetWindowText(_T("0"));

    m_biHide.Move(CPoint(4, 4));

	return TRUE;
}

void CPlayerStatisticDialogBar::SetPlayerIcon(BOOL bFirstPlayer, HICON hIcon)
{
	if (bFirstPlayer)
	{
		HICON hOldIcon = m_PlayerIcon1.GetIcon();
		if (hOldIcon)
			DestroyIcon(hOldIcon);
		m_PlayerIcon1.SetIcon(hIcon);
	}
	else
	{
		HICON hOldIcon = m_PlayerIcon2.GetIcon();
		if (hOldIcon)
			DestroyIcon(hOldIcon);
		m_PlayerIcon2.SetIcon(hIcon);
	}
}

void CPlayerStatisticDialogBar::Reset()
{
	m_Name1.SetWindowText(_T("Player"));
	m_Life1.SetWindowText(_T("0"));
	m_Hand1.SetWindowText(_T("0"));
	m_Library1.SetWindowText(_T("0"));
	m_Graveyard1.SetWindowText(_T("0"));

	m_Name2.SetWindowText(_T("Player"));
	m_Life2.SetWindowText(_T("0"));
	m_Hand2.SetWindowText(_T("0"));
	m_Library2.SetWindowText(_T("0"));
	m_Graveyard2.SetWindowText(_T("0"));
}

void CPlayerStatisticDialogBar::SetName(BOOL bFirstPlayer, LPCTSTR strName)
{
	if (bFirstPlayer)
		m_Name1.SetWindowText(strName);
	else
		m_Name2.SetWindowText(strName);
}

void CPlayerStatisticDialogBar::SetLife(BOOL bFirstPlayer, int nLife)
{
	CString strNumber;
	strNumber.Format(_T("%d"), nLife);

	if (bFirstPlayer)
		m_Life1.SetWindowText(strNumber);
	else
		m_Life2.SetWindowText(strNumber);
}

void CPlayerStatisticDialogBar::SetHand(BOOL bFirstPlayer, int nCount)
{
	CString strNumber;
	strNumber.Format(_T("%d"), nCount);

	if (bFirstPlayer)
		m_Hand1.SetWindowText(strNumber);
	else
		m_Hand2.SetWindowText(strNumber);
}

void CPlayerStatisticDialogBar::SetLibrary(BOOL bFirstPlayer, int nCount)
{
	CString strNumber;
	strNumber.Format(_T("%d"), nCount);

	if (bFirstPlayer)
		m_Library1.SetWindowText(strNumber);
	else
		m_Library2.SetWindowText(strNumber);
}

void CPlayerStatisticDialogBar::SetGraveyard(BOOL bFirstPlayer, int nCount)
{
	CString strNumber;
	strNumber.Format(_T("%d"), nCount);

	if (bFirstPlayer)
		m_Graveyard1.SetWindowText(strNumber);
	else
		m_Graveyard2.SetWindowText(strNumber);
}

void CPlayerStatisticDialogBar::SetManaPool(BOOL bFirstPlayer, LPCTSTR strMana, LPCTSTR strManaExtra)
{
	if (bFirstPlayer)
	{
		m_ManaPool1.SetWindowText(strMana);
		m_ManaPool1.SetWindowTextEx(strManaExtra);
		InvalidateRect(&m_rcManaPool1);
	}
	else
	{
		m_ManaPool2.SetWindowText(strMana);
		m_ManaPool2.SetWindowTextEx(strManaExtra);
		InvalidateRect(&m_rcManaPool2);
	}
}

BEGIN_MESSAGE_MAP(CPlayerStatisticDialogBar, CDialogBar)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CPlayerStatisticDialogBar message handlers
void CPlayerStatisticDialogBar::OnLButtonDown(UINT nFlags, CPoint point) 
{
	if (!IsFloating() && m_biHide.GetRect().PtInRect(point))
	{
		m_biHide.bPushed = TRUE;
		InvalidateRect(m_biHide.GetRect());
		return;
	}
	
	CDialogBar::OnLButtonDown(nFlags, point);
}

void CPlayerStatisticDialogBar::OnLButtonUp(UINT nFlags, CPoint point) 
{
	if (!IsFloating() && m_biHide.GetRect().PtInRect(point) && m_biHide.bPushed)
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
		pMainWnd->ShowControlBar(this, FALSE, FALSE);
		return;
	}
	
	CDialogBar::OnLButtonUp(nFlags, point);
}

void CPlayerStatisticDialogBar::OnMouseMove(UINT nFlags, CPoint point) 
{
	if (!IsFloating())
	{
		if (m_biHide.GetRect().PtInRect(point))
		{
			if (!m_biHide.bRaised)
			{
				SetCapture();
				m_biHide.bRaised = TRUE;
				InvalidateRect(m_biHide.GetRect());
			}
			return;
		}
		else
			if (GetCapture() == this)
			{
				ReleaseCapture();
				if (m_biHide.bRaised)
				{
					m_biHide.bRaised = FALSE;
					m_biHide.bPushed = FALSE;
					InvalidateRect(m_biHide.GetRect());
				}
			}
	}
	
	CDialogBar::OnMouseMove(nFlags, point);
}

void CPlayerStatisticDialogBar::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	CRect rect;
	GetClientRect(rect);

	DrawBorders(&dc, rect);

	rect.OffsetRect(2, 0);
	rect.top += 15;
	rect.bottom -= 3;

	DrawGripper(&dc, rect);
	rect.OffsetRect(3, 0);
	DrawGripper(&dc, rect);

	if (!IsFloating())
		m_biHide.Paint(&dc);
}
