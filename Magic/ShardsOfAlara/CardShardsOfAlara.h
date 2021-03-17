#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
/*class CPrinceOfThrallsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrinceOfThrallsCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
};
*/
//____________________________________________________________________________
//
class CTezzeretTheSeekerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CTezzeretTheSeekerCard);

protected:
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction) const;

	CCardFilter m_CardFilter0;
	CCardFilter m_CardFilterX;
};

//____________________________________________________________________________
//
class CAkrasanSquireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkrasanSquireCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CDeathBaronCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathBaronCard);
};

//____________________________________________________________________________
//
class CHellkiteOverlordCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CHellkiteOverlordCard);
};

//____________________________________________________________________________
//
class CVeinDrinkerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVeinDrinkerCard);
};

//____________________________________________________________________________
//
class CWildNacatlCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR (CWildNacatlCard);
};

//________________________________________________________________________________
//
class CJhessianInfiltratorCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CJhessianInfiltratorCard);
};

//____________________________________________________________________________
//
class CAlgaeGharialCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlgaeGharialCard);
};

//____________________________________________________________________________
//
class CArcaneSanctumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CArcaneSanctumCard);
};

//____________________________________________________________________________
//
class CBantBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBantBattlemageCard);
};

//____________________________________________________________________________
//
class CBantCharmCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CBantCharmCard);
};

//____________________________________________________________________________
//
class CBlisterBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlisterBeetleCard);
};

//____________________________________________________________________________
//
class CBloodCultistCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodCultistCard);
};

//____________________________________________________________________________
//
class CBloodpyreElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodpyreElementalCard);
};

//____________________________________________________________________________
//
class CBloodthornTaunterCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodthornTaunterCard);
};

//____________________________________________________________________________
//
class CBoneSplintersCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBoneSplintersCard);
};

//____________________________________________________________________________
//
class CBroodmateDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodmateDragonCard);
};

//____________________________________________________________________________
//
class CBullCerodonCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBullCerodonCard);
};

//____________________________________________________________________________
//
class CCarrionThrashCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionThrashCard);
};

//____________________________________________________________________________
//
class CCatharticAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCatharticAdeptCard);
};

//____________________________________________________________________________
//
class CCavernThoctarCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCavernThoctarCard);
};

//____________________________________________________________________________
//
class CCloudheathDrakeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudheathDrakeCard);
};

//____________________________________________________________________________
//
class CComaVeilCard : public CCard
{
	DECLARE_CARD_CSTOR(CComaVeilCard);
};

//____________________________________________________________________________
//
class CCouriersCapsuleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCouriersCapsuleCard);
};

//____________________________________________________________________________
//
class CCourtArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCourtArchersCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CCrucibleOfFireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrucibleOfFireCard);
};

//____________________________________________________________________________
//
class CCrumblingNecropolisCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCrumblingNecropolisCard);
};

//____________________________________________________________________________
//
class CCunningLethemancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCunningLethemancerCard);
};

//____________________________________________________________________________
//
class CCylianElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCylianElfCard);
};

//____________________________________________________________________________
//
class CDawnrayArcherCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CDawnrayArcherCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CDeathgreeterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathgreeterCard);
};

//____________________________________________________________________________
//
class CDeftDuelistCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CDeftDuelistCard);
};

//____________________________________________________________________________
//
class CDispellersCapsuleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDispellersCapsuleCard);
};

//____________________________________________________________________________
//
class CDragonFodderCard : public CCard
{
	DECLARE_CARD_CSTOR(CDragonFodderCard);
};

//____________________________________________________________________________
//
class CDregReaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDregReaverCard);
};

//____________________________________________________________________________
//
class CDruidOfTheAnimaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDruidOfTheAnimaCard);
};

//____________________________________________________________________________
//
class CEmpyrialArchangelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmpyrialArchangelCard);
};

//____________________________________________________________________________
//
class CEsperBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEsperBattlemageCard);
};

//____________________________________________________________________________
//
class CEsperCharmCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CEsperCharmCard);
};

//____________________________________________________________________________
//
class CEtheriumAstrolabeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEtheriumAstrolabeCard);
};

//____________________________________________________________________________
//
class CExecutionersCapsuleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExecutionersCapsuleCard);
};

//____________________________________________________________________________
//
class CFiligreeSagesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFiligreeSagesCard);
};

//____________________________________________________________________________
//
class CFleshbagMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshbagMarauderCard);
};

//____________________________________________________________________________
//
class CGlazeFiendCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGlazeFiendCard);
};

//____________________________________________________________________________
//
class CGoblinAssaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinAssaultCard);
};

//____________________________________________________________________________
//
class CGoblinDeathraidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinDeathraidersCard);
};

//____________________________________________________________________________
//
class CGodsireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodsireCard);
};

//____________________________________________________________________________
//
class CGodtoucherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodtoucherCard);
};

//____________________________________________________________________________
//
class CGrixisBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrixisBattlemageCard);
};

//____________________________________________________________________________
//
class CGrixisCharmCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGrixisCharmCard);
};

//____________________________________________________________________________
//
class CGustriderExuberantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGustriderExuberantCard);
};

//____________________________________________________________________________
//
class CHissingIguanarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHissingIguanarCard);
};

//____________________________________________________________________________
//
class CIncurableOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIncurableOgreCard);
};

//____________________________________________________________________________
//
class CJhessianLookoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJhessianLookoutCard);
};

//____________________________________________________________________________
//
class CJundBattlemageCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CJundBattlemageCard);
};

//____________________________________________________________________________
//
class CJundCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CJundCharmCard);
};

//____________________________________________________________________________
//
class CJungleShrineCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CJungleShrineCard);
};

//____________________________________________________________________________
//
class CKederektCreeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKederektCreeperCard);
};

//____________________________________________________________________________
//
class CKnightOfTheSkywardEyeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfTheSkywardEyeCard);
};

//____________________________________________________________________________
//
class CKnightCaptainOfEosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightCaptainOfEosCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLightningTalonsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLightningTalonsCard);
};

//____________________________________________________________________________
//
class CMarbleChaliceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMarbleChaliceCard);
};

//____________________________________________________________________________
//
class CMasterOfEtheriumCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfEtheriumCard);
};

//____________________________________________________________________________
//
class CMayaelTheAnimaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMayaelTheAnimaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMetallurgeonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMetallurgeonCard);
};

//____________________________________________________________________________
//
class CMosstodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMosstodonCard);
};

//____________________________________________________________________________
//
class CNayaBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNayaBattlemageCard);
};

//____________________________________________________________________________
//
class CNayaCharmCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CNayaCharmCard);
};

//____________________________________________________________________________
//
class CObeliskOfBantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CObeliskOfBantCard);
};

//____________________________________________________________________________
//
class CObeliskOfEsperCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CObeliskOfEsperCard);
};

//____________________________________________________________________________
//
class CObeliskOfGrixisCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CObeliskOfGrixisCard);
};

//____________________________________________________________________________
//
class CObeliskOfJundCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CObeliskOfJundCard);
};

//____________________________________________________________________________
//
class CObeliskOfNayaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CObeliskOfNayaCard);
};

//____________________________________________________________________________
//
class COnyxGobletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COnyxGobletCard);
};

//____________________________________________________________________________
//
class COutriderOfJhessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COutriderOfJhessCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CProtomatterPowderCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CProtomatterPowderCard);
};

//____________________________________________________________________________
//
class CPuppetConjurerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPuppetConjurerCard);
};

//____________________________________________________________________________
//
class CRakeclawGargantuanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRakeclawGargantuanCard);
};

//____________________________________________________________________________
//
class CRhoxChargerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxChargerCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CRipClanCrasherCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRipClanCrasherCard);
};

//____________________________________________________________________________
//
class CRockcasterPlatoonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRockcasterPlatoonCard);
};

//____________________________________________________________________________
//
class CRockslideElementalCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRockslideElementalCard);
};

//____________________________________________________________________________
//
class CSanctumGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSanctumGargoyleCard);
};

//____________________________________________________________________________
//
class CSavageLandsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSavageLandsCard);
};

//____________________________________________________________________________
//
class CScavengerDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScavengerDrakeCard);
};

//____________________________________________________________________________
//
class CScourglassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScourglassCard);
};

//____________________________________________________________________________
//
class CSeasideCitadelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSeasideCitadelCard);
};

//____________________________________________________________________________
//
class CShadowfeedCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CShadowfeedCard);
};

//____________________________________________________________________________
//
class CShardingSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShardingSphinxCard);

protected:
	CCardFilter m_ArtifactCreatureCardFilter;
};

//____________________________________________________________________________
//
class CSharuumTheHegemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSharuumTheHegemonCard);
};

//____________________________________________________________________________
//
class CShoreSnapperCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CShoreSnapperCard);
};

//____________________________________________________________________________
//
class CSightedCasteSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSightedCasteSorcererCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSigiledPaladinCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CSigiledPaladinCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSkeletalKathariCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletalKathariCard);
};

//____________________________________________________________________________
//
class CSproutingThrinaxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSproutingThrinaxCard);
};

//____________________________________________________________________________
//
class CStewardOfValeronCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CStewardOfValeronCard);
};

//____________________________________________________________________________
//
class CSwerveCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwerveCard);
};

//____________________________________________________________________________
//
class CTidehollowStrixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTidehollowStrixCard);
};

//____________________________________________________________________________
//
class CTopanAsceticCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTopanAsceticCard);
};

//____________________________________________________________________________
//
class CTortoiseFormationCard : public CCard
{
	DECLARE_CARD_CSTOR(CTortoiseFormationCard);
};

//____________________________________________________________________________
//
class CTowerGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTowerGargoyleCard);
};

//____________________________________________________________________________
//
class CVectisSilencersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVectisSilencersCard);
};

//____________________________________________________________________________
//
class CViashinoSkeletonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSkeletonCard);
};

//____________________________________________________________________________
//
class CViolentUltimatumCard : public CCard
{
	DECLARE_CARD_CSTOR(CViolentUltimatumCard);
};

//____________________________________________________________________________
//
class CWaveskimmerAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWaveskimmerAvenCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CWelkinGuideCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWelkinGuideCard);
};

//____________________________________________________________________________
//
class CWhereAncientsTreadCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWhereAncientsTreadCard);
};

//____________________________________________________________________________
//
class CWoollyThoctarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoollyThoctarCard);
};

//____________________________________________________________________________
//
class CAngelsongCard : public CCard
{
	DECLARE_CARD_CSTOR(CAngelsongCard);
};

//____________________________________________________________________________
//
class CBantPanoramaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBantPanoramaCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEsperPanoramaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CEsperPanoramaCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGrixisPanoramaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGrixisPanoramaCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CJundPanoramaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CJundPanoramaCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNayaPanoramaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNayaPanoramaCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBlightningCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlightningCard);
};

//____________________________________________________________________________
//
class CRangerOfEosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRangerOfEosCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CYokedPlowbeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYokedPlowbeastCard);
};

//____________________________________________________________________________
//
class CSpellSnipCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSpellSnipCard);
};

//____________________________________________________________________________
//
class CSteelcladSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelcladSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRidgeRannetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRidgeRannetCard);
};

//____________________________________________________________________________
//
class CVolcanicSubmersionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVolcanicSubmersionCard);
};

//____________________________________________________________________________
//
class CJungleWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJungleWeaverCard);
};

//____________________________________________________________________________
//
class CSavageHungerCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSavageHungerCard);
};

//____________________________________________________________________________
//
class CKissOfTheAmeshaCard : public CCard
{
	DECLARE_CARD_CSTOR(CKissOfTheAmeshaCard);
};

//____________________________________________________________________________
//
class CThoughtcutterAgentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtcutterAgentCard);
};

//____________________________________________________________________________
//
class CQuietusSpikeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuietusSpikeCard);
};

//____________________________________________________________________________
//
class CCallToHeelCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCallToHeelCard);
};

//____________________________________________________________________________
//
class CMemoryErosionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMemoryErosionCard);
};

//____________________________________________________________________________
//
class CDregscapeZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDregscapeZombieCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCradleOfVitalityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCradleOfVitalityCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSunseedNurturerCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CSunseedNurturerCard);

private:
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

	protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

			int nCount = 0;
			for (int i = 0; i < pInplay->GetSize(); ++i)
			{
				CCard* pCard = pInplay->GetAt(i);
				if (pCard->GetCardType().IsCreature())
				{
					CCreatureCard* pCreature = (CCreatureCard*)pCard;
					if (pCreature->GetLastKnownPower() > Power(4))
						++nCount;
				}
			}

			if (nCount == 0)
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CSunseedNurturerCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CExuberantFirestokerCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CExuberantFirestokerCard);

private:
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

	protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

			int nCount = 0;
			for (int i = 0; i < pInplay->GetSize(); ++i)
			{
				CCard* pCard = pInplay->GetAt(i);
				if (pCard->GetCardType().IsCreature())
				{
					CCreatureCard* pCreature = (CCreatureCard*)pCard;
					if (pCreature->GetLastKnownPower() > Power(4))
						++nCount;
				}
			}

			if (nCount == 0)
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CExuberantFirestokerCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDrumhunterCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CDrumhunterCard);

private:
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

	protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

			int nCount = 0;
			for (int i = 0; i < pInplay->GetSize(); ++i)
			{
				CCard* pCard = pInplay->GetAt(i);
				if (pCard->GetCardType().IsCreature())
				{
					CCreatureCard* pCreature = (CCreatureCard*)pCard;
					if (pCreature->GetLastKnownPower() > Power(4))
						++nCount;
				}
			}

			if (nCount == 0)
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CDrumhunterCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CThunderthrashElderCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderthrashElderCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCalderaHellionCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CCalderaHellionCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArchdemonOfUnxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArchdemonOfUnxCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFatestitcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFatestitcherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKathariScreecherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKathariScreecherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKederektLeviathanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKederektLeviathanCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCorpseConnoisseurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpseConnoisseurCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CUndeadLeotauCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadLeotauCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVisceraDraggerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVisceraDraggerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHellsThunderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHellsThunderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPredatorDragonCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CPredatorDragonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScourgeDevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeDevilCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CThornThrashViashinoCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CThornThrashViashinoCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVithianStingerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CVithianStingerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFireFieldOgreCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CFireFieldOgreCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSedraxisSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSedraxisSpecterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKreshTheBloodbraidedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKreshTheBloodbraidedCard);
	
protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

};

//____________________________________________________________________________
//
class CNecrogenesisCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecrogenesisCard);
};

//____________________________________________________________________________
//
class CResoundingSilenceCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CResoundingSilenceCard);
};

//____________________________________________________________________________
//
class CResoundingRoarCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CResoundingRoarCard);
};

//____________________________________________________________________________
//
class CResoundingThunderCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CResoundingThunderCard);
};

//____________________________________________________________________________
//
class CResoundingWaveCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CResoundingWaveCard);
};

//____________________________________________________________________________
//
class CResoundingScreamCard : public CCard
{
	DECLARE_CARD_CSTOR(CResoundingScreamCard);
};

//____________________________________________________________________________
//
class CTarFiendCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CTarFiendCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSkullmulcherCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CSkullmulcherCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CViciousShadowsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CViciousShadowsCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CRafiqOfTheManyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRafiqOfTheManyCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSangriteSurgeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSangriteSurgeCard);
};

//____________________________________________________________________________
//
class CSphinxSovereignCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxSovereignCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CMightyEmergenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMightyEmergenceCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKnightOfTheWhiteOrchidCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfTheWhiteOrchidCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CKnightOfTheWhiteOrchidCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CImmortalCoilCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CImmortalCoilCard);

private:
	bool SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
	bool SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, Damage damage) const;
	bool SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer) const;

	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
								CWhenDamageDealt::DamageEventCallback, &CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility1;
	TriggeredAbility1* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CManaplasmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CManaplasmCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class COozeGardenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COozeGardenCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRhoxWarMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxWarMonkCard);
};

//____________________________________________________________________________
//
class CWindwrightMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWindwrightMageCard);
/*
private:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const; */
};

//____________________________________________________________________________
//
class CStoicAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStoicAngelCard);
};

//____________________________________________________________________________
//
class CAngelsHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelsHeraldCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBehemothsHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBehemothsHeraldCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDemonsHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDemonsHeraldCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDragonsHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonsHeraldCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSphinxsHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxsHeraldCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CInvincibleHymnCard : public CCard
{
	DECLARE_CARD_CSTOR(CInvincibleHymnCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAdNauseamCard : public CCard
{
	DECLARE_CARD_CSTOR(CAdNauseamCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	typedef 
            TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAgonyWarpCard : public CCard
{
	DECLARE_CARD_CSTOR(CAgonyWarpCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBranchingBoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CBranchingBoltCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSigilBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSigilBlessingCard);
};

//____________________________________________________________________________
//
class CCruelUltimatumCard : public CCard
{
	DECLARE_CARD_CSTOR(CCruelUltimatumCard);
};

//____________________________________________________________________________
//
class CGiftOfTheGargantuanCard : public CCard
{
	DECLARE_CARD_CSTOR(CGiftOfTheGargantuanCard);
};

//____________________________________________________________________________
//
class CSalvageTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSalvageTitanCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPunishIgnoranceCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPunishIgnoranceCard);
};

//____________________________________________________________________________
//
class CQasaliAmbusherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQasaliAmbusherCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCovenantOfMindsCard : public CCard
{
	DECLARE_CARD_CSTOR(CCovenantOfMindsCard);
};

//____________________________________________________________________________
//
class CSacellumGodspeakerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSacellumGodspeakerCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CSoulsGraceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulsGraceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSoulsMightCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulsMightCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSarkhanVolCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CSarkhanVolCard);
};

//____________________________________________________________________________
//
class CMycolothCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CMycolothCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAjaniVengeantCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CAjaniVengeantCard);
};

//____________________________________________________________________________
//
class CTidehollowScullerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTidehollowScullerCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType movetype) const;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

};

//____________________________________________________________________________
//
class CElspethKnightErrantCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CElspethKnightErrantCard);
};

//____________________________________________________________________________
//
class CSpearbreakerBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpearbreakerBehemothCard);
};

//____________________________________________________________________________
//
class CRealmRazerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRealmRazerCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CRelicofProgenitusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRelicofProgenitusCard);
};

//____________________________________________________________________________
//
class CSoulsFireCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulsFireCard);

protected:
	class CSoulsFireSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CSoulsFireSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CSoulsFireSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CEtherswornCanonistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CEtherswornCanonistCard);

protected:
    CCardFilter m_CardFilter;

private:
	bool SetTriggerContext1(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType movetype) const;
	bool SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType movetype) const;
};
//____________________________________________________________________________
//
class CBattlegraceAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlegraceAngelCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
								CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CTitanicUltimatumCard : public CCard
{
	DECLARE_CARD_CSTOR(CTitanicUltimatumCard);
};

//____________________________________________________________________________
//
class CEtheriumSculptorCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CEtheriumSculptorCard);
};
//____________________________________________________________________________
//
class CHinderingLightCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CHinderingLightCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBanewaspAfflictionCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CBanewaspAfflictionCard);

protected:	
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMinionReflectorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMinionReflectorCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMagmaSprayCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagmaSprayCard);
};

//____________________________________________________________________________
//
class CKeeperOfProgenitusCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKeeperOfProgenitusCard);

private:
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility* m_pTriggeredAbility;

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility1* m_pTriggeredAbility1;
};

//____________________________________________________________________________
//
class CSigilofDistinctionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSigilofDistinctionCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};
//____________________________________________________________________________
//
class CBrilliantUltimatumCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrilliantUltimatumCard);
};

//____________________________________________________________________________
//
class CClarionUltimatumCard : public CCard 
{
	DECLARE_CARD_CSTOR(CClarionUltimatumCard);

protected:
	CCountedCardContainer pSelectedPermanents;
	CCountedCardContainer pSelectedCards;
	CSelectionSupport m_CardSelection;
	CSelectionSupport m_QuerySelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void SelectPermanent(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void LibrarySearchQuery(CPlayer* pController);
	void OnQuerySelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void LibrarySearch(CPlayer* pController);
};

//____________________________________________________________________________
//
class CSkeletonizeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSkeletonizeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
