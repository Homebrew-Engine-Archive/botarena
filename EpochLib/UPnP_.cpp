#include "stdafx.h"
#include <Networking.h>

namespace Epoch {
namespace Networking {

HRESULT CUPnP::Connect(LPCTSTR strTypeURI)
{
	if (!Supported())
		return E_INVALIDARG;

	if (m_pConnectionThread)
	{
		if (m_pConnectionThread->IsAlive())
			return E_INVALIDARG;	// Already connected

		m_pConnectionThread->Release();
	}

	ATLASSERT(m_Devices.empty());

	m_pConnectionThread = new CConnectionThread(this, strTypeURI);
	m_pConnectionThread->AddRef();
	m_pConnectionThread->SetUseCOM(true, COINIT_APARTMENTTHREADED);
	m_pConnectionThread->Start();

	return S_OK;
}

HRESULT CUPnP::Disconnect(DWORD dwTimeout)
{
	if (!m_pConnectionThread)
		return E_INVALIDARG;

	if (m_pConnectionThread->IsAlive())
	{
		m_pConnectionThread->Stop();
		m_pConnectionThread->Join(dwTimeout);
	}

	m_pConnectionThread->Release();
	m_pConnectionThread = NULL;

	return S_OK;
}

}
}