// MagicWandDoc.cpp : implementation of the CMagicWandDoc class
//

#include "stdafx.h"
#include "MagicWand.h"
#include "MagicWandDoc.h"

#define new DEBUG_NEW

// CMagicWandDoc

//static
CString CMagicWandDoc::GetOpenFile(LPCTSTR strFilter, LPCTSTR strDefaultExtension, LPCTSTR strInitialDir, HWND hwndOwner)
{
	TCHAR strPathName[MAX_PATH] = _T("");

	OPENFILENAME ofn;
	memset(reinterpret_cast<PVOID>(&ofn), 0, sizeof(ofn));
	ofn.hwndOwner = hwndOwner ? hwndOwner : ::AfxGetMainWnd()->GetSafeHwnd();
	ofn.lStructSize = sizeof(ofn);
	ofn.lpstrFilter = strFilter;
	ofn.lpstrFile = strPathName;
	ofn.lpstrInitialDir = strInitialDir;
	ofn.nMaxFile = MAX_PATH;
	ofn.Flags = OFN_EXPLORER | 
				OFN_NOCHANGEDIR | 
				OFN_PATHMUSTEXIST |
				OFN_FILEMUSTEXIST |
				OFN_HIDEREADONLY;
	ofn.lpstrDefExt = strDefaultExtension;

	if (!GetOpenFileName(&ofn))
		return _T("");

	return strPathName;
}

CString CMagicWandDoc::GetSaveFile(LPCTSTR strFilter, LPCTSTR strDefaultExtension, LPCTSTR strInitialDir, HWND hwndOwner)
{
	TCHAR strPathName[MAX_PATH] = _T("");

	OPENFILENAME ofn;
	memset(reinterpret_cast<PVOID>(&ofn), 0, sizeof(ofn));
	ofn.hwndOwner = hwndOwner ? hwndOwner : ::AfxGetMainWnd()->GetSafeHwnd();
	ofn.lStructSize = sizeof(ofn);
	ofn.lpstrFilter = strFilter;
	ofn.lpstrFile = strPathName;
	ofn.lpstrInitialDir = strInitialDir;
	ofn.nMaxFile = MAX_PATH;
	ofn.Flags = OFN_EXPLORER | 
				OFN_NOCHANGEDIR | 
				OFN_PATHMUSTEXIST;
	ofn.lpstrDefExt = strDefaultExtension;

	if (!GetSaveFileName(&ofn))
		return _T("");

	return strPathName;
}

INT CALLBACK BrowseCallbackProc(HWND hwnd, 
                                UINT uMsg,
                                LPARAM lp, 
                                LPARAM pData) 
{
   TCHAR szDir[MAX_PATH];

   switch(uMsg) 
   {
   case BFFM_INITIALIZED: 
	  if (pData)
	  {
		  SendMessage(hwnd, BFFM_SETSELECTION, TRUE, (LPARAM)pData);
	  }
	  else
      if (GetCurrentDirectory(sizeof(szDir)/sizeof(TCHAR), szDir))
      {
         // WParam is TRUE since you are passing a path.
         // It would be FALSE if you were passing a pidl.
         SendMessage(hwnd, BFFM_SETSELECTION, TRUE, (LPARAM)szDir);
      }
      break;

   case BFFM_SELCHANGED: 
      // Set the status window to the currently selected path.
      if (lp && SHGetPathFromIDList((LPITEMIDLIST) lp ,szDir))
      {
         SendMessage(hwnd,BFFM_SETSTATUSTEXT,0,(LPARAM)szDir);
      }
      break;
   }
   return 0;
}

CString CMagicWandDoc::GetFolder(LPCTSTR strInitialDir, HWND hwndOwner)
{
	TCHAR strDisplayName[MAX_PATH];
	_tcscpy_s<>(strDisplayName, _T(""));

	BROWSEINFO browseInfo;
	memset(&browseInfo, 0, sizeof(browseInfo));
		
	browseInfo.hwndOwner = hwndOwner ? hwndOwner : ::AfxGetMainWnd()->GetSafeHwnd();
	browseInfo.pidlRoot = NULL;
	browseInfo.pszDisplayName = strDisplayName;
	browseInfo.ulFlags = BIF_USENEWUI;
	browseInfo.lpfn = BrowseCallbackProc;
	browseInfo.lParam = (LPARAM)strInitialDir;

	PIDLIST_ABSOLUTE pIdList = SHBrowseForFolder(&browseInfo);
	if (!pIdList)
		return _T("");

	TCHAR strFolder[MAX_PATH];
	if (!SHGetPathFromIDList(pIdList, strFolder))
	{
		CoTaskMemFree(pIdList);
		return _T("");
	}

	CoTaskMemFree(pIdList);

	CString strFolder2(strFolder);
	if (strFolder2.Right(1) == _T("\\"))
		strFolder2 = strFolder2.Left(strFolder2.GetLength() - 1);
	return strFolder2;
}

IMPLEMENT_DYNCREATE(CMagicWandDoc, CDocument)

BEGIN_MESSAGE_MAP(CMagicWandDoc, CDocument)
END_MESSAGE_MAP()

// CMagicWandDoc construction/destruction

CMagicWandDoc::CMagicWandDoc()
{
}

CMagicWandDoc::~CMagicWandDoc()
{
}

BOOL CMagicWandDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}

// CMagicWandDoc serialization

void CMagicWandDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

// CMagicWandDoc diagnostics

#ifdef _MY_DEBUG
void CMagicWandDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMagicWandDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_MY_DEBUG

// CMagicWandDoc commands
