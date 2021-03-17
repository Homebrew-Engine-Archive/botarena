#pragma once

class CStartDialog;
class CMagicWandView;

class CGameThread : public Threading::CThread
{
public:
	CGameThread(HWND hwndThreadOwner);
	virtual ~CGameThread();

	HANDLE GetStoppingEvent();
	CGame* GetGame() const { return m_pGame; }

	CGame* CreateGame(const CStartDialog* pDlg, const CMagicWandView* pView);

	void Run() { m_eventRun.Set(); }

protected:
	virtual DWORD Run(Threading::CAutoResetEvent& eventStopping);

	Threading::CManualResetEvent	m_eventStopping;
	HWND							m_hwndThreadOwner;

	Threading::CManualResetEvent	m_eventGameReady;
	Threading::CManualResetEvent	m_eventRun;

	const CStartDialog*				m_pStartDlg;
	const CMagicWandView*			m_pView;

	CGame*							m_pGame;

#ifdef _DEBUG
   _CrtMemState						m_MemState;
#endif
};
