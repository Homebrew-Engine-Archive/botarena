#include "stdafx.h"
#include <Networking.h>

namespace Epoch {
namespace Networking {

ptrlist<CProtocol> CProtocol::s_Protocols;

CProtocol* CProtocol::FindProtocol(GUID guidProtocol)
{
	for (ptrlist<CProtocol>::iterator it = s_Protocols.begin(); it != s_Protocols.end(); ++it)
		if ((*it)->GetProtocolGuid() == guidProtocol)
			return *it;

	return NULL;
}

void CProtocol::AddProtocol(std::auto_ptr<CProtocol> apProtocol)
{
	s_Protocols.push_back(apProtocol);
}

void CProtocol::RemoveProtocol(GUID guidProtocol)
{
	for (ptrlist<CProtocol>::iterator it = s_Protocols.begin(); it != s_Protocols.end(); ++it)
		if ((*it)->GetProtocolGuid() == guidProtocol)
		{
			s_Protocols.erase(it);
			return;
		}
}

ptrlist<CProtocol>& CProtocol::GetProtocols()
{
	return s_Protocols;
}

void CProtocol::AddEndNode(CProtocolNode::Direction::Enum direction, counted_ptr<CProtocolNode> cpAfterNode)
{
	if (!cpAfterNode)
		throw Exception::CArgumentException(_T("cpAfterNode"), __FILE__, __FUNCTION__, __LINE__);

	ATLASSERT(cpAfterNode->GetMessageGuid() != __uuidof(CEndMessage));

	if (cpAfterNode->GetChildren().size() &&
		(*(cpAfterNode->GetChildren().begin()))->GetDirection() != direction)
		throw Exception::CArgumentException(_T("direction"), __FILE__, __FUNCTION__, __LINE__);

	cpAfterNode->GetChildren().push_back(
		counted_ptr<CProtocolNode>(new CProtocolNode(__uuidof(CEndMessage), direction, INFINITE, this)));
}

//_____________________________________________________________________________
//

counted_ptr<CProtocolNode> CProtocolNode::AppendNode(counted_ptr<CProtocolNode> cpNode)
{
	return m_pProtocol->AddNode(cpNode, this);
}

void CProtocolNode::AppendEndNode(Direction::Enum direction)
{
	m_pProtocol->AddEndNode(direction, this);
}

//_____________________________________________________________________________
//

CProtocolInstance::CProtocolInstance(CProtocol* pProtocol, CMessageConnection* pConnection)
	: m_pProtocol(pProtocol)
	, m_pCurrentNode(NULL)
	, m_pConnection(pConnection)
	, m_bInitiator(true)
	, m_guidInstance(Guid::Create())
	, m_pContext(NULL)
	//, m_Messages(1)
{
	m_pProtocol->OnBegin(this);
	SendMessage(std::auto_ptr<CMessage>(new CBeginMessage(this)));
	ExecutionCallback(false);
}

void CProtocolInstance::SendAbortMessage(CAbortMessage::AbortReason::Enum reason, int nCode)
{
	m_Messages.AddJob(new CAbortMessage(this, reason, nCode));
}

void CProtocolInstance::SendEndMessage()
{
	m_Messages.AddJob(new CEndMessage(this));
}

void CProtocolInstance::ExecutionCallback(bool bTimeout)
{
	if (bTimeout)
	{
		Abort(true, CAbortMessage::AbortReason::Timeout);
		return;
	}

	do
	{
		std::auto_ptr<CMessage> apMessage = FetchMessage();
		CProtocolNode::Direction::Enum messageDirection = apMessage->IsLocal()
			? CProtocolNode::Direction::Outgoing
			: CProtocolNode::Direction::Incoming;

		GUID guidMessage = apMessage->GetMessageGuid();

		if (!m_pCurrentNode)
		{
			if (guidMessage != m_pProtocol->m_cpBeginNode->GetMessageGuid())
			{
				std::auto_ptr<CMessage> apAbortMessage(new CAbortMessage(this,
					CAbortMessage::AbortReason::Invalid));
				m_pConnection->SendMessage(apAbortMessage);
				Abort(true, CAbortMessage::AbortReason::Invalid);
				return;
			}

			m_pCurrentNode = m_pProtocol->m_cpBeginNode.GetPointer();

			if (messageDirection == CProtocolNode::Direction::Outgoing)
				try
				{
					m_pConnection->SendMessage(apMessage);
				}
				catch (Exception::CSocketException& exception)
				{
					Abort(true, CAbortMessage::AbortReason::Socket, exception.GetErrorCode());
					return;
				}

			continue;
		}

		if (guidMessage == __uuidof(CAbortMessage))
		{
			CAbortMessage* pAbortMessage = reinterpret_cast<CAbortMessage*>(apMessage.get());
			if (messageDirection == CProtocolNode::Direction::Outgoing)
			{
				CAbortMessage::AbortReason::Enum abortReason = pAbortMessage->GetAbortReason();
				int nAbortCode = pAbortMessage->GetAbortCode();

				m_pConnection->SendMessage(apMessage);

				Abort(true, abortReason, nAbortCode);
			}
			else
				Abort(false, pAbortMessage->GetAbortReason(), pAbortMessage->GetAbortCode());

			return;
		}

		CProtocolNode* pNextProtocolNode = NULL;

		for(std::list<counted_ptr<CProtocolNode> >::iterator it = m_pCurrentNode->GetChildren().begin();
			it != m_pCurrentNode->GetChildren().end();
			++it)
		{
			CProtocolNode::Direction::Enum protocolDirection = (*it)->GetDirection();
			if (!m_bInitiator)
				if (protocolDirection == CProtocolNode::Direction::Incoming)
					protocolDirection = CProtocolNode::Direction::Outgoing;
				else
					protocolDirection = CProtocolNode::Direction::Incoming;

			if (((*it)->GetMessageGuid() == guidMessage) &&
				(messageDirection == protocolDirection))
			{
				pNextProtocolNode = it->GetPointer();
				break;
			}
		}

		if (!pNextProtocolNode)
		{
			std::auto_ptr<CMessage> apAbortMessage(new CAbortMessage(this,
				CAbortMessage::AbortReason::Invalid));
			m_pConnection->SendMessage(apAbortMessage);
			Abort(true, CAbortMessage::AbortReason::Invalid);
			return;
		}

		m_pCurrentNode = pNextProtocolNode;

		if (messageDirection == CProtocolNode::Direction::Incoming)
		{
			if (guidMessage != __uuidof(CEndMessage))
				m_pConnection->OnMessage(apMessage.get(), this);
		}
		else
			try
			{
				m_pConnection->SendMessage(apMessage);
			}
			catch (Exception::CSocketException& exception)
			{
				Abort(true, CAbortMessage::AbortReason::Socket, exception.GetErrorCode());
				return;
			}

		if (guidMessage == __uuidof(CEndMessage))
		{
			m_pConnection->DestroyProtocolInstance(this);
			return;
		}

		//_tprintf(_T("Current message: %s. Waiting for %08x...\n"),
			//Guid::ToString(apMessage->GetMessageGuid()), m_pCurrentNode->GetTimeoutForResponse());
	}
	while (m_Messages.GetJobCount());

	m_cpNextCallback = Threading::CThreadPool::Queue(
		m_Messages.GetJobsEvent().GetHandle(),
		Threading::CThreadPool::WaitCallback(this, &CProtocolInstance::ExecutionCallback),
		m_pCurrentNode->GetTimeoutForResponse());
}

}	// namespace Networking
}	// namespace Epoch