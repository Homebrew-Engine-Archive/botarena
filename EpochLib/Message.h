#pragma once

#include <list>
#include <atlcomtime.h>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Networking {

class EPOCH_EXPORT CMessageBuffer
{
public:
	CMessageBuffer()
		: m_bNormalized(false)
	{}

	CMessageBuffer(BYTE* pNormalizedBuffer);

	virtual ~CMessageBuffer()
	{
		FreeBufferList();
	}

	BYTE* GetNormalizedBuffer()
	{
		Normalize();

		return m_apNormalizedBuffer.get();
	}

	void Add(int nSize, std::auto_ptr<BYTE> apFragment);
	void Add(int nSize, BYTE* pBuffer);
	void Add(LPCTSTR str);
	void Add(int n);
	void Add(unsigned u);
	void Add(DWORD dw);
	void Add(__int64 n);
	void Add(unsigned __int64 u);
	void Add(GUID guid);

	void Remove(int& nSize, std::auto_ptr<BYTE>& apFragment);
	void Remove(int& nSize, BYTE* pBuffer);
	CAtlString Remove();
	void Remove(CAtlString& str);
	void Remove(int& n);
	void Remove(unsigned& u);
	void Remove(DWORD& dw);
	void Remove(__int64& n);
	void Remove(unsigned __int64& u);
	void Remove(GUID& guid);

	void Normalize();
	void Denormalize();

protected:
	typedef std::list<std::pair<int, BYTE*> >	BufferList;

	void FreeBufferList()
	{
		for (BufferList::iterator it = m_BufferList.begin(); it != m_BufferList.end(); ++it)
			delete it->second;

		m_BufferList.clear();
	}

	BufferList			m_BufferList;
	bool				m_bNormalized;
	std::auto_ptr<BYTE>	m_apNormalizedBuffer;
};

//_____________________________________________________________________________
//

class CProtocolInstance;

class EPOCH_EXPORT CMessage
{
public:
	CMessage(GUID guid, CProtocolInstance* pProtocolInstance = NULL);
	virtual ~CMessage() {}

	GUID GetMessageGuid()
	{
		return m_guid;
	}

	void SetRemoteEndPoint(const CIPEndPoint& remoteEndPoint)
	{
		m_apRemoteEndPoint = std::auto_ptr<CIPEndPoint>(new CIPEndPoint(remoteEndPoint));
	}

	CIPEndPoint* GetRemoteEndPoint()
	{
		return m_apRemoteEndPoint.get();
	}
	
	bool IsLocal()
	{
		return m_apRemoteEndPoint.get() == NULL;
	}

	GUID GetProtocolGuid()
	{
		return m_guidProtocol;
	}

	GUID GetProtocolInstanceGuid()
	{
		return m_guidProtocolInstance;
	}

	COleDateTime GetTimestamp()
	{
		return m_Timestamp;
	}

	virtual void Serialize(CMessageBuffer& buffer);

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		std::auto_ptr<BYTE> apBuffer;
		int nSize = 0;
		buffer.Remove(nSize, apBuffer);
		NetworkRepresentation* pNR = reinterpret_cast<NetworkRepresentation*>(apBuffer.get());
		pNR->Update(this);
	}

protected:
	GUID						m_guid;
	std::auto_ptr<CIPEndPoint>	m_apRemoteEndPoint;
	GUID						m_guidProtocol;
	GUID						m_guidProtocolInstance;
	COleDateTime				m_Timestamp;

private:
	struct NetworkRepresentation
	{
		NetworkRepresentation(CMessage* pThis)
			: guidMessage(pThis->m_guid)
			, guidProtocol(pThis->m_guidProtocol)
			, guidProtocolInstance(pThis->m_guidProtocolInstance)
			, timestamp(pThis->m_Timestamp)
		{}

		void Update(CMessage* pThis)
		{
			if (pThis->m_guid != guidMessage)
				throw Exception::CInvalidMessageException(guidMessage, __FILE__, __FUNCTION__, __LINE__);

			pThis->m_guidProtocol = guidProtocol;
			pThis->m_guidProtocolInstance = guidProtocolInstance;
			pThis->m_Timestamp = COleDateTime(timestamp);
		}

		GUID	guidMessage;
		GUID	guidProtocol;
		GUID	guidProtocolInstance;
		DATE	timestamp;
	};

public:
	struct Header
	{
		int nTotalSize;
		int nSize;
		NetworkRepresentation networkRepresentation;
	};
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT __declspec(uuid("{3900CAB7-4749-4057-B1BD-8A99143FC26E}"))
	CBeginMessage : public CMessage
{
public:
	CBeginMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CBeginMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT __declspec(uuid("{49D1D589-C297-4959-89CA-D841EEE5336E}"))
	CEndMessage : public CMessage
{
public:
	CEndMessage(CProtocolInstance* pProtocolInstance = NULL)
		: CMessage(__uuidof(CEndMessage), pProtocolInstance)
	{}
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT __declspec(uuid("{FEC2D4B9-AB72-4d61-AF0E-31B5201AB5A5}"))
	CAbortMessage : public CMessage
{
public:
	struct AbortReason
	{
		enum Enum
		{
			Invalid		= 0x01,
			Shutdown,
			Timeout,
			User,
			Socket
		};
	};

	static CAtlString ToString(AbortReason::Enum reason);

	CAbortMessage(
		CProtocolInstance* pProtocolInstance = NULL,
		AbortReason::Enum reason = AbortReason::Invalid,
		int nAbortCode = 0/*,
		GUID guidAbort = GUID_NULL*/)
		: CMessage(__uuidof(CAbortMessage), pProtocolInstance)
		, m_Reason(reason)
		, m_nAbortCode(nAbortCode)
		//, m_guidAbort(guidAbort)
	{}

	AbortReason::Enum GetAbortReason()	{ return m_Reason; }
	int GetAbortCode()					{ return m_nAbortCode; }
	//GUID GetAbortGuid()					{ return m_guidAbort; }

	virtual void Serialize(CMessageBuffer& buffer);

	virtual void Deserialize(CMessageBuffer& buffer)
	{
		std::auto_ptr<BYTE> apBuffer;
		int nSize = 0;
		buffer.Remove(nSize, apBuffer);
		NetworkRepresentation* pNR = reinterpret_cast<NetworkRepresentation*>(apBuffer.get());
		pNR->Update(this);
		__super::Deserialize(buffer);
	}

protected:
	AbortReason::Enum	m_Reason;
	int					m_nAbortCode;
	//GUID				m_guidAbort;

private:
	struct NetworkRepresentation
	{
		NetworkRepresentation(CAbortMessage* pThis)
			: reason(pThis->m_Reason)
			, nAbortCode(pThis->m_nAbortCode)
			//, guidAbort(pThis->m_guidAbort)
		{}

		void Update(CAbortMessage* pThis)
		{
			pThis->m_Reason = reason;
			pThis->m_nAbortCode = nAbortCode;
			//pThis->m_guidAbort = guidAbort;
		}

		AbortReason::Enum	reason;
		int					nAbortCode;
		//GUID				guidAbort;
	};
};

}	// Networking
}	// Epoch

#pragma warning( pop )