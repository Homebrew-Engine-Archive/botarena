#pragma once

/*

	TriggeredXXXAbility
		|
		^
		|
	TriggeredCallbackHelper<..., TriggeredXXXAbility, ...>
		|
		^ 
		|
	TTriggeredAbility<TriggeredXXXAbility, ...>
		has_a Trigger

*/

template <typename P>
struct TriggerParamHelper
{
	static CPlayer* GetPlayer(const P& p) { return NULL; }
};

template <>
struct TriggerParamHelper<CPlayer*>
{
	static CPlayer* GetPlayer(CPlayer* p) { return p; }
};

template <>
struct TriggerParamHelper<CZone*>
{
	static CPlayer* GetPlayer(CZone* p) { return p->GetPlayer(); }
};

template <>
struct TriggerParamHelper<CCard*>
{
	static CPlayer* GetPlayer(CCard* p) { return p->GetController(); }
};

template <>
struct TriggerParamHelper<CCreatureCard*>
{
	static CPlayer* GetPlayer(CCreatureCard* p) { return p->GetController(); }
};

template <>
struct TriggerParamHelper<CNode*>
{
	static CPlayer* GetPlayer(CNode* p) { return p->GetGraph()->GetPlayer(); }
};

template <>
struct TriggerParamHelper<const CManaProductionAbilityAction*>
{
	static CPlayer* GetPlayer(const CManaProductionAbilityAction* p) { return p->GetController(); }
};

template <>
struct TriggerParamHelper<Damage>
{
	static CPlayer* GetPlayer(Damage damage) { return damage.m_pSourceCard->GetController(); }
};

template <>
struct TriggerParamHelper<AttackSubject>
{
	static CPlayer* GetPlayer(AttackSubject attacked) 
	{ 
		if (attacked.pPlayer)
			return attacked.pPlayer;
		return attacked.cpPlaneswalker->GetController(); 
	}
};

//____________________________________________________________________________
//
template<int nParamCount, class D, class A, class P>
struct TriggerCallbackHelper;

template<class D, class A, class P>
struct TriggerCallbackHelper<0, D, A, P> : public A
{
	typedef FastDelegate< bool ( typename A::TriggerContextType& ) > ContextFunction;
	typedef P ParentClass;

	TriggerCallbackHelper(CCard* pCard)
		: A(pCard)
	{}

	void Func()
	{
		Trigger(GetTriggerContext(), TriggerInfo());
	}

	void SetContextFunction(ContextFunction func) { m_ContextFunction = func; }

private:
	void Trigger(const typename A::TriggerContextType& triggerContext,
				 const TriggerInfo& info) const
	{
		typename A::TriggerContextType tempTriggerContext(triggerContext);

		if (!m_ContextFunction.empty() && !m_ContextFunction(tempTriggerContext))
			return;

		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif

			/*(
			counted_ptr<TTriggeredStackAction<TriggerContextType>> cpAction(::CreateObject<TTriggeredStackAction<TriggerContextType>>());
			cpAction->SetAbility(const_cast<CTriggeredAbility*>((const CTriggeredAbility*)this));
			cpAction->SetTriggerContext(tempTriggerContext);
			cpAction->SetTriggerInfo(info);
			*/
			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));

			if (bSetNames)
				cpAction->SetActionName(_T("put ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName() + _T(" on the stack"));

			TriggerToPlayer(GetController(), cpAction.GetPointer());
		}
		else
		{
			PlayerSelections(GetController(), tempTriggerContext, info);
		}
	}

	ContextFunction m_ContextFunction;
};

template<class D, class A, class P>
struct TriggerCallbackHelper<1, D, A, P> : public A
{
	typedef FastDelegate< bool ( typename A::TriggerContextType&, typename D::P1 ) > ContextFunction;
	typedef P ParentClass;

	TriggerCallbackHelper(CCard* pCard)
		: A(pCard)
	{}

	void Func(typename D::P1 p1)
	{
		Trigger(GetTriggerContext(), TriggerInfo(TriggerParamHelper<D::P1>::GetPlayer(p1)), p1);
	}

	void SetContextFunction(ContextFunction func) { m_ContextFunction = func; }

private:
	void Trigger(const typename A::TriggerContextType& triggerContext,
				 const TriggerInfo& info,
				 typename D::P1 p1) const
	{
		typename A::TriggerContextType tempTriggerContext(triggerContext);

		if (!m_ContextFunction.empty() && !m_ContextFunction(tempTriggerContext, p1))
			return;

		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));

			if (bSetNames)
			{
				CString strActionName;

				CString strHint = ((const ParentClass*)this)->GetTrigger().GetTriggeredHint(p1);
				if (!strHint.IsEmpty())
					strActionName.Format(_T("put %s of %s on the stack (%s)"),
						GetAbilityName(), GetCard()->GetCardName(), strHint);
				else
					strActionName.Format(_T("put %s of %s on the stack"),
						GetAbilityName(), GetCard()->GetCardName());

				cpAction->SetActionName(strActionName);
			}

			TriggerToPlayer(GetController(), cpAction.GetPointer());
		}
		else
		{
			PlayerSelections(GetController(), tempTriggerContext, info);
		}
	}

	ContextFunction m_ContextFunction;
};

template<class D, class A, class P>
struct TriggerCallbackHelper<2, D, A, P> : public A
{
	typedef FastDelegate< bool ( typename A::TriggerContextType&, typename D::P1, typename D::P2 ) > ContextFunction;
	typedef P ParentClass;

	TriggerCallbackHelper(CCard* pCard)
		: A(pCard)
	{}

	void Func(typename D::P1 p1, typename D::P2 p2)
	{
		Trigger(GetTriggerContext(), 
				TriggerInfo(
				TriggerParamHelper<D::P1>::GetPlayer(p1), 
				TriggerParamHelper<D::P2>::GetPlayer(p2)),
				p1, p2);
	}

	void SetContextFunction(ContextFunction func) { m_ContextFunction = func; }

private:
	void Trigger(const typename A::TriggerContextType& triggerContext,
				 const TriggerInfo& info,
				 typename D::P1 p1,
				 typename D::P2 p2) const
	{
		typename A::TriggerContextType tempTriggerContext(triggerContext);

		if (!m_ContextFunction.empty() && !m_ContextFunction(tempTriggerContext, p1, p2))
			return;

		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif
			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));

			if (bSetNames)
			{
				CString strActionName;

				CString strHint = ((const ParentClass*)this)->GetTrigger().GetTriggeredHint(p1, p2);
				if (!strHint.IsEmpty())
					strActionName.Format(_T("put %s of %s on the stack (%s)"),
						GetAbilityName(), GetCard()->GetCardName(), strHint);
				else
					strActionName.Format(_T("put %s of %s on the stack"),
						GetAbilityName(), GetCard()->GetCardName());

				cpAction->SetActionName(strActionName);
			}

			TriggerToPlayer(GetController(), cpAction.GetPointer());
		}
		else
		{
			PlayerSelections(GetController(), tempTriggerContext, info);
		}
	}

	ContextFunction m_ContextFunction;
};

template<class D, class A, class P>
struct TriggerCallbackHelper<3, D, A, P> : public A
{
	typedef FastDelegate< bool ( typename A::TriggerContextType&, typename D::P1, typename D::P2, typename D::P3 ) > ContextFunction;
	typedef P ParentClass;

	TriggerCallbackHelper(CCard* pCard)
		: A(pCard)
	{}

	void Func(typename D::P1 p1, typename D::P2 p2, typename D::P3 p3)
	{
		Trigger(GetTriggerContext(), 
				TriggerInfo(
				TriggerParamHelper<D::P1>::GetPlayer(p1), 
				TriggerParamHelper<D::P2>::GetPlayer(p2),
				TriggerParamHelper<D::P3>::GetPlayer(p3)),
				p1, p2, p3);
	}

	void SetContextFunction(ContextFunction func) { m_ContextFunction = func; }

private:
	void Trigger(const typename A::TriggerContextType& triggerContext,
				 const TriggerInfo& info,
				 typename D::P1 p1,
				 typename D::P2 p2,
				 typename D::P3 p3) const
	{
		typename A::TriggerContextType tempTriggerContext(triggerContext);

		if (!m_ContextFunction.empty() && !m_ContextFunction(tempTriggerContext, p1, p2, p3))
			return;

		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));

			if (bSetNames)
			{
				CString strActionName;

				CString strHint = ((const ParentClass*)this)->GetTrigger().GetTriggeredHint(p1, p2, p3);
				if (!strHint.IsEmpty())
					strActionName.Format(_T("put %s of %s on the stack (%s)"),
						GetAbilityName(), GetCard()->GetCardName(), strHint);
				else
					strActionName.Format(_T("put %s of %s on the stack"),
						GetAbilityName(), GetCard()->GetCardName());

				cpAction->SetActionName(strActionName);
			}

			TriggerToPlayer(GetController(), cpAction.GetPointer());
		}
		else
		{
			PlayerSelections(GetController(), tempTriggerContext, info);
		}
	}

	ContextFunction m_ContextFunction;
};

template<class D, class A, class P>
struct TriggerCallbackHelper<4, D, A, P> : public A
{
	typedef FastDelegate< bool ( typename A::TriggerContextType&, typename D::P1, typename D::P2, typename D::P3, typename D::P4 ) > ContextFunction;
	typedef P ParentClass;

	TriggerCallbackHelper(CCard* pCard)
		: A(pCard)
	{}

	void Func(typename D::P1 p1, typename D::P2 p2, typename D::P3 p3, typename D::P4 p4)
	{
		Trigger(GetTriggerContext(), 
				TriggerInfo(
				TriggerParamHelper<D::P1>::GetPlayer(p1), 
				TriggerParamHelper<D::P2>::GetPlayer(p2),
				TriggerParamHelper<D::P3>::GetPlayer(p3),
				TriggerParamHelper<D::P4>::GetPlayer(p4)),
				p1, p2, p3, p4);
	}

	void SetContextFunction(ContextFunction func) { m_ContextFunction = func; }

private:
	void Trigger(const typename A::TriggerContextType& triggerContext,
				 const TriggerInfo& info,
				 typename D::P1 p1,
				 typename D::P2 p2,
				 typename D::P3 p3,
				 typename D::P4 p4) const
	{
		typename A::TriggerContextType tempTriggerContext(triggerContext);

		if (!m_ContextFunction.empty() && !m_ContextFunction(tempTriggerContext, p1, p2, p3, p4))
			return;

		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif
			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));

			if (bSetNames)
			{
				CString strActionName;

				CString strHint = ((const ParentClass*)this)->GetTrigger().GetTriggeredHint(p1, p2, p3, p4);
				if (!strHint.IsEmpty())
					strActionName.Format(_T("put %s of %s on the stack (%s)"),
						GetAbilityName(), GetCard()->GetCardName(), strHint);
				else
					strActionName.Format(_T("put %s of %s on the stack"),
						GetAbilityName(), GetCard()->GetCardName());

				cpAction->SetActionName(strActionName);
			}

			TriggerToPlayer(GetController(), cpAction.GetPointer());
		}
		else
		{
			PlayerSelections(GetController(), tempTriggerContext, info);
		}
	}

	ContextFunction m_ContextFunction;
};

template<class D, class A, class P>
struct TriggerCallbackHelper<5, D, A, P> : public A
{
	typedef FastDelegate< bool ( typename A::TriggerContextType&, typename D::P1, typename D::P2, typename D::P3, typename D::P4, typename D::P5 ) > ContextFunction;
	typedef P ParentClass;

	TriggerCallbackHelper(CCard* pCard)
		: A(pCard)
	{}

	void Func(typename D::P1 p1, typename D::P2 p2, typename D::P3 p3, typename D::P4 p4, typename D::P5 p5)
	{
		Trigger(GetTriggerContext(), 
				TriggerInfo(
				TriggerParamHelper<D::P1>::GetPlayer(p1), 
				TriggerParamHelper<D::P2>::GetPlayer(p2),
				TriggerParamHelper<D::P3>::GetPlayer(p3),
				TriggerParamHelper<D::P4>::GetPlayer(p4),
				TriggerParamHelper<D::P5>::GetPlayer(p5)),
				p1, p2, p3, p4, p5);
	}

	void SetContextFunction(ContextFunction func) { m_ContextFunction = func; }

private:
	void Trigger(const typename A::TriggerContextType& triggerContext,
				 const TriggerInfo& info,
				 typename D::P1 p1,
				 typename D::P2 p2,
				 typename D::P3 p3,
				 typename D::P4 p4,
				 typename D::P5 p5) const
	{
		typename A::TriggerContextType tempTriggerContext(triggerContext);

		if (!m_ContextFunction.empty() && !m_ContextFunction(tempTriggerContext, p1, p2, p3, p4, p5))
			return;

		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif
			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));

			if (bSetNames)
			{
				CString strActionName;

				CString strHint = ((const ParentClass*)this)->GetTrigger().GetTriggeredHint(p1, p2, p3, p4, p5);
				if (!strHint.IsEmpty())
					strActionName.Format(_T("put %s of %s on the stack (%s)"),
						GetAbilityName(), GetCard()->GetCardName(), strHint);
				else
					strActionName.Format(_T("put %s of %s on the stack"),
						GetAbilityName(), GetCard()->GetCardName());

				cpAction->SetActionName(strActionName);
			}

			TriggerToPlayer(GetController(), cpAction.GetPointer());
		}
		else
		{
			PlayerSelections(GetController(), tempTriggerContext, info);
		}
	}

	ContextFunction m_ContextFunction;
};

//____________________________________________________________________________
//
template <class A, class T, class D = T::EventCallback, void (T::*F)(D) = &T::SetEventCallback> 
class TTriggeredAbility 
	: public TriggerCallbackHelper<D::ParamCount, D, A, TTriggeredAbility<A, T, D, F>>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	TTriggeredAbility(CCard* pCard, CCard* pTriggerOnCard = NULL)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard)
	{
		Initialize();
	}

	template <typename P1>
	TTriggeredAbility(CCard* pCard, P1 p1, CCard* pTriggerOnCard = NULL)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard, p1)
	{
		Initialize();
	}

	template <typename P1, typename P2>
	TTriggeredAbility(CCard* pCard, P1 p1, P2 p2, CCard* pTriggerOnCard = NULL)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard, p1, p2)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3>
	TTriggeredAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, CCard* pTriggerOnCard = NULL)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard, p1, p2, p3)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3, typename P4>
	TTriggeredAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, CCard* pTriggerOnCard = NULL)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard, p1, p2, p3, p4)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	TTriggeredAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, CCard* pTriggerOnCard = NULL)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard, p1, p2, p3, p4, p5)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
	TTriggeredAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, CCard* pTriggerOnCard = pCard)
		: TriggerCallbackHelper(pCard)
		, m_T(pTriggerOnCard ? pTriggerOnCard : pCard, p1, p2, p3, p4, p5, p6)
	{
		Initialize();
	}

	void Initialize()
	{
		((m_T).*(F))(D(this, &typename TriggerCallbackHelper::Func));
	}

public:
	const T& GetTrigger() const { return m_T; }
	T& GetTrigger() { return m_T; }

private:
	typename T m_T;
};

//____________________________________________________________________________
//
typedef char (&no_tag)[1]; 
typedef char (&yes_tag)[2]; 

template < typename T, CCard* T::* > struct ptm_card_helper {}; 

template< typename T > no_tag has_card_member_helper(...); 
template< typename T > yes_tag has_card_member_helper(ptm_card_helper<T, &T::m_pCard>* p); 

template< typename T > 
struct has_card_member 
{ 
	static const bool value = sizeof(has_card_member_helper<T>(0)) == sizeof(yes_tag);
}; 

template < typename T, CCreatureCard* T::* > struct ptm_creature_helper {}; 

template< typename T > no_tag has_creature_member_helper(...); 
template< typename T > yes_tag has_creature_member_helper(ptm_creature_helper<T, &T::m_pCreature>* p); 

template< typename T > 
struct has_creature_member 
{ 
	static const bool value = sizeof(has_creature_member_helper<T>(0)) == sizeof(yes_tag);
}; 

template <int selector, typename A, typename T, typename D, void (T::*F)(D)>
struct ResolveCardHelper : public TTriggeredAbility<A, T, D, F>
{
	ResolveCardHelper(CCard* pCard)
		: TTriggeredAbility(pCard)
	{}

	template <typename P1>
	ResolveCardHelper(CCard* pCard, P1 p1)
		: TTriggeredAbility(pCard, p1)
	{}

	template <typename P1, typename P2>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2)
		: TTriggeredAbility(pCard, p1, p2)
	{}

	template <typename P1, typename P2, typename P3>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: TTriggeredAbility(pCard, p1, p2, p3)
	{}

	template <typename P1, typename P2, typename P3, typename P4>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: TTriggeredAbility(pCard, p1, p2, p3, p4)
	{}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: TTriggeredAbility(pCard, p1, p2, p3, p4, p5)
	{}

	void ResolveCardImpl(const TTriggeredAction<typename A::TriggerContextType>* pAction, CCard* pCard)
	{
	}
};

template <typename A, typename T, typename D, void (T::*F)(D)>
struct ResolveCardHelper<1, A, T, D, F> : public TTriggeredAbility<A, T, D, F>
{
	ResolveCardHelper(CCard* pCard)
		: TTriggeredAbility(pCard)
	{}

	template <typename P1>
	ResolveCardHelper(CCard* pCard, P1 p1)
		: TTriggeredAbility(pCard, p1)
	{}

	template <typename P1, typename P2>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2)
		: TTriggeredAbility(pCard, p1, p2)
	{}

	template <typename P1, typename P2, typename P3>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: TTriggeredAbility(pCard, p1, p2, p3)
	{}

	template <typename P1, typename P2, typename P3, typename P4>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: TTriggeredAbility(pCard, p1, p2, p3, p4)
	{}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: TTriggeredAbility(pCard, p1, p2, p3, p4, p5)
	{}

	void ResolveCardImpl(TTriggeredAction<typename A::TriggerContextType>* pAction, CCard* pCard)
	{
		typename A::TriggerContextType triggerContext(pAction->GetTriggerContext());
		triggerContext.m_pCard = pCard;

		pAction->SetTriggerContext(triggerContext);

		__super::ResolveSelection(pAction->GetTriggeredPlayer(), pAction);
	}
};

template <typename A, typename T, typename D, void (T::*F)(D)>
struct ResolveCardHelper<2, A, T, D, F> : public TTriggeredAbility<A, T, D, F>
{
	ResolveCardHelper(CCard* pCard)
		: TTriggeredAbility(pCard)
	{}

	template <typename P1>
	ResolveCardHelper(CCard* pCard, P1 p1)
		: TTriggeredAbility(pCard, p1)
	{}

	template <typename P1, typename P2>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2)
		: TTriggeredAbility(pCard, p1, p2)
	{}

	template <typename P1, typename P2, typename P3>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: TTriggeredAbility(pCard, p1, p2, p3)
	{}

	template <typename P1, typename P2, typename P3, typename P4>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: TTriggeredAbility(pCard, p1, p2, p3, p4)
	{}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	ResolveCardHelper(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: TTriggeredAbility(pCard, p1, p2, p3, p4, p5)
	{}

	void ResolveCardImpl(TTriggeredAction<typename A::TriggerContextType>* pAction, CCard* pCard)
	{
		if (!pCard->GetCardType().IsCreature())
			return;

		typename A::TriggerContextType triggerContext(pAction->GetTriggerContext());
		triggerContext.m_pCreature = (CCreatureCard*)pCard;
		
		pAction->SetTriggerContext(triggerContext);

		__super::ResolveSelection(pAction->GetTriggeredPlayer(), pAction);
	}
};

//____________________________________________________________________________
//
template <class A, class T, class D = T::EventCallback, void (T::*F)(D) = &T::SetEventCallback,
		  class G = CTargeting> 
class TTriggeredTargetAbility 
	: public ResolveCardHelper<
				has_card_member<typename A::TriggerContextType>::value ? 1 :
					(has_creature_member<typename A::TriggerContextType>::value ? 2 : 0),
				A, T, D, F>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	TTriggeredTargetAbility(CCard* pCard)
		: ResolveCardHelper(pCard)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1>
	TTriggeredTargetAbility(CCard* pCard, P1 p1)
		: ResolveCardHelper(pCard, p1)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2>
	TTriggeredTargetAbility(CCard* pCard, P1 p1, P2 p2)
		: ResolveCardHelper(pCard, p1, p2)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3>
	TTriggeredTargetAbility(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: ResolveCardHelper(pCard, p1, p2, p3)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3, typename P4>
	TTriggeredTargetAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: ResolveCardHelper(pCard, p1, p2, p3, p4)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	TTriggeredTargetAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: ResolveCardHelper(pCard, p1, p2, p3, p4, p5)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

public:
	G& GetTargeting()					{ return m_Targeting; }
	const G& GetTargeting() const		{ return m_Targeting; }

private:
	G m_Targeting;

protected:
	typedef TTriggeredTargetAction<typename A::TriggerContextType, TTriggeredTargetAbility> TargetActionType;
	typedef TTriggeredAction<typename A::TriggerContextType> BaseActionType;

	OVERRIDE(counted_ptr<BaseActionType>, CreateTriggeredAction)(const typename A::TriggerContextType& triggerContext, const TriggerInfo& info) const
	{
		counted_ptr<TargetActionType> cpAction(::CreateObject<TargetActionType>(m_pGame));
		cpAction->SetAbility(const_cast<CStackAbility*>((const CStackAbility*)this));
		cpAction->SetTriggerContext(triggerContext);
		cpAction->SetTriggerInfo(info);
		return cpAction.GetPointer();
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const typename A::TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		CSubjectGroupContainer targetGroups;
		std::vector<BOOL> tricks;

		const_cast<G&>(m_Targeting).SetController(pPlayer);
		m_Targeting.GetSubjects(TRUE, targetGroups, tricks, GetActionValue());

		for (int i = 0; i < targetGroups.GetSize(); ++i)
		{
			counted_ptr<TargetActionType> 
				cpAction((TargetActionType*)(
				CreateTriggeredAction(triggerContext, info).GetPointer()));

			cpAction->GetTargetGroup() = targetGroups.GetAt(i);

			CSubjectGroup& targetGroup = cpAction->GetTargetGroup();

			if (bSetNames)
			{
				CString strActionName;

				for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
					it != targetGroup.CardSubjectEnd(); ++it)
				{
					const CCard* pCard = it->GetPointer();

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pCard->GetCardName();
				}

				for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
					it != targetGroup.PlayerSubjectEnd(); ++it)
				{
					const CPlayer* pTargetedPlayer = *it;

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pTargetedPlayer->GetPlayerName();
				}

				if (strActionName.IsEmpty())
					strActionName.Format(_T("targets nothing for the %s of %s"), GetAbilityName(), GetCard()->GetCardName());
				else
					strActionName = _T("targets ") + strActionName + _T(" for the ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName();

				cpAction->SetActionName(strActionName);
			}

			cpAction->SetTrick(tricks[i]);

			actions.Add(cpAction.GetPointer());
		}
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
	{
		TargetActionType* pTargetAction = (TargetActionType*)pAction;

		const CPlayer* pCaster = pTargetAction->GetController();

		const CSubjectGroup& targetGroup = pTargetAction->GetTargetGroup();

		m_Targeting.SetController(pTriggeredPlayer);

		BOOL bSuccess = FALSE;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting.TargetAllowed(it->GetPointer(), TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetCardName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				continue;
			}

			ResolveCard(pTargetAction, (CCard*)it->GetPointer());

			bSuccess = TRUE;
		}

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting.TargetAllowed(*it, TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetPlayerName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				continue;
			}
			
			ResolvePlayer(pTargetAction, (CPlayer*)*it);

			bSuccess = TRUE;
		}

		return bSuccess;
	}

	void ResolveCard(BaseActionType* pAction, CCard* pCard)
	{
		ResolveCardImpl(pAction, pCard);
	}

	void ResolvePlayer(BaseActionType* pAction, CPlayer* pPlayer) 
	{
		__super::ResolveSelection(pPlayer, pAction);
	}
};

//____________________________________________________________________________
//
template <class A, class T, class D = T::EventCallback, void (T::*F)(D) = &T::SetEventCallback> 
class TTriggeredSubjectAbility 
	: public ResolveCardHelper<
				has_card_member<typename A::TriggerContextType>::value ? 1 :
					(has_creature_member<typename A::TriggerContextType>::value ? 2 : 0),
				A, T, D, F>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	TTriggeredSubjectAbility(CCard* pCard)
		: ResolveCardHelper(pCard)
	{
		m_Gatherer.SetAbility(this);
	}

	template <typename P1>
	TTriggeredSubjectAbility(CCard* pCard, P1 p1)
		: ResolveCardHelper(pCard, p1)
	{
		m_Gatherer.SetAbility(this);
	}

	template <typename P1, typename P2>
	TTriggeredSubjectAbility(CCard* pCard, P1 p1, P2 p2)
		: ResolveCardHelper(pCard, p1, p2)
	{
		m_Gatherer.SetAbility(this);
	}

	template <typename P1, typename P2, typename P3>
	TTriggeredSubjectAbility(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: ResolveCardHelper(pCard, p1, p2, p3)
	{
		m_Gatherer.SetAbility(this);
	}

	template <typename P1, typename P2, typename P3, typename P4>
	TTriggeredSubjectAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: ResolveCardHelper(pCard, p1, p2, p3, p4)
	{
		m_Gatherer.SetAbility(this);
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	TTriggeredSubjectAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: ResolveCardHelper(pCard, p1, p2, p3, p4, p5)
	{
		m_Gatherer.SetAbility(this);
	}

public:
	typedef TTriggeredSubjectAction<typename A::TriggerContextType> SubjectActionType;

	CSubjectGatherer& GetGatherer()					{ return m_Gatherer; }
	const CSubjectGatherer& GetGatherer() const		{ return m_Gatherer; }

private:
	CSubjectGatherer m_Gatherer;

protected:
	typedef TTriggeredAction<typename A::TriggerContextType> BaseActionType;

	OVERRIDE(counted_ptr<BaseActionType>, CreateTriggeredAction)(const typename A::TriggerContextType& triggerContext, const TriggerInfo& info) const
	{
		counted_ptr<SubjectActionType> cpAction(::CreateObject<SubjectActionType>(m_pGame));
		cpAction->SetAbility(const_cast<CStackAbility*>((const CStackAbility*)this));
		cpAction->SetTriggerContext(triggerContext);
		cpAction->SetTriggerInfo(info);
		return cpAction.GetPointer();
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const typename A::TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		CSubjectGroupContainer subjectGroups;
		std::vector<BOOL> tricks;

		const_cast<CSubjectGatherer&>(m_Gatherer).SetController(pPlayer);
		m_Gatherer.GetSubjects(TRUE, subjectGroups, tricks, GetActionValue());

		for (int i = 0; i < subjectGroups.GetSize(); ++i)
		{
			counted_ptr<SubjectActionType> 
				cpAction((SubjectActionType*)(
				CreateTriggeredAction(triggerContext, info).GetPointer()));

			cpAction->GetSubjectGroup() = subjectGroups.GetAt(i);

			CSubjectGroup& subjectGroup = cpAction->GetSubjectGroup();

			if (bSetNames)
			{
				CString strActionName;

				for (CSubjectGroup::CardSubjectIterator it = subjectGroup.CardSubjectBegin();
					it != subjectGroup.CardSubjectEnd(); ++it)
				{
					const CCard* pCard = it->GetPointer();

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pCard->GetCardName();
				}

				for (CSubjectGroup::PlayerSubjectIterator it = subjectGroup.PlayerSubjectBegin();
					it != subjectGroup.PlayerSubjectEnd(); ++it)
				{
					const CPlayer* pTargetedPlayer = *it;

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pTargetedPlayer->GetPlayerName();
				}

				if (strActionName.IsEmpty())
					strActionName.Format(_T("selects no subjects for the %s of %s"), GetAbilityName(), GetCard()->GetCardName());
				else
					strActionName = _T("selects ") + strActionName + _T(" for the ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName();
					
				cpAction->SetActionName(strActionName);
			}

			cpAction->SetTrick(tricks[i]);

			actions.Add(cpAction.GetPointer());
		}
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
	{
		SubjectActionType* pSubjectAction = (SubjectActionType*)pAction;

		const CPlayer* pCaster = pSubjectAction->GetController();

		const CSubjectGroup& subjectGroup = pSubjectAction->GetSubjectGroup();

		m_Gatherer.SetController(pTriggeredPlayer);

		for (CSubjectGroup::CardSubjectIterator it = subjectGroup.CardSubjectBegin();
			it != subjectGroup.CardSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Gatherer.IsSubjectIncluded(it->GetPointer(), TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal subject %s"), 
						GetCard()->GetCardName(),
						(*it)->GetCardName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				continue;
			}

			ResolveCard(pSubjectAction, (CCard*)it->GetPointer());
		}

		for (CSubjectGroup::PlayerSubjectIterator it = subjectGroup.PlayerSubjectBegin();
			it != subjectGroup.PlayerSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Gatherer.IsSubjectIncluded(*it, TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal subject %s"), 
						GetCard()->GetCardName(),
						(*it)->GetPlayerName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				continue;
			}
			
			ResolvePlayer(pSubjectAction, (CPlayer*)*it);
		}

		return TRUE;
	}

	void ResolveCard(BaseActionType* pAction, CCard* pCard)
	{
		ResolveCardImpl(pAction, pCard);
	}

	void ResolvePlayer(BaseActionType* pAction, CPlayer* pPlayer) 
	{
		__super::ResolveSelection(pPlayer, pAction);
	}
};

//____________________________________________________________________________
//
template <class A, class T> 
class TTriggeredCreateAbilityAbility 
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef A CreateAbilityType;
	typedef T RemovalTriggerType;

protected:
	TTriggeredCreateAbilityAbility(CCard* pCard)
		: CTriggeredAbility(pCard)
		, m_RemovalTrigger(pCard)
	{
		m_RemovalTrigger.SetEventCallback(RemovalTriggerType::EventCallback(this, &TTriggeredCreateAbilityAbility::RemovalTriggerCallback));
	}

	VIRTUAL(void, OnAddition)(CreateAbilityType* pAbility) 
	{
	}

	VIRTUAL(void, OnRemoval)(CreateAbilityType* pAbility) {}
	VIRTUAL(counted_ptr<CreateAbilityType>, CreateAbility)(CPlayer* pTriggeredPlayer, const TTriggeredAction<TriggerContextType>* pAction) { return NULL; }

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
	{
		if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
			return FALSE;

		if (CAbility::m_pCard->GetZoneId() != ZoneId::Battlefield)
			return FALSE;

		ATLASSERT(!m_cpAbility);

		const TTriggeredAction<TriggerContextType>* pAction1 = 
			(const TTriggeredAction<TriggerContextType>*)pAction;

		m_cpAbility = CreateAbility(pTriggeredPlayer, pAction1);
		if (!m_cpAbility)
			return FALSE;
		m_cpAbility->DefineGameClassID();

		GetCard()->AddAbility(m_cpAbility.GetPointer());

		OnAddition(m_cpAbility.GetPointer());
		
		return TRUE;
	}

private:
	void RemovalTriggerCallback()
	{
		if (!m_cpAbility)
			return;

		int nIndex = CAbility::m_pCard->FindAbility(m_cpAbility.GetPointer());
		ATLASSERT(nIndex != -1);
		if (nIndex == -1)
		{
			m_cpAbility = NULL;
			return;
		}

		OnRemoval(m_cpAbility.GetPointer());

		m_pCard->RemoveAbility(m_cpAbility.GetPointer());

		m_cpAbility = NULL;
	}

	RemovalTriggerType m_RemovalTrigger;

	CStateSupportCountedPtrType<CreateAbilityType>	m_cpAbility;
};

//____________________________________________________________________________
//
// Engineered Plague: As Engineered Plague comes into play, choose a creature type. All creatures of the chosen type get -1/-1.
//
template <class T2>
class TTriggeredPwrTghAttrEnchantmentAbility
	: public TTriggeredCreateAbilityAbility<CPwrTghAttrEnchantment, T2>
{
public:
	void SetPowerDelta(Power nPowerDelta) { m_nPowerDelta = nPowerDelta; }
	void SetLifeDelta(Life nLifeDelta) { m_nLifeDelta = nLifeDelta; }

protected:
	TTriggeredPwrTghAttrEnchantmentAbility(CCard* pCard)
		: TTriggeredCreateAbilityAbility(pCard)
		, m_nPowerDelta(Power(0))
		, m_nLifeDelta(Life(0))
	{}

	OVERRIDE(void, OnAddition)(CPwrTghAttrEnchantment* pAbility) 
	{	
		__super::OnAddition(pAbility);

		pAbility->StartEnchantment();
	}

	OVERRIDE(void, OnRemoval)(CPwrTghAttrEnchantment* pAbility) 
	{
		__super::OnRemoval(pAbility);

		pAbility->EndEnchantment();
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		if (!GetCard()->IsInplay())
			return;

		BOOL bNontrickFound = FALSE;

		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			TriggerContextType tempTriggerContext(triggerContext);
			tempTriggerContext.nValue1 = creatureType;

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
			ATLASSERT(cpAction);

			BOOL bTrick = FALSE;

			if (m_pGame->IsThinking() || GetController()->IsComputer())
			{
				bTrick = TRUE;
				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					CPlayer* pPlayer = m_pGame->GetPlayer(j);

					CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
							(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling()))
						{
							bTrick = FALSE;
							break;
						}

					if (!bTrick)
						break;
				}
			}

			if (bSetNames)
			{
				CString strActionName;
				strActionName.Format(_T("selects %s for the %s of %s"), SingleCreatureType(creatureType).ToString(), GetAbilityName(), GetCard()->GetCardName());
				cpAction->SetActionName(strActionName);
			}

			if (bTrick)
				cpAction->SetTrick(TRUE);
			else
				bNontrickFound = TRUE;

			actions.Add(cpAction.GetPointer());
		}

		if (!bNontrickFound && (m_pGame->IsThinking() || GetController()->IsComputer()))
		{
			if (m_pGame->IsThinking())
			{
				// If all actions are tricks and we are thinking, we couldn't feed all the actions to the thinking process. Instead 
				// do not allow this in minimax.

				m_pGame->AddSearchBreak(SearchBreak::NotEnoughInformation);
			}

			// In case this is the only action possible, randomly set one as non-trick

			actions.GetAt(rand() % actions.GetSize())->SetTrick(FALSE);
		}
	}

	OVERRIDE(counted_ptr<CPwrTghAttrEnchantment>, CreateAbility)(CPlayer* pTriggeredPlayer, const TTriggeredAction<TriggerContextType>* pAction)
	{
		SingleCreatureType creatureType((SingleCreatureType::Enum)pAction->GetTriggerContext().nValue1);

		if (creatureType == SingleCreatureType::Null)
			return NULL;

		return ::CreateObject<CPwrTghAttrEnchantment>(
			GetCard(), _T(""), new CreatureTypeComparer(creatureType, false), m_nPowerDelta, m_nLifeDelta
			);
	}

	Power	m_nPowerDelta;
	Life	m_nLifeDelta;
};

//____________________________________________________________________________
//
// Brass Herald: As Brass Herald comes into play, choose a creature type. When Brass Herald comes into play, 
//               reveal the top four cards of your library. Put all creature cards of the chosen type revealed
//               this way into your hand and the rest on the bottom of your library in any order.
//               Creatures of the chosen type get +1/+1. 
//
template <class T2>
class TTriggeredPwrTghAttrEnchantmentAbility2
	: public TTriggeredPwrTghAttrEnchantmentAbility<T2>
{
public:
	void SetRevealCount(int nRevealCount) { m_nRevealCount = nRevealCount; } // Default: 1

protected:
	TTriggeredPwrTghAttrEnchantmentAbility2(CCard* pCard)
		: TTriggeredPwrTghAttrEnchantmentAbility(pCard)
		, m_nRevealCount(1)
	{}

	OVERRIDE(counted_ptr<CPwrTghAttrEnchantment>, CreateAbility)(CPlayer* pTriggeredPlayer, const TTriggeredAction<TriggerContextType>* pAction)
	{
		SingleCreatureType creatureType((SingleCreatureType::Enum)pAction->GetTriggerContext().nValue1);

		CZone* pLibrary = pTriggeredPlayer->GetZoneById(ZoneId::Library);
		CZone* pHand = pTriggeredPlayer->GetZoneById(ZoneId::Hand);
		CCountedCardContainer revealedCards;
		CCountedCardContainer matchingCards;

		int nRevealCount = m_nRevealCount;
		if (nRevealCount > pLibrary->GetSize())
			nRevealCount = pLibrary->GetSize();

		for (int i = 0; i < nRevealCount; ++i)
		{
			CCard* pCard = pLibrary->GetAt(pLibrary->GetSize() - i - 1);

			BOOL bVisible = TRUE;
			if (m_pGame->IsThinking())
			{
				if (!m_pGame->IsCardVisible(pCard))
					bVisible = FALSE;
			}
			else
			{
				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pTriggeredPlayer->GetPlayerName(), pCard->GetCardName());

				m_pGame->Message(
					strMessage, 
					pTriggeredPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
				{
					CPlayer* pPlayer2 = m_pGame->GetPlayer(i);

					if (pPlayer2->IsComputer())
					{
						if (!pPlayer2->IsMemorizedCard(pCard))
							pPlayer2->RemoveStrategy(StrategyRemovalReason::RevealLibrary);
					}

					pPlayer2->MemorizeCard(pCard);
				}
			}

			if (bVisible)
			{
				if ((pCard->GetCardType() & CardType::Creature).Any())
				{
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

					if (pCreatureCard->GetCreatureType().HasType(creatureType) || pCreatureCard->GetCardKeyword()->HasChangeling())
						matchingCards.AddCard(pCard, CardPlacement::Top);
					else
						revealedCards.AddCard(pCard, CardPlacement::Top);
				}
				else
					revealedCards.AddCard(pCard, CardPlacement::Top);
			}
			else
			{
				revealedCards.AddCard(pCard, CardPlacement::Top);
				pTriggeredPlayer->AddMiscBonus(1);
			}
		}

		if (matchingCards.GetSize())
			pHand->AddCards(matchingCards, GetController(), MoveType::Others, CardPlacement::Top);

		if (revealedCards.GetSize())
		{
			if (revealedCards.GetSize() == 1)
			{
				pLibrary->AddCard(revealedCards.GetAt(0), pTriggeredPlayer, MoveType::Others, CardPlacement::Bottom);
			}
			else
			{
				// Order cards

				if (m_pGame->IsThinking() || pTriggeredPlayer->IsComputer())
				{
					revealedCards.Sort();	// ascending
					pLibrary->AddCards(revealedCards, pTriggeredPlayer, MoveType::Others, CardPlacement::Bottom);
				}
				else
				{
					OrderCardsData orderCardsData;
					orderCardsData.bReadOnly = FALSE;
					orderCardsData.strCaption = _T("Order Revealed Cards");
					orderCardsData.pCardContainer = &revealedCards;

					if (pTriggeredPlayer->GetInterface()->OrderCards(&orderCardsData))
						pLibrary->AddCards(revealedCards, pTriggeredPlayer, MoveType::Others, CardPlacement::Bottom);
				}
			}
		}

		return __super::CreateAbility(pTriggeredPlayer, pAction);
	}

	int m_nRevealCount;
};

//____________________________________________________________________________
//
// Story Circle: As Story Circle comes into play, choose a color. W: The next time a source of your choice of the chosen color would deal damage to you this turn, prevent that damage.
//
template <class T2>
class TTriggeredDamagePreventionAbility
	: public TTriggeredCreateAbilityAbility<CActivatedAbility<CDamagePreventionSpell>, T2>
{
public:
	void SetPreventionCost(LPCTSTR strPreventionCost) { m_strPreventionCost = strPreventionCost; }
	void SetLifeDelta(Life nLifeDelta) { m_nLifeDelta = nLifeDelta; }
	void SetPreventDamageToController(BOOL bToController) { m_bPreventDamageToController = bToController; }

protected:
	TTriggeredDamagePreventionAbility(CCard* pCard)
		: TTriggeredCreateAbilityAbility(pCard)
		, m_bPreventDamageToController(TRUE)
		, m_nLifeDelta(Life(0))
	{}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		if (!GetCard()->IsInplay())
			return;

		if (m_pGame->IsThinking() || pPlayer->IsComputer())
		{
			SourceColor sourceColor;
			switch(m_pGame->GetNextPlayer(pPlayer)->GetDeck().GetProminentManaColorByCard().Get())
			{
			case CManaPool::Color::Black: sourceColor = SourceColor::BlackSource; break;
			case CManaPool::Color::Blue: sourceColor = SourceColor::BlueSource; break;
			case CManaPool::Color::Red: sourceColor = SourceColor::RedSource; break;
			case CManaPool::Color::Green: sourceColor = SourceColor::GreenSource; break;
			default:
			case CManaPool::Color::White: sourceColor = SourceColor::WhiteSource; break;
			}

			TriggerContextType tempTriggerContext(triggerContext);
			tempTriggerContext.nValue1 = sourceColor.Get();

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
			ATLASSERT(cpAction);

			if (bSetNames)
			{
				CString strActionName;
				strActionName.Format(_T("selects %s for the %s of %s"), sourceColor.ToString(), GetAbilityName(), GetCard()->GetCardName());
				cpAction->SetActionName(strActionName);
			}

			actions.Add(cpAction.GetPointer());

			return;
		}
		
		static const SourceColor sourceColors[] =
		{
			SourceColor::BlueSource,
			SourceColor::BlackSource,
			SourceColor::RedSource,
			SourceColor::GreenSource,
			SourceColor::WhiteSource,
		};

		for (int i = 0; i < ARRAY_SIZE(sourceColors); ++i)
		{
			TriggerContextType tempTriggerContext(triggerContext);
			tempTriggerContext.nValue1 = sourceColors[i].Get();

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
			ATLASSERT(cpAction);

			if (bSetNames)
			{
				CString strActionName;
				strActionName.Format(_T("selects %s for the %s of %s"), sourceColors[i].ToString(), GetAbilityName(), GetCard()->GetCardName());
				cpAction->SetActionName(strActionName);
			}

			actions.Add(cpAction.GetPointer());
		}
	}

	OVERRIDE(counted_ptr<CActivatedAbility<CDamagePreventionSpell>>, CreateAbility)(CPlayer* pTriggeredPlayer, const TTriggeredAction<TriggerContextType>* pAction)
	{
		SourceColor sourceColor((SourceColor::Enum)pAction->GetTriggerContext().nValue1);

		if (sourceColor == SourceColor::Null)
			return NULL;

		return ::CreateObject<CActivatedAbility<CDamagePreventionSpell>>(
			GetCard(), m_strPreventionCost, m_nLifeDelta, sourceColor, m_bPreventDamageToController
			);
	}

	CString		m_strPreventionCost;
	Life		m_nLifeDelta;
	BOOL		m_bPreventDamageToController;
};

//____________________________________________________________________________
//
// Shifting Sky: As Shifting Sky comes into play, choose a color. All nonland permanents are the chosen color.
//
template <class T2>
class TTriggeredCardTypeEnchantmentAbility
	: public TTriggeredCreateAbilityAbility<CCardTypeEnchantment, T2>
{
public:
	void SetCardTypeComparer(std::auto_ptr<CardComparer>& apComparer) { m_apCardTypeComparer = apComparer; }

protected:
	TTriggeredCardTypeEnchantmentAbility(CCard* pCard)
		: TTriggeredCreateAbilityAbility(pCard)
	{}

	OVERRIDE(void, OnAddition)(CCardTypeEnchantment* pAbility) 
	{
		__super::OnAddition(pAbility);

		pAbility->StartEnchantment();
	}

	OVERRIDE(void, OnRemoval)(CCardTypeEnchantment* pAbility) 
	{
		__super::OnRemoval(pAbility);

		pAbility->EndEnchantment();
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		if (!GetCard()->IsInplay())
			return;

		static const CManaPool::Color cardColors[] =
		{
			CManaPool::Color::Blue,
			CManaPool::Color::Black,
			CManaPool::Color::Red,
			CManaPool::Color::Green,
			CManaPool::Color::White
		};

		for (int i = 0; i < ARRAY_SIZE(cardColors); ++i)
		{
			TriggerContextType tempTriggerContext(triggerContext);
			tempTriggerContext.nValue1 = cardColors[i].Get();

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
			ATLASSERT(cpAction);

			if (bSetNames)
			{
				CString strActionName;
				strActionName.Format(_T("selects %s for the %s of %s"), cardColors[i].ToString(), GetAbilityName(), GetCard()->GetCardName());
				cpAction->SetActionName(strActionName);
			}

			actions.Add(cpAction.GetPointer());
		}
	}

	OVERRIDE(counted_ptr<CCardTypeEnchantment>, CreateAbility)(CPlayer* pTriggeredPlayer, const TTriggeredAction<TriggerContextType>* pAction)
	{
		CManaPool::Color cardColor((CManaPool::Color::Enum)pAction->GetTriggerContext().nValue1);

		if (cardColor == CManaPool::Color::Null)
			return NULL;

		CardType cardType;
		switch(cardColor.Get())
		{
		case CManaPool::Color::Black: cardType = CardType::Black; break;
		case CManaPool::Color::Blue: cardType = CardType::Blue; break;
		case CManaPool::Color::Red: cardType = CardType::Red; break;
		case CManaPool::Color::Green: cardType = CardType::Green; break;
		case CManaPool::Color::White: cardType = CardType::White; break;
		}

		return ::CreateObject<CCardTypeEnchantment>(
			GetCard(), m_apCardTypeComparer->Clone(), cardType, CardType::_ColorMask);
	}

	std::auto_ptr<CardComparer> m_apCardTypeComparer;
};

//____________________________________________________________________________
//
class TTriggerAdapterBase
{
public:
	typedef FastDelegate< void () > EventCallback;

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

protected:
	void Trigger()
	{
		if (!m_Callback.empty())
			m_Callback();
	}	

	EventCallback m_Callback;
};

template <class D, int nParam = D::ParamCount>
class TTriggerAdapterHelper;

template <class D>
class TTriggerAdapterHelper<D, 1>
	: public TTriggerAdapterBase
{
public:
	void Func(typename D::P1)
	{
		Trigger();
	}
};

template <class D>
class TTriggerAdapterHelper<D, 2>
	: public TTriggerAdapterBase
{
public:
	void Func(typename D::P1, typename D::P2)
	{
		Trigger();
	}
};

template <class D>
class TTriggerAdapterHelper<D, 3>
	: public TTriggerAdapterBase
{
public:
	void Func(typename D::P1, typename D::P2, typename D::P3)
	{
		Trigger();
	}
};

template <class D>
class TTriggerAdapterHelper<D, 4>
	: public TTriggerAdapterBase
{
public:
	void Func(typename D::P1, typename D::P2, typename D::P3, typename D::P4)
	{
		Trigger();
	}
};

template <class D>
class TTriggerAdapterHelper<D, 5>
	: public TTriggerAdapterBase
{
public:
	void Func(typename D::P1, typename D::P2, typename D::P3, typename D::P4, typename D::P5)
	{
		Trigger();
	}
};

// This is a helper template to convert a trigger (e.g. CWhenXXX) with multiple event callback parameters into another trigger which has no parameters in callback.
template <class T, class D = T::EventCallback, void (T::*F)(D) = &T::SetEventCallback> 
class TTriggerAdapter
	: public TTriggerAdapterHelper<D>
{
public:
	TTriggerAdapter(CCard* pCard)
		: m_T(pCard)
	{
		Initialize();
	}

	template <typename P1>
	TTriggerAdapter(CCard* pCard, P1 p1)
		: m_T(pCard, p1)
	{
		Initialize();
	}

	template <typename P1, typename P2>
	TTriggerAdapter(CCard* pCard, P1 p1, P2 p2)
		: m_T(pCard, p1, p2)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3>
	TTriggerAdapter(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: m_T(pCard, p1, p2, p3)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3, typename P4>
	TTriggerAdapter(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: m_T(pCard, p1, p2, p3, p4)
	{
		Initialize();
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	TTriggerAdapter(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: m_T(pCard, p1, p2, p3, p4, p5)
	{
		Initialize();
	}

	const T& GetTrigger() const { return m_T; }
	T& GetTrigger() { return m_T; }

	void SetEventCallback(TTriggerAdapterBase::EventCallback callback)
	{
		__super::SetEventCallback(callback);
	}

private:
	void Initialize()
	{
		((m_T).*(F))(D(this, &typename TTriggerAdapterHelper::Func));
	}

	typename T m_T;
};

//____________________________________________________________________________
//
class CUpkeepAbility
	: public TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CUpkeepAbility(CCard* pCard, LPCTSTR strManaCost)
		: TTriggeredAbility(pCard, NodeId::UpkeepStep)
	{
		GetTrigger().SetMonitorControllerOnly(TRUE);
		SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(
					this, &CUpkeepAbility::CreateTemporaryAbility), strManaCost,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
				&CUpkeepAbility::PreRemoveAbilityCallback));

		AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	}

	CCard* CreateTemporaryAbility()
	{
		return m_pCard;
	}

	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
	{
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), NULL, MoveType::Sacrifice);
	}
};
//____________________________________________________________________________
//
class CTabernacleUpkeepAbility
	: public TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTabernacleUpkeepAbility(CCard* pCard, LPCTSTR strManaCost)
		: TTriggeredAbility(pCard, NodeId::UpkeepStep)
	{
		GetTrigger().SetMonitorControllerOnly(TRUE);
		SetCreateAbilityCallback(
			CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(
					this, &CTabernacleUpkeepAbility::CreateTemporaryAbility), strManaCost,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
				&CTabernacleUpkeepAbility::PreRemoveAbilityCallback));

		AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	}

	CCard* CreateTemporaryAbility()
	{
		return m_pCard;
	}

	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
	{
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), NULL, MoveType::Destroy);
	}
};
//____________________________________________________________________________
//
template <class A, class T, class D = T::EventCallback, void (T::*F)(D) = &T::SetEventCallback,
		  class G = CTargeting> 
class TTriggeredTargetDivisionAbility 
	: public ResolveCardHelper<
				has_card_member<typename A::TriggerContextType>::value ? 1 :
					(has_creature_member<typename A::TriggerContextType>::value ? 2 : 0),
				A, T, D, F>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	TTriggeredTargetDivisionAbility(CCard* pCard)
		: ResolveCardHelper(pCard)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1>
	TTriggeredTargetDivisionAbility(CCard* pCard, P1 p1)
		: ResolveCardHelper(pCard, p1)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2>
	TTriggeredTargetDivisionAbility(CCard* pCard, P1 p1, P2 p2)
		: ResolveCardHelper(pCard, p1, p2)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3>
	TTriggeredTargetDivisionAbility(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: ResolveCardHelper(pCard, p1, p2, p3)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3, typename P4>
	TTriggeredTargetDivisionAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: ResolveCardHelper(pCard, p1, p2, p3, p4)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	TTriggeredTargetDivisionAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: ResolveCardHelper(pCard, p1, p2, p3, p4, p5)
	{
		m_Targeting.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

public:
	G& GetTargeting()					{ return m_Targeting; }
	const G& GetTargeting() const		{ return m_Targeting; }
	void SetValueToDistribute(int pValue) {m_value1 = pValue;}

private:
	G m_Targeting;
	int m_value1;

protected:
	typedef TTriggeredTargetAction<typename A::TriggerContextType, TTriggeredTargetDivisionAbility> TargetActionType;
	typedef TTriggeredAction<typename A::TriggerContextType> BaseActionType;

	OVERRIDE(counted_ptr<BaseActionType>, CreateTriggeredAction)(const typename A::TriggerContextType& triggerContext, const TriggerInfo& info) const
	{
		counted_ptr<TargetActionType> cpAction(::CreateObject<TargetActionType>(m_pGame));
		cpAction->SetAbility(const_cast<CStackAbility*>((const CStackAbility*)this));
		cpAction->SetTriggerContext(triggerContext);
		cpAction->SetTriggerInfo(info);
		return cpAction.GetPointer();
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const typename A::TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		CSubjectGroupContainer targetGroups;
		std::vector<BOOL> tricks;

		ContextValue Context(GetActionValue());

		Context.nValue1 = m_value1;
		
		const_cast<G&>(m_Targeting).SetController(pPlayer);		
		//m_Targeting.SetDistributeValues();
		m_Targeting.GetSubjects(TRUE, targetGroups, tricks, const_cast<const ContextValue&>(Context));
		
		for (int i = 0; i < targetGroups.GetSize(); ++i)
		{
			counted_ptr<TargetActionType> 
				cpAction((TargetActionType*)(
				CreateTriggeredAction(triggerContext, info).GetPointer()));

			cpAction->GetTargetGroup() = targetGroups.GetAt(i);
			
			CSubjectGroup& targetGroup = cpAction->GetTargetGroup();

			if (bSetNames)
			{
				CString strActionName;
				CString strActionName1;
				CString strFormat;
				strFormat = _T(" to deal %d damage");

				for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
					it != targetGroup.CardSubjectEnd(); ++it)
				{
					const CCard* pCard = it->GetPointer();

					const ContextValue& value = targetGroup.GetValue(pCard);
					Life nLifeDelta(value.nValue1);

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pCard->GetCardName();
					strActionName += _T(" ");
					strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
					strActionName += strActionName1;
				}

				for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
					it != targetGroup.PlayerSubjectEnd(); ++it)
				{					
					const CPlayer* pTargetedPlayer = *it;

					const ContextValue& value = targetGroup.GetValue(pTargetedPlayer);
					Life nLifeDelta(value.nValue1);

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pTargetedPlayer->GetPlayerName();
					strActionName += _T(" ");
					strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
					strActionName += strActionName1;
				}

				if (strActionName.IsEmpty())
					strActionName.Format(_T("targets nothing for the %s of %s"), GetAbilityName(), GetCard()->GetCardName());
				else
					strActionName = _T("targets ") + strActionName + _T(" for the ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName();

				cpAction->SetActionName(strActionName);
			}

			cpAction->SetTrick(tricks[i]);

			actions.Add(cpAction.GetPointer());
		}
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
	{
		TargetActionType* pTargetAction = (TargetActionType*)pAction;

		const CPlayer* pCaster = pTargetAction->GetController();

		const CSubjectGroup& targetGroup = pTargetAction->GetTargetGroup();

		m_Targeting.SetController(pTriggeredPlayer);

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting.TargetAllowed(it->GetPointer(), TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetCardName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				continue;
			}

			
			//ContextValue Context(targetGroup.GetValue((CCard*)it->GetPointer()));

			//pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));

			ResolveCard(pTargetAction, (CCard*)it->GetPointer(), targetGroup.GetValue((CCard*)it->GetPointer()).nValue1);
		}

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting.TargetAllowed(*it, TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetPlayerName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				continue;
			}
			//ContextValue Context(targetGroup->GetValue((CPlayer*)it->GetPointer()));
		//	pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));

			ResolvePlayer(pTargetAction, (CPlayer*)*it, targetGroup.GetValue((CPlayer*)*it).nValue1);
		}

		return TRUE;
	}

	void ResolveCard(BaseActionType* pAction, CCard* pCard, int value)
	{
		
		ContextValue Context(pAction->GetValue());

		Context.nValue1 = value;

		pAction->SetValue(const_cast<const ContextValue&>(Context));
		ResolveCardImpl(pAction, pCard);
	}

	void ResolvePlayer(TTriggeredAction<typename A::TriggerContextType>* pAction, CPlayer* pPlayer, int value) 
	{
		ContextValue Context(pAction->GetValue());

		Context.nValue1 = value;

		pAction->SetValue(const_cast<const ContextValue&>(Context));

		typename A::TriggerContextType triggerContext(pAction->GetTriggerContext());
		triggerContext.m_pCreature = NULL;

		pAction->SetTriggerContext(triggerContext);

		__super::ResolveSelection(pPlayer, pAction);
	}
};

//____________________________________________________________________________
//
template <class A, class T, class D = T::EventCallback, void (T::*F)(D) = &T::SetEventCallback,
		  class G = CTargeting> 
class TTriggeredDoubleTargetAbility 
	: public ResolveCardHelper<
				has_card_member<typename A::TriggerContextType>::value ? 1 :
					(has_creature_member<typename A::TriggerContextType>::value ? 2 : 0),
				A, T, D, F>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	TTriggeredDoubleTargetAbility(CCard* pCard)
		: ResolveCardHelper(pCard)
		,m_over(false)
	{
		m_Targeting1.SetAbility(this);
		m_Targeting2.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1>
	TTriggeredDoubleTargetAbility(CCard* pCard, P1 p1)
		: ResolveCardHelper(pCard, p1)
	{
		m_Targeting1.SetAbility(this);
		m_Targeting2.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2>
	TTriggeredDoubleTargetAbility(CCard* pCard, P1 p1, P2 p2)
		: ResolveCardHelper(pCard, p1, p2)
	{
		m_Targeting1.SetAbility(this);
		m_Targeting2.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3>
	TTriggeredDoubleTargetAbility(CCard* pCard, P1 p1, P2 p2, P3 p3)
		: ResolveCardHelper(pCard, p1, p2, p3)
	{
		m_Targeting1.SetAbility(this);
		m_Targeting2.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3, typename P4>
	TTriggeredDoubleTargetAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4)
		: ResolveCardHelper(pCard, p1, p2, p3, p4)
	{
		m_Targeting1.SetAbility(this);
		m_Targeting2.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

	template <typename P1, typename P2, typename P3, typename P4, typename P5>
	TTriggeredDoubleTargetAbility(CCard* pCard, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
		: ResolveCardHelper(pCard, p1, p2, p3, p4, p5)
	{
		m_Targeting1.SetAbility(this);
		m_Targeting2.SetAbility(this);
		SetSelectAtResolution(FALSE);
	}

public:
	G& GetTargeting1()					{ return m_Targeting1; }
	const G& GetTargeting1() const		{ return m_Targeting1; }
	G& GetTargeting2()					{ return m_Targeting2; }
	const G& GetTargeting2() const		{ return m_Targeting2; }
	void SetTargetingOverride()			{ m_over=true;}

private:
	G m_Targeting1;
	G m_Targeting2;
	bool m_over;

protected:
	typedef TTriggeredDoubleTargetAction<typename A::TriggerContextType, TTriggeredDoubleTargetAbility> DoubleTargetActionType;
	typedef TTriggeredAction<typename A::TriggerContextType> BaseActionType;

	OVERRIDE(counted_ptr<BaseActionType>, CreateTriggeredAction)(const typename A::TriggerContextType& triggerContext, const TriggerInfo& info) const
	{
		counted_ptr<DoubleTargetActionType> cpAction(::CreateObject<DoubleTargetActionType>(m_pGame));
		cpAction->SetAbility(const_cast<CStackAbility*>((const CStackAbility*)this));
		cpAction->SetTriggerContext(triggerContext);
		cpAction->SetTriggerInfo(info);
		return cpAction.GetPointer();
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const typename A::TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
	{
		CSubjectGroupContainer targetGroups1;
		CSubjectGroupContainer targetGroups2;
		std::vector<BOOL> tricks1;
		std::vector<BOOL> tricks2;

		const_cast<G&>(m_Targeting1).SetController(pPlayer);
		m_Targeting1.GetSubjects(TRUE, targetGroups1, tricks1, GetActionValue());

		const_cast<G&>(m_Targeting2).SetController(pPlayer);
		m_Targeting2.GetSubjects(TRUE, targetGroups2, tricks2, GetActionValue());

		for (int i = 0; i < targetGroups1.GetSize(); ++i)
		{

			for (int j = 0; j < targetGroups2.GetSize(); ++j)
			{
			counted_ptr<DoubleTargetActionType> 
				cpAction((DoubleTargetActionType*)(
				CreateTriggeredAction(triggerContext, info).GetPointer()));

			cpAction->GetTargetGroup1() = targetGroups1.GetAt(i);
			cpAction->GetTargetGroup2() = targetGroups2.GetAt(j);

			CSubjectGroup& targetGroup1 = cpAction->GetTargetGroup1();
			CSubjectGroup& targetGroup2 = cpAction->GetTargetGroup2();

			if (bSetNames)
			{
				CString strActionName;

				for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
					it != targetGroup1.CardSubjectEnd(); ++it)
				{
					const CCard* pCard = it->GetPointer();

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pCard->GetCardName();
				}

				for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
					it != targetGroup1.PlayerSubjectEnd(); ++it)
				{
					const CPlayer* pTargetedPlayer = *it;

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pTargetedPlayer->GetPlayerName();
				}

				for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
					it != targetGroup2.CardSubjectEnd(); ++it)
				{
					const CCard* pCard = it->GetPointer();

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pCard->GetCardName();
				}

				for (CSubjectGroup::PlayerSubjectIterator it = targetGroup2.PlayerSubjectBegin();
					it != targetGroup2.PlayerSubjectEnd(); ++it)
				{
					const CPlayer* pTargetedPlayer = *it;

					if (!strActionName.IsEmpty())
						strActionName += _T(", ");
					strActionName += pTargetedPlayer->GetPlayerName();
				}

				if (strActionName.IsEmpty())
					strActionName.Format(_T("targets nothing for the %s of %s"), GetAbilityName(), GetCard()->GetCardName());
				else
					strActionName = _T("targets ") + strActionName + _T(" for the ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName();

				cpAction->SetActionName(strActionName);

				cpAction->SetTrick(tricks1[i] && tricks2[j]);
			}			

			actions.Add(cpAction.GetPointer());
			}
		}
		if (m_over) __super::GetSelections(actions, pPlayer, triggerContext, info, bSetNames);
	}

	// Triggers using this template must recheck all targets with CTargeting::TargetAllowed themseves
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
	{
		DoubleTargetActionType* pTargetAction = (DoubleTargetActionType*)pAction;

		const CPlayer* pCaster = pTargetAction->GetController();

		CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
	    CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();

		m_Targeting1.SetController(pTriggeredPlayer);
		m_Targeting2.SetController(pTriggeredPlayer);
/*
		CCountedCardContainer pCardContainer1;
		CCountedCardContainer pCardContainer2;
		CPlayerContainer pPlayerContainer1;
		CPlayerContainer pPlayerContainer2;
*/
		//BOOL bSuccess = FALSE;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
			it != targetGroup1.CardSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting1.TargetAllowed(it->GetPointer(), TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetCardName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				//pCardContainer1.AddCard((CCard*)it->GetPointer(), CardPlacement::Top);

				continue;
			}

			//ResolveCard(pTargetAction, (CCard*)it->GetPointer());
			//bSuccess = TRUE;
		}

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
			it != targetGroup1.PlayerSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting1.TargetAllowed(*it, TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetPlayerName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				//pPlayerContainer1.Add((CPlayer*)(*it));

				continue;
			}
			
			//ResolvePlayer(pTargetAction, (CPlayer*)*it);
			//bSuccess = TRUE;
		}
			for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
			it != targetGroup2.CardSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting2.TargetAllowed(it->GetPointer(), TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetCardName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				//pCardContainer2.AddCard((CCard*)it->GetPointer(), CardPlacement::Top);

				continue;
			}

			//ResolveCard(pTargetAction, (CCard*)it->GetPointer());
			//bSuccess = TRUE;
		}

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup2.PlayerSubjectBegin();
			it != targetGroup2.PlayerSubjectEnd(); ++it)
		{
			BOOL bTrick;
			if (!m_Targeting2.TargetAllowed(*it, TRUE, bTrick))
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s skipped illegal target %s"), 
						GetCard()->GetCardName(),
						(*it)->GetPlayerName());
					m_pGame->Message(
						strMessage, 
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				//pPlayerContainer2.Add((CPlayer*)(*it));

				continue;
			}
			
			//ResolvePlayer(pTargetAction, (CPlayer*)*it);
			//bSuccess = TRUE;
		}
/*
		ResolveGroup(pCardContainer1, pCardContainer2, pPlayerContainer1, pPlayerContainer2);
		ResolvePlayer(pTargetAction, (CPlayer*)*it);
		pTargetAction->GetTargetGroup1().GetCardSubjects().RemoveAll();
		pTargetAction->GetTargetGroup2().GetCardSubjects().RemoveAll();
*/
		return __super::ResolveSelection(pAction->GetTriggeredPlayer(), pAction);
		//return bSuccess;
	}

//	VIRTUAL(void, ResolveGroup)(const CCountedCardContainer& pContainer1,const CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
	//{
	//}
	/*void ResolveCard(BaseActionType* pAction, CCard* pCard)
	{
		ResolveCardImpl(pAction, pCard);
	}*/
	/*void ResolvePlayer(BaseActionType* pAction, CPlayer* pPlayer) 
	{
		__super::ResolveSelection(pPlayer, pAction);
	}*/
};

//____________________________________________________________________________
//