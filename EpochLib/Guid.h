#pragma once

#include <atlstr.h>

namespace Epoch {

class EPOCH_EXPORT Guid
{
public:
	static GUID Parse(LPCTSTR strGuid);
	static GUID Create();
	static CAtlString ToString(GUID guid, bool bToUpper = true, bool bWithBraces = true, bool bWithDashes = true);

	Guid()
		: m_guid(GUID_NULL)
	{}

	Guid(GUID guid)
		: m_guid(guid)
	{}

	Guid(LPCTSTR strGuid)
		: m_guid(Parse(strGuid))
	{
	}

	CAtlString ToString(bool bToUpper = true, bool bWithBraces = true, bool bWithDashes = true) const
	{
		return ToString(m_guid, bToUpper, bWithBraces, bWithDashes);
	}

	Guid& operator=(const Guid& guid)
	{
		m_guid = guid.m_guid;
		return *this;
	}

	bool operator==(const Guid& guid) const
	{
		return !memcmp(&m_guid, &guid.m_guid, sizeof(GUID));
	}

	bool operator!=(const Guid& guid) const
	{
		return !operator==(guid);
	}

protected:
	GUID m_guid;
};

}	// namespace Epoch