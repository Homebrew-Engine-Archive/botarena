#include "stdafx.h"
#include <Exception.h>
#include <UPnP.h>

namespace Epoch {
namespace Exception {

CAtlString CSocketException::GetErrorMessage(int nErrorCode)
{
	switch (nErrorCode)
	{
	case WSAEINTR: return _T("Interrupted function call");
	case WSAEACCES: return _T("Permission denied");
	case WSAEFAULT: return _T("Bad address");
	case WSAEINVAL: return _T("Invalid argument");
	case WSAEMFILE: return _T("Too many open files");
	case WSAEWOULDBLOCK: return _T("Resource temporarily unavailable");
	case WSAEINPROGRESS: return _T("Operation now in progress");
	case WSAEALREADY: return _T("Operation already in progress");
	case WSAENOTSOCK: return _T("Socket operation on nonsocket");
	case WSAEDESTADDRREQ: return _T("Destination address required");
	case WSAEMSGSIZE: return _T("Message too long");
	case WSAEPROTOTYPE: return _T("Protocol wrong type for socket");
	case WSAENOPROTOOPT: return _T("Bad protocol option");
	case WSAEPROTONOSUPPORT: return _T("Protocol not supported");
	case WSAESOCKTNOSUPPORT: return _T("Socket type not supported");
	case WSAEOPNOTSUPP: return _T("Operation not supported");
	case WSAEPFNOSUPPORT: return _T("Protocol family not supported");
	case WSAEAFNOSUPPORT: return _T("Address family not supported by protocol family");
	case WSAEADDRINUSE: return _T("Address already in use");
	case WSAEADDRNOTAVAIL: return _T("Cannot assign requested address");
	case WSAENETDOWN: return _T("Network is down");
	case WSAENETUNREACH: return _T("Network is unreachable");
	case WSAENETRESET: return _T("Network dropped connection on reset");
	case WSAECONNABORTED: return _T("Software caused connection abort");
	case WSAECONNRESET: return _T("Connection reset by peer");
	case WSAENOBUFS: return _T("No buffer space available");
	case WSAEISCONN: return _T("Socket is already connected");
	case WSAENOTCONN: return _T("Socket is not connected");
	case WSAESHUTDOWN: return _T("Cannot send after socket shutdown");
	case WSAETIMEDOUT: return _T("Connection timed out");
	case WSAECONNREFUSED: return _T("Connection refused");
	case WSAEHOSTDOWN: return _T("Host is down");
	case WSAEHOSTUNREACH: return _T("No route to host");
	case WSAEPROCLIM: return _T("Too many processes");
	case WSASYSNOTREADY: return _T("Network subsystem is unavailable");
	case WSAVERNOTSUPPORTED: return _T("Winsock.dll version out of range");
	case WSANOTINITIALISED: return _T("Successful WSAStartup not yet performed");
	case WSAEDISCON: return _T("Graceful shutdown in progress");
	case WSATYPE_NOT_FOUND: return _T("Class type not found");
	case WSAHOST_NOT_FOUND: return _T("Host not found");
	case WSATRY_AGAIN: return _T("Nonauthoritative host not found");
	case WSANO_RECOVERY: return _T("This is a nonrecoverable error");
	case WSANO_DATA: return _T("Valid name, no data record of requested type");
	case WSA_INVALID_HANDLE: return _T("Specified event object handle is invalid");
	case WSA_INVALID_PARAMETER: return _T("One or more parameters are invalid");
	case WSA_IO_INCOMPLETE: return _T("Overlapped I/O event object not in signaled state");
	case WSA_IO_PENDING: return _T("Overlapped operations will complete later");
	case WSA_NOT_ENOUGH_MEMORY: return _T("Insufficient memory available");
	case WSA_OPERATION_ABORTED: return _T("Overlapped operation aborted");
	//case WSAINVALIDPROCTABLE: return _T("Invalid procedure table from service provider");
	//case WSAINVALIDPROVIDER: return _T("Invalid service provider version number");
	//case WSAPROVIDERFAILEDINIT: return _T("Unable to initialize a service provider");
	case WSASYSCALLFAILURE: return _T("System call failure");
	} 

	return _T("Unknown Winsock error");
}

//_____________________________________________________________________________
//

CInvalidMessageException::CInvalidMessageException(
	GUID guidMessage,
	LPCSTR strFile,
	LPCSTR strFunction,
	int nLine)
	: CRecoverableException(E_FAIL, strFile, strFunction, nLine)
	, m_guidMessage(guidMessage)
{
	m_strMessage.Format(_T("Invalid message %s"), Guid::ToString(m_guidMessage));
}

//_____________________________________________________________________________
//

CAtlString CUPnPException::GetErrorMessage(HRESULT hr)
{
	switch (hr)
	{
	case UPNP_E_ROOT_ELEMENT_EXPECTED: return _T("Root element expected");    
	case UPNP_E_DEVICE_ELEMENT_EXPECTED: return _T("Device element expected");  
	case UPNP_E_SERVICE_ELEMENT_EXPECTED: return _T("Service element expected");
	case UPNP_E_SERVICE_NODE_INCOMPLETE: return _T("Service node incomplete");
	case UPNP_E_DEVICE_NODE_INCOMPLETE: return _T("Device node incomplete");
	case UPNP_E_ICON_ELEMENT_EXPECTED: return _T("Icon element expected");
	case UPNP_E_ICON_NODE_INCOMPLETE: return _T("Icon node incomplete");
	case UPNP_E_INVALID_ACTION: return _T("Invalid action");
	case UPNP_E_INVALID_ARGUMENTS: return _T("Invalid arguments");
	case UPNP_E_OUT_OF_SYNC: return _T("Out of sync");
	case UPNP_E_ACTION_REQUEST_FAILED: return _T("Action request failed");
	case UPNP_E_TRANSPORT_ERROR: return _T("Transport error");
	case UPNP_E_VARIABLE_VALUE_UNKNOWN: return _T("Variable value unknown");
	case UPNP_E_INVALID_VARIABLE: return _T("Invalid variable");
	case UPNP_E_DEVICE_ERROR: return _T("Device error");
	case UPNP_E_PROTOCOL_ERROR: return _T("Protocol error");
	case UPNP_E_ERROR_PROCESSING_RESPONSE: return _T("Error processing response");
	case UPNP_E_DEVICE_TIMEOUT: return _T("Device timeout");
	case UPNP_E_INVALID_DOCUMENT: return _T("Invalid document");
	case UPNP_E_EVENT_SUBSCRIPTION_FAILED: return _T("Event subscription failed");
	} 

	return Epoch::GetErrorMessage(hr);
}

}	// namespace Exception
}	// namespace Epoch