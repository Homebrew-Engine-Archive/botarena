#pragma once

#include <windows.h>
#include <atlbase.h>
#include <atlcrypt.h>
#include <Epoch.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Mathematic {

class EPOCH_EXPORT CRandom
{
public:
	CRandom();

	int Next();										// Returns [0, INT_MAX]
	int Next(int nMaxValue);						// Returns [0, nMaxValue)
	int Next(int nMinValue, int nMaxValue);			// Returns [nMinValue, nMaxValue)

	void NextBytes(ULONG ulSize, LPBYTE pBuffer);	// Returns array of [0, UCHAR_MAX]

protected:
	CCryptProv m_CryptProvider;						// #include <atlcrypt.h>
};

}	// namespace Mathematic
}	// namespace Epoch

#pragma warning( pop )