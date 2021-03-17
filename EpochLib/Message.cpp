#include "stdafx.h"
#include <Networking.h>

namespace Epoch {
namespace Networking {

CMessageBuffer::CMessageBuffer(BYTE* pNormalizedBuffer)
	: m_bNormalized(true)
{
	int nSize = *reinterpret_cast<int*>(pNormalizedBuffer);
	m_apNormalizedBuffer.reset(new BYTE[nSize]);
	CopyMemory(m_apNormalizedBuffer.get(), pNormalizedBuffer, nSize);
}

void CMessageBuffer::Add(int nSize, std::auto_ptr<BYTE> apFragment)
{
	Denormalize();

	m_BufferList.push_back(std::make_pair(nSize, apFragment.release()));
}

void CMessageBuffer::Add(int nSize, BYTE* pBuffer)
{
	Denormalize();

	BYTE* pFragment = new BYTE[nSize];
	memcpy(pFragment, pBuffer, nSize);

	m_BufferList.push_back(std::make_pair(nSize, pFragment));
}

void CMessageBuffer::Add(LPCTSTR str)
{
	Denormalize();

	int nSize = static_cast<int>(_tcslen(str) + 1) * sizeof(TCHAR);
	BYTE* pFragment = new BYTE[nSize];
	StringCchCopy(reinterpret_cast<LPTSTR>(pFragment), nSize / sizeof(TCHAR), str);

	m_BufferList.push_back(std::make_pair(nSize, pFragment));
}

void CMessageBuffer::Add(int n)
{
	Denormalize();

	BYTE* pFragment = new BYTE[sizeof(int)];
	*reinterpret_cast<int*>(pFragment) = n;
	m_BufferList.push_back(std::make_pair(static_cast<int>(sizeof(int)), pFragment));
}

void CMessageBuffer::Add(unsigned n)
{
	Denormalize();

	BYTE* pFragment = new BYTE[sizeof(int)];
	*reinterpret_cast<unsigned*>(pFragment) = n;
	m_BufferList.push_back(std::make_pair(static_cast<int>(sizeof(unsigned)), pFragment));
}

void CMessageBuffer::Add(DWORD dw)
{
	Denormalize();

	BYTE* pFragment = new BYTE[sizeof(DWORD)];
	*reinterpret_cast<DWORD*>(pFragment) = dw;
	m_BufferList.push_back(std::make_pair(static_cast<int>(sizeof(DWORD)), pFragment));
}

void CMessageBuffer::Add(__int64 n)
{
	Denormalize();

	BYTE* pFragment = new BYTE[sizeof(__int64)];
	*reinterpret_cast<__int64*>(pFragment) = n;
	m_BufferList.push_back(std::make_pair(static_cast<int>(sizeof(__int64)), pFragment));
}

void CMessageBuffer::Add(unsigned __int64 n)
{
	Denormalize();

	BYTE* pFragment = new BYTE[sizeof(unsigned __int64)];
	*reinterpret_cast<unsigned __int64*>(pFragment) = n;
	m_BufferList.push_back(std::make_pair(static_cast<int>(sizeof(unsigned __int64)), pFragment));
}

void CMessageBuffer::Add(GUID guid)
{
	Denormalize();

	BYTE* pFragment = new BYTE[sizeof(GUID)];
	*reinterpret_cast<GUID*>(pFragment) = guid;
	m_BufferList.push_back(std::make_pair(static_cast<int>(sizeof(GUID)), pFragment));
}

void CMessageBuffer::Remove(int& nSize, std::auto_ptr<BYTE>& apFragment)
{
	Denormalize();

	nSize = m_BufferList.back().first;
	apFragment.reset(m_BufferList.back().second);

	m_BufferList.pop_back();
}

void CMessageBuffer::Remove(int& nSize, BYTE* pBuffer)
{
	Denormalize();

	nSize = m_BufferList.back().first;
	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	memcpy(pBuffer, apFragment.get(), nSize);
}

CAtlString CMessageBuffer::Remove()
{
	Denormalize();

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	return reinterpret_cast<LPCTSTR>(apFragment.get());
}

void CMessageBuffer::Remove(CAtlString& str)
{
	str = Remove();
}

void CMessageBuffer::Remove(int& n)
{
	Denormalize();

	if (m_BufferList.back().first != sizeof(int))
		throw Exception::CSerializationException(m_BufferList.back().second, m_BufferList.back().first, sizeof(int), __FILE__, __FUNCTION__, __LINE__);

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	n = *reinterpret_cast<int*>(apFragment.get());
}

void CMessageBuffer::Remove(unsigned& u)
{
	Denormalize();

	if (m_BufferList.back().first != sizeof(unsigned))
		throw Exception::CSerializationException(m_BufferList.back().second, m_BufferList.back().first, sizeof(unsigned), __FILE__, __FUNCTION__, __LINE__);

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	u = *reinterpret_cast<unsigned*>(apFragment.get());
}

void CMessageBuffer::Remove(DWORD& dw)
{
	Denormalize();

	if (m_BufferList.back().first != sizeof(DWORD))
		throw Exception::CSerializationException(m_BufferList.back().second, m_BufferList.back().first, sizeof(DWORD), __FILE__, __FUNCTION__, __LINE__);

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	dw = *reinterpret_cast<DWORD*>(apFragment.get());
}

void CMessageBuffer::Remove(__int64& n)
{
	Denormalize();

	if (m_BufferList.back().first != sizeof(__int64))
		throw Exception::CSerializationException(m_BufferList.back().second, m_BufferList.back().first, sizeof(__int64), __FILE__, __FUNCTION__, __LINE__);

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	n = *reinterpret_cast<__int64*>(apFragment.get());
}

void CMessageBuffer::Remove(unsigned __int64& u)
{
	Denormalize();

	if (m_BufferList.back().first != sizeof(unsigned __int64))
		throw Exception::CSerializationException(m_BufferList.back().second, m_BufferList.back().first, sizeof(unsigned __int64), __FILE__, __FUNCTION__, __LINE__);

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	u = *reinterpret_cast<unsigned __int64*>(apFragment.get());
}

void CMessageBuffer::Remove(GUID& guid)
{
	Denormalize();

	if (m_BufferList.back().first != sizeof(GUID))
		throw Exception::CSerializationException(m_BufferList.back().second, m_BufferList.back().first, sizeof(GUID), __FILE__, __FUNCTION__, __LINE__);

	std::auto_ptr<BYTE> apFragment(m_BufferList.back().second);

	m_BufferList.pop_back();

	guid = *reinterpret_cast<GUID*>(apFragment.get());
}

void CMessageBuffer::Normalize()
{
	if (m_bNormalized)
		return;

	// Calcuate size

	int nSize = sizeof(int);	// Total size space

	for (BufferList::iterator it = m_BufferList.begin(); it != m_BufferList.end(); ++it)
		nSize += sizeof(int) + it->first;

	m_apNormalizedBuffer.reset(new BYTE[nSize]);
	BYTE* pCurrent = m_apNormalizedBuffer.get();

	memcpy(pCurrent, &nSize, sizeof(int));
	pCurrent += sizeof(int);

	for (BufferList::iterator it = m_BufferList.begin(); it != m_BufferList.end(); ++it)
	{
		memcpy(pCurrent, &(it->first), sizeof(int));
		memcpy(pCurrent + sizeof(int), it->second, it->first);
		pCurrent += sizeof(int) + it->first;
	}

	FreeBufferList();

	m_bNormalized = true;
}

void CMessageBuffer::Denormalize()
{
	if (!m_bNormalized)
		return;

	FreeBufferList();

	BYTE* pStart = m_apNormalizedBuffer.get();

	// [TotalSize][Size][Data][Size][Data]...

	int nTotalSize = *reinterpret_cast<int*>(pStart);
	int nCurrentPos = sizeof(int);

	while (nCurrentPos < nTotalSize)
	{
		int nSize = *reinterpret_cast<int*>(pStart + nCurrentPos);
		BYTE* pFragment = new BYTE[nSize];
		memcpy(pFragment, pStart + nCurrentPos + sizeof(int), nSize);

		m_BufferList.push_back(std::make_pair(nSize, pFragment));

		nCurrentPos += sizeof(int) + nSize;
	}

	m_apNormalizedBuffer.reset();

	m_bNormalized = false;
}

//_____________________________________________________________________________
//

CMessage::CMessage(GUID guid, CProtocolInstance* pProtocolInstance)
	: m_guid(guid)
	, m_guidProtocol(pProtocolInstance ? pProtocolInstance->GetProtocol()->GetProtocolGuid() : GUID_NULL)
	, m_guidProtocolInstance(pProtocolInstance ? pProtocolInstance->GetInstanceGuid() : GUID_NULL)
	, m_Timestamp(COleDateTime::GetCurrentTime())
{}

void CMessage::Serialize(CMessageBuffer& buffer)
{
	buffer.Add(sizeof(NetworkRepresentation), std::auto_ptr<BYTE>(reinterpret_cast<BYTE*>(new NetworkRepresentation(this))));
}

//_____________________________________________________________________________
//

void CAbortMessage::Serialize(CMessageBuffer& buffer)
{
	__super::Serialize(buffer);
	buffer.Add(sizeof(NetworkRepresentation), std::auto_ptr<BYTE>(reinterpret_cast<BYTE*>(new NetworkRepresentation(this))));
}

CAtlString CAbortMessage::ToString(AbortReason::Enum reason)
{
	switch(reason)
	{
	case AbortReason::Invalid: return _T("Invalid message received");
	case AbortReason::Shutdown: return _T("Shuting down");
	case AbortReason::Timeout: return _T("Timeout");
	case AbortReason::User: return _T("User cancelled");
	case AbortReason::Socket: return _T("Socket error");
	}

	return _T("Unknown abort reason");
}

}	// namespace Networking
}	// namespace Epoch