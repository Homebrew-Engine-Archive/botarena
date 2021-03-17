// FileComboBox.cpp : implementation file
//

#include "stdafx.h"
#include "FileComboBox.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CFileComboBox
//

CFileComboBox::CFileComboBox()
{
}

CFileComboBox::~CFileComboBox()
{
}

int CFileComboBox::Dir(LPCTSTR strBaseDir, LPCTSTR strExt)
{
	ResetContent();
	m_strBaseDir = strBaseDir;
	if (m_strBaseDir.Right(1) != _T("\\"))
		m_strBaseDir += _T("\\");
	m_strExt = strExt;
	
	CFileFind Finder;
	BOOL bWorking = Finder.FindFile(m_strBaseDir + _T("*.") + m_strExt);

	while (bWorking)
	{
		bWorking = Finder.FindNextFile();
		CFileStatus FileStatus;
		int nImageIndex = -1;
		if (CFile::GetStatus(Finder.GetFilePath(), FileStatus))
		{
			for (int i = 0; i < m_ImageAttributeIndex.GetSize(); ++i)
			{
				DWORD dw = m_ImageAttributeIndex[i];
				if (FileStatus.m_attribute & LOWORD(dw))
					nImageIndex = HIWORD(dw);
			}
		}

		CString strFileTitle(Finder.GetFileTitle());

		for (int i = 0; i < m_ImageSuffixIndex.GetSize(); ++i)
			if (!strFileTitle.Right(
				m_ImageSuffixIndex[i].first.GetLength()).CompareNoCase(m_ImageSuffixIndex[i].first))
				nImageIndex = m_ImageSuffixIndex[i].second;
		
		COMBOBOXEXITEM cbi;
		cbi.mask = CBEIF_IMAGE | CBEIF_TEXT | CBEIF_SELECTEDIMAGE;

		cbi.iItem = GetCount();
		cbi.pszText = (LPTSTR)strFileTitle.LockBuffer();
		cbi.cchTextMax = strFileTitle.GetLength();
		cbi.iImage = nImageIndex;
		cbi.iSelectedImage = nImageIndex;
		
		InsertItem(&cbi);

		strFileTitle.UnlockBuffer();
	}
	
	return GetCount();
}

CString CFileComboBox::GetFilePath(int nItem)
{
	if (nItem == -1)
	{
		nItem = GetCurSel();
		if (nItem == LB_ERR)
			return _T("");
	}

	return m_strBaseDir + GetFileTitle(nItem) + _T(".") + m_strExt;
}

CString CFileComboBox::GetFileTitle(int nItem)
{
	if (nItem == -1)
	{
		nItem = GetCurSel();
		if (nItem == LB_ERR)
			return _T("");
	}

	CString strFileTitle;
	GetLBText(nItem, strFileTitle);
	return strFileTitle;
}

int CFileComboBox::SelectString(LPCTSTR strString)
{
	TCHAR strString1[_MAX_PATH];

	COMBOBOXEXITEM cbi;
	cbi.mask = CBEIF_TEXT;

	cbi.pszText = strString1;
	cbi.cchTextMax = _MAX_PATH;

	for (int i = 0; i < GetCount(); ++i)
	{
		cbi.iItem = i;
		if (GetItem(&cbi) && !_tcsicmp(cbi.pszText, strString))
		{
			SetCurSel(i);
			return i;
		}
	}

	return CB_ERR;
}

int CFileComboBox::AddImage(UINT uIDIcon, BYTE FileAttribute)
{
	int nIndex = m_ImageList.Add(::AfxGetApp()->LoadIcon(uIDIcon));
	m_ImageAttributeIndex.Add(MAKELONG(FileAttribute, nIndex));
	return nIndex;
}

int CFileComboBox::AddImage(HICON hIcon, LPCTSTR strFileNameSuffix)
{
	int nIndex = m_ImageList.Add(hIcon);
	m_ImageSuffixIndex.Add(std::make_pair(strFileNameSuffix, nIndex));
	return nIndex;
}

//_____________________________________________________________________________
//
// CFileComboBox - Overrides
//

void CFileComboBox::PreSubclassWindow() 
{	
	CComboBoxEx::PreSubclassWindow();

	m_ImageList.Create(16, 16, ILC_COLORDDB | ILC_MASK, 2, 1);	
	SetImageList(&m_ImageList);
}

//_____________________________________________________________________________
//
// CFileComboBox - Generated message map functions
//

BEGIN_MESSAGE_MAP(CFileComboBox, CComboBoxEx)
END_MESSAGE_MAP()
