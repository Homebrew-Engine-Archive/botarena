#pragma once

#ifndef _WIN32_WINNT
#define _WIN32_WINNT	0x0501	// Windows XP
#endif

#ifndef WINVER
#define WINVER			0x0501	// Windows XP
#endif

#ifdef EPOCH_DLL
#define EPOCH_EXPORT			__declspec(dllexport)
#else
#define EPOCH_EXPORT			__declspec(dllimport)
#endif 

#include <Language.h>
#include <System.h>
#include <Collection.h>
#include <Logging.h>
#include <StringUtil.h>
#include <FastDelegate\FastDelegate.h>
using namespace fastdelegate;
#include <Exception.h>
#include <Guid.h>
#include <SingletonManager.h>
#include <Enumerations.h>
#include <ModulVer.h>
#include <Loki\TypeManip.h>