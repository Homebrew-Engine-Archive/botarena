// FileComboBox.h : header file
//

#pragma once

//_____________________________________________________________________________
//
// CFileComboBox window
//

class CFileComboBox : public CComboBoxEx
{
public:
	CFileComboBox();
	virtual ~CFileComboBox();

	int Dir(LPCTSTR strBaseDir, LPCTSTR strExt);
	CString GetFilePath(int nItem = -1); // -1 -> selected
	CString GetFileTitle(int nItem = -1); // "
	int SelectString(LPCTSTR strString);

	int AddImage(UINT uIDIcon, BYTE FileAttribute);
	int AddImage(HICON hIcon, LPCTSTR strFileNameSuffix);

protected:
	CString m_strBaseDir;
	CString m_strExt;
	CImageList m_ImageList;
	CDWordArray	m_ImageAttributeIndex;
	CArray<std::pair<CString, int> > m_ImageSuffixIndex;

// Overrides
protected:
	virtual void PreSubclassWindow();

// Generated message map functions
protected:

	DECLARE_MESSAGE_MAP()
};
