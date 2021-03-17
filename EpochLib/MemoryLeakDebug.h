#pragma once

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC		// Include Microsoft memory leak detection procedures
#include <crtdbg.h>
#define NEW_INLINE_WORKAROUND new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new NEW_INLINE_WORKAROUND
#endif