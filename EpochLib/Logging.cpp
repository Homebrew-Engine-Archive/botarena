#include "stdafx.h"
#include <Epoch.h>

namespace Epoch {
namespace Logging {

void CLogWriter::SetFilter(std::auto_ptr<CLogFilter> apFilter)
{
	m_apFilter = apFilter;
}

void CLogWriter::WriteEntry(const CLogEntry& entry)
{
	WriteLine(Format(entry));
}

CLogFilter* CLogWriter::GetFilter()
{
	return m_apFilter.get();
}

void CLogWriter::SetFormatter(std::auto_ptr<CLogFormatter> apFormatter)
{
	m_apFormatter = apFormatter;
}

CLogFormatter* CLogWriter::GetFormatter()
{
	return m_apFormatter.get();
}

CAtlString CLogWriter::Format(const CLogEntry& entry)
{
	if (m_apFormatter.get() == NULL)
		return CBareFormatter().Format(entry);

	return m_apFormatter->Format(entry);
}

//_____________________________________________________________________________
//

CFileLogWriter::CFileLogWriter(LPCTSTR strLogFileFolder)
	: m_pLogFile(NULL)
	, m_strLogFileFolder(strLogFileFolder)
{
	if (m_strLogFileFolder.Right(1) != _T("\\"))
		m_strLogFileFolder.Append(_T("\\"));

	SetFormatter(std::auto_ptr<CLogFormatter>(new CFullFormatter));
}

CFileLogWriter::~CFileLogWriter()
{
	CloseLogFile();
}

void CFileLogWriter::WriteLine(LPCTSTR strLine)
{
	if (!m_pLogFile)
		OpenLogFile();

	if (!m_pLogFile)
		return;

	_ftprintf(m_pLogFile, _T("%s\n"), strLine);
	fflush(m_pLogFile);
}

void CFileLogWriter::OpenLogFile()
{
	if (m_pLogFile)
		return;

	TCHAR strDrive[_MAX_DRIVE];
	TCHAR strDir[_MAX_DIR];
	TCHAR strFileName[_MAX_FNAME];

	_wsplitpath_s(GetModuleFileName(), strDrive, _MAX_DRIVE, strDir, _MAX_DIR, strFileName, _MAX_FNAME, NULL, 0);

	if (m_strLogFileFolder.IsEmpty())
		m_strLogFileFolder = CAtlString(strDrive) + strDir;

	m_strLogFilePath = m_strLogFileFolder + strFileName + _T(".log");
	m_pLogFile = NULL;
	
	_tfopen_s(&m_pLogFile, m_strLogFilePath, _T("at"));
	if (!m_pLogFile)
	{
		// Try app data folder

		TCHAR strAppPath[MAX_PATH];
		if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, strAppPath)))
		{
			m_strLogFileFolder = CAtlString(strAppPath) + _T("\\") + strFileName;
			if (!PathFileExists(m_strLogFileFolder) || !PathIsDirectory(m_strLogFileFolder))
				CreateDirectory(m_strLogFileFolder, NULL);
			m_strLogFileFolder.Append(_T("\\"));
			m_strLogFilePath = m_strLogFileFolder + strFileName + _T(".log");
			_tfopen_s(&m_pLogFile, m_strLogFilePath, _T("at"));
		}
	}
}

void CFileLogWriter::CloseLogFile()
{
	if (!m_pLogFile)
		return;

	fclose(m_pLogFile);
}

//_____________________________________________________________________________
//

void CConsoleLogWriter::WriteLine(LPCTSTR strLine)
{
	WriteConsole(strLine);
	WriteConsole(_T("\n"));
}

//_____________________________________________________________________________
//

CTraceLogWriter::CTraceLogWriter()
{
	SetFormatter(std::auto_ptr<CLogFormatter>(new CFullFormatter));
}

void CTraceLogWriter::WriteLine(LPCTSTR strLine)
{
	OutputDebugString(strLine);
	OutputDebugString(_T("\n"));
}

//_____________________________________________________________________________
//

CLogFilter CLogFilter::All;
CLogFilter CLogFilter::None(Category::None);

bool CLogFilter::Filter(const CLogEntry& entry)
{
	return static_cast<Category::Enum>(entry.GetSeverity() & m_IncludedCategories) != Category::None;
}

//_____________________________________________________________________________
//

CLogPublisher::CLogPublisher()
{
	InitializeCriticalSection(&m_csWriters);
}

CLogPublisher::~CLogPublisher()
{
	DeleteCriticalSection(&m_csWriters);
}

void CLogPublisher::AddWriter(std::auto_ptr<CLogWriter> apWriter)
{
	EnterCriticalSection(&m_csWriters);
	m_Writers.push_back(apWriter);
	LeaveCriticalSection(&m_csWriters);
}

void CLogPublisher::WriteEntry(const CLogEntry& entry)
{
	EnterCriticalSection(&m_csWriters);
	for (ptrlist<CLogWriter>::iterator it = m_Writers.begin(); it != m_Writers.end(); ++it)
	{
		CLogFilter* pFilter = (*it)->GetFilter();
		if (!pFilter || pFilter->Filter(entry))
			(*it)->WriteEntry(entry);
	}
	LeaveCriticalSection(&m_csWriters);
}

//_____________________________________________________________________________
//

void CLogContext::operator()(CLogPublisher* pLogPublisher, LPCTSTR strFormat, ...)
{
	if (!pLogPublisher)
		return;

	va_list args;
	va_start(args, strFormat);

	unsigned uLen = _vsctprintf(strFormat, args) + 1;
	CAtlString str;
	StringCchVPrintf(str.GetBuffer(uLen), uLen, strFormat, args);
	str.ReleaseBuffer();

	pLogPublisher->WriteEntry(CLogEntry(Epoch::PathStripPath(m_strFile), AbbreviateFunctionName(m_strFunction), m_nLine, m_Severity, str));
}

void CLogContext::operator()(LPCTSTR strFormat, ...)
{
	if (!m_pLogPublisher)
		return;

	va_list args;
	va_start(args, strFormat);

	unsigned uLen = _vsctprintf(strFormat, args) + 1;
	CAtlString str;
	StringCchVPrintf(str.GetBuffer(uLen), uLen, strFormat, args);
	str.ReleaseBuffer();

	m_pLogPublisher->WriteEntry(CLogEntry(Epoch::PathStripPath(m_strFile), AbbreviateFunctionName(m_strFunction), m_nLine, m_Severity, str));
}

//_____________________________________________________________________________
//

CLogPublisher* DefaultLogPublisher::s_pLogPublisher = NULL;

}
}