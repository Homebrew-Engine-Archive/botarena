#include "stdafx.h"
#include <Networking.h>

namespace Epoch {
namespace Networking {

DWORD GetInternetFile(LPCTSTR strUrl, LPCTSTR strLocalFilePath)
{
	FILE* stream = NULL;
	errno_t error = _wfopen_s(&stream, strLocalFilePath, L"wb");
	if (error)
		return error;

	// Initialize the Win32 Internet functions 
	HINTERNET hSession = ::InternetOpen(_T("Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1; .NET CLR 2.0.50727)"), 
		INTERNET_OPEN_TYPE_PRECONFIG, // Use registry settings. 
		NULL, // Proxy name. NULL indicates use default.
		NULL, // List of local servers. NULL indicates default. 
		0);

	if (!hSession)
	{
		DWORD dwError = GetLastError();
		fclose(stream);
		return dwError;
	}

	HINTERNET hHttpFile = ::InternetOpenUrl(hSession, strUrl, NULL, 0, 
		INTERNET_FLAG_EXISTING_CONNECT | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_RELOAD,
		0);
	if (!hHttpFile)
	{
		DWORD dwError = GetLastError();
		::InternetCloseHandle(hSession);
		fclose(stream);
		return dwError;
	}

	BYTE buffer[4096];
	static const DWORD dwBufferSize = sizeof(buffer);

	do
	{
		DWORD dwRead = 0;
		BOOL bRead = ::InternetReadFile(hHttpFile, buffer, dwBufferSize, &dwRead); 
		if (!bRead ||
			(bRead && !dwRead))
			break;

		fwrite(buffer, sizeof(buffer[0]), dwRead, stream);
		
	} while (true);


	::InternetCloseHandle(hHttpFile); // Close the connection.
	::InternetCloseHandle(hSession);

	fclose(stream);

	return ERROR_SUCCESS;
}

}	// namespace Networking
}	// namespace Epoch