// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef WINVER					// Specifies that the minimum required platform is Windows Vista.
#define WINVER 0x0600			// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT			// Specifies that the minimum required platform is Windows Vista.
#define _WIN32_WINNT 0x0600		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINDOWS          // Specifies that the minimum required platform is Windows 98.
#define _WIN32_WINDOWS 0x0410	// Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE               // Specifies that the minimum required platform is Internet Explorer 7.0.
#define _WIN32_IE 0x0700        // Change this to the appropriate value to target other versions of IE.
#endif

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN			// Exclude rarely-used stuff from Windows headers
#endif

#ifndef _DEBUG
#define _SECURE_SCL 0			// No iterator check
#endif

#pragma warning(disable: 4251)

#include <windows.h>

#include <math.h>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#include <atlbase.h>
#include <atlcrypt.h>
#include <atlstr.h>
#include <atlcomtime.h>

#include <Wininet.h>
#include <ws2tcpip.h>
#include <mswsock.h>
#include <strsafe.h>
#include <DbgHelp.h>
#include <shlobj.h>
#include <gdiplus.h>			// GDI+