// MagicWandDoc.h : interface of the CMagicWandDoc class
//


#pragma once

class CMagicWandDoc : public CDocument
{
protected: // create from serialization only
	CMagicWandDoc();
	DECLARE_DYNCREATE(CMagicWandDoc)

// Attributes
public:

// Operations
public:
	static CString GetOpenFile(LPCTSTR strFilter, LPCTSTR strDefaultExtension, LPCTSTR strInitialDir = NULL, HWND hwndOwner = NULL);
	static CString GetSaveFile(LPCTSTR strFilter, LPCTSTR strDefaultExtension, LPCTSTR strInitialDir = NULL, HWND hwndOwner = NULL);
	static CString GetFolder(LPCTSTR strInitialDir = NULL, HWND hwndOwner = NULL);

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CMagicWandDoc();
#ifdef _MY_DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


