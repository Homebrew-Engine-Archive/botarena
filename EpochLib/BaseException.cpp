#include "stdafx.h"
#include <Exception.h>

namespace Epoch {
namespace Exception {

LPTOP_LEVEL_EXCEPTION_FILTER CException::s_pPreviousUnhandledExceptionFilter = NULL;

void CException::TranslateSEHToCE(UINT uCode, EXCEPTION_POINTERS* pep)
{
	//ATLASSERT(false);

	CAtlString strMessage;

	switch(uCode)
	{
	case EXCEPTION_ACCESS_VIOLATION:			strMessage = _T("The thread tried to read from or write to a virtual address for which it does not have the appropriate access."); break;
	case EXCEPTION_DATATYPE_MISALIGNMENT:		strMessage = _T("The thread tried to read or write data that is misaligned on hardware that does not provide alignment."); break;
	case EXCEPTION_BREAKPOINT:					strMessage = _T("A breakpoint was encountered."); break;
	case EXCEPTION_SINGLE_STEP:					strMessage = _T("Single step"); break;
	case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:		strMessage = _T("The thread tried to access an array element that is out of bounds."); break;
	case EXCEPTION_FLT_DENORMAL_OPERAND:		strMessage = _T("One of the operands in a floating-point operation is denormal."); break;
	case EXCEPTION_FLT_DIVIDE_BY_ZERO:			strMessage = _T("The thread tried to divide a floating-point value by a floating-point divisor of zero."); break;
	case EXCEPTION_FLT_INEXACT_RESULT:			strMessage = _T("The result of a floating-point operation cannot be represented exactly as a decimal fraction."); break;
	case EXCEPTION_FLT_INVALID_OPERATION:		strMessage = _T("Floating point: invalid operation"); break;
	case EXCEPTION_FLT_OVERFLOW:				strMessage = _T("The exponent of a floating-point operation is greater than the magnitude allowed by the corresponding type."); break;
	case EXCEPTION_FLT_STACK_CHECK:				strMessage = _T("The stack overflowed or underflowed as the result of a floating-point operation."); break;
	case EXCEPTION_FLT_UNDERFLOW:				strMessage = _T("The exponent of a floating-point operation is less than the magnitude allowed by the corresponding type."); break;
	case EXCEPTION_INT_DIVIDE_BY_ZERO:			strMessage = _T("The thread tried to divide an integer value by an integer divisor of zero."); break;
	case EXCEPTION_INT_OVERFLOW:				strMessage = _T("The result of an integer operation caused a carry out of the most significant bit of the result."); break;
	case EXCEPTION_PRIV_INSTRUCTION:			strMessage = _T("The thread tried to execute an instruction whose operation is not allowed in the current machine mode."); break;
	case EXCEPTION_IN_PAGE_ERROR:				strMessage = _T("The thread tried to access a page that was not present, and the system was unable to load the page."); break;
	case EXCEPTION_ILLEGAL_INSTRUCTION:			strMessage = _T("The thread tried to execute an invalid instruction."); break;
	case EXCEPTION_NONCONTINUABLE_EXCEPTION:	strMessage = _T("The thread tried to continue execution after a noncontinuable exception occurred."); break;
	case EXCEPTION_STACK_OVERFLOW:				strMessage = _T("The thread used up its stack."); break;
	case EXCEPTION_INVALID_DISPOSITION:			strMessage = _T("An exception handler returned an invalid disposition to the exception dispatcher."); break;
	case EXCEPTION_GUARD_PAGE:					strMessage = _T("Guard page."); break;
	case EXCEPTION_INVALID_HANDLE:				strMessage = _T("Invalid handle."); break;
	default:									strMessage = _T("Unknown structured exception."); break;
	}

	if (EXCEPTION_ACCESS_VIOLATION		== uCode	||
		EXCEPTION_ARRAY_BOUNDS_EXCEEDED	== uCode	||
		EXCEPTION_INT_DIVIDE_BY_ZERO	== uCode	||
		EXCEPTION_FLT_DIVIDE_BY_ZERO	== uCode	||
		EXCEPTION_FLT_OVERFLOW			== uCode	||
		EXCEPTION_FLT_UNDERFLOW			== uCode	||
		EXCEPTION_FLT_DENORMAL_OPERAND	== uCode	||
		EXCEPTION_FLT_INEXACT_RESULT	== uCode)
	{
		throw CRecoverableSEHException(uCode, pep, strMessage);
	}
	else
	{
		throw CUnrecoverableSEHException(uCode, pep, strMessage);
	}
}

void CException::SetUnhandledExceptionFilter()
{
	s_pPreviousUnhandledExceptionFilter = ::SetUnhandledExceptionFilter(UnhandledExceptionFilter);
}

LONG WINAPI CException::UnhandledExceptionFilter(struct _EXCEPTION_POINTERS* pExceptionInfo)
{
	static bool bEntry = false;
	if (bEntry)
		return EXCEPTION_CONTINUE_SEARCH;
	bEntry = true;

	GenerateDump(pExceptionInfo);

	if (s_pPreviousUnhandledExceptionFilter)
	{
		return s_pPreviousUnhandledExceptionFilter(pExceptionInfo);
	}

	return EXCEPTION_CONTINUE_SEARCH;
}

void CException::TermFunc()
{
	GenerateDump();
}

void CException::LogThrown(Logging::CLogPublisher* pLogPublisher) const
{
	pLogPublisher->WriteEntry(Logging::CLogEntry(Epoch::PathStripPath(m_strFile), AbbreviateFunctionName(m_strFunction), m_nLine,
		Logging::Category::ExceptionThrown,
		GetMessage()));
}

void CException::LogCaught(LPCSTR strCaughtInFile, LPCSTR strCaughtInFunction, int nCaughtInLine, Logging::CLogPublisher* pLogPublisher) const
{
	USES_CONVERSION;
	pLogPublisher->WriteEntry(Logging::CLogEntry(Epoch::PathStripPath(A2CT(strCaughtInFile)), AbbreviateFunctionName(A2CT(strCaughtInFunction)), nCaughtInLine,
		Logging::Category::ExceptionCaught,
		GetMessage()));
}

void CException::LogBoth(LPCSTR strCaughtInFile, LPCSTR strCaughtInFunction, int nCaughtInLine, Logging::CLogPublisher* pLogPublisher) const
{
	LogThrown(pLogPublisher);
	LogCaught(strCaughtInFile, strCaughtInFunction, nCaughtInLine, pLogPublisher);
}

}	// namespace Exception
}	// namespace Epoch