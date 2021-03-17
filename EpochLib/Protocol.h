#pragma once

#include <list>

#pragma warning( push )
#pragma warning( disable : 4251 )

namespace Epoch {
namespace Networking {

class CProtocol;

class EPOCH_EXPORT CProtocolNode : public CReferenceCounted<>
{
public:
	struct Direction
	{
		enum Enum
		{
			Incoming,
			Outgoing
		};
	};

	CProtocolNode(GUID guidMessage, Direction::Enum direction, DWORD dwTimeoutForResponse = INFINITE, CProtocol* pProtocol = NULL)
		: m_guidMessage(guidMessage)
		, m_Direction(direction)
		, m_dwTimeoutForResponse(dwTimeoutForResponse)
		, m_pProtocol(pProtocol)
	{}

	virtual ~CProtocolNode()
	{
		LOG_DEBUG(_T("CProtocolNode %08x destructor for message %s."), this, Guid::ToString(m_guidMessage));
	}

	void SetProtocol(CProtocol* pProtocol)
	{
		m_pProtocol = pProtocol;
	}

	CProtocol* GetProtocol()
	{
		return m_pProtocol;
	}

	Direction::Enum GetDirection()
	{
		return m_Direction;
	}

	GUID GetMessageGuid()
	{
		return m_guidMessage;
	}
	
	DWORD GetTimeoutForResponse()
	{
		return m_dwTimeoutForResponse;
	}

	std::list<counted_ptr<CProtocolNode> >& GetChildren()
	{
		return m_Children;
	}

	counted_ptr<CProtocolNode> AppendNode(counted_ptr<CProtocolNode> cpNode);
	void AppendEndNode(Direction::Enum direction);

protected:
	GUID									m_guidMessage;
	Direction::Enum							m_Direction;
	DWORD									m_dwTimeoutForResponse;
	std::list<counted_ptr<CProtocolNode> >	m_Children;
	CProtocol*								m_pProtocol;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CProtocol
{
	friend CProtocolInstance;
	friend CMessageConnection;
public:
	static CProtocol* FindProtocol(GUID guidProtocol);
	static void AddProtocol(std::auto_ptr<CProtocol> apProtocol);
	static void RemoveProtocol(GUID guidProtocol);
	static ptrlist<CProtocol>& GetProtocols();

	CProtocol(GUID guidProtocol, DWORD dwTimeoutForBeginMessage = INFINITE)
		: m_guid(guidProtocol)
		, m_cpBeginNode(
			counted_ptr<CProtocolNode>(new CProtocolNode(__uuidof(CBeginMessage), CProtocolNode::Direction::Outgoing, dwTimeoutForBeginMessage, this)))
	{
	}

	~CProtocol()
	{
		LOG_DEBUG(_T("CProtocol %08x destructor for protocol %s."), this, Guid::ToString(m_guid));
	}

	GUID GetProtocolGuid() { return m_guid; }

	counted_ptr<CProtocolNode> GetBeginNode()
	{
		return m_cpBeginNode;
	}

	counted_ptr<CProtocolNode> AddNode(counted_ptr<CProtocolNode> cpNode)
	{
		if (!cpNode)
			throw Exception::CArgumentException(_T("cpNode"), __FILE__, __FUNCTION__, __LINE__);

		ATLASSERT(cpNode->GetMessageGuid() != __uuidof(CBeginMessage));

		if (m_cpBeginNode->GetChildren().size() &&
			(*(m_cpBeginNode->GetChildren().begin()))->GetDirection() != cpNode->GetDirection())
			throw Exception::CArgumentException(_T("cpNode"), __FILE__, __FUNCTION__, __LINE__);

		cpNode->SetProtocol(this);
		m_cpBeginNode->GetChildren().push_back(cpNode);
		return cpNode;
	}

	counted_ptr<CProtocolNode> AddNode(counted_ptr<CProtocolNode> cpNode, counted_ptr<CProtocolNode> cpAfterNode)
	{
		if (!cpNode)
			throw Exception::CArgumentException(_T("cpNode"), __FILE__, __FUNCTION__, __LINE__);

		if (!cpAfterNode)
			throw Exception::CArgumentException(_T("cpAfterNode"), __FILE__, __FUNCTION__, __LINE__);

		ATLASSERT(cpAfterNode->GetMessageGuid() != __uuidof(CEndMessage));

		if (cpAfterNode->GetChildren().size() &&
			(*(cpAfterNode->GetChildren().begin()))->GetDirection() != cpNode->GetDirection())
			throw Exception::CArgumentException(_T("cpNode"), __FILE__, __FUNCTION__, __LINE__);

		if (cpNode.GetPointer() == cpAfterNode.GetPointer())
			cpNode.DisableCounting();

		cpNode->SetProtocol(this);
		cpAfterNode->GetChildren().push_back(cpNode);
		return cpNode;
	}

	void AddEndNode(CProtocolNode::Direction::Enum direction, counted_ptr<CProtocolNode> cpAfterNode);

protected:
	static ptrlist<CProtocol> s_Protocols;

	virtual void OnBegin(CProtocolInstance* pProtocolInstance) {}
	virtual void OnEnd(CProtocolInstance* pProtocolInstance) {}
	virtual void OnAbort(CProtocolInstance* pProtocolInstance, bool bLocal, CAbortMessage::AbortReason::Enum reason, int nCode = 0) {}

	GUID						m_guid;
	counted_ptr<CProtocolNode>	m_cpBeginNode;
};

//_____________________________________________________________________________
//

class EPOCH_EXPORT CProtocolInstance
{
public:
	// Constructor for initiating a new protocol instance
	CProtocolInstance(CProtocol* pProtocol, CMessageConnection* pConnection);

	// Constructor for cloning a new protocol instance
	CProtocolInstance(CProtocol* pProtocol, CMessageConnection* pConnection, std::auto_ptr<CMessage> apBeginMessage)
		: m_pProtocol(pProtocol)
		, m_pCurrentNode(NULL)
		, m_pConnection(pConnection)
		, m_bInitiator(false)
		, m_guidInstance(apBeginMessage->GetProtocolInstanceGuid())
		, m_pContext(NULL)
		//, m_Messages(1)
	{
		m_pProtocol->OnBegin(this);
		ReceiveMessage(apBeginMessage);
		ExecutionCallback(false);
	}

	~CProtocolInstance()
	{
		m_pProtocol->OnEnd(this);

		LOG_DEBUG(_T("CProtocolInstance %08x destructor."), this);
	}

	CProtocol* GetProtocol()
	{
		return m_pProtocol;
	}

	void SendMessage(std::auto_ptr<CMessage> apMessage)
	{
		m_Messages.AddJob(apMessage.release());
	}

	void ReceiveMessage(std::auto_ptr<CMessage> apMessage)
	{
		m_Messages.AddJob(apMessage.release());
	}

	void SendAbortMessage(CAbortMessage::AbortReason::Enum reason = CAbortMessage::AbortReason::User, int nCode = 0);

	void SendEndMessage();

	GUID GetInstanceGuid()
	{
		return m_guidInstance;
	}

	void SetContext(void* pContext)
	{
		m_pContext = pContext;
	}

	void* GetContext()
	{
		return m_pContext;
	}

protected:
	void Abort(bool bLocal, CAbortMessage::AbortReason::Enum reason, int nCode = 0)
	{
		if (m_cpNextCallback.GetPointer())
			Threading::CThreadPool::Dequeue(m_cpNextCallback.GetPointer());

		m_pProtocol->OnAbort(this, bLocal, reason, nCode);
		m_pConnection->DestroyProtocolInstance(this);
	}

	virtual std::auto_ptr<CMessage> FetchMessage()
	{
		CMessage* pMessage;
		m_Messages.RemoveJob(pMessage);
		return std::auto_ptr<CMessage>(pMessage);
	}

	void ExecutionCallback(bool bTimeout);
	
	bool								m_bInitiator;
	CMessageConnection*					m_pConnection;
	CProtocol*							m_pProtocol;
	CProtocolNode*						m_pCurrentNode;
	Threading::CJobQueue<CMessage*>		m_Messages;
	counted_ptr<Threading::CWaitThread>	m_cpNextCallback;
	GUID								m_guidInstance;
	void*								m_pContext;
	CAtlString							m_strContext;
};

}	// namespace Networking
}	// namespace Epoch

#pragma warning( pop )