#include "stdafx.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//

CCoreApp*		g_pCoreApp = NULL;
CGame*			m_pGame = NULL;

#define REG_SETTINGS_MTGKEY		_T("MTG")
#define REG_SETTINGS_BITMAP		_T("Bitmaps")
#define REG_SETTINGS_CARDMODULE	_T("CardModules")
#define REG_SETTINGS_MTGMODULE	_T("MtgModules")
#define REG_SETTINGS_DECKS		_T("Decks")

#ifdef _MY_DEBUG
//_CrtMemState	g_MemCp;
#endif

//_____________________________________________________________________________
//
// CCoreApp
//

CCoreApp::CCoreApp(LPCTSTR strSoftwareSubKey)
	: m_strSoftwareSubKey(strSoftwareSubKey)
	, m_hInstResourceApp(NULL)
	, m_hInstResourceDLL(NULL)
	, m_dwFileVersionMS(0)
	, m_dwFileVersionLS(0)
	, m_bDeveloper(FALSE)
	, m_bMTGKeyFound(FALSE)
	, m_bMultipleGameLogs(FALSE)
	, m_bVerboseLog(FALSE)
	, m_strModuleFileName(Epoch::GetModuleFileName())
{
	g_pCoreApp = this;

#ifdef _MY_DEBUG
	if (BREAK_AT_ALLOC > 0)
		_CrtSetBreakAlloc(BREAK_AT_ALLOC);
#endif
}

BOOL CCoreApp::LoadLibrary(LPCTSTR strLibFileName)
{
	ATLASSERT(!m_hInstResourceApp && !m_hInstResourceDLL);

	m_hInstResourceApp = ::AfxGetResourceHandle();
	if (!m_hInstResourceApp)
		return FALSE;

	if ((m_hInstResourceDLL = ::LoadLibrary(strLibFileName)) == NULL)
	{
		m_hInstResourceApp = NULL;
		return FALSE;
	}

	AfxSetResourceHandle(m_hInstResourceDLL);
	return TRUE;
}

BOOL CCoreApp::RestoreLibrary()
{
	if (!m_hInstResourceApp)
		return FALSE;

	AfxSetResourceHandle(m_hInstResourceApp);
	
	if (m_hInstResourceDLL)
		::FreeLibrary(m_hInstResourceDLL);

	m_hInstResourceApp = NULL;
	m_hInstResourceDLL = NULL;

	return TRUE;
}

void CCoreApp::SetDeckPath(LPCTSTR strDeckPath)
{
	m_strDeckPath = strDeckPath;
	WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECKS, strDeckPath);
}

void CCoreApp::GetVersionInfo(DWORD& dwFileVersionMS, DWORD& dwFileVersionLS)
{
	dwFileVersionMS = m_dwFileVersionMS;
	dwFileVersionLS = m_dwFileVersionLS;
}

BOOL CCoreApp::InitInstance()
{
	if (!__super::InitInstance())
		return FALSE;

	// Initialize Epoch

	// afxAmbientActCtx = FALSE;
	Exception::CException::Initialize();

	if (!m_strModuleFileName.IsEmpty())
	{
		TCHAR strDrive[_MAX_DRIVE];
		TCHAR strDir[_MAX_DIR];
		TCHAR strFileName[_MAX_FNAME];

		_wsplitpath_s(m_strModuleFileName, strDrive, _MAX_DRIVE, strDir, _MAX_DIR, strFileName, _MAX_FNAME, NULL, 0);

		m_strModulePath = strDrive;
		m_strModulePath += strDir;

		if (m_strModulePath.Right(1) == _T("\\"))
			m_strModulePath = m_strModulePath.Left(m_strModulePath.GetLength() - 1);

		m_strMtgModulePath = m_strModulePath;
		m_strCardModulePath = m_strModulePath;
		m_strDeckPath = m_strModulePath;
		m_strBitmapPath = m_strModulePath + _T("\\Images");

		// See if we can write to the module directory, if yes, set app data path to module directory, if no, set to system app data directory

		m_strAppDataPath = m_strModulePath + _T("\\AppData");

		if (!PathFileExists(m_strAppDataPath) || !PathIsDirectory(m_strAppDataPath))
			CreateDirectory(m_strAppDataPath, NULL);

		CString strTempFile(m_strAppDataPath + _T("\\~$test.tmp"));

		{
			CStdioFile tempFile;
			if (!PathFileExists(m_strAppDataPath) || !tempFile.Open(strTempFile, CFile::modeCreate | CFile::modeWrite | CFile::typeText | CFile::shareDenyNone))
			{
				TCHAR strAppPath[MAX_PATH];
				HRESULT hr = SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, strAppPath);
				if (SUCCEEDED(hr))
				{
					m_strAppDataPath = strAppPath;
					if (m_strAppDataPath.Right(1) != _T("\\"))
						m_strAppDataPath += _T("\\");
					m_strAppDataPath += strFileName;

					if (!PathFileExists(m_strAppDataPath) || !PathIsDirectory(m_strAppDataPath))
						CreateDirectory(m_strAppDataPath, NULL);

					strTempFile = m_strAppDataPath + _T("\\~$test.tmp");

					if (!tempFile.Open(strTempFile, CFile::modeCreate | CFile::modeWrite | CFile::typeText | CFile::shareDenyNone))
						ATLTRACE(_T("Failed to write to file %s: %d"), strTempFile, GetLastError());
				}
				else
					ATLTRACE(_T("Failed to retrieve application data folder path from system: 0x%08x"), hr);
			}
		}

		DeleteFile(strTempFile);
	}

	m_apLogPublisher.reset(new CLogPublisher);

	m_apLogPublisher->AddWriter(std::auto_ptr<CLogWriter>(new CFileLogWriter(m_strAppDataPath)));
#ifdef _MY_DEBUG
	m_apLogPublisher->AddWriter(std::auto_ptr<CLogWriter>(new CTraceLogWriter));
#endif
	DefaultLogPublisher::Set(m_apLogPublisher.get());

	LOG_DEBUG(_T("Core App initializing..."));

	// Get file information

	CModuleVersion ver;
	if (ver.GetFileVersionInfo(::AfxGetResourceHandle()))
	{
		m_dwFileVersionMS = ver.dwFileVersionMS;
		m_dwFileVersionLS = ver.dwFileVersionLS;
	}

	// Initialize GDI+

	CGdiplus::GetInstance()->Initialize();

	// Initialize Winsock
		
	try
	{
		m_apWinsock = std::auto_ptr<CWinsock>(new CWinsock);
	}
	catch (Exception::CSocketException& exception)
	{
		exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
		return FALSE;
	}

	// Define singleton destruction order in reverse

	DEFINE_SINGLETON(CCardStore);
	DEFINE_SINGLETON(CUsagePattern);
	DEFINE_SINGLETON_POOL(CStateManager, 2);
	DEFINE_SINGLETON(CCardFactory);
	DEFINE_SINGLETON(CJobCenter);
	
	// Load registry settings

	if (!m_strSoftwareSubKey.IsEmpty())
	{
		SetRegistryKey(m_strSoftwareSubKey);

		if (g_pCoreApp->GetProfileInt(REG_SETTINGS_KEY, REG_SETTINGS_MTGKEY, 0))
		{
			CCardStore::GetInstance()->SetShowMTGSymbols(TRUE);
			CCardStore::GetInstance()->SetShowMTGBitmaps(TRUE);

			m_bMTGKeyFound = TRUE;
		}

		m_strMtgModulePath = GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_MTGMODULE, m_strModulePath);
		if (m_strMtgModulePath.Right(1) == _T("\\"))
			m_strMtgModulePath = m_strMtgModulePath.Left(m_strMtgModulePath.GetLength() - 1);
		WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_MTGMODULE, m_strMtgModulePath);

#ifdef _DEBUG
		if (::PathIsDirectory(m_strMtgModulePath + _T("\\Debug")))
			m_strMtgModulePath += _T("\\Debug");
#else
		if (::PathIsDirectory(m_strMtgModulePath + _T("\\Release")))
			m_strMtgModulePath += _T("\\Release");
#endif

		m_strCardModulePath = GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_CARDMODULE, m_strModulePath);
		if (m_strCardModulePath.Right(1) == _T("\\"))
			m_strCardModulePath = m_strCardModulePath.Left(m_strCardModulePath.GetLength() - 1);
		WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_CARDMODULE, m_strCardModulePath);

#ifdef _DEBUG
		if (::PathIsDirectory(m_strCardModulePath + _T("\\Debug")))
			m_strCardModulePath += _T("\\Debug");
#else
		if (::PathIsDirectory(m_strCardModulePath + _T("\\Release")))
			m_strCardModulePath += _T("\\Release");
#endif

		m_strDeckPath = GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_DECKS, m_strModulePath + _T("\\Decks"));
		if (m_strDeckPath.Right(1) == _T("\\"))
			m_strDeckPath = m_strDeckPath.Left(m_strDeckPath.GetLength() - 1);

		m_strBitmapPath = GetProfileString(REG_SETTINGS_KEY, REG_SETTINGS_BITMAP, m_strModulePath + _T("\\Images"));
		if (m_strBitmapPath.Right(1) == _T("\\"))
			m_strBitmapPath = m_strBitmapPath.Left(m_strBitmapPath.GetLength() - 1);
		WriteProfileString(REG_SETTINGS_KEY, REG_SETTINGS_BITMAP, m_strBitmapPath);

		// Load card usage patterns

		CUsagePattern::GetInstance()->GetProfile();
	}

	m_apNetManager = std::auto_ptr<CNetManager>(new CNetManager);
	m_apNetManager->SetVersionInfo(m_dwFileVersionMS, m_dwFileVersionLS);

	srand((unsigned)time(NULL));

	LOG_INFORMATION(_T("Module folder at %s"), m_strModulePath);
	LOG_INFORMATION(_T("Card module folder at %s"), m_strCardModulePath);
	LOG_INFORMATION(_T("MTG module folder at %s"), m_strMtgModulePath);
	LOG_INFORMATION(_T("Deck folder at %s"), m_strDeckPath);
	LOG_INFORMATION(_T("Bitmap folder at %s"), m_strBitmapPath);
	LOG_INFORMATION(_T("Application data folder at %s"), m_strAppDataPath);

	return TRUE;
}

int CCoreApp::ExitInstance() 
{
	if (!m_strSoftwareSubKey.IsEmpty())
	{
		// Save card usage patterns

		CUsagePattern::GetInstance()->WriteProfile();
	}

	// Shut down net manager

	m_apNetManager.reset();

	// Shut down winsock

	m_apWinsock.reset();

	// Destroy singletons

	CSingletonManager::DestroySingletons();

	// End of all loggings

	LOG_DEBUG(_T("Core App exiting..."));

	DefaultLogPublisher::Set(NULL);

	return __super::ExitInstance();
}
