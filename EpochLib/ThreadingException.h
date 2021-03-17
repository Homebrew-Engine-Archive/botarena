#pragma once

namespace Epoch {
namespace Exception {

class EPOCH_EXPORT CThreadStateException : public Exception::CRecoverableException
{
public:
	CThreadStateException(Threading::CThread::State::Enum state, Threading::CThread::State::Enum expectedState)
		: CRecoverableException(ERROR_INVALID_STATE)
		, m_State(state)
		, m_ExpectedState(expectedState)
	{
		m_strMessage.Format(_T("Invalid State {%d}. Expected State {%d}."), m_State, m_ExpectedState);
	}

	Threading::CThread::State::Enum GetState() const			{ return m_State; }
	Threading::CThread::State::Enum GetExpectedState() const	{ return m_ExpectedState; }

protected:
	Threading::CThread::State::Enum	m_State;
	Threading::CThread::State::Enum	m_ExpectedState;
};

}	// namespace Exception
}	// namespace Epoch