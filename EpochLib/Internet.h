#pragma once

#pragma comment(lib, "Wininet.lib")

namespace Epoch {
namespace Networking {

EPOCH_EXPORT DWORD GetInternetFile(LPCTSTR strUrl, LPCTSTR strLocalFilePath);

}	// Networking
}	// Epoch