#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredCreateTemporaryAbilityAbility
	: public CTriggeredAbility<>
{
public:
	void SetCreateAbilityCallback(CCreateTempTriggeredAbilityAbility::CreateAbilityCallback createAbilityCallback,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback preRemoveAbilityCallback = CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback())
	{ 
		m_CreateAbilityCallback = createAbilityCallback; 
		m_PreRemoveAbilityCallback = preRemoveAbilityCallback;
	}

	void SetCreateAbilityCallback(CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2 createAbilityCallback, LPCTSTR strManaCost,
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback preRemoveAbilityCallback = CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback())
	{ 
		m_CreateAbilityCallback2 = createAbilityCallback; 
		m_strManaCost = strManaCost;
		m_PreRemoveAbilityCallback = preRemoveAbilityCallback;
	}

protected:
	CTriggeredCreateTemporaryAbilityAbility(CCard* pCard);

	void SetOptionalType(OptionalType optionalType)	{ __super::SetOptionalType(optionalType); }

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer, const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;	

	CCreateTempTriggeredAbilityAbility::CreateAbilityCallback m_CreateAbilityCallback;
	CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2 m_CreateAbilityCallback2;
	CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback m_PreRemoveAbilityCallback;
	CString m_strManaCost;
};
