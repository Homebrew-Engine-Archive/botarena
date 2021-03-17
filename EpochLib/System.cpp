#include "stdafx.h"
#include <Epoch.h>
#include <atlsecurity.h>

namespace Epoch {

bool IsWindows200XOrXP()
{
	OSVERSIONINFO osinfo;
	osinfo.dwOSVersionInfoSize = sizeof(osinfo);

	if (GetVersionEx(&osinfo))
		return
			(osinfo.dwPlatformId == VER_PLATFORM_WIN32_NT) &&
			(osinfo.dwMajorVersion >= 5);

	return false;
}

bool IsWindowsNT()
{
	OSVERSIONINFO osinfo;
	osinfo.dwOSVersionInfoSize = sizeof(osinfo);

	if (GetVersionEx(&osinfo))
		return
			(osinfo.dwPlatformId == VER_PLATFORM_WIN32_NT) &&
			(osinfo.dwMajorVersion <= 4);

	return false;
}

bool IsWindowsNTFamily()
{
	OSVERSIONINFO osinfo;
	osinfo.dwOSVersionInfoSize = sizeof(osinfo);

	if (GetVersionEx(&osinfo))
		return osinfo.dwPlatformId == VER_PLATFORM_WIN32_NT;

	return false;
}

bool IsWindows9X()
{
	OSVERSIONINFO osinfo;
	osinfo.dwOSVersionInfoSize = sizeof(osinfo);

	if (GetVersionEx(&osinfo))
		return osinfo.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS;

	return false;
}

CAtlString GetComputerName(COMPUTER_NAME_FORMAT nameFormat)
{
	DWORD nSize = 0;
	if (GetComputerNameEx(nameFormat, NULL, &nSize) ||
		GetLastError() != ERROR_MORE_DATA)
		return _T("");

	++nSize;

	CAtlString strComputerName;
	if (!GetComputerNameEx(nameFormat, strComputerName.GetBuffer(nSize + 1), &nSize))
		return _T("");

	strComputerName.ReleaseBuffer();
	return strComputerName;
}

GUID GetComputerId()
{
	try
	{
		CSid sid(GetComputerName(ComputerNameNetBIOS));

		if (sid.GetSubAuthorityCount() >= 4 && sid.GetSubAuthority(0) == 0x15)
		{
			GUID guid = GUID_NULL;
			DWORD* pData = (DWORD*)&guid;
			pData[0] = sid.GetSubAuthority(1);
			pData[1] = sid.GetSubAuthority(2);
			pData[2] = sid.GetSubAuthority(3);

			return guid;
		}
	}
	catch (...)
	{
	}

	return GUID_NULL;
}

bool CreateDirectory2(LPCTSTR strPath, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
	CString strTemp(PathRemoveBackslash(strPath));

	int nIndex = strTemp.ReverseFind(_T('\\'));
	if ((nIndex != -1) && nIndex)
	{
		CString strTemp2(strTemp.Left(nIndex));
		if ((strTemp2[nIndex - 1] != _T('\\')) &&
			(strTemp2[nIndex - 1] != _T(':')))
			if (!PathIsDirectory(strTemp2))
				if (!CreateDirectory2(strTemp2, lpSecurityAttributes))
					return false;
	}

	return CreateDirectory(strTemp, lpSecurityAttributes) ? true : false;
}

CAtlString GetModuleFileName()
{
	TCHAR strModulePath[MAX_PATH];
	if (!GetModuleFileName(GetModuleHandle(NULL), strModulePath, ARRAY_SIZE(strModulePath)))
		THROW_LAST_WIN32();

	return strModulePath;
}

CAtlString GetModuleFolder(bool bAppendSlash)
{
	return PathRemoveFileSpec(GetModuleFileName(), bAppendSlash);
}

DWORD GetFileAttributes(LPCTSTR strPath)
{
	WIN32_FILE_ATTRIBUTE_DATA info;
	if (!GetFileAttributesEx(strPath, GetFileExInfoStandard, &info))
		return 0;

	return info.dwFileAttributes;
}

COleDateTime GetFileCreationTime(LPCTSTR strPath)
{
	WIN32_FILE_ATTRIBUTE_DATA info;
	if (!GetFileAttributesEx(strPath, GetFileExInfoStandard, &info))
		return COleDateTime();

	return info.ftCreationTime;
}

unsigned __int64 GetFileSize(LPCTSTR strPath)
{
	WIN32_FILE_ATTRIBUTE_DATA info;
	if (!GetFileAttributesEx(strPath, GetFileExInfoStandard, &info))
		return 0;

	return static_cast<unsigned __int64>(info.nFileSizeHigh) << 32 | static_cast<unsigned __int64>(info.nFileSizeLow);
}

CAtlString PathRemoveFileSpec(LPCTSTR strPath, bool bAppendSlash)
{
	CAtlString strTemp = strPath;
	if (!::PathRemoveFileSpec(strTemp.GetBuffer(MAX_PATH)))
	{
		strTemp.ReleaseBuffer();
		THROW_LAST_WIN32();
	}

	strTemp.ReleaseBuffer();

	if (bAppendSlash)
		strTemp += _T("\\");

	return strTemp;
}

CAtlString PathRemoveExtension(LPCTSTR strPath)
{
	CAtlString strTemp = strPath;
	::PathRemoveExtension(strTemp.GetBuffer(MAX_PATH));
	strTemp.ReleaseBuffer();
	return strTemp;
}

CAtlString PathRenameExtension(LPCTSTR strPath, LPCTSTR strExtension)
{
	CAtlString strTemp = strPath;
	if (!::PathRenameExtension(strTemp.GetBuffer(MAX_PATH), strExtension))
	{
		strTemp.ReleaseBuffer();
		THROW_LAST_WIN32();
	}

	strTemp.ReleaseBuffer();
	return strTemp;
}

CAtlString PathStripPath(LPCTSTR strPath)
{
	CAtlString strTemp = strPath;
	::PathStripPath(strTemp.GetBuffer(MAX_PATH));
	strTemp.ReleaseBuffer();
	return strTemp;
}

CAtlString PathRemoveBackslash(LPCTSTR strPath)
{
	CAtlString strTemp = strPath;
	::PathRemoveBackslash(strTemp.GetBuffer(MAX_PATH));
	strTemp.ReleaseBuffer();
	return strTemp;
}

bool PathIsFile(LPCTSTR strPath)
{
	return PathFileExists(strPath) && !PathIsDirectory(strPath);
}

void WriteConsole(LPCTSTR str)
{
	DWORD dwWritten = 0;
	::WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), str, static_cast<DWORD>(_tcslen(str)), &dwWritten, NULL);
}

CAtlString GetErrorMessage(LPUNKNOWN pUnknown)
{
	CAtlString strError;

	if (pUnknown)
	{
		CComQIPtr<ISupportErrorInfo> ptrSupportErrorInfo(pUnknown);
		if (ptrSupportErrorInfo)
		{
			CComPtr<IErrorInfo> ptrErrorInfo;
			if (GetErrorInfo(0, &ptrErrorInfo) == S_OK)
			{
				CComBSTR bstrSource;
				if (ptrErrorInfo->GetSource(&bstrSource) == S_OK)
				{
					USES_CONVERSION;

					strError = bstrSource;

					CComBSTR bstrDescription;
					if (ptrErrorInfo->GetDescription(&bstrDescription) == S_OK)
						strError += CAtlString(_T(": ")) + W2CT(bstrDescription);
				}
			}
		}
	}

	strError.Trim();

	if (strError.Right(1) != _T("."))
		strError += _T(".");

	return strError;
}

CAtlString GetErrorMessage(HRESULT hr)
{
	CAtlString strError;

	LPVOID lpMsgBuf = NULL;
	if (FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM | 
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		hr,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		reinterpret_cast<LPTSTR>(&lpMsgBuf),
		0,
		NULL) && lpMsgBuf)
	{
		strError = reinterpret_cast<LPCTSTR>(lpMsgBuf);
		LocalFree(lpMsgBuf);
	}

	strError.Trim();

	if (strError.Right(1) != _T("."))
		strError += _T(".");

	return strError;
}

}