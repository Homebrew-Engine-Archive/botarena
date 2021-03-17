// GraphDialogBar.cpp : implementation file
//

#include "stdafx.h"
#include "GraphDialogBar.h"
#include "MainFrm.h"
#include "Resource.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CGraphDialogBar
//

CGraphDialogBar::CGraphDialogBar()
	: CDialogBar()
	, m_pCurrentHighlightedIcon(NULL)
	, m_nCurrentHighlightedIconIndex(-1)
	, m_nNormalImageStart(-1)
	, m_nGrayImageStart(-1)
	, m_nDimImageStart(-1)
	, m_bHighlightedCombatIcons1(FALSE)
	, m_bHighlightedCombatIcons2(FALSE)
	, m_bHighlightedFirstPlayer(FALSE)
	, m_bBlink(FALSE)
	, m_bBlinkColorSet(FALSE)
	, m_BlinkColor(RGB(159, 244, 164))
{
	RemoveAllNodeStates();
}

CGraphDialogBar::~CGraphDialogBar()
{
	WriteProfile();
}

#pragma push_macro("new")
#ifdef new
#undef new
#endif

BOOL CGraphDialogBar::Create(CWnd* pParentWnd, UINT nStyle, UINT nID)
{
	if (!CDialogBar::Create(pParentWnd, IDD, nStyle, nID))
		return FALSE;

    m_biHide.Move(CPoint(4, 4));

	m_CurrentNode.SubclassDlgItem(IDC_CURRENT_NODE, this);
	m_TurnNumber.SubclassDlgItem(IDC_TURN_NUMBER, this);
	m_PriorityPlayer.SubclassDlgItem(IDC_PRIORITY_PLAYER, this);

	m_AttackButton.AutoLoad(IDM_ATTACK, this);
	m_DefaultMoveButton.AutoLoad(IDM_GRAPH_DEFAULT, this);

	m_PlayerIcons1[0].SubclassDlgItem(IDC_STATIC_UNTAP1, this);
	m_PlayerIcons1[1].SubclassDlgItem(IDC_STATIC_UPKEEP1, this);
	m_PlayerIcons1[2].SubclassDlgItem(IDC_STATIC_DRAW1, this);
	m_PlayerIcons1[3].SubclassDlgItem(IDC_STATIC_MAIN_PRECOMBAT1, this);
	m_PlayerIcons1[4].SubclassDlgItem(IDC_STATIC_BEGINNING_COMBAT1, this);
	m_PlayerIcons1[5].SubclassDlgItem(IDC_STATIC_DECLARE_ATTACKERS1, this);
	m_PlayerIcons1[6].SubclassDlgItem(IDC_STATIC_DECLARE_BLOCKERS1, this);
	m_PlayerIcons1[7].SubclassDlgItem(IDC_STATIC_COMBAT_DAMAGE1, this);
	m_PlayerIcons1[8].SubclassDlgItem(IDC_STATIC_END_OF_COMBAT1, this);
	m_PlayerIcons1[9].SubclassDlgItem(IDC_STATIC_MAIN_POSTCOMBAT1, this);
	m_PlayerIcons1[10].SubclassDlgItem(IDC_STATIC_END_OF_TURN1, this);

	m_PlayerIcons2[0].SubclassDlgItem(IDC_STATIC_UNTAP2, this);
	m_PlayerIcons2[1].SubclassDlgItem(IDC_STATIC_UPKEEP2, this);
	m_PlayerIcons2[2].SubclassDlgItem(IDC_STATIC_DRAW2, this);
	m_PlayerIcons2[3].SubclassDlgItem(IDC_STATIC_MAIN_PRECOMBAT2, this);
	m_PlayerIcons2[4].SubclassDlgItem(IDC_STATIC_BEGINNING_COMBAT2, this);
	m_PlayerIcons2[5].SubclassDlgItem(IDC_STATIC_DECLARE_ATTACKERS2, this);
	m_PlayerIcons2[6].SubclassDlgItem(IDC_STATIC_DECLARE_BLOCKERS2, this);
	m_PlayerIcons2[7].SubclassDlgItem(IDC_STATIC_COMBAT_DAMAGE2, this);
	m_PlayerIcons2[8].SubclassDlgItem(IDC_STATIC_END_OF_COMBAT2, this);
	m_PlayerIcons2[9].SubclassDlgItem(IDC_STATIC_MAIN_POSTCOMBAT2, this);
	m_PlayerIcons2[10].SubclassDlgItem(IDC_STATIC_END_OF_TURN2, this);

	CRect rect;
	m_PlayerIcons1[0].GetWindowRect(&rect);

	Gdiplus::Size iconSize(rect.Width() - 1, rect.Height() - 1);

	static const std::pair<NODE_INDEX, LPCTSTR> s_StepImages[] =
	{
		std::make_pair(NX_UNTAP, _T("untap%s.png")),
		std::make_pair(NX_UPKEEP, _T("upkeep%s.png")),
		std::make_pair(NX_DRAW, _T("draw%s.png")),
		std::make_pair(NX_MAIN_PRECOMBAT, _T("main%s.png")),
		std::make_pair(NX_BEGINNING_COMBAT, _T("beginningofcombat%s.png")),
		std::make_pair(NX_DECLARE_ATTACKERS, _T("declareattackers%s.png")),
		std::make_pair(NX_DECLARE_BLOCKERS, _T("declareblockers%s.png")),
		std::make_pair(NX_COMBAT_DAMAGE, _T("combatdamage%s.png")),
		std::make_pair(NX_END_OF_COMBAT, _T("endofcombat%s.png")),
		std::make_pair(NX_MAIN_POSTCOMBAT, _T("main%s.png")),
		std::make_pair(NX_END_OF_TURN, _T("endofturn%s.png")),
	};

	for (int i = 0; i < ARRAY_SIZE(s_StepImages); ++i)
	{
		CString strStepImagePath;
		strStepImagePath.Format(CString(_T("%s\\Steps\\")) + s_StepImages[i].second, g_pCoreApp->GetBitmapPath(), _T(""));

		int nIndex = -1;
		if (PathFileExists(strStepImagePath))
		{
			std::auto_ptr<Gdiplus::Bitmap> apBitmap(Gdiplus::Bitmap::FromFile(T2CW(strStepImagePath)));
			if (apBitmap.get())
			{
				Gdiplus::Bitmap* pBitmap(StretchBitmap(apBitmap.get(), iconSize));
				if (pBitmap)
					nIndex = m_ImageList.Add(pBitmap);
			}
		}

		if (nIndex == -1)
		{
			nIndex = m_ImageList.Add(new Gdiplus::Bitmap(iconSize.Width, iconSize.Height));
			ATLASSERT(false);
		}

		if (!i)
			m_nNormalImageStart = nIndex;
	}

	for (int i = 0; i < ARRAY_SIZE(s_StepImages); ++i)
	{
		CString strStepImagePath;
		strStepImagePath.Format(CString(_T("%s\\Steps\\")) + s_StepImages[i].second, g_pCoreApp->GetBitmapPath(), _T("_gray"));

		int nIndex = -1;
		if (PathFileExists(strStepImagePath))
		{
			std::auto_ptr<Gdiplus::Bitmap> apBitmap(Gdiplus::Bitmap::FromFile(T2CW(strStepImagePath)));
			if (apBitmap.get())
			{
				Gdiplus::Bitmap* pBitmap(StretchBitmap(apBitmap.get(), iconSize));
				if (pBitmap)
					nIndex = m_ImageList.Add(pBitmap);
			}
		}

		if (nIndex == -1)
		{
			nIndex = m_ImageList.Add(new Gdiplus::Bitmap(iconSize.Width, iconSize.Height));
			ATLASSERT(false);
		}

		if (!i)
			m_nGrayImageStart = nIndex;
	}

	for (int i = 4; i <= 8; ++i)
	{
		CString strStepImagePath;
		strStepImagePath.Format(CString(_T("%s\\Steps\\")) + s_StepImages[i].second, g_pCoreApp->GetBitmapPath(), _T("_active"));

		int nIndex = -1;
		if (PathFileExists(strStepImagePath))
		{
			std::auto_ptr<Gdiplus::Bitmap> apBitmap(Gdiplus::Bitmap::FromFile(T2CW(strStepImagePath)));
			if (apBitmap.get())
			{
				Gdiplus::Bitmap* pBitmap(StretchBitmap(apBitmap.get(), iconSize));
				if (pBitmap)
					nIndex = m_ImageList.Add(pBitmap);
			}
		}

		if (nIndex == -1)
		{
			nIndex = m_ImageList.Add(new Gdiplus::Bitmap(iconSize.Width, iconSize.Height));
			ATLASSERT(false);
		}

		if (i == 4)
			m_nDimImageStart = nIndex;
	}

	m_StateImageList.Create(10, 10, ILC_COLORDDB | ILC_MASK, 2, 1);

	m_nAlwaysPassImage = m_StateImageList.Add(::AfxGetApp()->LoadIcon(IDI_ALWAYS_PASS));
	m_nAlwaysStopImage = m_StateImageList.Add(::AfxGetApp()->LoadIcon(IDI_ALWAYS_STOP));

	GetProfile();
	UpdateUsagePattern();

	m_ToolTip.Create(this);

	m_BlinkBrush.CreateSolidBrush(m_BlinkColor);
	SetTimer(BLINK_ID_EVENT, BLINK_ELAPSE, NULL);

	return TRUE;
}

#pragma pop_macro("new")

/*
	NodeId::BeginningStep					BP
		UNTAP_STEP					US
		UPKEEP_STEP					PS
		DRAW_STEP					DS

	MAIN_PHASE						MP

		BEGIN_OF_COMBAT_STEP		BCS
		DECLARE_ATTACKERS_STEP1		BAS
		DECLARE_ATTACKERS_STEP2		"
		DECLARE_BLOCKERS_STEP1		DBS
		DECLARE_BLOCKERS_STEP2		"
		COMBAT_DAMAGE_STEP1			CDS
		COMBAT_DAMAGE_STEP2			"
		COMBAT_DAMAGE_STEP3			"
		END_OF_COMBAT_STEP			ECS

		END_OF_TURN_STEP			ES
		CLEAN_UP_STEP				CS
*/

UsagePatternItem CGraphDialogBar::TranslateToSelectedUsagePatternNode(int nPlayerIndex, int nNodeIndex)
{
	if (!nPlayerIndex)
		switch(nNodeIndex)
		{
		case 0: return UsagePatternItem::OpponentsUntapStep;
		case 1: return UsagePatternItem::OpponentsUpkeepStep;
		case 2: return UsagePatternItem::OpponentsDrawStep;
		case 3: return UsagePatternItem::OpponentsMainPhasePrecombat;
		case 4: return UsagePatternItem::OpponentsBeginningOfCombatStep;
		case 5: return UsagePatternItem::OpponentsDeclareAttackersStep;
		case 6: return UsagePatternItem::OpponentsDeclareBlockersStep;
		case 7: return UsagePatternItem::OpponentsCombatDamageStep;	
		case 8: return UsagePatternItem::OpponentsEndOfCombatStep;
		case 9: return UsagePatternItem::OpponentsMainPhasePostcombat;
		case 10: return UsagePatternItem::OpponentsEndOfTurnStep;
		}
	else
		switch(nNodeIndex)
		{
		case 0: return UsagePatternItem::YourUntapStep;
		case 1: return UsagePatternItem::YourUpkeepStep;
		case 2: return UsagePatternItem::YourDrawStep;
		case 3: return UsagePatternItem::YourMainPhasePrecombat;
		case 4: return UsagePatternItem::YourBeginningOfCombatStep;
		case 5: return UsagePatternItem::YourDeclareAttackersStep;
		case 6: return UsagePatternItem::YourDeclareBlockersStep;
		case 7: return UsagePatternItem::YourCombatDamageStep;
		case 8: return UsagePatternItem::YourEndOfCombatStep;
		case 9: return UsagePatternItem::YourMainPhasePostcombat;
		case 10: return UsagePatternItem::YourEndOfTurnStep;
		}

	return UsagePatternItem::Null;
}

void CGraphDialogBar::GetUsagePatternOverrides(CUsagePattern::UsagePatternItemArray& overrides)
{
	overrides.clear();

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < _NX_COUNT; ++j)
			if (m_NodeStates[i][j] == 2)
			{
				if (!i)
					switch(j)
					{
					case 0: overrides.push_back(UsagePatternItem::OpponentsUntapStep); break;
					case 1: overrides.push_back(UsagePatternItem::OpponentsUpkeepStep); break;
					case 2: overrides.push_back(UsagePatternItem::OpponentsDrawStep); break;
					case 3: overrides.push_back(UsagePatternItem::OpponentsMainPhasePrecombat); break;
					case 4: overrides.push_back(UsagePatternItem::OpponentsBeginningOfCombatStep); break;
					case 5: overrides.push_back(UsagePatternItem::OpponentsDeclareAttackersStep); break;
					case 6: overrides.push_back(UsagePatternItem::OpponentsDeclareBlockersStep); break;
					case 7: overrides.push_back(UsagePatternItem::OpponentsCombatDamageStep); break;
					case 8: overrides.push_back(UsagePatternItem::OpponentsEndOfCombatStep); break;
					case 9: overrides.push_back(UsagePatternItem::OpponentsMainPhasePostcombat); break;
					case 10: overrides.push_back(UsagePatternItem::OpponentsEndOfTurnStep); break;
					}
				else
					switch(j)
					{
					case 0: overrides.push_back(UsagePatternItem::YourUntapStep); break;
					case 1: overrides.push_back(UsagePatternItem::YourUpkeepStep); break;
					case 2: overrides.push_back(UsagePatternItem::YourDrawStep); break;
					case 3: overrides.push_back(UsagePatternItem::YourMainPhasePrecombat); break;
					case 4: overrides.push_back(UsagePatternItem::YourBeginningOfCombatStep); break;
					case 5: overrides.push_back(UsagePatternItem::YourDeclareAttackersStep); break;
					case 6: overrides.push_back(UsagePatternItem::YourDeclareBlockersStep); break;
					case 7: overrides.push_back(UsagePatternItem::YourCombatDamageStep); break;
					case 8: overrides.push_back(UsagePatternItem::YourEndOfCombatStep); break;
					case 9: overrides.push_back(UsagePatternItem::YourMainPhasePostcombat); break;
					case 10: overrides.push_back(UsagePatternItem::YourEndOfTurnStep); break;
					}
			}
}

void CGraphDialogBar::UpdateUsagePattern()
{
	CUsagePattern::UsagePatternItemArray overrides;
	GetUsagePatternOverrides(overrides);
	CUsagePattern::GetInstance()->SetOverrides(overrides);
}

int CGraphDialogBar::GetNodeIndex(NodeId nodeId, BOOL bPreCombat, BOOL& bCombatNodes)
{
	int nIndex = -1;
	bCombatNodes = FALSE;
	switch(nodeId.Get())
	{
	case NodeId::UntapStep:	nIndex = 0; break;
	case NodeId::UpkeepStep: nIndex = 1; break;
	case NodeId::DrawStep1:
	case NodeId::DrawStep2: nIndex = 2; break;
	case NodeId::MainPhaseStep: nIndex = (bPreCombat ? 3 : 9); break;
	case NodeId::BeginningOfCombatStep: nIndex = 4; bCombatNodes = TRUE; break;
	case NodeId::DeclareAttackersStep1:
	case NodeId::DeclareAttackersStep2: nIndex = 5; bCombatNodes = TRUE; break;
	case NodeId::DeclareBlockersStep1:
	case NodeId::DeclareBlockersStep2: nIndex = 6; bCombatNodes = TRUE; break;
	case NodeId::CombatDamageStep1a:
	case NodeId::CombatDamageStep1b:
	case NodeId::CombatDamageStep2a:
	case NodeId::CombatDamageStep2b: nIndex = 7; bCombatNodes = TRUE; break;
	case NodeId::EndOfCombatStep: nIndex = 8; bCombatNodes = TRUE; break;
	case NodeId::CleanupStep1:
	case NodeId::CleanupStep2:
	case NodeId::EndStep: nIndex = 10; break;
	}

	return nIndex;
}

void CGraphDialogBar::SetCurrentNode(BOOL bFirstPlayer, NodeId nodeId, BOOL bPrecombat,
									 LPCTSTR strCurrentNode, LPCTSTR strPriorityPlayer,
									 BOOL bBlink)
{
	if (!GetSafeHwnd())
		return;

	m_bBlink = bBlink;
	m_bBlinkColorSet = FALSE;

	SetCurrentNodeText(strCurrentNode);
	SetPriorityPlayerText(strPriorityPlayer);

	EnableAttackButton(FALSE);

	BOOL bCombatNodes = FALSE;
	int nIconIndex = GetNodeIndex(nodeId, bPrecombat, bCombatNodes);
	
	CStatic* pHighlightIcon = NULL;

	if (nIconIndex != -1)
	{
		if (bFirstPlayer)
			pHighlightIcon = &(m_PlayerIcons1[nIconIndex]);
		else
			pHighlightIcon = &(m_PlayerIcons2[nIconIndex]);
	}

	if (bCombatNodes)
	{
		if ((bFirstPlayer && !m_bHighlightedCombatIcons1) ||
			(!bFirstPlayer && !m_bHighlightedCombatIcons2))
		{
			/*
			for (int i = 4; i <= 8; ++i)
			{
				CStatic* pCombatIcon = bFirstPlayer ? &(m_PlayerIcons1[i]) : &(m_PlayerIcons2[i]);
				CRect PreviousLocation;
				pCombatIcon->GetWindowRect(&PreviousLocation);
				ScreenToClient(&PreviousLocation);
				PreviousLocation.OffsetRect(0, bFirstPlayer ? -4 : +4);
				pCombatIcon->MoveWindow(&PreviousLocation, FALSE);
			}
			*/

			if (bFirstPlayer)
				m_bHighlightedCombatIcons1 = TRUE;
			else
				m_bHighlightedCombatIcons2 = TRUE;
		}
	}
	else
	{
		if (m_bHighlightedCombatIcons1)
		{
			/*
			for (int i = 4; i <= 8; ++i)
			{
				CRect PreviousLocation;
				m_PlayerIcons1[i].GetWindowRect(&PreviousLocation);
				ScreenToClient(&PreviousLocation);
				PreviousLocation.OffsetRect(0, +4);
				m_PlayerIcons1[i].MoveWindow(&PreviousLocation, FALSE);
			}
			*/

			m_bHighlightedCombatIcons1 = FALSE;
		}

		if (m_bHighlightedCombatIcons2)
		{
			/*
			for (int i = 4; i <= 8; ++i)
			{
				CRect PreviousLocation;
				m_PlayerIcons2[i].GetWindowRect(&PreviousLocation);
				ScreenToClient(&PreviousLocation);
				PreviousLocation.OffsetRect(0, -4);
				m_PlayerIcons2[i].MoveWindow(&PreviousLocation, FALSE);
			}
			*/

			m_bHighlightedCombatIcons2 = FALSE;
		}
	}

	if (pHighlightIcon != m_pCurrentHighlightedIcon)
	{
		/*
		if (m_pCurrentHighlightedIcon)
		{
			CRect PreviousLocation;
			m_pCurrentHighlightedIcon->GetWindowRect(&PreviousLocation);
			ScreenToClient(&PreviousLocation);
			PreviousLocation.OffsetRect(0, m_bHighlightedFirstPlayer ? +4 : -4);
			m_pCurrentHighlightedIcon->MoveWindow(&PreviousLocation, FALSE);
		}

		if (pHighlightIcon)
		{
			CRect NewLocation;
			pHighlightIcon->GetWindowRect(&NewLocation);
			ScreenToClient(&NewLocation);
			if (bFirstPlayer)
				NewLocation.OffsetRect(0, -4);
			else
				NewLocation.OffsetRect(0, +4);

			pHighlightIcon->MoveWindow(&NewLocation, FALSE);
		}
		*/

		Invalidate();
	}

	m_pCurrentHighlightedIcon = pHighlightIcon;
	m_nCurrentHighlightedIconIndex = nIconIndex;
	m_bHighlightedFirstPlayer = bFirstPlayer;

	UpdateWindow();

	CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
	pMainWnd->GetStatusBar()->SetPriorityPlayerText(strPriorityPlayer);
}

void CGraphDialogBar::Reset()
{
	if (!GetSafeHwnd())
		return;

	m_TurnNumber.SetWindowText(_T(""));
	SetWindowText(_T("Ready"));
	SetCurrentNode(FALSE, NodeId::Null, FALSE, _T(""), _T(""), FALSE);
	EnableAttackButton(FALSE);
}

void CGraphDialogBar::SetCurrentNodeText(LPCTSTR strCurrentNode)
{
	m_CurrentNode.SetWindowText(strCurrentNode);
}

void CGraphDialogBar::SetPriorityPlayerText(LPCTSTR strPriorityPlayer)
{
	m_PriorityPlayer.SetWindowText(strPriorityPlayer);
}

CString CGraphDialogBar::GetPriorityPlayerText() const
{
	CString strText;
	m_PriorityPlayer.GetWindowText(strText);
	return strText;
}

void CGraphDialogBar::SetTurnNumber(int nTurnNumber)
{
	if (!GetSafeHwnd())
		return;

	CString strNumber;
	strNumber.Format(_T("%d"), nTurnNumber);

	m_TurnNumber.SetWindowText(strNumber);
}

void CGraphDialogBar::SetWindowText(LPCTSTR strCaption)
{
	CDialogBar::SetWindowText(strCaption);
	if (IsFloating())
	{
		GetParent()->SetWindowText(strCaption);
		GetParent()->GetParent()->SetWindowText(strCaption);
	}	
}

void CGraphDialogBar::RemoveAllNodeStates()
{
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < _NX_COUNT; ++j)
			m_NodeStates[i][j] = 0;
}

BOOL CGraphDialogBar::AlwaysStopNode(BOOL bOpponents, NodeId nodeId, BOOL bPreCombat)
{
	BOOL bCombatNodes = FALSE;
	int nIndex = GetNodeIndex(nodeId, bPreCombat, bCombatNodes);

	return m_NodeStates[bOpponents ? 0 : 1][nIndex] == 2;
}

BOOL CGraphDialogBar::AlwaysPassNode(BOOL bOpponents, NodeId nodeId, BOOL bPreCombat)
{
	BOOL bCombatNodes = FALSE;
	int nIndex = GetNodeIndex(nodeId, bPreCombat, bCombatNodes);

	return m_NodeStates[bOpponents ? 0 : 1][nIndex] == 1;
}

BOOL CGraphDialogBar::CheckIconClick(CPoint point)
{
	for (int i = 1; i < _NX_COUNT; ++i)
	{
		CRect IconRect;
		m_PlayerIcons1[i].GetWindowRect(IconRect);
		ScreenToClient(&IconRect);

		if (IconRect.PtInRect(point))
		{
			++m_NodeStates[0][i];
			if (m_NodeStates[0][i] > 2)
				m_NodeStates[0][i] = 0;

			InvalidateRect(IconRect);

			if (m_NodeStates[1][i] != 1)
				UpdateUsagePattern();

			return TRUE;
		}

		m_PlayerIcons2[i].GetWindowRect(IconRect);
		ScreenToClient(&IconRect);

		if (IconRect.PtInRect(point))
		{
			++m_NodeStates[1][i];
			if (m_NodeStates[1][i] > 2)
				m_NodeStates[1][i] = 0;

			InvalidateRect(IconRect);

			if (m_NodeStates[1][i] != 1)
				UpdateUsagePattern();

			return TRUE;
		}
	}

	return FALSE;
}

CString CGraphDialogBar::GetToolTipText(CPoint point)
{
	CString strToolTipText;

	for (int i = 0; i < _NX_COUNT; ++i)
	{
		CRect IconRect;
		m_PlayerIcons1[i].GetWindowRect(IconRect);
		ScreenToClient(&IconRect);

		if (IconRect.PtInRect(point))
		{
			strToolTipText.LoadString(TranslateToSelectedUsagePatternNode(0, i).Get());

			if (m_NodeStates[0][i] == 1)
				strToolTipText += _T("\n(Always Pass ON)");
			else
			if (m_NodeStates[0][i] == 2)
				strToolTipText += _T("\n(Override Usage Pattern ON)");

			return strToolTipText;
		}

		m_PlayerIcons2[i].GetWindowRect(IconRect);
		ScreenToClient(&IconRect);

		if (IconRect.PtInRect(point))
		{
			strToolTipText.LoadString(TranslateToSelectedUsagePatternNode(1, i).Get());

			if (m_NodeStates[1][i] == 1)
				strToolTipText += _T("\n(Always Pass ON)");
			else
			if (m_NodeStates[1][i] == 2)
				strToolTipText += _T("\n(Always Stop ON)");

			return strToolTipText;
		}
	}

	return _T("");
}

void CGraphDialogBar::WriteProfile()
{
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < _NX_COUNT; ++j)
		{
			CString strValueName;
			strValueName.Format(REG_SETTINGS_GRAPH_NODE_STATES, i, j);
			g_pCoreApp->WriteProfileInt(REG_SETTINGS_KEY, strValueName, m_NodeStates[i][j]);
		}
}

void CGraphDialogBar::GetProfile()
{
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < _NX_COUNT; ++j)
		{
			CString strValueName;
			strValueName.Format(REG_SETTINGS_GRAPH_NODE_STATES, i, j);
			m_NodeStates[i][j] = g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, strValueName, 0);
		}
}

//_____________________________________________________________________________
//
// CGraphDialogBar - Generated message map functions
//

BEGIN_MESSAGE_MAP(CGraphDialogBar, CDialogBar)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

void CGraphDialogBar::OnLButtonDown(UINT nFlags, CPoint point) 
{
	m_ToolTip.Hide();

	if (!IsFloating() && m_biHide.GetRect().PtInRect(point))
	{
		m_biHide.bPushed = TRUE;
		InvalidateRect(m_biHide.GetRect());
		return;
	}

	if (CheckIconClick(point))
		return;
	
	CDialogBar::OnLButtonDown(nFlags, point);
}

void CGraphDialogBar::OnLButtonUp(UINT nFlags, CPoint point) 
{
	m_ToolTip.Hide();

	if (!IsFloating() && m_biHide.GetRect().PtInRect(point) && m_biHide.bPushed)
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();
		pMainWnd->ShowControlBar(this, FALSE, FALSE);
		return;
	}
	
	CDialogBar::OnLButtonUp(nFlags, point);
}

void CGraphDialogBar::OnMouseMove(UINT nFlags, CPoint point) 
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

	if (::IsWindow(m_ToolTip.m_hWnd))
	{
		if ((CScrollView::GetActiveWindow() != ::AfxGetMainWnd()) ||
			GetCapture())
		{
			m_strToolTipText = _T("");
			m_ToolTip.Hide();
		}
		else
		{
			m_strToolTipText = GetToolTipText(point);

			if (m_strToolTipText.IsEmpty())
				m_ToolTip.Hide();
			else
			{
				m_ToolTipPoint = CPoint(point.x + 15, point.y);
				ClientToScreen(&m_ToolTipPoint);

				SetTimer(TOOL_TIP_ID_EVENT, TOOL_TIP_ELAPSE, NULL);
			}
		}
	}
	
	CDialogBar::OnMouseMove(nFlags, point);
}

void CGraphDialogBar::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	int nSaved = dc.SaveDC();

	{
		Gdiplus::Graphics graphics(dc.GetSafeHdc());

		for (int i = 0; i < _NX_COUNT; ++i)
		{
			if (&(m_PlayerIcons1[i]) != m_pCurrentHighlightedIcon)
			{
				CRect IconRect;
				m_PlayerIcons1[i].GetWindowRect(IconRect);
				ScreenToClient(&IconRect);

				int nIcon = m_nGrayImageStart + i;

				if (m_bHighlightedCombatIcons1 && (i >= 4) && (i <= 8))
					nIcon = m_nDimImageStart + i - 4;

				graphics.DrawImage(m_ImageList.Get(nIcon), Gdiplus::Point(IconRect.left, IconRect.top));

				if (m_NodeStates[0][i])
					m_StateImageList.Draw(&dc, m_nAlwaysPassImage + m_NodeStates[0][i] - 1, IconRect.TopLeft(), ILD_NORMAL | ILD_TRANSPARENT);
			}

			if (&(m_PlayerIcons2[i]) != m_pCurrentHighlightedIcon)
			{
				CRect IconRect;
				m_PlayerIcons2[i].GetWindowRect(IconRect);
				ScreenToClient(&IconRect);

				int nIcon = m_nGrayImageStart + i;

				if (m_bHighlightedCombatIcons2 && (i >= 4) && (i <= 8))
					nIcon = m_nDimImageStart + i - 4;

				graphics.DrawImage(m_ImageList.Get(nIcon), Gdiplus::Point(IconRect.left, IconRect.top));

				if (m_NodeStates[1][i])
					m_StateImageList.Draw(&dc, m_nAlwaysPassImage + m_NodeStates[1][i] - 1, IconRect.TopLeft(), ILD_NORMAL | ILD_TRANSPARENT);
			}
		}

		if (m_pCurrentHighlightedIcon)
		{
			CRect IconRect;
			m_pCurrentHighlightedIcon->GetWindowRect(IconRect);
			ScreenToClient(&IconRect);

			graphics.DrawImage(m_ImageList.Get(m_nNormalImageStart + m_nCurrentHighlightedIconIndex), Gdiplus::Point(IconRect.left, IconRect.top));

			if (m_NodeStates[m_bHighlightedFirstPlayer ? 0 : 1][m_nCurrentHighlightedIconIndex])
				m_StateImageList.Draw(
					&dc,
					m_nAlwaysPassImage + m_NodeStates[m_bHighlightedFirstPlayer ? 0 : 1][m_nCurrentHighlightedIconIndex] - 1,
					IconRect.TopLeft(), ILD_NORMAL | ILD_TRANSPARENT);
		}
	}

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

	dc.RestoreDC(nSaved);
}

void CGraphDialogBar::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	m_ToolTip.Hide();

	if (CheckIconClick(point))
		return;

	CDialogBar::OnLButtonDblClk(nFlags, point);
}

void CGraphDialogBar::OnTimer(UINT nIDEvent) 
{
	__super::OnTimer(nIDEvent);

	if (nIDEvent == TOOL_TIP_ID_EVENT)
	{
		KillTimer(TOOL_TIP_ID_EVENT);

		if (!GetCapture() && !m_strToolTipText.IsEmpty())
			m_ToolTip.Show(m_ToolTipPoint, m_strToolTipText);
	}
	else
	if (nIDEvent == BLINK_ID_EVENT)
	{
		if (!m_bBlink)
			m_bBlinkColorSet = FALSE;
		else
			m_bBlinkColorSet = !m_bBlinkColorSet;

		m_PriorityPlayer.Invalidate();
	}
}

HBRUSH CGraphDialogBar::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	if (nCtlColor != CTLCOLOR_STATIC ||
		!m_bBlink || !m_bBlinkColorSet ||
		pWnd->GetDlgCtrlID() != IDC_PRIORITY_PLAYER)
		return CDialogBar::OnCtlColor(pDC, pWnd, nCtlColor);

	pDC->SetBkColor(m_BlinkColor);
	//pDC->SetTextColor(RGB(255, 255, 255));
	return (HBRUSH)m_BlinkBrush;
}
