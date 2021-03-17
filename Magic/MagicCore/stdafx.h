// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#ifndef _DEBUG
#define _SECURE_SCL 0							// no iterator check
#endif

// C++

#include <typeinfo.h>
#include <math.h>

#include <limits>

// ATL

#include <afxmt.h>
#include <AtlConv.h>

// MFC

#include <afxwin.h>

// Platform

#include <gdiplus.h>			// GDI+
#include <shlobj.h>				// CSIDL_APPDATA
#include <Uxtheme.h>

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

#include <MagicCore.h>