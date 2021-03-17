#pragma once

#include "ManaStatic.h"
#include "sizecbar.h"

// CPlayerStatisticDialogBar dialog

class CPlayerStatisticDialogBar : public CDialogBar
{
public:
	CPlayerStatisticDialogBar();
	BOOL Create(CWnd* pParentWnd, UINT nStyle, UINT nID);

	void SetPlayerIcon(BOOL bFirstPlayer, HICON hIcon);
	void Reset();

	void SetName(BOOL bFirstPlayer, LPCTSTR strName);
	void SetLife(BOOL bFirstPlayer, int nLife);
	void SetHand(BOOL bFirstPlayer, int nCount);
	void SetLibrary(BOOL bFirstPlayer, int nCount);
	void SetGraveyard(BOOL bFirstPlayer, int nCount);
	void SetManaPool(BOOL bFirstPlayer, LPCTSTR strMana, LPCTSTR strManaExtra);


// Dialog Data
	enum { IDD = IDD_PLAYER_STATISTIC };

protected:
    CSCBButton		m_biHide;

	// Player Information

	CStatic			m_PlayerIcon1;
	CEdit			m_Name1;
	CEdit			m_Life1;
	CStatic			m_Hand1;
	CStatic			m_Library1;
	CStatic			m_Graveyard1;
	CManaStatic		m_ManaPool1;
	CRect			m_rcManaPool1;

	CStatic			m_PlayerIcon2;
	CEdit			m_Name2;
	CEdit			m_Life2;
	CStatic			m_Hand2;
	CStatic			m_Library2;
	CStatic			m_Graveyard2;
	CManaStatic		m_ManaPool2;
	CRect			m_rcManaPool2;

	DECLARE_MESSAGE_MAP()
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
};
