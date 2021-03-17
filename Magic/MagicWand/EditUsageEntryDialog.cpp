// EditUsageEntryDialog.cpp : implementation file
//

#include "stdafx.h"
#include "EditUsageEntryDialog.h"

#define new DEBUG_NEW

//_____________________________________________________________________________
//
// CEditUsageEntryDialog dialog
//

CEditUsageEntryDialog::CEditUsageEntryDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CEditUsageEntryDialog::IDD, pParent)
	, m_bAnd(FALSE)
	, m_uCaptionId(0)
	, m_SelectedNode(UsagePatternItem::Null)
	, m_SelectedNode2(UsagePatternItem::Null)
	, m_SelectedUsage(TRUE)
	, m_CardType(CardType::Null)
{
}

void CEditUsageEntryDialog::SetCaption(UINT uCaptionId)
{
	m_uCaptionId = uCaptionId;
}

void CEditUsageEntryDialog::SetAbilityID(LPCTSTR strAbilityID)
{
	m_strUniqueChildAbilityName = strAbilityID;
}

void CEditUsageEntryDialog::AddComparer(CardType cardType)
{
	m_CardType = cardType;
}	

//_____________________________________________________________________________
//
// CEditUsageEntryDialog - Overrides
//

void CEditUsageEntryDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_NODE_LIST2, m_NodeList2);
	DDX_Control(pDX, IDC_USAGE, m_UsageList);
	DDX_Control(pDX, IDC_NODE_LIST, m_NodeList);
	DDX_Text(pDX, IDC_ABILITY_ID, m_strUniqueChildAbilityName);
	DDX_Check(pDX, IDC_AND, m_bAnd);
}

BOOL CEditUsageEntryDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	for (int i = UsagePatternItem::_FirstItem; i <= UsagePatternItem::_LastItem; ++i)
	{
		if ((i == UsagePatternItem::YourUntapStep) ||	// Untap step not configurable
			(i == UsagePatternItem::OpponentsUntapStep))
			continue;

		if ((m_CardType & CardType::Creature).Any())
		{
			if (!_tcsicmp(_T("Attack"), m_strUniqueChildAbilityName) &&
				(i != UsagePatternItem::YourDeclareAttackersStep))
				continue;

			if (!_tcsicmp(_T("Block"), m_strUniqueChildAbilityName) &&
				(i != UsagePatternItem::YourDeclareBlockersStep))
				continue;
		}
		else
		{
			if ((i == UsagePatternItem::ThisCreaturesLifeMayIncrease) ||
				(i == UsagePatternItem::ThisCreaturesLifeMayDecrease) ||
				(i == UsagePatternItem::ThisCreatureIsAttacking) ||
				(i == UsagePatternItem::ThisCreatureIsBlocking) ||
				(i == UsagePatternItem::ThisCreatureIsBlocked)) 
				continue;
		}

		CString strItemName = UsagePatternItem::ToString(static_cast<UsagePatternItem::Enum>(i));

		ATLASSERT(!strItemName.IsEmpty());

		int nIndex = m_NodeList.AddString(strItemName);
		m_NodeList.SetItemData(nIndex, i);

		if (i == m_SelectedNode.Get())
			m_NodeList.SetCurSel(nIndex);

		int nIndex2 = m_NodeList2.AddString(strItemName);
		m_NodeList2.SetItemData(nIndex2, i);

		if (i == m_SelectedNode2.Get())
			m_NodeList2.SetCurSel(nIndex2);
	}

	if (m_NodeList.GetCurSel() == CB_ERR)
		m_NodeList.SetCurSel(0);

	if (m_NodeList2.GetCurSel() == CB_ERR)
		m_NodeList2.SetCurSel(0);

	int nIndex = m_UsageList.AddString(_T("Usable"));
	m_UsageList.SetItemData(nIndex, TRUE);

	if (m_SelectedUsage)
		m_UsageList.SetCurSel(nIndex);

	nIndex = m_UsageList.AddString(_T("Not usable"));
	m_UsageList.SetItemData(nIndex, FALSE);

	if (!m_SelectedUsage)
		m_UsageList.SetCurSel(nIndex);

	CString strCaption;
	strCaption.LoadString(m_uCaptionId);

	SetWindowText(strCaption);

	m_NodeList2.EnableWindow(m_bAnd);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CEditUsageEntryDialog::OnOK() 
{
	m_SelectedNode = static_cast<UsagePatternItem::Enum>(m_NodeList.GetItemData(m_NodeList.GetCurSel()));
	m_SelectedNode2 = static_cast<UsagePatternItem::Enum>(m_NodeList2.GetItemData(m_NodeList2.GetCurSel()));
	m_SelectedUsage = (BOOL)m_UsageList.GetItemData(m_UsageList.GetCurSel());
	
	CDialog::OnOK();
}

//_____________________________________________________________________________
//
// CEditUsageEntryDialog - Generated message map functions
//

BEGIN_MESSAGE_MAP(CEditUsageEntryDialog, CDialog)
	ON_BN_CLICKED(IDC_AND, OnAnd)
END_MESSAGE_MAP()

void CEditUsageEntryDialog::OnAnd() 
{
	UpdateData();

	m_NodeList2.EnableWindow(m_bAnd);
}
