#pragma once

//_____________________________________________________________________________
//
// CCoreApp
//

class CNetManager;

class CORE_EXPORT CCoreApp : public CWinApp
{
public:
	CCoreApp(LPCTSTR strSoftwareSubKey = _T(""));

	BOOL LoadLibrary(LPCTSTR strLibFileName);
	BOOL RestoreLibrary();

	CString GetModuleFileName() const	{ return m_strModuleFileName; }
	CString GetModulePath() const		{ return m_strModulePath; }
	CString GetCardModulePath() const	{ return m_strCardModulePath; }
	CString GetMtgModulePath() const	{ return m_strMtgModulePath; }
	CString GetBitmapPath() const		{ return m_strBitmapPath; }
	CString GetAppDataPath() const		{ return m_strAppDataPath; }

	CString GetDeckPath() const			{ return m_strDeckPath; }
	void SetDeckPath(LPCTSTR strDeckPath);

	BOOL GetMTGKeyFound() const			{ return m_bMTGKeyFound; }

	CNetManager* GetNetManager()		{ return m_apNetManager.get(); }

	void GetVersionInfo(DWORD& dwFileVersionMS, DWORD& dwFileVersionLS);

	BOOL GetDeveloper() const			{ return m_bDeveloper; }
	void SetDeveloper(BOOL bDeveloper)	{ m_bDeveloper = bDeveloper; }

	BOOL GetMultipleGameLogs() const					{ return m_bMultipleGameLogs; }
	void SetMultipleGameLogs(BOOL bMultipleGameLogs)	{ m_bMultipleGameLogs = bMultipleGameLogs; }

	BOOL GetVerboseLog() const				{ return m_bVerboseLog; }
	void SetVerboseLog(BOOL bVerboseLog)	{ m_bVerboseLog = bVerboseLog; }

protected:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	CString		m_strSoftwareSubKey;

	HINSTANCE	m_hInstResourceApp;
	HINSTANCE	m_hInstResourceDLL;

	CString		m_strModulePath;
	CString		m_strModuleFileName;
	CString		m_strCardModulePath;
	CString		m_strMtgModulePath;
	CString		m_strDeckPath;
	CString		m_strBitmapPath;
	CString		m_strAppDataPath;

	DWORD		m_dwFileVersionMS;
	DWORD		m_dwFileVersionLS;

	std::auto_ptr<CWinsock>			m_apWinsock;
	std::auto_ptr<CNetManager>		m_apNetManager;
	std::auto_ptr<CLogPublisher>	m_apLogPublisher;

	BOOL		m_bDeveloper;
	BOOL		m_bMTGKeyFound;
	BOOL		m_bMultipleGameLogs;
	BOOL		m_bVerboseLog;
};

CORE_EXPORT extern CCoreApp* g_pCoreApp;