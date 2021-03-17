////////////////////////////////////////////////////////////////
// 1998 Microsoft Systems Journal
//
// If this code works, it was written by Paul DiLascia.
// If not, I don't know who wrote it.
//

#pragma once

// tell linker to link with version.lib for VerQueryValue, etc.
#pragma comment(lib, "version.lib")

//////////////////
// CModuleVersion version info about a module.
// To use:
//
// CModuleVersion ver
// if (ver.GetFileVersionInfo("_T("mymodule))) {
//    // info is in ver, you can call GetValue to get variable info like
//    CString s = ver.GetValue(_T("CompanyName"));
// }
//
// You can also call the static fn DllGetVersion to get DLLVERSIONINFO.
//

namespace Epoch {

class EPOCH_EXPORT CModuleVersion : public VS_FIXEDFILEINFO
{
public:
	static BOOL DllGetVersion(LPCTSTR modulename, DLLVERSIONINFO& dvi);

	CModuleVersion();
	virtual ~CModuleVersion();

	BOOL	GetFileVersionInfo(LPCTSTR modulename);
	BOOL	GetFileVersionInfo(HINSTANCE hInst);
	CString	GetValue(LPCTSTR lpKeyName);

protected:
	struct TRANSLATION {
		WORD langID;         // language ID
		WORD charset;        // character set (code page)
	} m_translation;

	BYTE* m_pVersionInfo;   // all version info
};

}