// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "..\MagicCore\targetver.h"

#include <stdio.h>
#include <tchar.h>
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

#include <afx.h>
#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxmt.h>

// ATL

#include <atlbase.h>
#include <atlpath.h>

// C runtime

#include <conio.h>
#include <math.h>

// STL

#include <iostream>
#include <vector>
#include <limits>
#include <list>
#include <map>

// Platform

#include <gdiplus.h>						// GDI+
#include <winsock2.h>						// Windows Sockets 2
#include <Psapi.h>							// PROCESS_MEMORY_COUNTERS_EX

// Epoch

#include <Epoch.h>
#include <Mathematic.h>
#include <Networking.h>
#include <Graphics.h>

using namespace Epoch;
using namespace Exception;
using namespace Mathematic;
using namespace Logging;
using namespace Networking;
using namespace Graphics;

#include "resource.h"
#include <MagicCore.h>