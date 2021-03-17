#pragma once

#include <Threading.h>
#include <UPnP.h>
#include <atlsafe.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Networking {

/*

	CUPnP -> connect -> connected -> disconnect

*/

class EPOCH_EXPORT CUPnP
{
public:
	class CService
	{
	public:
		CService()
		{}

		CService(const CService& service)
		{
			m_spService = service.m_spService;
		}

		CService(IUPnPService* pService)
			: m_spService(pService)
		{}

		CAtlString GetId() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spService->get_Id(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);
				
			return CAtlString(bstr);
		}

		CAtlString GetTypeIdentifier() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spService->get_ServiceTypeIdentifier(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		long GetLastTransportStatus() const
		{
			long lLastTransportStatus;
			HRESULT hr = m_spService->get_LastTransportStatus(&lLastTransportStatus);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return lLastTransportStatus;
		}

		CComVariant QueryStateVariable(LPCTSTR strVariableName)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComVariant varValue;
			HRESULT hr = m_spService->QueryStateVariable(CComBSTR(strVariableName), &varValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return varValue;
		}

		void InvokeActionOut(LPCTSTR strAction, CAtlString& strOutputArgument)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create();
			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarOutputArguments2(varOutputArguments.parray);
			if (sarOutputArguments2.GetCount())
			{
				CComVariant varArgument(sarOutputArguments2.GetAt(0));

				if (varArgument.vt == VT_BSTR)
				{
					strOutputArgument = varArgument.bstrVal;
				}
			}
			else
				if (varReturnValue.vt == VT_BSTR)
				{
					strOutputArgument = varReturnValue.bstrVal;
				}
		}

		void InvokeActionOut(LPCTSTR strAction, std::vector<CComVariant>& outputArguments)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create();
			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarOutputArguments2(varOutputArguments.parray);

			if (sarOutputArguments2.GetCount())
				for (UINT i = 0; i < sarOutputArguments2.GetCount(); ++i)
					outputArguments.push_back(sarOutputArguments2.GetAt(i));
			else
				outputArguments.push_back(varReturnValue);
		}

		void InvokeActionIn(LPCTSTR strAction, const std::vector<CComVariant>& inputArguments)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create(static_cast<ULONG>(inputArguments.size()), 0);

			for (std::vector<CComVariant>::const_iterator it = inputArguments.begin(); it != inputArguments.end(); ++it)
				sarInputArguments.SetAt(static_cast<LONG>(it - inputArguments.begin()), *it);

			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);
		}

		void InvokeActionInOut(LPCTSTR strAction, const std::vector<CComVariant>& inputArguments, std::vector<CComVariant>& outputArguments)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create(static_cast<ULONG>(inputArguments.size()), 0);

			for (std::vector<CComVariant>::const_iterator it = inputArguments.begin(); it != inputArguments.end(); ++it)
				sarInputArguments.SetAt(static_cast<LONG>(it - inputArguments.begin()), *it);

			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarOutputArguments2(varOutputArguments.parray);

			if (sarOutputArguments2.GetCount())
				for (UINT i = 0; i < sarOutputArguments2.GetCount(); ++i)
					outputArguments.push_back(sarOutputArguments2.GetAt(i));
			else
				outputArguments.push_back(varReturnValue);
		}

		void InvokeActionInOut(LPCTSTR strAction, LPCTSTR strInputArgument, std::vector<CComVariant>& outputArguments)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create(1, 0);
			sarInputArguments.SetAt(0, CComVariant(strInputArgument));

			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarOutputArguments2(varOutputArguments.parray);

			if (sarOutputArguments2.GetCount())
				for (UINT i = 0; i < sarOutputArguments2.GetCount(); ++i)
					outputArguments.push_back(sarOutputArguments2.GetAt(i));
			else
				outputArguments.push_back(varReturnValue);
		}

		void InvokeActionIn(LPCTSTR strAction, LPCTSTR strInputArgument)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create(1, 0);
			sarInputArguments.SetAt(0, CComVariant(strInputArgument));

			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);
		}

		void InvokeActionInOut(LPCTSTR strAction, USHORT ui2, std::vector<CComVariant>& outputArguments)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create(1, 0);
			sarInputArguments.SetAt(0, CComVariant(ui2));

			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarOutputArguments2(varOutputArguments.parray);

			if (sarOutputArguments2.GetCount())
				for (UINT i = 0; i < sarOutputArguments2.GetCount(); ++i)
					outputArguments.push_back(sarOutputArguments2.GetAt(i));
			else
				outputArguments.push_back(varReturnValue);
		}

		void InvokeActionInOut(LPCTSTR strAction, ULONG ui4, std::vector<CComVariant>& outputArguments)
		{
			if (!m_spService)
				throw Exception::CUPnPException(E_INVALIDARG, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarInputArguments;
			sarInputArguments.Create(1, 0);
			sarInputArguments.SetAt(0, CComVariant(ui4));

			CComVariant varInputArguments(sarInputArguments);

			CComSafeArray<VARIANT> sarOutputArguments;
			sarOutputArguments.Create();
			CComVariant varOutputArguments(sarOutputArguments);

			CComSafeArray<VARIANT> sarReturnArguments;
			sarReturnArguments.Create();
			CComVariant varReturnValue(sarReturnArguments);

			HRESULT hr = m_spService->InvokeAction(CComBSTR(strAction), varInputArguments, &varOutputArguments, &varReturnValue);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComSafeArray<VARIANT> sarOutputArguments2(varOutputArguments.parray);

			if (sarOutputArguments2.GetCount())
				for (UINT i = 0; i < sarOutputArguments2.GetCount(); ++i)
					outputArguments.push_back(sarOutputArguments2.GetAt(i));
			else
				outputArguments.push_back(varReturnValue);
		}

	protected:
		CComPtr<IUPnPService> m_spService;
	};

	class CDevice
	{
	public:
		CDevice()
		{}

		CDevice(const CDevice& device)
		{
			m_spDevice = device.m_spDevice;
		}

		CDevice(IUPnPDevice* pDevice)
			: m_spDevice(pDevice)
		{
			ATLASSERT(pDevice);
		}

		CAtlString GetDescription() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_Description(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetFriendlyName() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_FriendlyName(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		bool GetHasChildren() const
		{
			VARIANT_BOOL varBool;
            HRESULT hr = m_spDevice->get_HasChildren(&varBool);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return varBool == VARIANT_TRUE;
		}

		bool GetIsRootDevice() const
		{
			VARIANT_BOOL varBool;
			HRESULT hr = m_spDevice->get_IsRootDevice(&varBool);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return varBool == VARIANT_TRUE;
		}

		CAtlString GetManufacturerName() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_ManufacturerName(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetManufacturerURL() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_ManufacturerURL(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetModelName() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_ModelName(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);
			
			return CAtlString(bstr);
		}

		CAtlString GetModelNumber() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_ModelNumber(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetModelURL() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_ModelURL(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetPresentationURL() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_PresentationURL(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetSerialNumber() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_SerialNumber(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetType() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_Type(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetUniqueDeviceName() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_UniqueDeviceName(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetUPC() const
		{
			CComBSTR bstr;
			HRESULT hr = m_spDevice->get_UPC(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CAtlString GetDocumentURL() const
		{
			CComBSTR bstr;
			CComQIPtr<IUPnPDeviceDocumentAccess> spDocumentAccess(m_spDevice);
			if (!spDocumentAccess)
				throw Exception::CUPnPException(E_NOINTERFACE, __FILE__, __FUNCTION__, __LINE__);

			HRESULT hr = spDocumentAccess->GetDocumentURL(&bstr);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			return CAtlString(bstr);
		}

		CService GetService(LPCTSTR strServiceTypeIdentifier) const
		{
			CComPtr<IUPnPServices> spServices;
			HRESULT hr = m_spDevice->get_Services(&spServices);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComPtr<IUnknown> spUnknown;
			hr = spServices->get__NewEnum(&spUnknown);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComQIPtr<IEnumVARIANT> spEnumVar(spUnknown);
			if (!spEnumVar)
				throw Exception::CUPnPException(E_NOINTERFACE, __FILE__, __FUNCTION__, __LINE__);

			CComVariant v;
			while (spEnumVar->Next(1, &v, 0) == S_OK)
			{
				CComQIPtr<IUPnPService> spService(v.pdispVal);
				if (!spService)
					continue;

				CService service(spService);
				if (service.GetTypeIdentifier() == strServiceTypeIdentifier)
					return service;
			}

			throw Exception::CUPnPException(E_NOINTERFACE, __FILE__, __FUNCTION__, __LINE__);

			return CService();
		}

		void GetServices(std::vector<CService>& services) const
		{
			CComPtr<IUPnPServices> spServices;
			HRESULT hr = m_spDevice->get_Services(&spServices);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComPtr<IUnknown> spUnknown;
			hr = spServices->get__NewEnum(&spUnknown);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComQIPtr<IEnumVARIANT> spEnumVar(spUnknown);
			if (!spEnumVar)
				throw Exception::CUPnPException(E_NOINTERFACE, __FILE__, __FUNCTION__, __LINE__);

			CComVariant v;
			while (spEnumVar->Next(1, &v, 0) == S_OK)
			{
				CComQIPtr<IUPnPService> spService(v.pdispVal);
				if (!spService)
					continue;

				services.push_back(CService(spService));
			}
		}

		CDevice GetRootDevice() const
		{
			CComPtr<IUPnPDevice> spRootDevice;

			HRESULT hr = m_spDevice->get_RootDevice(&spRootDevice);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);			

			return CDevice(spRootDevice);
		}

		CDevice GetParentDevice() const
		{
			CComPtr<IUPnPDevice> spParentDevice;

			HRESULT hr = m_spDevice->get_ParentDevice(&spParentDevice);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);			

			return CDevice(spParentDevice);
		}

		void GetChildren(std::vector<CDevice>& children) const
		{
			CComPtr<IUPnPDevices> spDevices;
			HRESULT hr = m_spDevice->get_Children(&spDevices);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComPtr<IUnknown> spUnknown;
			hr = spDevices->get__NewEnum(&spUnknown);
			if (FAILED(hr))
				throw Exception::CUPnPException(hr, __FILE__, __FUNCTION__, __LINE__);

			CComQIPtr<IEnumVARIANT> spEnumVar(spUnknown);
			if (!spEnumVar)
				throw Exception::CUPnPException(E_NOINTERFACE, __FILE__, __FUNCTION__, __LINE__);

			CComVariant v;
			while (spEnumVar->Next(1, &v, 0) == S_OK)
			{
				CComQIPtr<IUPnPDevice> spDevice(v.pdispVal);
				if (!spDevice)
					continue;

				children.push_back(CDevice(spDevice));
			}
		}

	protected:
		CComPtr<IUPnPDevice> m_spDevice;
	};

	CUPnP()
		: m_pConnectionThread(NULL)
	{}

	virtual ~CUPnP()
	{
		Disconnect();

		ATLASSERT(!m_Devices.size());
	}

	bool Supported() const
	{
		CComPtr<IUPnPDeviceFinder> spDeviceFinder;
		return SUCCEEDED(spDeviceFinder.CoCreateInstance(CLSID_UPnPDeviceFinder, NULL, CLSCTX_INPROC_SERVER));
	}
	
	HRESULT Connect(LPCTSTR strTypeURI);

	bool DiscoveryFinished() const
	{
		if (!m_pConnectionThread)
			return true;

		return !m_pConnectionThread->IsAlive();
	}

	HRESULT Disconnect(DWORD dwTimeout = 15000);

protected:
	class CConnectionThread;

	class CUPnPDeviceFinderCallback : public IUPnPDeviceFinderCallback
	{
	public:
		CUPnPDeviceFinderCallback(CConnectionThread* pThread, HANDLE hStop)
			: m_lRefCount(0)
			, m_pThread(pThread)
			, m_hStop(hStop)
		{}
	    
		STDMETHODIMP QueryInterface(REFIID iid, LPVOID* ppvObject)
		{
			HRESULT hr = S_OK;
	        
			if (!ppvObject)
				hr = E_POINTER;
			else
				*ppvObject = NULL;
	       
			if (SUCCEEDED(hr))
			{
				if (IsEqualIID(iid, IID_IUnknown) || IsEqualIID(iid, IID_IUPnPDeviceFinderCallback))
				{
					*ppvObject = static_cast<IUPnPDeviceFinderCallback*>(this);
					AddRef();
				}
				else
				{
					hr = E_NOINTERFACE;
				}
			}
	        
			return hr;
		};
	    
		STDMETHODIMP_(ULONG) AddRef()
		{
			return ::InterlockedIncrement(&m_lRefCount);
		};
	    
		STDMETHODIMP_(ULONG) Release()
		{
			LONG lRefCount = ::InterlockedDecrement(&m_lRefCount);
			if (0 == lRefCount)
				delete this;
	        
			return lRefCount;
		};
	    
		STDMETHODIMP DeviceAdded(LONG lFindData, IUPnPDevice* pDevice)
		{
			Threading::CScopedLock lock(m_pThread->m_pThis->m_csDevices);

			m_pThread->m_pThis->m_Devices.push_back(CComPtr<IUPnPDevice>(pDevice));

			return S_OK;
		};
	    
		STDMETHODIMP DeviceRemoved(LONG lFindData, BSTR bstrUDN)
		{
			LOG_DEBUG(_T("Device removed: %s."), bstrUDN);
			return S_OK;
		};
	    
		STDMETHODIMP SearchComplete(LONG lFindData)
		{
			LOG_DEBUG(_T("Search completed."));
			::SetEvent(m_hStop);
			return S_OK;
		};
    
	private:
		LONG				m_lRefCount;
		CConnectionThread*	m_pThread;
		HANDLE				m_hStop;
	};

	class CConnectionThread : public Threading::CThread
	{
		friend class CUPnPDeviceFinderCallback;
	public:
		CConnectionThread(CUPnP* pThis, LPCTSTR strTypeURI)
			: m_pThis(pThis)
			, m_strTypeURI(strTypeURI)
		{}
		
	protected:
		virtual DWORD Run(Threading::CAutoResetEvent& eventStopping)
		{
			LOG_DEBUG(_T("Connection thread running."));

			CComPtr<IUPnPDeviceFinder> spDeviceFinder;
			HRESULT hr = spDeviceFinder.CoCreateInstance(CLSID_UPnPDeviceFinder, NULL, CLSCTX_ALL);
			if (FAILED(hr))
			{
				LOG_WARNING(_T("Failed to create device finder: %s."), GetErrorMessage(hr));
				return 0;
			}

			Threading::CEvent searchCompleted(true);

			HANDLE hSearchCompleted = searchCompleted.GetHandle();

			CComPtr<IUPnPDeviceFinderCallback>
				spUPnPDeviceFinderCallback(new CUPnPDeviceFinderCallback(this, hSearchCompleted));

			LONG lFindData = 0;
			hr = spDeviceFinder->CreateAsyncFind(
				CComBSTR(m_strTypeURI), 0, spUPnPDeviceFinderCallback, &lFindData);
			if (FAILED(hr))
			{
				LOG_WARNING(_T("Failed to create async find: %s."), GetErrorMessage(hr));
				return 0;
			}

			m_pThis->OnConnected();

			hr = spDeviceFinder->StartAsyncFind(lFindData);
			if (FAILED(hr))
			{
				LOG_WARNING(_T("Failed to start async find: %s."), GetErrorMessage(hr));
				return 0;
			}

			MSG msg; 
			do
			{ 
				if (MsgWaitForMultipleObjects(1, &hSearchCompleted, FALSE, INFINITE, QS_ALLINPUT) == WAIT_OBJECT_0)
					break;

				if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
				{ 
					if (msg.message == WM_QUIT) 
						break; 
					TranslateMessage(&msg); 
					DispatchMessage(&msg); 
				} 
			} 
			while (true);

			spDeviceFinder->CancelAsyncFind(lFindData);
			
			m_pThis->OnDiscoveryFinished();

			HANDLE hStop = eventStopping.GetHandle();

			do
			{ 
				if (MsgWaitForMultipleObjects(1, &hStop, FALSE, INFINITE, QS_ALLINPUT) == WAIT_OBJECT_0)
					break;

				if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
				{ 
					if (msg.message == WM_QUIT) 
						break; 
					TranslateMessage(&msg); 
					DispatchMessage(&msg); 
				} 
			} 
			while (true);

			m_pThis->OnDisconnecting();

			LOG_DEBUG(_T("Connection thread exiting."));

			return 0;
		}

		CUPnP*		m_pThis;
		CAtlString	m_strTypeURI;
	};

	// Must be called by the connection thread
	virtual void GetDevices(std::vector<CDevice>& devices) const
	{
		Threading::CScopedLock lock(m_csDevices);

		for (std::vector<CComPtr<IUPnPDevice> >::const_iterator it = m_Devices.begin(); it != m_Devices.end(); ++it)
			devices.push_back(CDevice(*it));
	}

	// Must be called by the connection thread
	void ClearDevices()
	{
		m_Devices.clear();
	}

	virtual void OnConnected() {}
	virtual void OnDiscoveryFinished() {}
	virtual void OnDisconnecting()
	{
		// Free all stored COM objects now!
		ClearDevices();
	}

	std::vector<CComPtr<IUPnPDevice> >		m_Devices;
	CConnectionThread*						m_pConnectionThread;
	mutable Threading::CCriticalSection		m_csDevices;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CUPnPGateway : public CUPnP
{
public:
	class CGatewayDevice : public CDevice
	{
	public:
		struct PortMappingEntry
		{
			PortMappingEntry()
				: uiExternalPort(0)
				, uiInternalPort(0)
				, bEnabled(false)
				, ulLeaseDuration(0)
			{}

			PortMappingEntry(const std::vector<CComVariant>& vars)
			{
				strRemoteHost = vars[0].bstrVal;
				uiExternalPort = vars[1].uiVal;
				strProtocol = vars[2].bstrVal;
				uiInternalPort = vars[3].uiVal;
				strInternalClient = vars[4].bstrVal;
				bEnabled = vars[5].boolVal == VARIANT_TRUE;
				strPortMappingDescription = vars[6].bstrVal;
				ulLeaseDuration = vars[7].ulVal;
			}

			PortMappingEntry(LPCTSTR strRemoteHost_, USHORT uiExternalPort_, LPCTSTR strProtocol_,
							 const std::vector<CComVariant>& vars)
			{
				strRemoteHost = strRemoteHost_;
				uiExternalPort = uiExternalPort_;
				strProtocol = strProtocol_;
				uiInternalPort = vars[0].uiVal;
				strInternalClient = vars[1].bstrVal;
				bEnabled = vars[2].boolVal == VARIANT_TRUE;
				strPortMappingDescription = vars[3].bstrVal;
				ulLeaseDuration = vars[4].ulVal;
			}

			CAtlString	strRemoteHost;
			USHORT		uiExternalPort;
			CAtlString	strProtocol;
			USHORT		uiInternalPort;
			CAtlString	strInternalClient;
			bool		bEnabled;
			CAtlString	strPortMappingDescription;
			ULONG		ulLeaseDuration;
		};

		CGatewayDevice()
		{}

		CGatewayDevice(const CGatewayDevice& device)
		{
			m_spDevice = device.m_spDevice;
			m_WANIPConnectionService = device.m_WANIPConnectionService;
		}

		CGatewayDevice(IUPnPDevice* pDevice)
			: CDevice(pDevice)
		{
			ATLASSERT(pDevice);

			std::vector<CUPnP::CDevice> children;
			GetChildren(children);

			for (std::vector<CUPnP::CDevice>::iterator it = children.begin();
				it != children.end();
				++it)		
				if (it->GetType() == _T("urn:schemas-upnp-org:device:WANDevice:1"))
				{
					std::vector<CUPnP::CDevice> children2;
					it->GetChildren(children2);

					for (std::vector<CUPnP::CDevice>::iterator it2 = children2.begin();
						it2 != children2.end();
						++it2)		
						if (it2->GetType() == _T("urn:schemas-upnp-org:device:WANConnectionDevice:1"))
						{
							std::vector<CUPnP::CService> services;
							it2->GetServices(services);

							for (std::vector<CUPnP::CService>::iterator it3 = services.begin();
								it3 != services.end();
								++it3)
								if (it3->GetTypeIdentifier() == _T("urn:schemas-upnp-org:service:WANIPConnection:1"))
								{
									m_WANIPConnectionService = *it3;
									LOG_INFORMATION(_T("WANIPConnection service found."));
									break;
								}

							break;
						}
					
					break;
				}
		}

		// WANIPConnection:1 APIs

		CIPAddress GetExternalIPAddress()
		{
			CAtlString strExternalIPAddress;
			m_WANIPConnectionService.InvokeActionOut(_T("GetExternalIPAddress"), strExternalIPAddress);

			return CIPAddress::Parse(strExternalIPAddress);
		}

		USHORT GetPortMappingNumberOfEntries()
		{
			CComVariant varMappings(m_WANIPConnectionService.QueryStateVariable(_T("PortMappingNumberOfEntries")));
			return varMappings.uiVal;
		}

		bool GetPortMappingEnabled()
		{
			CComVariant varEnabled(m_WANIPConnectionService.QueryStateVariable(_T("PortMappingEnabled")));
			return varEnabled.boolVal == VARIANT_TRUE;
		}

		PortMappingEntry GetGenericPortMappingEntry(USHORT uiIndex)
		{
			std::vector<CComVariant> outputArguments;
			m_WANIPConnectionService.InvokeActionInOut(_T("GetGenericPortMappingEntry"), uiIndex, outputArguments);

			return PortMappingEntry(outputArguments);
		}

		PortMappingEntry GetSpecificPortMappingEntry(LPCTSTR strRemoteHost, USHORT uiExternalPort, LPCTSTR strProtocol)
		{
			std::vector<CComVariant> inputArguments;
			inputArguments.push_back(CComVariant(strRemoteHost));
			inputArguments.push_back(CComVariant(uiExternalPort));
			inputArguments.push_back(CComVariant(strProtocol));

			std::vector<CComVariant> outputArguments;
			m_WANIPConnectionService.InvokeActionInOut(_T("GetSpecificPortMappingEntry"), inputArguments, outputArguments);

			return PortMappingEntry(strRemoteHost, uiExternalPort, strProtocol, outputArguments);
		}

		void AddPortMapping(const PortMappingEntry& entry)
		{
			std::vector<CComVariant> inputArguments;
			inputArguments.push_back(CComVariant(entry.strRemoteHost));
			inputArguments.push_back(CComVariant(entry.uiExternalPort));
			inputArguments.push_back(CComVariant(entry.strProtocol));
			inputArguments.push_back(CComVariant(entry.uiInternalPort));
			inputArguments.push_back(CComVariant(entry.strInternalClient));
			inputArguments.push_back(CComVariant(entry.bEnabled));
			inputArguments.push_back(CComVariant(entry.strPortMappingDescription));
			inputArguments.push_back(CComVariant(entry.ulLeaseDuration));

			m_WANIPConnectionService.InvokeActionIn(_T("AddPortMapping"), inputArguments);
		}

		void DeletePortMapping(LPCTSTR strRemoteHost, USHORT uiExternalPort, LPCTSTR strProtocol)
		{
			std::vector<CComVariant> inputArguments;
			inputArguments.push_back(CComVariant(strRemoteHost));
			inputArguments.push_back(CComVariant(uiExternalPort));
			inputArguments.push_back(CComVariant(strProtocol));

			m_WANIPConnectionService.InvokeActionIn(_T("DeletePortMapping"), inputArguments);
		}

	protected:
		CService m_WANIPConnectionService;
	};

	CUPnPGateway()
	{}

	HRESULT Connect()
	{
		return __super::Connect(_T("urn:schemas-upnp-org:device:InternetGatewayDevice:1"));
	}

	virtual void GetDevices(std::vector<CGatewayDevice>& devices) const
	{
		Threading::CScopedLock lock(m_csDevices);

		for (std::vector<CComPtr<IUPnPDevice> >::const_iterator it = m_Devices.begin(); it != m_Devices.end(); ++it)
			devices.push_back(CGatewayDevice(*it));
	}
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CUPnPScopedPortMapper : public CUPnPGateway
{
public:
	CUPnPScopedPortMapper()
		: m_uiPort(0)
		, m_bConfigureFirstGatewayOnly(true)
		, m_bUDP(true)
		, m_bTCP(true)
	{}

	virtual ~CUPnPScopedPortMapper()
	{
		ATLASSERT(!m_ConfiguredEntries.size());
	}
	
	HRESULT ConfigureGateway(USHORT uiPort, bool bTCP, bool bUDP, bool bConfigureFirstGatewayOnly = true)
	{
		if (!bTCP && !bUDP)
			return E_INVALIDARG;

		if (!uiPort)
			return E_INVALIDARG;

		m_uiPort = uiPort;
		m_bTCP = bTCP;
		m_bUDP = bUDP;
		m_bConfigureFirstGatewayOnly = bConfigureFirstGatewayOnly;

		return __super::Connect();
	}

protected:
	virtual void OnConfigurationFinished(HRESULT hr)
	{
		if (hr == S_OK)
			LOG_INFORMATION(_T("UPnP gateway configuration succeeded."));
		else
			if (hr == S_FALSE)
				LOG_INFORMATION(_T("No UPnP gateway found."));
			else
				LOG_ERROR(_T("At least one gateway's configuration failed: %s."), Exception::CUPnPException::GetErrorMessage(hr));
	}

	virtual void OnDiscoveryFinished()
	{
		std::vector<CGatewayDevice> gateways;
		GetDevices(gateways);		

		if (!gateways.size())
		{
			OnConfigurationFinished(S_FALSE);
			return;
		}

		std::vector<CGatewayDevice::PortMappingEntry> entries;

		CGatewayDevice::PortMappingEntry entry;
		try
		{
			std::vector<CIPAddress> localAddresses;
			CIPAddress::Local(localAddresses);
			if (!localAddresses.size())
			{
				OnConfigurationFinished(E_NOINTERFACE);
				return;
			}

			entry.strInternalClient = localAddresses[0].ToString();
		}
		catch (Exception::CSocketException&)
		{
			OnConfigurationFinished(E_NOINTERFACE);
			return;
		}

		entry.bEnabled = true;
		entry.uiExternalPort = m_uiPort;
		entry.uiInternalPort = m_uiPort;

		if (m_bTCP)
		{
			entry.strPortMappingDescription.Format(_T("EPOCH TCP %d %s"), m_uiPort, entry.strInternalClient);
			entry.strProtocol = _T("TCP");
			entries.push_back(entry);
		}

		if (m_bUDP)
		{
			entry.strPortMappingDescription.Format(_T("EPOCH UDP %d %s"), m_uiPort, entry.strInternalClient);
			entry.strProtocol = _T("UDP");
			entries.push_back(entry);
		}

		HRESULT hr = S_OK;
		for (std::vector<CGatewayDevice>::iterator it = gateways.begin(); it != gateways.end(); ++it)
		{
			for (std::vector<CGatewayDevice::PortMappingEntry>::iterator it2 = entries.begin(); it2 != entries.end(); ++it2)
			{
				try
				{
					it->GetSpecificPortMappingEntry(it2->strRemoteHost, it2->uiExternalPort, it2->strProtocol);
					Sleep(1000);
					it->DeletePortMapping(it2->strRemoteHost, it2->uiExternalPort, it2->strProtocol);
					Sleep(1000);
				}
				catch (Exception::CUPnPException&)
				{
				}

				try
				{
					it->AddPortMapping(*it2);
					m_ConfiguredEntries.push_back(std::make_pair(*it, *it2));
					Sleep(1000);
				}
				catch (Exception::CUPnPException& exception)
				{
					hr = exception.GetResult();
				}
			}

			if (m_bConfigureFirstGatewayOnly)
				break;
		}

		OnConfigurationFinished(hr);
	}

	virtual void OnDisconnecting()
	{
		for (std::vector<std::pair<CGatewayDevice, CGatewayDevice::PortMappingEntry> >::iterator it = m_ConfiguredEntries.begin();
			it != m_ConfiguredEntries.end();
			++it)
		{
			CGatewayDevice& gateway = it->first;
			CGatewayDevice::PortMappingEntry& entry = it->second;

			for (int i = 0; i < 2; ++i)	// Retry at most 2 times
			{
				try
				{
					gateway.DeletePortMapping(entry.strRemoteHost, entry.uiExternalPort, entry.strProtocol);
				}
				catch(Exception::CException& exception)
				{
					exception.LogBoth(__FILE__, __FUNCTION__, __LINE__);
					Sleep(1000);
					continue;
				}
				break;
			}
		}

		m_ConfiguredEntries.clear();

		__super::OnDisconnecting();
	}

	USHORT	m_uiPort;
	bool	m_bConfigureFirstGatewayOnly;
	bool	m_bTCP;
	bool	m_bUDP;
	std::vector<std::pair<CGatewayDevice, CGatewayDevice::PortMappingEntry> >	m_ConfiguredEntries;
};

}	// namespace Networking
}	// namespace Epoch

#pragma warning( pop )