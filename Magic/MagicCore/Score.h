#pragma once

class CScore
{
public:
	static const CScore s_Minimum;
	static const CScore s_Maximum;

	static CScore& Minimum(const CScore& score1, const CScore& score2)
	{
		if (score1 < score2)
			return const_cast<CScore&>(score1);

		return const_cast<CScore&>(score2);
	}

	static CScore& Maximum(const CScore& score1, const CScore& score2)
	{
		if (score2 < score1)
			return const_cast<CScore&>(score1);

		return const_cast<CScore&>(score2);
	}

	CScore()
	{
		Clear();
	}

	explicit CScore(int nS0, int nS1 = 0, int nS2 = 0, int nS3 = 0,
		int nS4 = 0, int nS5 = 0, int nS6 = 0, int nS7 = 0, int nS8 = 0, int nS9 = 0)
	{
		Clear();
		m_bValid = true;
		m_SubScores[0] = nS0;
		m_SubScores[1] = nS1;
		m_SubScores[2] = nS2;
		m_SubScores[3] = nS3;
		m_SubScores[4] = nS4;
		m_SubScores[5] = nS5;
		m_SubScores[6] = nS6;
		m_SubScores[7] = nS7;
		m_SubScores[8] = nS8;
		m_SubScores[9] = nS9;
	}

	CScore(const CScore& score)
	{
		Clear();
		operator=(score);
	}

	void Clear()
	{
		m_bValid = false;
		for (int i = 0; i < _Parts; ++i)
			m_SubScores[i] = 0;
	}

	bool IsValid() const { return m_bValid; }

	void SetToIvalid()	{ m_bValid = false; }

	void SetToMaximum()
	{
		Clear();
		m_bValid = true;
		m_SubScores[Limits] = 1;
	}

	void SetToMinimum()
	{
		Clear();
		m_bValid = true;
		m_SubScores[Limits] = -1;
	}

	bool IsMaximum() const
	{ 
		if (!m_bValid)
			return false;

		return m_SubScores[Limits] == 1;
	}

	bool IsMinimum() const
	{ 
		if (!m_bValid)
			return false;

		return m_SubScores[Limits] == -1;
	}

	void Calculate(const CPlayer* pPlayer);

	CScore& operator=(const CScore& score)
	{
		if (&score == this)
			return *this;

		m_bValid = score.m_bValid;

		for (int i = 0; i < _Parts; ++i)
			m_SubScores[i] = score.m_SubScores[i];

		return *this;
	}

	bool operator<(const CScore& score) const
	{
		ATLASSERT(m_bValid && score.m_bValid);
		if (!m_bValid || !score.m_bValid)
			return false;
		for (int i = 0; i < _Parts; ++i)
		{
			if (m_SubScores[i] == score.m_SubScores[i])
				continue;

			return m_SubScores[i] < score.m_SubScores[i];
		}
		return false;
	}

	bool operator>=(const CScore& score) const
	{
		return !operator<(score);
	}

	bool operator>(const CScore& score) const
	{
		ATLASSERT(m_bValid && score.m_bValid);
		if (!m_bValid || !score.m_bValid)
			return false;
		for (int i = 0; i < _Parts; ++i)
		{
			if (m_SubScores[i] == score.m_SubScores[i])
				continue;

			return m_SubScores[i] > score.m_SubScores[i];
		}
		return false;
	}

	bool operator<=(const CScore& score) const
	{
		return !operator>(score);
	}

	bool operator==(const CScore& score) const
	{
		ATLASSERT(m_bValid && score.m_bValid);
		if (!m_bValid || !score.m_bValid)
			return false;
		for (int i = 0; i < _Parts; ++i)
			if (m_SubScores[i] != score.m_SubScores[i])
				return false;
		return true;
	}

	bool operator!=(const CScore& score) const
	{
		return !operator==(score);
	}

	CString ToString(CGame* pGame) const;

protected:
	enum	
	{
		Limits,			// -1: minimum, 1: maximum
		Wins,
			WinsOverkill,
			WinsAction,			
		Creatures,
		Life,			// player's life - total life of opponents
		Library,		// if no. of library cards < 10: -(10 - player's library) + (10 - opponents' library)
		InPlayCards,	// see CCard::GetScore() and CCreatureCard::GetScore()
		InHandCards,
		Misc,			// -(no. of taken moves so far from the beginning of the thinking process)

		_Parts
	};

	static const int s_LifeScoreMappings[];

	bool	m_bValid;
	int		m_SubScores[_Parts];
};
