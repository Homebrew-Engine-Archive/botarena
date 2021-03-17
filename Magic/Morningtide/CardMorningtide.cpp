#include "stdafx.h"
#include "CardMorningtide.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		DEFINE_CARD(CAmbassadorOakCard);
		DEFINE_CARD(CAuntiesSnitchCard);
		DEFINE_CARD(CBallyrushBanneretCard);
		DEFINE_CARD(CBitterblossomCard);
		DEFINE_CARD(CBlightsoilDruidCard);
		DEFINE_CARD(CBoldwyrHeavyweightsCard);
		DEFINE_CARD(CBorderlandBehemothCard);
		DEFINE_CARD(CBoskBanneretCard);
		DEFINE_CARD(CBramblewoodParagonCard);
		DEFINE_CARD(CBrighthearthBanneretCard);		
		DEFINE_CARD(CBurrentonBombardierCard);
		DEFINE_CARD(CBurrentonShieldBearersCard);
		DEFINE_CARD(CCennsTacticianCard);
		DEFINE_CARD(CChameleonColossusCard);
		DEFINE_CARD(CChangelingSentinelCard);
		DEFINE_CARD(CCloakandDaggerCard);
		DEFINE_CARD(CCoordinatedBarrageCard);
		DEFINE_CARD(CCountrysideCrusherCard);
		DEFINE_CARD(CCreamOfTheCropCard);
		DEFINE_CARD(CDailyRegimenCard);
		DEFINE_CARD(CDeclarationOfNaughtCard);
		DEFINE_CARD(CDeglamerCard);
		DEFINE_CARD(CDewdropSpyCard);
		DEFINE_CARD(CDisperseCard);
		DEFINE_CARD(CDistantMelodyCard);
		DEFINE_CARD(CDivinersWandCard);
		//DEFINE_CARD(CDoorOfDestiniesCard);
		DEFINE_CARD(CEarthbrawnCard);
		DEFINE_CARD(CEarwigSquadCard);
		DEFINE_CARD(CEverbarkShamanCard);
		DEFINE_CARD(CFencerCliqueCard);
		DEFINE_CARD(CFendeepSummonerCard);
		DEFINE_CARD(CFertilidCard);
		DEFINE_CARD(CFestercreepCard);
		DEFINE_CARD(CFeudkillersVerdictCard);
		DEFINE_CARD(CFinalStingFaerieCard);
		DEFINE_CARD(CFloodchaserCard);
		DEFINE_CARD(CForfendCard);
		DEFINE_CARD(CFrogtosserBanneretCard);
		DEFINE_CARD(CGameTrailChangelingCard);
        DEFINE_CARD(CGiltLeafArchdruidCard);
		DEFINE_CARD(CGracefulReprieveCard);
		DEFINE_CARD(CGreatbowDoyenCard);
		DEFINE_CARD(CHeritageDruidCard);
		DEFINE_CARD(CHostileRealmCard);
		DEFINE_CARD(CHuntingTriadCard);
		DEFINE_CARD(CIdyllicTutorCard);
		DEFINE_CARD(CIndomitableAncientsCard);
		DEFINE_CARD(CInkDissolverCard);
		DEFINE_CARD(CInspiredSpriteCard);
		DEFINE_CARD(CKinsbaileBorderguardCard);
		DEFINE_CARD(CKinsbaileCavalierCard);
		DEFINE_CARD(CKithkinZephyrnautCard);
		DEFINE_CARD(CLatchkeyFaerieCard);
		DEFINE_CARD(CLightningCrafterCard);
		DEFINE_CARD(CLuminescentRainCard);
		DEFINE_CARD(CLunkErrantCard);
		DEFINE_CARD(CLysAlanaBowmasterCard);
		DEFINE_CARD(CMaralenOfTheMornsongCard);
		DEFINE_CARD(CMerrowWitsniperCard);
		DEFINE_CARD(CMoongloveChangelingCard);
		DEFINE_CARD(CMorselTheftCard);
		DEFINE_CARD(CMosquitoGuardCard);
		DEFINE_CARD(CMothdustChangelingCard);
		DEFINE_CARD(CMudbuttonClangerCard);
		DEFINE_CARD(CMurmuringBoskCard);
		DEFINE_CARD(CMutavaultCard);
		DEFINE_CARD(CNevermakerCard);
		DEFINE_CARD(CNightshadeSchemersCard);
		DEFINE_CARD(CNogginWhackCard);
		DEFINE_CARD(CNotoriousThrongCard);
		DEFINE_CARD(CObsidianBattleAxeCard);
		DEFINE_CARD(COffalsnoutCard);
		DEFINE_CARD(COonasBlackguardCard);
		DEFINE_CARD(COrchardWardenCard);
		DEFINE_CARD(COrderOfTheGoldenCricketCard);
		DEFINE_CARD(CPacksDisdainCard);
		DEFINE_CARD(CPreeminentCaptainCard);
		DEFINE_CARD(CPricklyBoggartCard);
		DEFINE_CARD(CPyroclastConsulCard);
		DEFINE_CARD(CRageForgerCard);
		DEFINE_CARD(CReachOfBranchesCard);
		DEFINE_CARD(CRecrossThePathsCard);
		DEFINE_CARD(CRedeemTheLostCard);
		DEFINE_CARD(CReinsOfTheVinesteedCard);
		DEFINE_CARD(CReleaseTheAntsCard);
		DEFINE_CARD(CResearchtheDeepCard);
		DEFINE_CARD(CReveillarkCard);
		DEFINE_CARD(CReviveTheFallenCard);
		DEFINE_CARD(CRoaroftheCrowdCard);
		DEFINE_CARD(CRhysTheExiledCard);
		DEFINE_CARD(CRusticClachanCard);
		DEFINE_CARD(CSagesDousingCard);
		DEFINE_CARD(CSageOfFablesCard);
		DEFINE_CARD(CScapeshiftCard);
		DEFINE_CARD(CScarbladeEliteCard);
		DEFINE_CARD(CSeethingPathblazerCard);
		DEFINE_CARD(CSensationGorgerCard);
		DEFINE_CARD(CShardVolleyCard);
		DEFINE_CARD(CShinewendCard);
		DEFINE_CARD(CSigilTracerCard);
		DEFINE_CARD(CSlithermuseCard);
		DEFINE_CARD(CSpitebellowsCard);
		DEFINE_CARD(CSqueakingPieGrubfellowsCard);
		DEFINE_CARD(CStenchskipperCard);
		DEFINE_CARD(CStonehewerGiantCard);
		DEFINE_CARD(CStingmoggieCard);
		DEFINE_CARD(CStinkdrinkerBanditCard);
		DEFINE_CARD(CStompingSlabsCard);
		DEFINE_CARD(CStonybrookBanneretCard);
		DEFINE_CARD(CStonybrookSchoolmasterCard);
		DEFINE_CARD(CStreamOfUnconsciousnessCard);
		DEFINE_CARD(CSunflareShamanCard);
		DEFINE_CARD(CSupremeExemplarCard);
		DEFINE_CARD(CSwellOfCourageCard);
		DEFINE_CARD(CTaureanMaulerCard);
		DEFINE_CARD(CThievesFortuneCard);
		DEFINE_CARD(CThornbiteStaffCard);
		DEFINE_CARD(CTitansRevengeCard);
		DEFINE_CARD(CUnstoppableAshCard);
		DEFINE_CARD(CVendilionCliqueCard);
		DEFINE_CARD(CVengefulFirebrandCard);
		DEFINE_CARD(CVeteransArmamentsCard);
		DEFINE_CARD(CVioletPallCard);
		DEFINE_CARD(CWalkerOfTheGroveCard);
		DEFINE_CARD(CWanderingGraybeardCard);
		DEFINE_CARD(CWarrenWeirdingCard);
		DEFINE_CARD(CWarSpikeChangelingCard);
		DEFINE_CARD(CWaterspoutWeaversCard);
		DEFINE_CARD(CWeedPrunerPoplarCard);
		DEFINE_CARD(CWeirdingShamanCard);
		DEFINE_CARD(CWinnowerPatrolCard);
		DEFINE_CARD(CWolfSkullShamanCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CKinshipCreatureCard::CKinshipCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
												   LPCTSTR strCostText, Power nPower, Life nToughness)
	: CCreatureCard(pGame, strCardName, cardType, creatureType, uID, strCostText, nPower, nToughness)
	, m_KinshipSelection(pGame,CSelectionSupport::SelectionCallback(this, &CKinshipCreatureCard::OnKinshipSelected))
{
	counted_ptr<TriggeredKinshipAbility> cpAbility(::CreateObject<TriggeredKinshipAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
																	CardPlacement::Top, CZoneModifier::RoleType::AllPlayers)); 				

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredKinshipAbility::BeforeResolveSelectionCallback(this, &CKinshipCreatureCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKinshipCreatureCard::BeforeResolution(TriggeredKinshipAbility::TriggeredActionType* pAction)
{
	CZoneModifier modifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
												CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	bool success = false;
	CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

	if (pNextDraw->GetCardType().IsCreature())
	{
		const CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(pNextDraw);
		if (pCreatureCard)
		{
			if (pCreatureCard->GetCardKeyword()->HasChangeling() || this->GetCardKeyword()->HasChangeling())
				success = true;
			else success = this->GetCreatureType().HasCommonTypes(pCreatureCard->GetCreatureType());
		}
	}
	if (pNextDraw->GetCardType().IsTribal())
	{
		const CTribalCard* pTribalCard = dynamic_cast<CTribalCard*>(pNextDraw);
		if (pTribalCard)
		{
			if (pTribalCard->GetCardKeyword()->HasChangeling() || this->GetCardKeyword()->HasChangeling())
				success = true;
			else success = this->GetCreatureType().HasCommonTypes(pTribalCard->GetCreatureType());
		}
	}

	modifier.ApplyTo(GetController());

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Use %s kinship ability"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Ignore %s kinship ability"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	if (success) m_KinshipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	return true;
}

void CKinshipCreatureCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
}

//____________________________________________________________________________
//
CHeritageDruidCard::CHeritageDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heritage Druid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this,
			_T(""),
			AbilityType::Activated,
			GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpAbility->GetCost().AddTapCardCost(3, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIdyllicTutorCard::CIdyllicTutorCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Idyllic Tutor"), CardType::Sorcery, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("enchantments")),
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CMosquitoGuardCard::CMosquitoGuardCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Mosquito Guard"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	//Reinforce ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetAbilityText(_T("Reinforce -"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmbassadorOakCard::CAmbassadorOakCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ambassador Oak"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Elf Warrior C"), 2715, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlightsoilDruidCard::CBlightsoilDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blightsoil Druid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddPayLifeDeltaCost(Life(-1));
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoldwyrHeavyweightsCard::CBoldwyrHeavyweightsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boldwyr Heavyweights"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBorderlandBehemothCard::CBorderlandBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Borderland Behemoth"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CreatureTypeComparer(CREATURE_TYPE(Giant), false)));

	cpAbility->GetSurveyCardFilter().AddComparer(
			new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->SetPowerMultiplier(Power(+4));
	cpAbility->SetToughnessMultiplier(Life(+4));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurrentonBombardierCard::CBurrentonBombardierCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Burrenton Bombardier"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	//Reinforce ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +2));

	cpAbility->SetAbilityText(_T("Reinforce -"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurrentonShieldBearersCard::CBurrentonShieldBearersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Burrenton Shield-Bearers"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDailyRegimenCard::CDailyRegimenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Daily Regimen"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CDailyRegimenCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDailyRegimenCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(pEnchantCard,
			_T("1") WHITE_MANA_TEXT,
			new SpecificCardComparer(pEnchantedCard), FALSE));

	cpEnchantAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpEnchantAbility->SetAbilityText(_T("Put a +1/+1 counter on enchanted creature. Activates"));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CDewdropSpyCard::CDewdropSpyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dewdrop Spy"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);
	
	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetRevealCount(1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDisperseCard::CDisperseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Disperse"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CEarthbrawnCard::CEarthbrawnCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Earthbrawn"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Reinforce ability
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetAbilityText(_T("Reinforce -"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFencerCliqueCard::CFencerCliqueCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fencer Clique"), CardType::Creature, CREATURE_TYPE2(Faerie, Soldier), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			BLUE_MANA_TEXT,
			ZoneId::Library, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFinalStingFaerieCard::CFinalStingFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Final-Sting Faerie"), CardType::Creature, CREATURE_TYPE2(Faerie, Assassin), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureFlagComparer(CreatureFlag::_TakenDamage, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreatbowDoyenCard::CGreatbowDoyenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Greatbow Doyen"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(4))

	, m_CardFilter(_T("an Archer"), _T("Archers"), new CreatureTypeComparer(CREATURE_TYPE(Archer), false))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().
			AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Archer), false));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
								CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGreatbowDoyenCard::SetTriggerContext));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGreatbowDoyenCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard, CCreatureCard* pCreatureCard, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(damage.m_nLifeDelta);
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

//____________________________________________________________________________
//
CIndomitableAncientsCard::CIndomitableAncientsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Indomitable Ancients"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(10))
{
}

//____________________________________________________________________________
//
CInspiredSpriteCard::CInspiredSpriteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Inspired Sprite"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInspiredSpriteCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInspiredSpriteCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (IsInplay() && GetOrientation()->IsTapped()) return true;
	else return false;
}

//____________________________________________________________________________
//
CLunkErrantCard::CLunkErrantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lunk Errant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLysAlanaBowmasterCard::CLysAlanaBowmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lys Alana Bowmaster"), CardType::Creature, CREATURE_TYPE2(Elf, Archer), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	GetCreatureKeyword()->AddReach(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerrowWitsniperCard::CMerrowWitsniperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merrow Witsniper"), CardType::Creature, CREATURE_TYPE2(Merfolk, Rogue), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	typedef
	TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback,
		&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetRevealCount(1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COrchardWardenCard::COrchardWardenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Orchard Warden"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&COrchardWardenCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &COrchardWardenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool COrchardWardenCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool COrchardWardenCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	Life nLife = pCreature->GetLastKnownToughness();
	
	triggerContext.m_LifeModifier.SetLifeDelta(nLife);
	triggerContext.m_LifeModifier.SetSourceCard(this);
	pAction->SetTriggerContext(triggerContext);

	return nLife > Life(0);
}

//____________________________________________________________________________
//
COrderOfTheGoldenCricketCard::COrderOfTheGoldenCricketCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Order of the Golden Cricket"), CardType::Creature, CREATURE_TYPE2(Kithkin, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPricklyBoggartCard::CPricklyBoggartCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Prickly Boggart"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddFear(FALSE);
}

//____________________________________________________________________________
//
CRhysTheExiledCard::CRhysTheExiledCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rhys the Exiled"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, 
			&CRhysTheExiledCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRhysTheExiledCard::BeforeResolution(CRhysTheExiledCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	triggerContext.m_LifeModifier.SetLifeDelta(Life(
		m_CardFilter.CountIncluded(pInplay->GetCardContainer())));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSeethingPathblazerCard::CSeethingPathblazerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Seething Pathblazer"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2),
		_T(""), Power(+2), Life(+0), CreatureKeyword::FirstStrike)

	, m_CardFilter(_T("an Elemental"), _T("Elementals"), new CreatureTypeComparer(CREATURE_TYPE(Elemental), false))
{
	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
}

//____________________________________________________________________________
//
CShardVolleyCard::CShardVolleyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Shard Volley"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CStenchskipperCard::CStenchskipperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stenchskipper"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLACK_MANA_TEXT, Power(6), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStenchskipperCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStenchskipperCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CStenchskipperCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Goblins"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CStenchskipperCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("Goblins"))->CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CStonybrookSchoolmasterCard::CStonybrookSchoolmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonybrook Schoolmaster"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCreateTokenOption(TRUE, _T("Merfolk Wizard"), TOKEN_ID_BY_NAME, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSwellOfCourageCard::CSwellOfCourageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Swell of Courage"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+2)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Reinforce ability
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer, false));

		cpAbility->SetHandOnly();

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->AddDiscardCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSwellOfCourageCard::BeforeResolution));
		cpAbility->SetAbilityText(_T("Reinforce -"));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSwellOfCourageCard::BeforeResolution (CAbilityAction* pAction)
{
	int nExtra = pAction->GetCostConfigEntry().GetExtraValue();
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), nExtra);
	pModifier.ApplyTo(pAction->GetAssociatedCard());

	return true;
}

//____________________________________________________________________________
//
CWeedPrunerPoplarCard::CWeedPrunerPoplarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Weed-Pruner Poplar"), CardType::Creature, CREATURE_TYPE2(Treefolk, Assassin), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeirdingShamanCard::CWeirdingShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Weirding Shaman"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("3") BLACK_MANA_TEXT,
			_T("Goblin Rogue"), TOKEN_ID_BY_NAME,
			2));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Goblins")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKinsbaileCavalierCard::CKinsbaileCavalierCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kinsbaile Cavalier"), CardType::Creature, CREATURE_TYPE2(Kithkin, Knight), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Knight), false),
			Power(+0), Life(+0), CreatureKeyword::DoubleStrike));

	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBitterblossomCard::CBitterblossomCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Bitterblossom"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment, CREATURE_TYPE(Faerie))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Faerie Rogue B"), 2779, 1);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNevermakerCard::CNevermakerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nevermaker"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, FALSE));
		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Neutral);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Library));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNevermakerCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNevermakerCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CNevermakerCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CNevermakerCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
COffalsnoutCard::COffalsnoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Offalsnout"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&COffalsnoutCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COffalsnoutCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool COffalsnoutCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL COffalsnoutCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CReveillarkCard::CReveillarkCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Reveillark"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") WHITE_MANA_TEXT, Power(4), Life(3))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::less<int>>(3));
		cpAbility->GetTargeting().SetSubjectCount(0, 2);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("5") WHITE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CReveillarkCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReveillarkCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CReveillarkCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CReveillarkCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSpitebellowsCard::CSpitebellowsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spitebellows"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT, Power(6), Life(1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-6));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSpitebellowsCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpitebellowsCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSpitebellowsCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CSpitebellowsCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CWalkerOfTheGroveCard::CWalkerOfTheGroveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Walker of the Grove"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Elemental G"), 2811, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("4") GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWalkerOfTheGroveCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWalkerOfTheGroveCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWalkerOfTheGroveCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

BOOL CWalkerOfTheGroveCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CHostileRealmCard::CHostileRealmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hostile Realm"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CHostileRealmCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CHostileRealmCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(pEnchantedCard,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CForfendCard::CForfendCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Forfend"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSupremeExemplarCard::CSupremeExemplarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Supreme Exemplar"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("6") BLUE_MANA_TEXT, Power(10), Life(10))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Elemental), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CLightningCrafterCard::CLightningCrafterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lightning Crafter"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin) | CREATURE_TYPE(Shaman), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-3), PreventableType::Preventable));

		cpAbility->AddTapCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CUnstoppableAshCard::CUnstoppableAshCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Unstoppable Ash"), CardType::Creature, CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T("3") GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk) | CREATURE_TYPE(Warrior), FALSE)); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
  
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
				CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockedEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUnstoppableAshCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CUnstoppableAshCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//___________________________________________________________________________________
//
CSlithermuseCard::CSlithermuseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Slithermuse"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSlithermuseCard::BeforeResolution));

		//cpAbility->SetDrawCount(2);

		AddAbility(cpAbility.GetPointer());		
	}
	{
		//Evoke cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("3") BLUE_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
		cpSpell->SetAbilityText(_T("Casts evoked"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Tokens, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlithermuseCard::SetTriggerContextE));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSlithermuseCard::SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return GetCardKeyword()->CantBeCountered() == TRUE;
}

bool CSlithermuseCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = GetController();
	int pHand = pController->GetZoneById(ZoneId::Hand)->GetSize();
	int oppHand = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize();
	int draw = oppHand - pHand;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.nValue1 = draw;
	pAction->SetTriggerContext(triggerContext);
	return (oppHand > pHand);
}

//____________________________________________________________________________
//
CFestercreepCard::CFestercreepCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Festercreep"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(0))
{
	 GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("1") BLACK_MANA_TEXT,
				Power(-1), Life(-1),
				new AnyCreatureComparer));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->SetToActivatedAbility();

		cpAbility->SetExceptParent(); //Not this
		//cpAbility->GetGlobalCardFilter().AddNegateComparer(new SpecificCardComparer(this)); //Not this

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFloodchaserCard::CFloodchaserCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Floodchaser"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT, Power(0), Life(0))
{
	 GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 6, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		cpAbility->AddCardTypeToSelection(CardType::Island | CardType::PseudoBasicLand, CardType::_LandTypeChangeMask, TRUE, _T("Island"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CFloodchaserCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CFloodchaserCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
CShinewendCard::CShinewendCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shinewend"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(0))
{
	 GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 1, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStingmoggieCard::CStingmoggieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stingmoggie"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") RED_MANA_TEXT, Power(0), Life(0))
{
	 GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCountrysideCrusherCard::CCountrysideCrusherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Countryside Crusher"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCountrysideCrusherCard::OnResolutionCompleted))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CCountrysideCrusherCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int reveal=0;
	int stop=0;

	CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));		
	pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
	pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
	pModifier.GetSelection(0).moveType = MoveType::Others;
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // any cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,
		CZoneModifier::RoleType::AllPlayers);
	
	for (int i = 0; i < pLib->GetSize(); i++)
	{
		CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
		if ((ppCard->GetCardType().IsLand()) && (!stop==1))
			++reveal;
		if (!ppCard->GetCardType().IsLand())
			stop=1;
	}
	
	for (int i = 0; i < reveal; i++)
	{
		pModifier.ApplyTo(GetController());
	}

	pModifier1.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CResearchtheDeepCard::CResearchtheDeepCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Research the Deep"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CResearchtheDeepCard::OnResolutionCompleted))
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT, 1));
	
	cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CResearchtheDeepCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* controller=GetController();
	CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
	CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
	CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
	int opp_score = 0;
	int con_score = 0;
	CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Bottom, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	CMoveCardModifier cmodifier1 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Graveyard, TRUE, MoveType::Others);
	CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Hand, TRUE, MoveType::Others);

	if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	pmodifier.ApplyTo(controller);
	pmodifier.ApplyTo(opponent);
	if (con_score>opp_score) cmodifier2.ApplyTo(this); else cmodifier1.ApplyTo(this);
}

//____________________________________________________________________________
//
CRedeemTheLostCard::CRedeemTheLostCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Redeem the Lost"), CardType::Instant, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRedeemTheLostCard::OnResolutionCompleted))
{
	counted_ptr<CTargetGainKeywordSpell> cpSpell(
		::CreateObject<CTargetGainKeywordSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CRedeemTheLostCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier cmodifier1 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Graveyard, TRUE, MoveType::Others);
		CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Hand, TRUE, MoveType::Others);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier2.ApplyTo(this); else cmodifier1.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CReleaseTheAntsCard::CReleaseTheAntsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Release the Ants"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CReleaseTheAntsCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CReleaseTheAntsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier cmodifier1 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Graveyard, TRUE, MoveType::Others);
		CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Hand, TRUE, MoveType::Others);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier2.ApplyTo(this); else cmodifier1.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CReviveTheFallenCard::CReviveTheFallenCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Revive the Fallen"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CReviveTheFallenCard::OnResolutionCompleted))
{
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CReviveTheFallenCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier cmodifier1 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Graveyard, TRUE, MoveType::Others);
		CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Hand, TRUE, MoveType::Others);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier2.ApplyTo(this); else cmodifier1.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CTitansRevengeCard::CTitansRevengeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Titan's Revenge"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(0),
		PreventableType::Preventable)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTitansRevengeCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(-1));

	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	m_pTargetChgLifeSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CTitansRevengeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult)
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier cmodifier1 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Graveyard, TRUE, MoveType::Others);
		CMoveCardModifier cmodifier2 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Hand, TRUE, MoveType::Others);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier2.ApplyTo(this); else cmodifier1.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CSunflareShamanCard::CSunflareShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sunflare Shaman"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				new AnyCreatureComparer, FALSE,
				Life(-0), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSunflareShamanCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1") RED_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-0), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSunflareShamanCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSunflareShamanCard::BeforeResolution1(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elemental), false));
	CCard* target = pAction->GetAssociatedCard();	

	int nDomainCount = m_CardFilter1.CountIncluded(pInplay->GetCardContainer());

	CLifeModifier pmodifier1 = CLifeModifier(
	Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
	, TRUE, FALSE);

	if (target->GetCardType().IsCreature()) 
	{ CCreatureCard* pTargetCreature = (CCreatureCard*)target;
	  pmodifier1.ApplyTo(pTargetCreature);
	}

	if (this->GetCardType().IsCreature()) pmodifier1.ApplyTo((CCreatureCard*) this);

	return true;
}

bool CSunflareShamanCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter1;
	m_CardFilter1.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Elemental), false));
	CPlayer* target = pAction->GetAssociatedPlayer();	

	int nDomainCount = m_CardFilter1.CountIncluded(pInplay->GetCardContainer());

	CLifeModifier pmodifier1 = CLifeModifier(
	Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
	);

	CLifeModifier pmodifier2 = CLifeModifier(
	Life(-nDomainCount), // numbur on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::AbilityDamage | DamageType::NonCombatDamage // Damage Type
	, TRUE, FALSE);

	pmodifier1.ApplyTo(target);

	if (this->GetCardType().IsCreature()) pmodifier2.ApplyTo((CCreatureCard*) this);

	return true;
}

//____________________________________________________________________________
//
CChameleonColossusCard::CChameleonColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chameleon Colossus"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddChangeling(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChameleonColossusCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CChameleonColossusCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPowerModifier pModifier1 = CPowerModifier(Power(this->GetLastKnownPower()));
	CLifeModifier pModifier2 = CLifeModifier(Life(GET_INTEGER(this->GetLastKnownPower())));
	pModifier1.ApplyTo((CCreatureCard*)this);
	pModifier2.ApplyTo((CCreatureCard*)this);

	/*ContextValue Context(pAction->GetValue());

	Context.nValue1 = this->GetLastKnownPower();
	Context.nValue2 = this->GetLastKnownPower();

	pAction->SetValue(Context);	*/

	return true;
}

//____________________________________________________________________________
//
CChangelingSentinelCard::CChangelingSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Changeling Sentinel"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CGameTrailChangelingCard::CGameTrailChangelingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Game-Trail Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddChangeling(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CMoongloveChangelingCard::CMoongloveChangelingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moonglove Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMothdustChangelingCard::CMothdustChangelingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Mothdust Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		 BLUE_MANA_TEXT, Power(1), Life(1),
		_T(""), Power(+0), Life(+0), CreatureKeyword::Flying)
{
	m_pPumpAbility->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CTaureanMaulerCard::CTaureanMaulerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Taurean Mauler"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWarSpikeChangelingCard::CWarSpikeChangelingCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("War-Spike Changeling"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(3),
		RED_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::FirstStrike)
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CMutavaultCard::CMutavaultCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Mutavault"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("1"),
				_T("Shapeshifter AA"), 64064));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSensationGorgerCard::CSensationGorgerCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Sensation Gorger"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
}

void CSensationGorgerCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, GetController())));
				CDrawCardModifier pModifier = CDrawCardModifier(GetGame(),  MinimumValue(4), MaximumValue(4));
				 CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(GetController());
				pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));
				pModifier.ApplyTo(GetController());
				pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));			
				return;
			}
		}
}

//____________________________________________________________________________
//
CVendilionCliqueCard::CVendilionCliqueCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vendilion Clique"), CardType::_LegendaryCreature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Neutral);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVendilionCliqueCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CVendilionCliqueCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();
	int nHandSize = pTargetPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	CDrawCardCommon::ResolveRevealZone(
		pTargetPlayer,				// This player's zone
		pAction->GetController(),	// Selecting
		nHandSize,
		false, false,
		ZoneId::Hand,
		CardPlacement::TopOrBottom,
		NULL,
		MaximumValue(1), MinimumValue(0),
		ZoneId::Hand, ZoneId::Library,
		CardPlacement::Bottom,
		CCardFilter::GetFilter(_T("non-lands")),
		true);

	if (nHandSize > pTargetPlayer->GetZoneById(ZoneId::Hand)->GetSize())
	{
		CDrawCardModifier modifier(GetGame(), MinimumValue(1), MaximumValue(1));
		modifier.ApplyTo(pTargetPlayer);
	}

	return true;
}

//____________________________________________________________________________
//
CEverbarkShamanCard::CEverbarkShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Everbark Shaman"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(5))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""), 
			CCardFilter::GetFilter(_T("Forests")), 
			ZoneId::Battlefield, FALSE, TRUE, TRUE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScarbladeEliteCard::CScarbladeEliteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scarblade Elite"), CardType::Creature, CREATURE_TYPE2(Elf, Assassin), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Assassin), false));
	
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVengefulFirebrandCard::CVengefulFirebrandCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Vengeful Firebrand"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(2),
		RED_MANA_TEXT, Power(+1), Life(+0), CreatureKeyword::Null)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}
/* 
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengefulFirebrandCard::SetTriggerContext1));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengefulFirebrandCard::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengefulFirebrandCard::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardTypeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengefulFirebrandCard::SetTriggerContext4));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardTypeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengefulFirebrandCard::SetTriggerContext5));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVengefulFirebrandCard::SetTriggerContext6));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVengefulFirebrandCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int n = 0;

	n = m_CardFilter.CountIncluded(pContGraveyard->GetCardContainer());

	return n > 0;
}

bool CVengefulFirebrandCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int n = 0;

	n = m_CardFilter.CountIncluded(pContGraveyard->GetCardContainer());

	return (n == 1 &&  m_CardFilter.IsCardIncluded(pCard));
}

bool CVengefulFirebrandCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int n = 0;

	n = m_CardFilter.CountIncluded(pContGraveyard->GetCardContainer());

	return (n == 0 &&  m_CardFilter.IsCardIncluded(pCard));
}

bool CVengefulFirebrandCard::SetTriggerContext4(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CardType fromCardType, CardType toCardType) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int n = 0;

	n = m_CardFilter.CountIncluded(pContGraveyard->GetCardContainer());

	return n > 0;
}

bool CVengefulFirebrandCard::SetTriggerContext5(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CCard* pCard, CardType fromCardType, CardType toCardType) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int n = 0;

	n = m_CardFilter.CountIncluded(pContGraveyard->GetCardContainer());

	return (n == 0 &&  m_CardFilter.IsCardIncluded(pCard));
}

bool CVengefulFirebrandCard::SetTriggerContext6(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContGraveyard = GetController()->GetZoneById(ZoneId::Graveyard);
	int n = 0;

	n = m_CardFilter.CountIncluded(pContGraveyard->GetCardContainer());

	if (n > 0)
	{
		triggerContext.m_CreatureKeywordModifier.GetModifier().SetToAdd(CreatureKeyword::Haste);
		triggerContext.m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
		return true;
	}

	if (n == 0)
	{
		triggerContext.m_CreatureKeywordModifier.GetModifier().SetToRemove(CreatureKeyword::Haste);
		triggerContext.m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
	}

	return true;
} */

//____________________________________________________________________________
//
CRusticClachanCard::CRusticClachanCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rustic Clachan"), nID, CardType::NonbasicLand)
	, m_CardFilter(_T("a Kithkin card"), _T("Kithkin cards"), new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		//Reinforce ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetAbilityText(_T("Reinforce -"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSagesDousingCard::CSagesDousingCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Sage's Dousing"), CardType::Instant, nID, CREATURE_TYPE(Wizard))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CSagesDousingCard::OnResolutionCompleted))
{
	counted_ptr<CCounterSpell> cpSpell(
		::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
			_T("2") BLUE_MANA_TEXT,
			new TrueCardComparer));

	cpSpell->SetCanBeDenied();
	cpSpell->GetDenialCost().SetManaCost(_T("3"));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CSagesDousingCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0) pModifier.ApplyTo(GetController());	
}

//____________________________________________________________________________
//
CStreamOfUnconsciousnessCard::CStreamOfUnconsciousnessCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Stream of Unconsciousness"), CardType::Instant, nID, CREATURE_TYPE(Wizard))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CStreamOfUnconsciousnessCard::OnResolutionCompleted))
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			Power(-4), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));
	
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CStreamOfUnconsciousnessCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), false));

	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));

	if (m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer())>0 && bResult) pModifier.ApplyTo(GetController());	
}

//____________________________________________________________________________
//
CVioletPallCard::CVioletPallCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Violet Pall"), CardType::Instant, nID, CREATURE_TYPE(Faerie))
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Faerie Rogue B"), 2779, 1));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHuntingTriadCard::CHuntingTriadCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Hunting Triad"), CardType::Sorcery, nID, CREATURE_TYPE(Elf))
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				_T("Elf Warrior C"), 2715,
				3));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Reinforce ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("3") GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +3));

		cpAbility->SetAbilityText(_T("Reinforce -"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COonasBlackguardCard::COonasBlackguardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Oona's Blackguard"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	/*
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rogue), false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COonasBlackguardCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	*/
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenDamageDealt,
								CWhenDamageDealt::PlayerEventCallback, 
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new CardCounterComparer<std::greater<int>>(_T("+1/+1"), 0));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter2);

		AddAbility(cpAbility.GetPointer());
	}
}
/*
bool COonasBlackguardCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}
*/
//____________________________________________________________________________
//
CMorselTheftCard::CMorselTheftCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Morsel Theft"), CardType::Sorcery, nID, CREATURE_TYPE(Rogue))
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery, 
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-3), PreventableType::NotPreventable));

		cpSpell->SetReverseLifeDeltaToController();

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery, 
				_T("1") BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-3), PreventableType::NotPreventable));

		cpSpell->SetReverseLifeDeltaToController();

		 counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMorselTheftCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CMorselTheftCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CStinkdrinkerBanditCard::CStinkdrinkerBanditCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stinkdrinker Bandit"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		//prowl mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		 counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CStinkdrinkerBanditCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2, TRUE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rogue), FALSE));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new BlockedCreatureComparer);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CStinkdrinkerBanditCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CThievesFortuneCard::CThievesFortuneCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Thieves' Fortune"), CardType::Instant, nID, CREATURE_TYPE(Rogue))
{
	{
		counted_ptr<CDrawCardSpellEx> cpSpell(
			::CreateObject<CDrawCardSpellEx>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				4)); // Get 3 cards

		// Out of the 3 cards, get 1 to hand, ... (selection 0 is added by default)
		cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(1);
		cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(1);
		cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

		// and 1 to the top of library, ...
		cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(0), // select 1 card
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally reorder the last one to the bottom of library
		cpSpell->GetZoneModifier().SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CDrawCardSpellEx> cpSpell(
			::CreateObject<CDrawCardSpellEx>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				4)); // Get 3 cards

		// Out of the 3 cards, get 1 to hand, ... (selection 0 is added by default)
		cpSpell->GetZoneModifier().GetSelection(0).nMinSelectionCount = MinimumValue(1);
		cpSpell->GetZoneModifier().GetSelection(0).nMaxSelectionCount = MaximumValue(1);
		cpSpell->GetZoneModifier().GetSelection(0).moveType = MoveType::Others;

		// and 1 to the top of library, ...
		cpSpell->GetZoneModifier().AddSelection(MinimumValue(0), MaximumValue(0), // select 1 card
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally reorder the last one to the bottom of library
		cpSpell->GetZoneModifier().SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);

		 counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CThievesFortuneCard::CanPlay)));
			 
			cpSpell->Add(cpTrait.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CThievesFortuneCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CBramblewoodParagonCard::CBramblewoodParagonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bramblewood Paragon"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	/*
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior), FALSE));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBramblewoodParagonCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	*/
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1),
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

/*
bool CBramblewoodParagonCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}
*/
//____________________________________________________________________________
//
CFrogtosserBanneretCard::CFrogtosserBanneretCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Frogtosser Banneret"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Goblin) | CREATURE_TYPE(Rogue), false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStonybrookBanneretCard::CStonybrookBanneretCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Stonybrook Banneret"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1), CreatureKeyword::Islandwalk)
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Merfolk) | CREATURE_TYPE(Wizard), false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBoskBanneretCard::CBoskBanneretCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bosk Banneret"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Treefolk) | CREATURE_TYPE(Shaman), false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBallyrushBanneretCard::CBallyrushBanneretCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ballyrush Banneret"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Kithkin) | CREATURE_TYPE(Soldier), false),
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBrighthearthBanneretCard::CBrighthearthBanneretCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brighthearth Banneret"), CardType::Creature, CREATURE_TYPE2(Elemental, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Elemental) | CREATURE_TYPE(Warrior), false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Reinforce ability
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->SetAbilityText(_T("Reinforce -"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMurmuringBoskCard::CMurmuringBoskCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Murmuring Bosk"), nID, CardType::NonbasicLand | CardType::Forest)

	, m_CardFilter(_T("a Treefolk card"), _T("Treefolk cards"), new CreatureTypeComparer(CREATURE_TYPE(Treefolk), false))	
	, m_cpEventListener(VAR_NAME(m_cpListener), CardTapForManaEventSource::Listener::EventCallback(this,
			&CMurmuringBoskCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddMovementReplacement(FALSE, ZoneId::_AllZones, ZoneId::Battlefield, MoveType::Others, 1, _T("reveal"), &m_CardFilter);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
	//	cpNonbasicLandManaAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::NonCombatDamage));
		cpNonbasicLandManaAbility->GetTapForManaEventSource()->AddListener(m_cpEventListener.GetPointer());	

		cpNonbasicLandManaAbility->SetAbilityName(_T("Take 1 damage from"));
		cpNonbasicLandManaAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		//cpNonbasicLandManaAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::NonCombatDamage));
		cpNonbasicLandManaAbility->GetTapForManaEventSource()->AddListener(m_cpEventListener.GetPointer());	

		cpNonbasicLandManaAbility->SetAbilityName(_T("Take 1 damage from"));
		cpNonbasicLandManaAbility->SetAbilityText(_T("Take 1 damage from"));

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

void CMurmuringBoskCard::OnResolutionCompleted(const CManaProductionAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(GetController());
}

//____________________________________________________________________________
//
CEarwigSquadCard::CEarwigSquadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Earwig Squad"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
{
	{
		//prowl mana cost
		counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
			::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Creature,
				_T("2") BLACK_MANA_TEXT, MinimumValue(3), MaximumValue(3),
				CCardFilter::GetFilter(_T("cards"))));

		 counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CEarwigSquadCard::CanPlay)));
		 
		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
		cpSpell->SetSearchLibraryData(ZoneId::Exile, TRUE, TRUE, FALSE, TRUE);
		cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CEarwigSquadCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CNogginWhackCard::CNogginWhackCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Noggin Whack"), CardType::Sorcery, nID, CREATURE_TYPE(Rogue))
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,					
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				3, MoveType::Discard, ZoneId::Null, FALSE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetSecondaryAction(2, MoveType::Discard, ZoneId::Graveyard, TRUE, FALSE, new TrueCardComparer, TRUE, FALSE,
									CardPlacement::Top, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,					
				_T("1") BLACK_MANA_TEXT,
				3, MoveType::Discard, ZoneId::Null, FALSE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetSecondaryAction(2, MoveType::Discard, ZoneId::Graveyard, TRUE, FALSE, new TrueCardComparer, TRUE, FALSE,
									CardPlacement::Top, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNogginWhackCard::CanPlay)));
			 
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CNogginWhackCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CNotoriousThrongCard::CNotoriousThrongCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Notorious Throng"), CardType::Sorcery, nID, CREATURE_TYPE(Rogue))
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				_T("Faerie Rogue B"), 2779, 0));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNotoriousThrongCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") BLUE_MANA_TEXT,
				_T("Faerie Rogue B"), 2779, 0));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNotoriousThrongCard::CanPlay)));
		 
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNotoriousThrongCard::BeforeResolution));
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CNotoriousThrongCard::BeforeResolution(CAbilityAction* pAction) const
{
	ContextValue Context(pAction->GetValue());
	Context.nValue1 = GET_INTEGER(GetGame()->GetNextPlayer(GetController())->GetDamageTakenThisTurn());;
	pAction->SetValue(Context);	

	return true;
}

BOOL CNotoriousThrongCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CLatchkeyFaerieCard::CLatchkeyFaerieCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Latchkey Faerie"), CardType::Creature, CREATURE_TYPE2(Faerie, Rogue), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(1))
{
	{
		//prowl mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("2") BLUE_MANA_TEXT));

		 counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLatchkeyFaerieCard::CanPlay)));
		 
		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);		

		CCardKeywordModifier* pModifier= new CCardKeywordModifier();
		pModifier->GetModifier().SetToAdd(CardKeyword::Flash);		
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpSpell->GetResolutionModifier().CCardModifiers::push_back(pModifier);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CLatchkeyFaerieCard::BeforeResolution1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatchkeyFaerieCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLatchkeyFaerieCard::SetTriggerContext1(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const
{
	return (GetCardKeyword()->HasFlash() == TRUE);
}

bool CLatchkeyFaerieCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CCardKeywordModifier pModifier= CCardKeywordModifier();
	pModifier.GetModifier().SetToRemove(CardKeyword::Flash);		
	pModifier.GetModifier().SetOneTurnOnly(FALSE);

	pModifier.ApplyTo(this);

	return true;
}

BOOL CLatchkeyFaerieCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

//____________________________________________________________________________
//
CWarrenWeirdingCard::CWarrenWeirdingCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Warren Weirding"), CardType::Sorcery, nID, CREATURE_TYPE(Goblin))
{
		counted_ptr<CTargetSacrificePlusSpell> cpSpell(
		::CreateObject<CTargetSacrificePlusSpell>(this, AbilityType::Sorcery,					
			_T("1") BLACK_MANA_TEXT,
			CCardFilter::GetFilter(_T("creatures"))));

	cpSpell->SetCreateGoblins(TRUE);

	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CSageOfFablesCard::CSageOfFablesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sage of Fables"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	/*
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), FALSE));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSageOfFablesCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	*/
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T("2"), 1));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
}

/*
bool CSageOfFablesCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}
*/
//____________________________________________________________________________
//
CWolfSkullShamanCard::CWolfSkullShamanCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Wolf-Skull Shaman"), CardType::Creature, CREATURE_TYPE2(Elf, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

void CWolfSkullShamanCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Wolf D"), 2840, 1);
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(GetController());
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CWinnowerPatrolCard::CWinnowerPatrolCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Winnower Patrol"), CardType::Creature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(2))
{
}

void CWinnowerPatrolCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), +1);
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CMudbuttonClangerCard::CMudbuttonClangerCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Mudbutton Clanger"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{	
}

void CMudbuttonClangerCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CLifeModifier pModifier1 = CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CPowerModifier pModifier3 = CPowerModifier(Power(+1));
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo((CCreatureCard*)this);
				pModifier3.ApplyTo((CCreatureCard*)this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CInkDissolverCard::CInkDissolverCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Ink Dissolver"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{	
}

void CInkDissolverCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library,3, CZoneModifier::RoleType::PrimaryPlayer,CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(3), MaximumValue(3), // select cards to bootom
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // any cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));				

				return;
			}
		}
}

//____________________________________________________________________________
//
CKithkinZephyrnautCard::CKithkinZephyrnautCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Kithkin Zephyrnaut"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{	
}

void CKithkinZephyrnautCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CLifeModifier pModifier1 = CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CPowerModifier pModifier3 = CPowerModifier(Power(+2));
				CCreatureKeywordModifier pModifier4 = CCreatureKeywordModifier();
				CCreatureKeywordModifier pModifier5 = CCreatureKeywordModifier();
				pModifier4.GetModifier().SetToAdd(CreatureKeyword::Flying);
				pModifier4.GetModifier().SetOneTurnOnly(TRUE);
				pModifier5.GetModifier().SetToAdd(CreatureKeyword::Vigilance);
				pModifier5.GetModifier().SetOneTurnOnly(TRUE);
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo((CCreatureCard*)this);
				pModifier3.ApplyTo((CCreatureCard*)this);
				pModifier4.ApplyTo((CCreatureCard*)this);
				pModifier5.ApplyTo((CCreatureCard*)this);
					
				return;
			}
		}
}

//____________________________________________________________________________
//
CNightshadeSchemersCard::CNightshadeSchemersCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Nightshade Schemers"), CardType::Creature, CREATURE_TYPE2(Faerie, Wizard), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(2))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

void CNightshadeSchemersCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CLifeModifier pModifier2 = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library,3, CZoneModifier::RoleType::PrimaryPlayer,CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);				
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));				

				return;
			}
		}
}

//____________________________________________________________________________
//
CWanderingGraybeardCard::CWanderingGraybeardCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Wandering Graybeard"), CardType::Creature, CREATURE_TYPE2(Giant, Wizard), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{	
}

void CWanderingGraybeardCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CLifeModifier pModifier2 = CLifeModifier(Life(+4), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library,3, CZoneModifier::RoleType::PrimaryPlayer,CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);				
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(GetController());				

				return;
			}
		}
}

//____________________________________________________________________________
//
CSqueakingPieGrubfellowsCard::CSqueakingPieGrubfellowsCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Squeaking Pie Grubfellows"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{	
}

void CSqueakingPieGrubfellowsCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // any cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Discard, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				pModifier1.ApplyTo(m_pGame->GetNextPlayer(GetController()));				

				return;
			}
		}
}

//____________________________________________________________________________
//
CPyroclastConsulCard::CPyroclastConsulCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Pyroclast Consul"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{	
}

void CPyroclastConsulCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{				
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);
				CZone* opponent =  m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				for (int i = 0; i < controller->GetSize(); ++i)
					if (controller->GetAt(i)->GetCardType().IsCreature()) 
						pModifier.ApplyTo((CCreatureCard*)controller->GetAt(i));

				for (int i = 0; i < opponent->GetSize(); ++i)
					if (opponent->GetAt(i)->GetCardType().IsCreature()) 
						pModifier.ApplyTo((CCreatureCard*)controller->GetAt(i));

				return;
			}
		}
}

//____________________________________________________________________________
//
CWaterspoutWeaversCard::CWaterspoutWeaversCard(CGame* pGame, UINT nID)
	: CKinshipCreatureCard(pGame, _T("Waterspout Weavers"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
}

void CWaterspoutWeaversCard::OnKinshipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{				
				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.ApplyTo(GetController());
				CZone* controller = GetController()->GetZoneById(ZoneId::Battlefield);

				CCreatureKeywordModifier pModifier = CCreatureKeywordModifier();				
				pModifier.GetModifier().SetToAdd(CreatureKeyword::Flying);
				pModifier.GetModifier().SetOneTurnOnly(TRUE);

				for (int i = 0; i < controller->GetSize(); ++i)
					if (controller->GetAt(i)->GetCardType().IsCreature()) 
						pModifier.ApplyTo((CCreatureCard*)controller->GetAt(i));

				return;
			}
		}
}

//____________________________________________________________________________
//
CCloakandDaggerCard::CCloakandDaggerCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Cloak and Dagger"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact, CREATURE_TYPE(Rogue))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("3")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Shroud);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCardModifier(pModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rogue), false));
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCloakandDaggerCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCloakandDaggerCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCloakandDaggerCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CCloakandDaggerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CDivinersWandCard::CDivinersWandCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Diviner's Wand"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact, CREATURE_TYPE(Wizard))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("3")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDivinersWandCard::CreateEquipmentAbility1)));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDivinersWandCard::CreateEquipmentAbility2)));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wizard), false));
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDivinersWandCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDivinersWandCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

	counted_ptr<CAbility> CDivinersWandCard::CreateEquipmentAbility1(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpEquipAbility(::CreateObject<TriggeredAbility>(pCard));

	cpEquipAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpEquipAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpEquipAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpEquipAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpEquipAbility->GetPowerModifier().SetPowerDelta(Power(+1));

	cpEquipAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpEquipAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	
	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

	counted_ptr<CAbility> CDivinersWandCard::CreateEquipmentAbility2(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(pCard,
			_T("4"), 1));

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

bool CDivinersWandCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CDivinersWandCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CObsidianBattleAxeCard::CObsidianBattleAxeCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Obsidian Battle-Axe"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact, CREATURE_TYPE(Warrior))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("3")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this,
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->AddCreatureModifier(pModifier);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Warrior), false));
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CObsidianBattleAxeCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CObsidianBattleAxeCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CObsidianBattleAxeCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CObsidianBattleAxeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CThornbiteStaffCard::CThornbiteStaffCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Thornbite Staff"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact, CREATURE_TYPE(Shaman))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("4")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CThornbiteStaffCard::CreateEquipmentAbility1)));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CThornbiteStaffCard::CreateEquipmentAbility2)));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Shaman), false));
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CThornbiteStaffCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThornbiteStaffCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

	counted_ptr<CAbility> CThornbiteStaffCard::CreateEquipmentAbility1(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpEquipAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T("2"),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpEquipAbility->AddTapCost();

	cpEquipAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

	counted_ptr<CAbility> CThornbiteStaffCard::CreateEquipmentAbility2(CCard* pCard)
{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpEquipAbility(
		::CreateObject<TriggeredAbility>(pCard, ZoneId::Battlefield, ZoneId::Graveyard));

	cpEquipAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpEquipAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpEquipAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

	cpEquipAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

	cpEquipAbility->AddAbilityTag(AbilityTag::OrientationChange);
	
	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

bool CThornbiteStaffCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CThornbiteStaffCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CVeteransArmamentsCard::CVeteransArmamentsCard(CGame* pGame, UINT nID)
	: CInPlayTribalSpellCard(pGame, _T("Veteran's Armaments"), CardType::Artifact | CardType::Equipment, nID,
		_T("2"), AbilityType::Artifact, CREATURE_TYPE(Soldier))
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCardModifier(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CVeteransArmamentsCard::CreateEquipmentAbility)));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVeteransArmamentsCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVeteransArmamentsCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CVeteransArmamentsCard::CreateEquipmentAbility(CCard* pCard)
{
	m_CardFilter.AddComparer(new AttackingCreatureComparer);
	m_CardFilter.SetFilterName(_T("attacking creature"), _T("attacking creatures"));

	counted_ptr<TriggeredAbility2> cpEquipAbility(::CreateObject<TriggeredAbility2>(pCard));

	cpEquipAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
	cpEquipAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVeteransArmamentsCard::BeforeResolution2));

	return counted_ptr<CAbility>(cpEquipAbility.GetPointer());
}

bool CVeteransArmamentsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CVeteransArmamentsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

bool CVeteransArmamentsCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer()) + m_CardFilter.CountIncluded(pOppInplay->GetCardContainer());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nCount));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CAuntiesSnitchCard::CAuntiesSnitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auntie's Snitch"), CardType::Creature, CREATURE_TYPE2(Goblin, Rogue), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
	, m_CardFilter(_T("a Goblin or Rogue"), _T("Goblins or Rogues"), new CreatureTypeComparer(CREATURE_TYPE(Goblin) | CREATURE_TYPE(Rogue), false))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		//prowl mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("1") BLACK_MANA_TEXT));

		 counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAuntiesSnitchCard::CanPlay)));
		 
		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAuntiesSnitchCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAuntiesSnitchCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CAuntiesSnitchCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	return (m_pGame->GetNextPlayer(GetController())->IsProwled());
}

bool CAuntiesSnitchCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const
{	
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CAuntiesSnitchCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CReachOfBranchesCard::CReachOfBranchesCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Reach of Branches"), CardType::Instant, nID, CREATURE_TYPE(Treefolk))
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("4") GREEN_MANA_TEXT,
				_T("Treefolk Shaman"), TOKEN_ID_BY_NAME, 1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Forest, false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReachOfBranchesCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CReachOfBranchesCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CScapeshiftCard::CScapeshiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scapeshift"), CardType::Sorcery, nID)
{
	counted_ptr<CScapeshiftSpell> cpSpell(
		::CreateObject<CScapeshiftSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			SpecialNumber::Any,
			CCardFilter::GetFilter(_T("lands")), CCardFilter::GetFilter(_T("lands"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFertilidCard::CFertilidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fertilid"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield);

	counted_ptr<CActivatedAbility<CTargetPlayerSearchLibraryCardSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetPlayerSearchLibraryCardSpell>>(this,
			_T("1") GREEN_MANA_TEXT,
			MinimumValue(1), MaximumValue(1),
			CCardFilter::GetFilter(_T("basic lands"))));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);
	cpAbility->SetSearchLibraryData(ZoneId::Battlefield, true, true, true, true);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRageForgerCard::CRageForgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rage Forger"), CardType::Creature, CREATURE_TYPE2(Elemental, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Shaman"), _T("Shamans"), new AnyCreatureComparer)
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Shaman), false));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	{
		typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTriggeredPlayerModifiers().Add(new CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1))));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::Preventable);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRageForgerCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRageForgerCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const
{
	if (pCreature->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() == 0)
		return false;

	triggerContext.m_LifeModifier.SetSourceCard(pCreature);
	return true;
}

//____________________________________________________________________________
//
CGiltLeafArchdruidCard::CGiltLeafArchdruidCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Gilt-Leaf Archdruid"), CardType::Creature, CREATURE_TYPE2(Elf, Druid), nID,
        _T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
    , m_CardFilter(_T("a Druid"), _T("Druids"), new CreatureTypeComparer(CREATURE_TYPE(Druid), false))
{
    {
        typedef
            TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCast > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(&m_CardFilter);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
    {
		/* CMoveCardModifier* pMoveCardModifier = new CMoveCardModifier;
		pMoveCardModifier->SetFromZone(ZoneId::Battlefield);
		pMoveCardModifier->SetToZone(ZoneId::Battlefield);
		pMoveCardModifier->SetToPlayer(NULL);
		pMoveCardModifier->SetToOwnersZone(FALSE);
		pMoveCardModifier->SetMoveType(MoveType::Others); */

		counted_ptr<CActivatedAbility<CTargetPlayerCardsSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerCardsSpell>>(this,
				_T(""),
				ZoneId::Battlefield, CCardFilter::GetFilter(_T("lands"))/* ,
				pMoveCardModifier */));

		cpAbility->SetToActivatedAbility();

		cpAbility->AddCardModifier(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));
		cpAbility->AddCardModifier(new CGainControlModifier(GetGame(), (CCard*)this));

		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetCost().AddTapCardCost(7, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CPreeminentCaptainCard::CPreeminentCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Preeminent Captain"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
	{
	typedef
		TTriggeredSubjectAbility< CMoveAttackingAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier),false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->SetFromZoneId(ZoneId::Hand);	

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CReinsOfTheVinesteedCard::CReinsOfTheVinesteedCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Reins of the Vinesteed"), nID,
		_T("3") GREEN_MANA_TEXT,
		Power(+2), Life(+2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CReinsOfTheVinesteedCard::OnResolutionCompleted))
{
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);

	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(TRUE);


	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReinsOfTheVinesteedCard::SetTriggerContext));
	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->GetCardModifiers().Add(new CCardFlagModifier(m_CardFlagModifier1));

	pAbility = cpAbility.GetPointer();
	AddAbility(pAbility);
}

bool CReinsOfTheVinesteedCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	pAbility->GetGatherer().GetSubjectCardFilter().SetComparer(new CreatureTypeComparer(pCreature->GetCreatureType(), false));
	return true;
}

void CReinsOfTheVinesteedCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCardFilter* pFilter = pAbility->GetGatherer().GetSubjectCardFilter().Clone();
	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(GetInstanceID());
	pFilter->AddComparer(pComparer);

	CCountedCardContainer cards;
	CZone* pZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		pFilter->GetIncluded(*pZone, cards);
		if (cards.GetSize() > 0) break;
	}
	delete pFilter;
	if (!cards.GetSize()) return;
	CCard* pCard = cards.GetAt(0);

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);
	modifier.ApplyTo(this);

	for (int i = 0; i < this->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(this->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(pCard, GetController(), this->GetSpells().GetAt(i)->GetActionValue());
	}
	m_CardFlagModifier2.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CDistantMelodyCard::CDistantMelodyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Distant Melody"), CardType::Sorcery, nID)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CDistantMelodyCard::OnSelectionDone))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDistantMelodyCard::OnResolutionCompleted))
{
	{

		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CDistantMelodyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	std::vector<SelectionEntry> entries;
	if (m_pGame->IsThinking() || pAbilityAction->GetController()->IsComputer())
	{
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			BOOL bAdd = FALSE;

			CZone* pInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
					{
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
							(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Tribal).Any() &&
							(((CTribalCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}

					}
			
			if (bAdd == TRUE)
			{
			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
			}
		}

	}
	else
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
		}

		GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAbilityAction->GetAbility()->GetCard(), pAbilityAction->GetController());

}

void CDistantMelodyCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			CCardFilter* pDiscardFilter;
			CCardFilter pDiscardFilter_temp;

			pDiscardFilter = NULL;

			pDiscardFilter_temp.SetComparer(new CreatureTypeComparer(creatureType, false));

			pDiscardFilter = &pDiscardFilter_temp;			

			int i = pDiscardFilter->CountIncluded(pSelectionPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(i), MaximumValue(i));

			pModifier.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CLuminescentRainCard::CLuminescentRainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Luminescent Rain"), CardType::Instant, nID)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CLuminescentRainCard::OnSelectionDone))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CLuminescentRainCard::OnResolutionCompleted))
{
	{

		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
}

void CLuminescentRainCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	std::vector<SelectionEntry> entries;
	if (m_pGame->IsThinking() || pAbilityAction->GetController()->IsComputer())
	{
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			BOOL bAdd = FALSE;

			CZone* pInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
					{
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
							(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Tribal).Any() &&
							(((CTribalCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}

					}
			
			if (bAdd == TRUE)
			{
			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
			}
		}

	}
	else
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
		}

		GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAbilityAction->GetAbility()->GetCard(), pAbilityAction->GetController(), (DWORD)pAbilityAction->GetAbility()->GetCard());

}

void CLuminescentRainCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			CCardFilter* pDiscardFilter;
			CCardFilter pDiscardFilter_temp;

			pDiscardFilter = NULL;

			pDiscardFilter_temp.SetComparer(new CreatureTypeComparer(creatureType, false));

			pDiscardFilter = &pDiscardFilter_temp;			

			int i = pDiscardFilter->CountIncluded(pSelectionPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			CLifeModifier pModifier = CLifeModifier(Life(i*2), (CCard*)dwContext1, PreventableType::Preventable, DamageType::NotDealingDamage);

			pModifier.ApplyTo(pSelectionPlayer);
		}
}

//____________________________________________________________________________
//
CPacksDisdainCard::CPacksDisdainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pack's Disdain"), CardType::Instant, nID)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CPacksDisdainCard::OnSelectionDone))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CPacksDisdainCard::OnResolutionCompleted))
{
	{

		counted_ptr<CGenericTargetCreatureSpell> cpSpell(
			::CreateObject<CGenericTargetCreatureSpell>(this, AbilityType::Instant,
				_T("1") BLACK_MANA_TEXT, new AnyCreatureComparer));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
}

void CPacksDisdainCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	std::vector<SelectionEntry> entries;
	if (m_pGame->IsThinking() || pAbilityAction->GetController()->IsComputer())
	{
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			BOOL bAdd = FALSE;

			CZone* pInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
					{
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
							(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Tribal).Any() &&
							(((CTribalCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}

					}
			
			if (bAdd == TRUE)
			{
			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
			}
		}

	}
	else
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
		}

		GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAbilityAction->GetAbility()->GetCard(), pAbilityAction->GetController(), 
			(DWORD)pAbilityAction->GetAbility()->GetCard(), (DWORD)pAbilityAction->GetAssociatedCard());

}

void CPacksDisdainCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			CCardFilter* pDiscardFilter;
			CCardFilter pDiscardFilter_temp;

			pDiscardFilter = NULL;

			pDiscardFilter_temp.SetComparer(new CreatureTypeComparer(creatureType, false));

			pDiscardFilter = &pDiscardFilter_temp;			

			int i = pDiscardFilter->CountIncluded(pSelectionPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			CLifeModifier pModifier1 = CLifeModifier(Life(-1*i), (CCard*)dwContext1, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			CPowerModifier pModifier3 = CPowerModifier(Power(-1*i));			

			pModifier1.ApplyTo((CCreatureCard*)dwContext2);
			pModifier3.ApplyTo((CCreatureCard*)dwContext2);
		}
}

//____________________________________________________________________________
//
CCoordinatedBarrageCard::CCoordinatedBarrageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Coordinated Barrage"), CardType::Instant, nID)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CCoordinatedBarrageCard::OnSelectionDone))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCoordinatedBarrageCard::OnResolutionCompleted))
{
	{

		counted_ptr<CGenericTargetCreatureSpell> cpSpell(
			::CreateObject<CGenericTargetCreatureSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT, new AttackingBlockingCreatureComparer));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
}

void CCoordinatedBarrageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	std::vector<SelectionEntry> entries;
	if (m_pGame->IsThinking() || pAbilityAction->GetController()->IsComputer())
	{
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			BOOL bAdd = FALSE;

			CZone* pInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
					{
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
							(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Tribal).Any() &&
							(((CTribalCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}

					}
			
			if (bAdd == TRUE)
			{
			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
			}
		}

	}
	else
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
		}

		GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAbilityAction->GetAbility()->GetCard(), pAbilityAction->GetController(), 
			(DWORD)pAbilityAction->GetAbility()->GetCard(), (DWORD)pAbilityAction->GetAssociatedCard());

}

void CCoordinatedBarrageCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			CCardFilter* pDiscardFilter;
			CCardFilter pDiscardFilter_temp;

			pDiscardFilter = NULL;

			pDiscardFilter_temp.SetComparer(new CreatureTypeComparer(creatureType, false));

			pDiscardFilter = &pDiscardFilter_temp;			

			int i = pDiscardFilter->CountIncluded(pSelectionPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			CLifeModifier pmodifier1 = CLifeModifier(
						Life(-i), // numbur on which the life will be altered
						(CCard*)dwContext1, // sourcecard of life altering
						PreventableType::Preventable // preventable or not prevantable
						, DamageType::SpellDamage | DamageType::NonCombatDamage // Damage Type
						, TRUE, FALSE);		

			pmodifier1.ApplyTo((CCreatureCard*)dwContext2);			
		}
}

//____________________________________________________________________________
//
CRoaroftheCrowdCard::CRoaroftheCrowdCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Roar of the Crowd"), CardType::Sorcery, nID)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CRoaroftheCrowdCard::OnSelectionDone))
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRoaroftheCrowdCard::OnResolutionCompleted))
{
	{

		counted_ptr<CGenericTargetPlayerCreatureSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerCreatureSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT, new AnyCreatureComparer));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
}

void CRoaroftheCrowdCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	std::vector<SelectionEntry> entries;
	if (m_pGame->IsThinking() || pAbilityAction->GetController()->IsComputer())
	{
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			BOOL bAdd = FALSE;

			CZone* pInplay = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pInplay->GetSize(); ++k)
					{
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
							(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}
						if ((pInplay->GetAt(k)->GetCardType() & CardType::Tribal).Any() &&
							(((CTribalCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
						{
							bAdd = TRUE;
							break;
						}

					}
			
			if (bAdd == TRUE)
			{
			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
			}
		}

	}
	else
		for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
		{
			SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

			SelectionEntry entry;
			entry.dwContext = creatureType;
			entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), pAbilityAction->GetAbility()->GetCard()->GetCardName());		
			entries.push_back(entry);
		}

		GetGame()->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAbilityAction->GetAbility()->GetCard(), pAbilityAction->GetController(), 
			(DWORD)pAbilityAction->GetAbility()->GetCard(), (DWORD)pAbilityAction->GetAssociatedCard(), (DWORD)pAbilityAction->GetAssociatedPlayer());

}

void CRoaroftheCrowdCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			CCardFilter* pDiscardFilter;
			CCardFilter pDiscardFilter_temp;

			pDiscardFilter = NULL;

			pDiscardFilter_temp.SetComparer(new CreatureTypeComparer(creatureType, false));

			pDiscardFilter = &pDiscardFilter_temp;			

			int i = pDiscardFilter->CountIncluded(pSelectionPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

			CLifeModifier pmodifier1 = CLifeModifier(
						Life(-i), // numbur on which the life will be altered
						(CCard*)dwContext1, // sourcecard of life altering
						PreventableType::Preventable // preventable or not prevantable
						, DamageType::SpellDamage | DamageType::NonCombatDamage // Damage Type
						, TRUE, FALSE);		

			if (dwContext2)
				pmodifier1.ApplyTo((CCreatureCard*)dwContext2);			
			else
					pmodifier1.ApplyTo((CPlayer*)dwContext3);
		}
}

//____________________________________________________________________________
//
CCennsTacticianCard::CCennsTacticianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cenn's Tactician"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Soldier), false));
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0)));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(_T("+1/+1"), 0));
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeglamerCard::CDeglamerCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Deglamer"), CardType::Instant, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDeglamerCard::OnResolutionCompleted))

{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CDeglamerCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pCard->GetController();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	if (bResult) pLibrary->Shuffle();
}

//____________________________________________________________________________
//
CSigilTracerCard::CSigilTracerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sigil Tracer"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("a Wizard"), _T("Wizards"), new CreatureTypeComparer(CREATURE_TYPE(Wizard), false))
{
	{
		counted_ptr<CActivatedAbility<CTargetCopyCastSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetCopyCastSpell>>(this,
				_T("1") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Instant | CardType::Sorcery, false),
				ZoneId::Stack));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStonehewerGiantCard::CStonehewerGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonehewer Giant"), CardType::Creature, CREATURE_TYPE2(Giant, Warrior), nID,
	_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, pEquipment(NULL)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CStonehewerGiantCard::OnSelectionDone))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
		_T("1") WHITE_MANA_TEXT));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStonehewerGiantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CStonehewerGiantCard::BeforeResolution(CAbilityAction* pAction) 
{
	CCountedCardContainer found;
	CPlayer* searcher = pAction->GetController();
	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::Equipment, false));


	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(searcher, MinimumValue(0), MaximumValue(1), searcher, 
		ZoneId::Library, &temp, ZoneId::Battlefield,TRUE, CardPlacement::Top, FALSE, TRUE, FALSE, &found);

	pModifier1.ApplyTo(searcher);

	if (found.GetSize() == 1)
	{
		pEquipment = found.GetAt(0);
		temp.SetComparer(new AnyCreatureComparer);
		CZone* pZone = searcher->GetZoneById(ZoneId::Battlefield);
		std::vector<SelectionEntry> entries;

		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (temp.IsCardIncluded(pCard))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;

				if ((pCard->GetCardType() & CardType::Creature).Any())
				{
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

					entry.strText.Format(_T("equip %s"),
						pCreatureCard->GetCreatureName(TRUE));
				}
				else
					entry.strText.Format(_T("equip %s"),
					pCard->GetCardName());

				entries.push_back(entry);
			}
		}

		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
			NULL,
			searcher); 
	}
	return TRUE;
}
void CStonehewerGiantCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	m_cpSelectionListener->RemoveAllEventSources();


	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCard = (CCreatureCard*)(it->dwContext);
			CEquipModifier pModifier = CEquipModifier(pEquipment, FALSE);

			pModifier.ApplyTo(pCard);
		}

}
//____________________________________________________________________________
//
CMaralenOfTheMornsongCard::CMaralenOfTheMornsongCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Maralen of the Mornsong"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Wizard), nID,
	_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(3))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantDrawCards));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		cpAbility->SetSearchCount(MinimumValue(1), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Hand);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMaralenOfTheMornsongCard::BeforeResolveSelection));
				
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMaralenOfTheMornsongCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetTriggeredPlayer();
	
	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(pPlayer);

	return true;
}
//____________________________________________________________________________
//
CRecrossThePathsCard::CRecrossThePathsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Recross the Paths"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRecrossThePathsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRecrossThePathsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	int n = 0;
	bool bSearch = true;
	CCard* pFound;
				
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{		
		if (!bSearch)
			break;
		else
		{
			++n;
			if (pLibrary->GetAt(i)->GetCardType().IsLand())
			{
				bSearch = false;
				pFound = pLibrary->GetAt(i);
			}
		}
	}

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);
		
	pModifier.ApplyTo(pController);

	//clash
	{
		CPlayer* controller=GetController();
		CPlayer* opponent=m_pGame->GetNextPlayer(GetController());
		CCard* pNextDraw_con = controller->GetZoneById(ZoneId::Library)->GetTopCard();
		CCard* pNextDraw_opp = opponent->GetZoneById(ZoneId::Library)->GetTopCard();
		int opp_score = 0;
		int con_score = 0;
		CZoneModifier pmodifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Bottom, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		CMoveCardModifier cmodifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Hand, TRUE, MoveType::Others);

		if (!pNextDraw_con->GetCardType().IsLand()) con_score=pNextDraw_con->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		if (!pNextDraw_opp->GetCardType().IsLand()) opp_score=pNextDraw_opp->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

		pmodifier.ApplyTo(controller);
		pmodifier.ApplyTo(opponent);
		if (con_score>opp_score) cmodifier.ApplyTo(this);
	}

	return true;
}

//____________________________________________________________________________
//
CStompingSlabsCard::CStompingSlabsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Stomping Slabs"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-7),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStompingSlabsCard::BeforeResolution));
}

bool CStompingSlabsCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardNameComparer(_T("Stomping Slabs")));

	bool bFound = false;
	CCountedCardContainer Top7;
	int nSize = 7;

	if (pController->GetZoneById(ZoneId::Library)->GetSize() < 7)
		nSize = pController->GetZoneById(ZoneId::Library)->GetSize();

	if (pController->GetZoneById(ZoneId::Library)->GetSize() > 0)
	{
		for (int i = pController->GetZoneById(ZoneId::Library)->GetSize() - 1; i >= pController->GetZoneById(ZoneId::Library)->GetSize() - nSize; --i)
			Top7.AddCard(pController->GetZoneById(ZoneId::Library)->GetAt(i), CardPlacement::Top);

		if (m_CardFilter.CountIncluded(Top7) > 0)
			bFound = true;

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nSize, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.SetReorderInformation(TRUE, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);

		pModifier.ApplyTo(pController);
	}

	return bFound;
}

//____________________________________________________________________________
//
CDeclarationOfNaughtCard::CDeclarationOfNaughtCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Declaration of Naught"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CDeclarationOfNaughtCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CDeclarationOfNaughtCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT,
			new CardNameComparer(SelectedName)));

	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CDeclarationOfNaughtCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedName = _T("");

		CCountedCardContainer pCardList;
		pCardList.RemoveAll();
		int nCardListSize = 0;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			int nZoneCount = pPlayer->GetZoneCount();

			for (int nZone = 0; nZone < nZoneCount; ++nZone)
			{
				CZone* pZone = pPlayer->GetZone(nZone);
				int nZoneSize = pZone->GetSize();

				for (int i = 0; i < nZoneSize; ++i)
				{
					CCard* pCard = pZone->GetAt(i);
					if (!pCard->GetCardType().IsToken())
					{
						bool bIncluded = false;
						for (int j = 0; j < nCardListSize; ++j)
							if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
							{
								bIncluded = true;
								break;
							}

						if (!bIncluded)
						{
							pCardList.AddCard(pCard, CardPlacement::Top);
							nCardListSize++;
						}
					}
				}
			}
		}

		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("No card name"));

			entries.push_back(selectionEntry);
		}
		for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDeclarationOfNaughtCard::CreateAdditionAbility));

		pModifier.RemoveFrom(this);
	}
}

void CDeclarationOfNaughtCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects no name"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CDeclarationOfNaughtCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s names %s"), pSelectionPlayer->GetPlayerName(), pSelected->GetPrintedCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				SelectedName = pSelected->GetPrintedCardName();

				CCardAbilityModifier pModifier = CCardAbilityModifier(
					CCardAbilityModifier::CreateAbilityCallback(this,
					&CDeclarationOfNaughtCard::CreateAdditionAbility));

				pModifier.ApplyTo(this);

				return;
			}
		}
}

//____________________________________________________________________________
//
CCreamOfTheCropCard::CCreamOfTheCropCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Cream of the Crop"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_YesNoSelection(pGame, CSelectionSupport::SelectionCallback(this, &CCreamOfTheCropCard::OnYesNoSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCreamOfTheCropCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CCreamOfTheCropCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CCreamOfTheCropCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

bool CCreamOfTheCropCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCreatureCard* pCard = (CCreatureCard*)triggerContext.m_pCard;
	int nPower = pCard->GetLastKnownPower();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't use %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	if (nPower > 0)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = nPower;
		if (nPower == 1)
			selectionEntry.strText.Format(_T("Look at the top card of your library"));
		else
			selectionEntry.strText.Format(_T("Look at the top %d cards of your library"), nPower);

		entries.push_back(selectionEntry);
	}
	m_YesNoSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CCreamOfTheCropCard::OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't use the effect of %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			else
			{
				int nPower = (int)it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s uses the effect of %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, nPower, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Library, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier.SetReorderInformation(true, ZoneId::Library, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Bottom);

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
/*
CDoorOfDestiniesCard::CDoorOfDestiniesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Door of Destinies"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CDoorOfDestiniesCard::OnSelectionDone))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +1));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDoorOfDestiniesCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDoorOfDestiniesCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
	::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, CHARGE_COUNTER));

	cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(SelectedType,false));
	cpAbility->GetEnchantment()->SetAffectControllerCardsOnly();
	cpAbility->GetEnchantment1()->GetEnchantmentCardFilter().AddComparer(new CreatureTypeComparer(SelectedType,false));
	cpAbility->GetEnchantment1()->SetAffectControllerCardsOnly();

	cpAbility->SetAbilityName(_T("Door of Destinies boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CDoorOfDestiniesCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;

		if (m_pGame->IsThinking() || GetController()->IsComputer())
		{
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				BOOL bAdd = FALSE;

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
							}
						}
			
				if (bAdd == TRUE)
				{
					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName());		
					entries.push_back(entry);
				}
			}

		}
		else
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				SelectionEntry entry;
				entry.dwContext = creatureType;
				entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
				entries.push_back(entry);
			}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCardAbilityModifier pModifier = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CDoorOfDestiniesCard::CreateAdditionAbility));

		pModifier.RemoveFrom(this);
	}
}

void CDoorOfDestiniesCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCardAbilityModifier pModifier = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CDoorOfDestiniesCard::CreateAdditionAbility));

			pModifier.ApplyTo(this);

			break;
		}
}

bool CDoorOfDestiniesCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	if (pCard->GetCardType().IsCreature())
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;

		if (pCreature->GetCardKeyword()->HasChangeling() || pCreature->GetCreatureType().HasType(SelectedType))
			return true;
		else
			return false;
	}
	if (pCard->GetCardType().IsTribal())
	{
		CTribalCard* pTribal = (CTribalCard*)pCard;

		if (pTribal->GetCardKeyword()->HasChangeling() || pTribal->GetCreatureType().HasType(SelectedType))
			return true;
		else
			return false;
	}
	return false;
}
*/
//____________________________________________________________________________
//
CKinsbaileBorderguardCard::CKinsbaileBorderguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kinsbaile Borderguard"), CardType::Creature, CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
		, m_cpAListener1(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKinsbaileBorderguardCard::OnZoneChanged))
		, m_nCounterCount(0)
		, m_cpAListener2(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CKinsbaileBorderguardCard::OnCounterMoved))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kithkin), false));
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetMovedEventSource()->AddListener(m_cpAListener1.GetPointer());
	
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener2.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKinsbaileBorderguardCard::SetTriggerContext));

		cpAbility->SetCreateTokenOption(TRUE, _T("Kithkin Soldier A"), 2742, 0);

		AddAbility(cpAbility.GetPointer());
	}
}

void CKinsbaileBorderguardCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::_PhasedOut && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);
	
		int nKithkin = m_CardFilter.CountIncluded(pBattlefield->GetCardContainer());

		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nKithkin, true);

		pModifier.ApplyTo(this);
	}
}

void CKinsbaileBorderguardCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name == _T("+1/+1")) || ((CString)name == _T("-1/-1"))) return;
	m_nCounterCount = GetCounterContainer()->GetTotalCount() - GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() - GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount();
}

bool CKinsbaileBorderguardCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
	CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{ 
	int nCount = m_nCounterCount + GetLastKnownp11Counters() + GetLastKnownm11Counters();

	triggerContext.nValue1 = nCount; 

	return true;
}

//____________________________________________________________________________
//
CFeudkillersVerdictCard::CFeudkillersVerdictCard(CGame* pGame, UINT nID)
	: CTribalCard(pGame, _T("Feudkiller's Verdict"), CardType::Sorcery, nID, CREATURE_TYPE(Giant))
{
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFeudkillersVerdictCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFeudkillersVerdictCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CLifeModifier* pModifier = new CLifeModifier(Life(10), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier->ApplyTo(pController);

	bool bFound = false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pController->GetLife() > GetGame()->GetPlayer(ip)->GetLife())
		{
			bFound = true;
			break;
		}

	if (bFound)
	{
		CTokenCreationModifier* pModifier= new CTokenCreationModifier(GetGame(), _T("Giant Warrior B"), 2809, 1);
		pModifier->ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CFendeepSummonerCard::CFendeepSummonerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fendeep Summoner"), CardType::Creature, CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T("4") BLACK_MANA_TEXT, Power(3), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Swamp, false), false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetSubjectCount(0, 2);

	CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier( _T("Treefolk Warrior AA"), 64056, GetController());

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CScheduledCardModifier(
			GetGame(), pModifier, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::ApplyToNowRemoveLater));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CGracefulReprieveCard::CGracefulReprieveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Graceful Reprieve"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGracefulReprieveCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGracefulReprieveCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Graceful Reprieve Effect"), 61050, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//