#include "stdafx.h"
#include <Exception.h>

namespace Epoch {
namespace Exception {

bool GenerateDumpImpl(EXCEPTION_POINTERS* pExceptionPointers)
{
	CAtlString strDumpFile(
		PathRemoveExtension(GetModuleFileName()) + 
		COleDateTime::GetCurrentTime().Format(_T(" %y-%m-%d-%H-%M-%S.mdmp")));

	HANDLE hDumpFile = CreateFile(strDumpFile, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS,
								FILE_ATTRIBUTE_NORMAL | FILE_FLAG_WRITE_THROUGH, NULL);

	if (hDumpFile == INVALID_HANDLE_VALUE)
		return false;

	MINIDUMP_EXCEPTION_INFORMATION eInfo;
	eInfo.ThreadId = GetCurrentThreadId();
	eInfo.ExceptionPointers = pExceptionPointers;
	eInfo.ClientPointers = FALSE;

	bool bResult = MiniDumpWriteDump(
            GetCurrentProcess(),
            GetCurrentProcessId(),
            hDumpFile,
            MiniDumpNormal,
            pExceptionPointers ? &eInfo : NULL,
            NULL,
			NULL) ? true : false;

	CloseHandle(hDumpFile);

	return bResult;
}

bool GenerateDump(EXCEPTION_POINTERS* pExceptionPointers)
{
	if (!pExceptionPointers)
	{
		bool bResult = false;
		__try
		{
			RaiseException(0xffffffff, 0, 0, NULL);
		}
		__except(bResult = GenerateDumpImpl(GetExceptionInformation()), EXCEPTION_CONTINUE_EXECUTION)
		{
		}

		return bResult;
	}

	return GenerateDumpImpl(pExceptionPointers);
}

}	// namespace Exception
}	// namespace Epoch