#pragma once

#include <windows.h>
#include <atlstr.h>
#include <atlcomtime.h>

namespace Epoch {

EPOCH_EXPORT bool IsWindows200XOrXP();
EPOCH_EXPORT bool IsWindowsNT();
EPOCH_EXPORT bool IsWindowsNTFamily();
EPOCH_EXPORT bool IsWindows9X();

EPOCH_EXPORT CAtlString GetComputerName(COMPUTER_NAME_FORMAT nameFormat = ComputerNameDnsFullyQualified);
EPOCH_EXPORT GUID GetComputerId();

EPOCH_EXPORT bool CreateDirectory2(LPCTSTR strPath, LPSECURITY_ATTRIBUTES lpSecurityAttributes);

EPOCH_EXPORT CAtlString GetModuleFileName();
EPOCH_EXPORT CAtlString GetModuleFolder(bool bAppendSlash);
EPOCH_EXPORT DWORD GetFileAttributes(LPCTSTR strPath);
EPOCH_EXPORT COleDateTime GetFileCreationTime(LPCTSTR strPath);
EPOCH_EXPORT unsigned __int64 GetFileSize(LPCTSTR strPath);

EPOCH_EXPORT CAtlString PathRemoveFileSpec(LPCTSTR strPath, bool bAppendSlash);
EPOCH_EXPORT CAtlString PathRemoveExtension(LPCTSTR strPath);
EPOCH_EXPORT CAtlString PathRenameExtension(LPCTSTR strPath, LPCTSTR strExtension);	// strExtension contains a '.'
EPOCH_EXPORT CAtlString PathStripPath(LPCTSTR strPath);
EPOCH_EXPORT CAtlString PathRemoveBackslash(LPCTSTR strPath);
EPOCH_EXPORT bool PathIsFile(LPCTSTR strPath);

EPOCH_EXPORT void WriteConsole(LPCTSTR str);
EPOCH_EXPORT CAtlString GetErrorMessage(LPUNKNOWN pUnknown);
EPOCH_EXPORT CAtlString GetErrorMessage(HRESULT hr);

}