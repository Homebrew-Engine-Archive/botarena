#pragma once

//____________________________________________________________________________
//
template <class InplayContainerType, class HandContainerType, class LifeType>
class CPlayerProjectionBase
{
public:
	CPlayerProjectionBase(const CPlayer* pPlayer)
		: m_pPlayer(pPlayer)
		, m_Life(Life(-1))
	{}

	const CPlayer* GetPlayer() const { return m_pPlayer; }
	Life GetLife() const { return m_Life; }
	
	BOOL HasInplayCard(const CCard* pCard) const { return m_InplayCards.ContainsKey(pCard->GetInstanceID()); }
	BOOL HasHandCard(const CCard* pCard) const { return m_HandCards.Contains(pCard->GetInstanceID()); }

	int GetInplayCardCount() const { return m_InplayCards.GetSize(); }
	Life GetCreatureLife(const CCreatureCard* pCreature) const
	{
		int nLife;
		if (!m_InplayCards.Get(pCreature->GetInstanceID(), nLife))
			return Life(-1);

		return Life(nLife);
	}

	void Clear()
	{
		m_InplayCards.RemoveAll();
		m_HandCards.RemoveAll();
		m_Life = Life(-1);
	}

	void SetPlayerInfo(Life nLife) { m_Life = nLife; }
	void SetInplayCardInfo(UINT uCardInstanceID, Life nLife) { m_InplayCards.Set(uCardInstanceID, GET_INTEGER(nLife)); }
	void SetHandCardInfo(UINT uCardInstanceID) { m_HandCards.Set(uCardInstanceID); }

protected:
	const CPlayer*		m_pPlayer;
	InplayContainerType	m_InplayCards;
	HandContainerType	m_HandCards;
	LifeType			m_Life;
};

//____________________________________________________________________________
//
class CPlayerProjection : public CPlayerProjectionBase<CDictionary<UINT, int>, CSet<UINT>, Life>
{
	friend class CPlayerProjection_;

public:
	CPlayerProjection(const CPlayer* pPlayer)
		: CPlayerProjectionBase(pPlayer)
	{}
};

//____________________________________________________________________________
//
class CPlayerProjection_ : public CPlayerProjectionBase<CDictionary_<UINT, int>, CSet_<UINT>, Life_>
{
public:
	CPlayerProjection_(const CPlayer* pPlayer)
		: CPlayerProjectionBase(pPlayer)
	{}

	CPlayerProjection_& operator=(const CPlayerProjection& projection);
};

//____________________________________________________________________________
//
class CORE_EXPORT CStackProjection
{
public:
	CStackProjection(CGame* pGame);
	~CStackProjection();

	void Initialize();

	void Clear();
	void Project();	

	BOOL Ready() const;

	BOOL CreaturesLifeMayChange(const CCreatureCard* pCreature, 
								BOOL bCheckIncrease, BOOL bCheckDecrease) const;
	BOOL PlayersLifeMayChange(const CPlayer* pPlayer,
							  BOOL bCheckIncrease, BOOL bCheckDecrease) const;

    BOOL CardMayLeaveInplay(const CCard* pCard) const;
	BOOL CardMayBeDiscarded(const CCard* pCard) const;

protected:
	struct State
	{
		enum Enum
		{
			Null,			// Not ready
			Valid,			// Ready
			Empty,			// Ready but no projection possible
		};

		DEFINE_DISTINCT_ENUM_OPS(State);
	};

	CPlayerProjection_* GetProjection(const CPlayer* pPlayer);

	CGame* m_pGame;

	std::vector<CPlayerProjection_*> m_Projections;
	CStateSupportEnumType<State>	m_State;
};