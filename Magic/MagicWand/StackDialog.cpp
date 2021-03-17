// StackDialog.cpp : implementation file
//

#include "stdafx.h"
#include "StackDialog.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CStackDialog dialog
//

CStackDialog::CStackDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CStackDialog::IDD, pParent)
{
	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 3, 1);
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_COMPUTER));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_HUMAN));
	m_ImageList.Add(::AfxGetApp()->LoadIcon(IDI_MOVE));
}

void CStackDialog::InitDialog(CGame* pGame)
{
	m_StackTree.SetImageList(&m_ImageList, TVSIL_NORMAL);
	m_StackTree.DeleteAllItems();

	const CStack& stack = pGame->GetStack();
		
	HTREEITEM hCurrent = NULL;
	TVINSERTSTRUCT tvInsert;
	tvInsert.hInsertAfter = NULL;
	tvInsert.item.mask = TVIF_TEXT | TVIF_IMAGE | TVIF_SELECTEDIMAGE | TVIF_PARAM;

	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		tvInsert.hParent = hCurrent;

		const CStackAbilityAction* pAction = stack.GetStackAction(i).GetPointer();
		CString strActionName = pAction->GetController()->GetPlayerName() + _T(" ") + pAction->GetActionName();
		
		tvInsert.item.pszText = strActionName.LockBuffer();

		CCard* pCard = pAction->GetStackAbility()->GetCard();
		if (pCard)
		{
			if (pCard->GetController()->IsComputer())
				tvInsert.item.iImage = 0;
			else
				tvInsert.item.iImage = 1;
		}
		else
			tvInsert.item.iImage = 2;
		tvInsert.item.iSelectedImage = tvInsert.item.iImage;
		tvInsert.item.lParam = (LPARAM)pCard;

		hCurrent = m_StackTree.InsertItem(&tvInsert);

		strActionName.UnlockBuffer();

		m_StackTree.Expand(tvInsert.hParent, TVE_EXPAND);
	}

//	m_StackTree.SelectItem(hCurrent);
	m_StackTree.EnsureVisible(hCurrent);

	PostMessage(WM_APP_FOCUS_MAIN_WND);
}

//_____________________________________________________________________________
//
// CStackDialog - Overrides
//

void CStackDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStackDialog)
	DDX_Control(pDX, IDC_STACK_TREE, m_StackTree);
	//}}AFX_DATA_MAP
}

void CStackDialog::PostNcDestroy() 
{
	CDialogEx::PostNcDestroy();

	delete this;
}

//_____________________________________________________________________________
//
// CStackDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CStackDialog, CDialogEx)
	ON_NOTIFY(NM_SETFOCUS, IDC_STACK_TREE, OnSetfocusStackTree)
	ON_WM_SIZE()
	ON_NOTIFY(TVN_SELCHANGED, IDC_STACK_TREE, &CStackDialog::OnTvnSelchangedStackTree)
	ON_NOTIFY(NM_CLICK, IDC_STACK_TREE, &CStackDialog::OnNMClickStackTree)
	ON_MESSAGE(WM_APP_FOCUS_MAIN_WND, OnFocusMainWnd)
END_MESSAGE_MAP()

void CStackDialog::OnSetfocusStackTree(NMHDR* /*pNMHDR*/, LRESULT* pResult) 
{
	PostMessage(WM_APP_FOCUS_MAIN_WND);

	*pResult = 0;
}

void CStackDialog::OnSize(UINT nType, int cx, int cy) 
{
	CDialogEx::OnSize(nType, cx, cy);
	
	if (GetSafeHwnd() && m_StackTree.GetSafeHwnd())
	{
		CRect rcClient;
		GetClientRect(&rcClient);
		m_StackTree.SetWindowPos(NULL, 0, 0, rcClient.Width() - 30, rcClient.Height() - 20, SWP_NOMOVE | SWP_NOZORDER);
	}
}

void CStackDialog::OnTvnSelchangedStackTree(NMHDR *pNMHDR, LRESULT *pResult)
{
	CCard* pCard = (CCard*)m_StackTree.GetItemData(m_StackTree.GetSelectedItem());
	if (pCard)
	{
		CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
		pMainWnd->GetPreviewBar()->SetBitmap(
			CCardStore::GetInstance()->GetCardByID(pCard->GetImageID()));
	}

	PostMessage(WM_APP_FOCUS_MAIN_WND);

	*pResult = 0;
}

void CStackDialog::OnNMClickStackTree(NMHDR *pNMHDR, LRESULT *pResult)
{
	HTREEITEM hItem = m_StackTree.GetSelectedItem();
	if (hItem)
	{
		CCard* pCard = (CCard*)m_StackTree.GetItemData(hItem);
		if (pCard)
		{
			if (!pCard->GetOrientation()->IsMorphed())
			{
			CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
			pMainWnd->GetPreviewBar()->SetBitmap(
				CCardStore::GetInstance()->GetCardByID(pCard->GetImageID()));
			}
			else
			{
				CMainFrame* pMainWnd = (CMainFrame*)::AfxGetMainWnd();	
			pMainWnd->GetPreviewBar()->SetBitmap(
				CCardStore::GetInstance()->GetCard(_T("Morph"), TRUE));
			}
		}
	}

	PostMessage(WM_APP_FOCUS_MAIN_WND);

	*pResult = 0;
}

LRESULT CStackDialog::OnFocusMainWnd(WPARAM wParam, LPARAM lParam)
{
	::AfxGetMainWnd()->SetActiveWindow();

	return 0;
}
