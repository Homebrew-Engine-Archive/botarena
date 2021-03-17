#pragma once

#include <atlstr.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Exception {

#define STR2(x) # x
#define STR(x) STR2(x)

#define THROW_HR(hr)			throw Epoch::Exception::CRecoverableException(hr, __FILE__, __FUNCTION__, __LINE__)
#define THROW_UNKNOWN(hr, p)	throw Epoch::Exception::CRecoverableException(hr, __FILE__, __FUNCTION__, __LINE__, _T(""), p)
#define THROW_WIN32(dw)			throw Epoch::Exception::CRecoverableException(AtlHresultFromWin32(dw), __FILE__, __FUNCTION__, __LINE__)
#define THROW_LAST_WIN32()		throw Epoch::Exception::CRecoverableException(AtlHresultFromLastError(), __FILE__, __FUNCTION__, __LINE__)

//_____________________________________________________________________________
//

class EPOCH_EXPORT CException
{
public:
	static void Initialize()
	{
		_set_se_translator(TranslateSEHToCE);
		_set_new_handler(NewHandler);
		_set_new_mode(1);

		set_terminate(TermFunc);

		SetUnhandledExceptionFilter();
	}

	CException(
		HRESULT hr = E_FAIL,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0,
		LPCTSTR strMessage = _T(""),
		LPUNKNOWN pUnknown = NULL)
		: m_hr(hr)
		, m_strFile(strFile)
		, m_strFunction(strFunction)
		, m_nLine(nLine)
		, m_strMessage(strMessage)
		, m_spUnknown(pUnknown)
	{
	}

	HRESULT GetResult() const		{ return m_hr; }
	LPCTSTR GetFile() const			{ return m_strFile; }
	LPCTSTR GetFunction() const		{ return m_strFunction; }
	int GetLine() const				{ return m_nLine; }

	CAtlString GetMessage() const
	{ 
		if (m_strMessage.IsEmpty())
		{
			if (m_spUnknown)
				m_strMessage = GetErrorMessage(m_spUnknown);
			else
				m_strMessage = GetErrorMessage(m_hr);

			CAtlString strTemp;
			strTemp.Format(_T("(0x%08x)."), m_hr);

			m_strMessage += strTemp;
		}

		return m_strMessage; 
	}

	LPUNKNOWN GetUnknown() const	{ return m_spUnknown; }

	void LogThrown(Logging::CLogPublisher* pLogPublisher = Logging::DefaultLogPublisher::Get()) const;
	void LogCaught(LPCSTR strCaughtInFile, LPCSTR strCaughtInFunction, int nCaughtInLine, Logging::CLogPublisher* pLogPublisher = Logging::DefaultLogPublisher::Get()) const;
	void LogBoth(LPCSTR strCaughtInFile, LPCSTR strCaughtInFunction, int nCaughtInLine, Logging::CLogPublisher* pLogPublisher = Logging::DefaultLogPublisher::Get()) const;

protected:
	static void TranslateSEHToCE(UINT uCode, EXCEPTION_POINTERS *pep);
	static int NewHandler(size_t)
	{
		throw std::bad_alloc();
		return 0;
	}

	static void SetUnhandledExceptionFilter();
	static LONG WINAPI UnhandledExceptionFilter(struct _EXCEPTION_POINTERS* pExceptionInfo);
	static LPTOP_LEVEL_EXCEPTION_FILTER s_pPreviousUnhandledExceptionFilter;

	static void TermFunc();

	HRESULT				m_hr;
	mutable CAtlString	m_strMessage;
	CAtlString			m_strFile;
	CAtlString			m_strFunction;
	int					m_nLine;
	CComPtr<IUnknown>	m_spUnknown;
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CUnrecoverableException : public CException
{
public:
	CUnrecoverableException(
		HRESULT hr = E_FAIL,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0,
		LPCTSTR strMessage = _T(""),
		LPUNKNOWN pUnknown = NULL)
		: CException(hr, strFile, strFunction, nLine, strMessage, pUnknown)
	{
	}
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CRecoverableException : public CException
{
public:
	CRecoverableException(
		HRESULT hr = E_FAIL,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0,
		LPCTSTR strMessage = _T(""),
		LPUNKNOWN pUnknown = NULL)
		: CException(hr, strFile, strFunction, nLine, strMessage, pUnknown)
	{
	}
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CSEHExceptionBase
{
public:
	CSEHExceptionBase(EXCEPTION_POINTERS* pExceptionPointers)
	{
		m_ExceptionRecord = *pExceptionPointers->ExceptionRecord;
		m_Context = *pExceptionPointers->ContextRecord;
		m_ExceptionPointers.ExceptionRecord = &m_ExceptionRecord;
		m_ExceptionPointers.ContextRecord = &m_Context;
	}

	EXCEPTION_POINTERS* ExceptionPointers() { return &m_ExceptionPointers; }

protected:
	EXCEPTION_POINTERS m_ExceptionPointers;
	EXCEPTION_RECORD m_ExceptionRecord;
	CONTEXT m_Context;
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CUnrecoverableSEHException 
	: public CUnrecoverableException
	, public CSEHExceptionBase
{
public:
	CUnrecoverableSEHException(
		UINT uCode,
		EXCEPTION_POINTERS* pExceptionPointers,
		LPCTSTR strMessage = _T(""))
		: CUnrecoverableException(uCode, "", "", 0, strMessage)
		, CSEHExceptionBase(pExceptionPointers)
	{}
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CRecoverableSEHException 
	: public CRecoverableException
	, public CSEHExceptionBase
{
public:
	CRecoverableSEHException(
		UINT uCode,
		EXCEPTION_POINTERS* pExceptionPointers,
		LPCTSTR strMessage = _T(""))
		: CRecoverableException(uCode, "", "", 0, strMessage)
		, CSEHExceptionBase(pExceptionPointers)
	{}
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CFormatException : public CRecoverableException
{
public:
	CFormatException(
		LPCTSTR strInvalidFormat,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CRecoverableException(E_FAIL, strFile, strFunction, nLine)
		, m_strInvalidFormat(strInvalidFormat)
	{
		m_strMessage.Format(_T("Invalid format: %s."), m_strInvalidFormat);
	}

	CAtlString GetInvalidFormat() { return m_strInvalidFormat; }

protected:
	CAtlString m_strInvalidFormat;
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CArgumentException : public CRecoverableException
{
public:
	CArgumentException(
		LPCTSTR strInvalidArgument,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CRecoverableException(E_INVALIDARG, strFile, strFunction, nLine)
		, m_strInvalidArgument(strInvalidArgument)
	{
		m_strMessage.Format(_T("Invalid argument: %s."), m_strInvalidArgument);
	}

	CAtlString GetInvalidArgument() { return m_strInvalidArgument; }

protected:
	CAtlString m_strInvalidArgument;
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CArgumentNullException : public CArgumentException
{
public:
	CArgumentNullException(
		LPCTSTR strInvalidArgument,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CArgumentException(strInvalidArgument, strFile, strFunction, nLine)
	{
	}
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CArgumentOutOfRangeException : public CArgumentException
{
public:
	CArgumentOutOfRangeException(
		LPCTSTR strInvalidArgument,
		__int64 nActualValue,
		__int64 nMinValue,
		__int64 nMaxValue,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CArgumentException(strInvalidArgument, strFile, strFunction, nLine)
		, m_nActualValue(nActualValue)
		, m_nMinValue(nMinValue)
		, m_nMaxValue(nMaxValue)
	{
		m_strMessage.Format(_T("%s. Actual value: {%I64d}. Allowed [%I64d, %I64d]."),
			m_strMessage,
			m_nActualValue,
			m_nMinValue,
			m_nMaxValue);
	}

protected:
	__int64	m_nActualValue;
	__int64 m_nMinValue;
	__int64 m_nMaxValue;
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CInvalidDeleteException : public CRecoverableException
{
public:
	CInvalidDeleteException(void* p)
		: CRecoverableException(E_INVALIDARG)
		, m_pStackObject(p)
	{
		m_strMessage.Format(_T("Invalid delete operation invoked on stack object at: 0x%08x."), m_pStackObject);
	}

protected:
	void*	m_pStackObject;
};

//_____________________________________________________________________________
//
class EPOCH_EXPORT CTimeoutException : public CRecoverableException
{
public:
	CTimeoutException(
		DWORD dwTimeout,
		LPCSTR strFile = "",
		LPCSTR strFunction = "",
		int nLine = 0)
		: CRecoverableException(HRESULT_FROM_WIN32(WAIT_TIMEOUT), strFile, strFunction, nLine)
		, m_dwTimeout(dwTimeout)
	{
		m_strMessage.Format(_T("Operation timeout after %d msecs."), dwTimeout);
	}

protected:
	DWORD	m_dwTimeout;
};

}	// namespace Exception
}	// namespace Epoch

#pragma warning( pop )