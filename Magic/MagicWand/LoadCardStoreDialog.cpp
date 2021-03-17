// LoadCardStoreDialog.cpp : implementation file
//

#include "stdafx.h"
#include "LoadCardStoreDialog.h"
#include "GameThread.h"
#include "MainFrm.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CLoadCardStoreDialog dialog
//

CLoadCardStoreDialog::CLoadCardStoreDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CLoadCardStoreDialog::IDD, pParent)
{
	m_strExpansionName = _T("");
	m_hThread = NULL;
	m_dwThreadID = 0;
	m_hCursor = LoadCursor(NULL, IDC_WAIT);
}

//____________________________________________________________________________
//
DWORD WINAPI CLoadCardStoreDialog::LoadCardStoreThreadProc(LPVOID Parameter)
{
	HWND hwndProgress = (HWND)Parameter;

	CCardFactory::GetInstance()->Initialize();
	CCardStore::GetInstance()->Initialize(hwndProgress);

	return 0;
}

//_____________________________________________________________________________
//
// CLoadCardStoreDialog - Overrides
//

void CLoadCardStoreDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_LOADPROGRESS, m_LoadProgress);
	DDX_Text(pDX, IDC_EXTENSION, m_strExpansionName);
}

//_____________________________________________________________________________
//
// CLoadCardStoreDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CLoadCardStoreDialog, CDialog)
	ON_WM_CREATE()
	ON_MESSAGE(WM_APP_CARDSTORE_INIT2, OnInitCardStore2)
	ON_WM_SETCURSOR()
	ON_MESSAGE(WM_APP_CARDSTORE_CARD, OnUpdateCardStatus)
	ON_MESSAGE(WM_APP_CARDSTORE_MODULE, OnUpdateModuleStatus)
	ON_MESSAGE(WM_APP_CARDSTORE_INITIALIZED, OnInitialized)
	ON_STN_CLICKED(IDB_LOGO, &CLoadCardStoreDialog::OnStnClickedLogo)
END_MESSAGE_MAP()

int CLoadCardStoreDialog::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	PostMessage(WM_APP_CARDSTORE_INIT2);
	
	return 0;
}

LRESULT CLoadCardStoreDialog::OnInitCardStore2(WPARAM /*wParam*/, LPARAM /*lParam*/)
{	
	m_hThread = CreateThread(NULL, 0, LoadCardStoreThreadProc, (LPVOID)GetSafeHwnd(), 0, &m_dwThreadID);

	return 0;
}

BOOL CLoadCardStoreDialog::OnSetCursor(CWnd* /*pWnd*/, UINT /*nHitTest*/, UINT /*message*/) 
{
//	return CDialog::OnSetCursor(pWnd, nHitTest, message);

	SetCursor(m_hCursor);

	return TRUE;
}

LRESULT CLoadCardStoreDialog::OnUpdateCardStatus(WPARAM wParam, LPARAM /*lParam*/)
{	
	m_LoadProgress.SetPos(wParam);

	return 0;
}

LRESULT CLoadCardStoreDialog::OnUpdateModuleStatus(WPARAM wParam, LPARAM lParam)
{	
	CString* pstrExpansionName = (CString*)lParam;
	int nCount = wParam;

	m_strExpansionName = *pstrExpansionName;
	delete pstrExpansionName;

	m_LoadProgress.SetRange(1, nCount);
	m_LoadProgress.SetPos(1);

	UpdateData(TO_UI);

	return 0;
}

LRESULT CLoadCardStoreDialog::OnInitialized(WPARAM wParam, LPARAM lParam)
{	
	CMainFrame* pMainFrame = (CMainFrame*)::AfxGetMainWnd();
	pMainFrame->GetPreviewBar()->SetBitmap(NULL);

	PostMessage(WM_CLOSE);

	g_pCoreApp->GetNetManager()->ConfigureUPnP();

#ifdef _MY_DEBUG
	/*
	// Dump all unused abilities

	std::map<CString, StringArray> allAbilityNames;
	CCardFactory::GetAllAbilityNames(allAbilityNames);

//	sort(allAbilityNames.begin(), allAbilityNames.end());

	ATLTRACE(_T("\nAll abilities (%d):\n\n"), allAbilityNames.size());
	for (std::map<CString, StringArray>::iterator it = allAbilityNames.begin(); it != allAbilityNames.end(); ++it)
		ATLTRACE(_T("%s\n"), it->first);

	StringArray allUsedAbilityNames;

	StringArray allDeckCardNames;
	CCardFactory::GetAllCardsUsedInPath(g_pCoreApp->GetDeckPath(), allDeckCardNames);
	for (unsigned i = 0; i < allDeckCardNames.size(); ++i)
		CCardFactory::GetAbilityNames(allDeckCardNames[i], allUsedAbilityNames);

	sort(allUsedAbilityNames.begin(), allUsedAbilityNames.end());
		
	ATLTRACE(_T("\nAll used abilities (%d):\n\n"), allUsedAbilityNames.size());
	for (unsigned i = 0; i < allUsedAbilityNames.size(); ++i)
		ATLTRACE(_T("%s\n"), allUsedAbilityNames[i]);		

	std::map<CString, StringArray> allUnusedAbilityNames;

	for (std::map<CString, StringArray>::iterator it = allAbilityNames.begin(); it != allAbilityNames.end(); ++it)
	{
		bool bFound = false;

		for (unsigned j = 0; j < allUsedAbilityNames.size(); ++j)
			if (!allUsedAbilityNames[j].CompareNoCase(it->first))
			{
				bFound = true;
				break;
			}

		if (!bFound)
			allUnusedAbilityNames[it->first] = it->second;
	}

	ATLTRACE(_T("\nAll unused abilities (%d):\n\n"), allUnusedAbilityNames.size());
	for (std::map<CString, StringArray>::iterator it = allUnusedAbilityNames.begin(); it != allUnusedAbilityNames.end(); ++it)
	{
		ATLTRACE(_T("%s\n"), it->first);			
		for (unsigned i = 0; i < it->second.size(); ++i)
			ATLTRACE(_T("\t%s\n"), it->second[i]);			
	}
	*/
#endif

	return 0;
}


void CLoadCardStoreDialog::OnStnClickedLogo()
{
	// TODO: Add your control notification handler code here
}
