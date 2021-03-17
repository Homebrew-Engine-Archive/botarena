#pragma once

//____________________________________________________________________________
//

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN						// Exclude rarely-used stuff from Windows headers
#endif

#include "..\Magic\MagicCore\targetver.h"

#define TMSCHEMA_H

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit
#define _AFX_ALL_WARNINGS					// turns off MFC's hiding of some common and often safely ignored warning messages

#include <afxwin.h>							// MFC core and standard components
#include <afxext.h>							// MFC extensions
#include <afxdisp.h>						// MFC Automation classes
#include <afxdtctl.h>						// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>							// MFC support for Windows Common Controls
#endif
#include <afxtempl.h>
#include <afxpriv.h>
#include <afxcoll.h>
#include <afxcview.h>
#include <afxmt.h>
#include <afxole.h> 

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

#include <sapi.h>							// Speech API 5.1
#include <gdiplus.h>						// GDI+
#include <winsock2.h>						// Windows Sockets 2
#include <Psapi.h>							// PROCESS_MEMORY_COUNTERS_EX
#include <vsstyle.h>
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

//#define MAGIC_CORE_DLL
#include <MagicCore.h>
