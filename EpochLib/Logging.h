#pragma once

#include <atlcomtime.h>
#include <atlstr.h>

#include <Epoch.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Logging {

struct EPOCH_EXPORT Category
{
	enum Enum
	{
		Debug			= 0x00000001,
		Information		= 0x00000002,
		Warning			= 0x00000004,
		Error			= 0x00000008,
		Fatal			= 0x00000010,

		ExceptionThrown	= 0x00000020,
		ExceptionCaught	= 0x00000040,

		All				= 0xffffffff,
		None			= 0x00000000
	};

	static CAtlString ToString(Enum category)
	{
		switch(category)
		{
		case Category::Debug: return _T("Debug");
		case Category::Information: return _T("Information");
		case Category::Warning: return _T("Warning");
		case Category::Error: return _T("Error");
		case Category::Fatal: return _T("Fatal");
		case Category::ExceptionThrown: return _T("Thrown");
		case Category::ExceptionCaught: return _T("Caught");
		case Category::All: return _T("All");
		case Category::None: return _T("None");
		}

		return _T("Unknown Category");
	}
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CLogEntry
{
public:
	CLogEntry(LPCTSTR strFile,
			  LPCTSTR strFunction,
			  int nLine,
			  Category::Enum category,
			  LPCTSTR str)
		: m_strFile(strFile)
		, m_strFunction(strFunction)
		, m_nLine(nLine)
		, m_Severity(category)
		, m_str(str)
		, m_dateTimeStamp(COleDateTime::GetCurrentTime())
		, m_dwThreadId(GetCurrentThreadId())
	{}

	LPCTSTR GetFile() const				{ return m_strFile; }
	LPCTSTR GetFunction() const			{ return m_strFunction; }
	int GetLine() const					{ return m_nLine; }
	Category::Enum GetSeverity() const	{ return m_Severity; }
	CAtlString GetString() const		{ return m_str; }
	COleDateTime GetTimeStamp() const	{ return m_dateTimeStamp; }
	DWORD GetThreadId() const			{ return m_dwThreadId; }

protected:
	CAtlString			m_strFile;
	CAtlString			m_strFunction;
	int					m_nLine;
	Category::Enum		m_Severity;
	CAtlString			m_str;
	COleDateTime		m_dateTimeStamp;
	DWORD				m_dwThreadId;
};

//_____________________________________________________________________________
//

struct EPOCH_EXPORT CLogFormatter
{
	virtual ~CLogFormatter() {};

	virtual CAtlString Format(const CLogEntry& entry) = 0;
};

class CFullFormatter : public CLogFormatter
{
public:
	virtual CAtlString Format(const CLogEntry& entry)
	{
		CAtlString strLine;
		strLine.Format(_T("(%d)"), entry.GetLine());

		CAtlString strFormatted;
		strFormatted.Format(_T("[%s %s %5u%16s%-6s%20s()] %s"),
			entry.GetTimeStamp().Format(_T("%m/%d/%y %H:%M:%S")),
			Category::ToString(entry.GetSeverity()).Left(5),
			entry.GetThreadId(),
			CAtlString(entry.GetFile()).Right(16),
			strLine.Left(6),
			CAtlString(entry.GetFunction()).Right(20),
			entry.GetString());
		return strFormatted;
	}
};

class CBareFormatter : public CLogFormatter
{
public:
	virtual CAtlString Format(const CLogEntry& entry)
	{
		return entry.GetString();
	}
};

//_____________________________________________________________________________
//

class CLogFilter;

class EPOCH_EXPORT CLogWriter
{
public:
	virtual ~CLogWriter()
	{}

	void WriteEntry(const CLogEntry& entry);

	void SetFilter(std::auto_ptr<CLogFilter> apFilter);
	CLogFilter* GetFilter();

	void SetFormatter(std::auto_ptr<CLogFormatter> apFormatter);
	CLogFormatter* GetFormatter();

protected:
	CAtlString Format(const CLogEntry& entry);
	virtual void WriteLine(LPCTSTR strLine) = 0;

	std::auto_ptr<CLogFilter>		m_apFilter;
	std::auto_ptr<CLogFormatter>	m_apFormatter;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CFileLogWriter : public CLogWriter
{
public:
	CFileLogWriter(LPCTSTR strLogFileFolder);
	~CFileLogWriter();

	LPCTSTR GetLogFilePath()	{ return m_strLogFilePath; }

protected:
	virtual void WriteLine(LPCTSTR strLine);

	void OpenLogFile();
	void CloseLogFile();

	CAtlString	m_strLogFileFolder;
	CAtlString	m_strLogFilePath;
	FILE*		m_pLogFile;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CConsoleLogWriter : public CLogWriter
{
protected:
	virtual void WriteLine(LPCTSTR strLine);
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CTraceLogWriter : public CLogWriter
{
public:
	CTraceLogWriter();

protected:
	virtual void WriteLine(LPCTSTR strLine);
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CLogFilter
{
public:
	static CLogFilter All;
	static CLogFilter None;

	CLogFilter()
		: m_IncludedCategories(Category::All)
	{}

	CLogFilter(Category::Enum includedCategories)
		: m_IncludedCategories(includedCategories)
	{}

	~CLogFilter()
	{}

	bool Filter(const CLogEntry& entry);

protected:
	Category::Enum m_IncludedCategories;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CLogPublisher
{
public:
	CLogPublisher();
	virtual ~CLogPublisher();

	void AddWriter(std::auto_ptr<CLogWriter> apWriter);

	void WriteEntry(const CLogEntry& entry);

protected:
	CRITICAL_SECTION	m_csWriters;
	ptrlist<CLogWriter>	m_Writers;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CLogContext
{
public:
	CLogContext(LPCSTR strFile, LPCSTR strFunction, int nLine, Category::Enum category, CLogPublisher* pLogPublisher = NULL)
		: m_strFile(strFile)
		, m_strFunction(strFunction)
		, m_nLine(nLine)
		, m_Severity(category)
		, m_pLogPublisher(pLogPublisher)
	{
	}

	void operator()(CLogPublisher* pLogPublisher, LPCTSTR strFormat, ...);
	void operator()(LPCTSTR strFormat, ...);

protected:
	CAtlString		m_strFile;
	CAtlString		m_strFunction;
	int				m_nLine;
	Category::Enum	m_Severity;
	CLogPublisher*	m_pLogPublisher;
};

#define _LOG_DEBUG			Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Debug)
#define _LOG_INFORMATION	Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Information)
#define _LOG_WARNING		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Warning)
#define _LOG_ERROR			Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Error)
#define _LOG_FATAL			Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Fatal)
#define _LOG_THROWN			Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::ExceptionThrown)
#define _LOG_CAUGHT			Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::ExceptionCaught)

//_____________________________________________________________________________
//

class EPOCH_EXPORT DefaultLogPublisher
{
public:
	static void Set(CLogPublisher* pLogPublisher)	{ s_pLogPublisher = pLogPublisher; }
	static CLogPublisher* Get()						{ return s_pLogPublisher; }

protected:
	static CLogPublisher* s_pLogPublisher;
};

//_____________________________________________________________________________
//

#define LOG_DEBUG		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Debug, Logging::DefaultLogPublisher::Get())
#define LOG_INFORMATION	Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Information, Logging::DefaultLogPublisher::Get())
#define LOG_WARNING		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Warning, Logging::DefaultLogPublisher::Get())
#define LOG_ERROR		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Error, Logging::DefaultLogPublisher::Get())
#define LOG_FATAL		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::Fatal, Logging::DefaultLogPublisher::Get())
#define LOG_THROWN		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::ExceptionThrown, Logging::DefaultLogPublisher::Get())
#define LOG_CAUGHT		Logging::CLogContext(__FILE__, __FUNCTION__, __LINE__, Logging::Category::ExceptionCaught, Logging::DefaultLogPublisher::Get())

}
}

#pragma warning( pop )