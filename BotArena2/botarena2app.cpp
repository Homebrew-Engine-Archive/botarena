#include "botarena2app.h"

CBotArena2App::CBotArena2App()
	: CCoreApp()
{
	g_pCoreApp = this;
}
BOOL CBotArena2App::InitInstance()
{
	if (!__super::InitInstance())
		return FALSE;

	SetMultipleGameLogs(TRUE);

	return TRUE;
}