// AppearanceDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Resource.h"
#include "MagicWand.h"
#include "Resource.h"
#include "AppearanceDialog.h"
#include "MagicWandDoc.h"
#include "AvatarDlg.h"
#include "MagicWandView.h"

// CAppearanceDialog dialog

IMPLEMENT_DYNAMIC(CAppearanceDialog, CDialog)
CAppearanceDialog::CAppearanceDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CAppearanceDialog::IDD, pParent)
	, m_strCustomBackgroundFile(_T(""))
	, m_bScaleCustomBackground(FALSE)
	, m_bKeepAspectRatio(FALSE)
	, m_bAutoZoom(TRUE)
{
	m_bShowSelectionIndicator = TRUE;
	m_bAnimatedCardMovement = TRUE; 
	m_bSpeech = FALSE;
	m_bSpeakOpening = FALSE;
	m_bDisableSpeech = FALSE;
	m_dwBoardSize = 0;
	m_bShowLife = TRUE;
	m_bShowLibraryCardCount = FALSE;
	m_bShowPool = TRUE;
	m_bShowPhaseText = TRUE;
	m_bShowPhaseIcon = TRUE;
	m_bShowAvatarImage = TRUE;
	m_nBackgroundLocation = 0;
	m_uBuiltinBackground = IDB_BACKGROUND;
	m_bAlwaysStackLands = TRUE;
}

CAppearanceDialog::~CAppearanceDialog()
{
}

void CAppearanceDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BOARD_SIZE, m_BoardSize);
	DDX_Check(pDX, IDC_DRAW_SELECTION, m_bShowSelectionIndicator);
	DDX_Check(pDX, IDC_SPEECH, m_bSpeech);
	DDX_Check(pDX, IDC_SPEAK_OPENING, m_bSpeakOpening);
	DDX_Check(pDX, IDC_SHOW_LIFE, m_bShowLife);
	DDX_Check(pDX, IDC_SHOW_POOL, m_bShowPool);
	DDX_Check(pDX, IDC_SHOW_PHASE_TEXT, m_bShowPhaseText);
	DDX_Check(pDX, IDC_SHOW_PHASE_ICON, m_bShowPhaseIcon);
	DDX_Check(pDX, IDC_SHOW_AVATAR_IMAGE, m_bShowAvatarImage);
	DDX_Check(pDX, IDC_SHOW_LIBRARY_CARD_COUNT, m_bShowLibraryCardCount);
	DDX_Radio(pDX, IDC_BACKGROUND_LOCATION_CENTER, m_nBackgroundLocation);
	DDX_Text(pDX, IDC_CUSTOM_BACKGROUND_FILE, m_strCustomBackgroundFile);
	DDX_Check(pDX, IDC_SCALE_CUSTOM_BACKGROUND, m_bScaleCustomBackground);
	DDX_Check(pDX, IDC_KEEP_ASPECT_RATIO, m_bKeepAspectRatio);
	DDX_Control(pDX, IDC_CARD, m_Card);
	DDX_Control(pDX, IDC_CARD_SIZE, m_CardSizeSlider);
	DDX_Control(pDX, IDC_CARD_SIZE_VALUE, m_CardSizeValue);
	DDX_Check(pDX, IDC_ANIMATED_CARD_MOVEMENTS, m_bAnimatedCardMovement);
	DDX_Check(pDX, IDC_ALWAYS_STACK_LANDS, m_bAlwaysStackLands);
	DDX_Check(pDX, IDC_AUTO_ZOOM, m_bAutoZoom);
}

void CAppearanceDialog::EnableControls()
{
	GetDlgItem(IDC_SCALE_CUSTOM_BACKGROUND)->EnableWindow(m_nBackgroundLocation == 0);
	GetDlgItem(IDC_KEEP_ASPECT_RATIO)->EnableWindow(m_nBackgroundLocation == 0 && m_bScaleCustomBackground);
}

BEGIN_MESSAGE_MAP(CAppearanceDialog, CDialog)
	ON_BN_CLICKED(IDC_SPEECH, OnSpeech)
	ON_BN_CLICKED(IDC_BACKGROUND_LOCATION_CENTER, OnBnClickedBackgroundLocation)
	ON_BN_CLICKED(IDC_BACKGROUND_LOCATION_TILE, OnBnClickedBackgroundLocation)
	ON_BN_CLICKED(IDC_USE_CUSTOM_BACKGROUND, OnBnClickedUseCustomBackground)
	ON_BN_CLICKED(IDC_BROWSE, OnBnClickedBrowse)
	ON_BN_CLICKED(IDC_SCALE_CUSTOM_BACKGROUND, OnBnClickedScaleCustomBackground)
	ON_WM_HSCROLL()
	ON_BN_CLICKED(IDC_LIFE_COLOR, &CAppearanceDialog::OnBnClickedLifeColor)
	ON_BN_CLICKED(IDC_LIBRARY_COLOR, &CAppearanceDialog::OnBnClickedLibraryColor)
	ON_BN_CLICKED(IDC_PHASE_COLOR, &CAppearanceDialog::OnBnClickedPhaseColor)
	ON_BN_CLICKED(IDC_AVATARS, &CAppearanceDialog::OnBnClickedAvatars)
END_MESSAGE_MAP()

// CAppearanceDialog message handlers

BOOL CAppearanceDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();

	m_BoardSize.SetItemData(m_BoardSize.AddString(_T("Resize with Main Window")), 0);
	m_BoardSize.SetItemData(m_BoardSize.AddString(_T("2000 x 700")), MAKELPARAM(2000, 700));
	m_BoardSize.SetItemData(m_BoardSize.AddString(_T("1600 x 700")), MAKELPARAM(1600, 700));
	m_BoardSize.SetItemData(m_BoardSize.AddString(_T("1280 x 1024")), MAKELPARAM(1280, 1024));
	m_BoardSize.SetItemData(m_BoardSize.AddString(_T("1024 x 768")), MAKELPARAM(1024, 768));
	m_BoardSize.SetItemData(m_BoardSize.AddString(_T("800 x 600")), MAKELPARAM(800, 600));

	switch(m_dwBoardSize)
	{
	default:
	case 0: m_BoardSize.SetCurSel(0); break;
	case MAKELPARAM(2000, 700): m_BoardSize.SetCurSel(1); break;
	case MAKELPARAM(1600, 700): m_BoardSize.SetCurSel(2); break;
	case MAKELPARAM(1280, 1024): m_BoardSize.SetCurSel(3); break;
	case MAKELPARAM(1024, 768): m_BoardSize.SetCurSel(4); break;
	case MAKELPARAM(800, 600): m_BoardSize.SetCurSel(5); break;
	}

	GetDlgItem(IDC_SPEECH)->EnableWindow(!m_bDisableSpeech);
	GetDlgItem(IDC_SPEAK_OPENING)->EnableWindow(!m_bDisableSpeech && m_bSpeech);

	EnableControls();

	m_CardSizeSlider.SetRange(CMagicWandView::s_nMinimumCardHeight, CMagicWandView::s_nMaximumCardHeight);

	m_nCardSize = CCardStore::GetInstance()->GetSmallCardSize().Height;
	m_CardSizeSlider.SetPos(m_nCardSize);

	CString strValue;
	strValue.Format(_T("%d"), m_CardSizeSlider.GetPos());

	m_CardSizeValue.SetWindowText(strValue);

	ResizeCardBitmap();

	m_LifeColorButton.SubclassDlgItem(IDC_LIFE_COLOR, this);
	m_LifeColorButton.SetColor(m_LifeTextColor, m_LifeTextColor);

	m_LibraryColorButton.SubclassDlgItem(IDC_LIBRARY_COLOR, this);
	m_LibraryColorButton.SetColor(m_LibraryTextColor, m_LibraryTextColor);

	m_PhaseColorButton.SubclassDlgItem(IDC_PHASE_COLOR, this);
	m_PhaseColorButton.SetColor(m_PhaseTextColor, m_PhaseTextColor);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CAppearanceDialog::ResizeCardBitmap()
{
	m_CardBitmap.DeleteObject();
	CCardEntry* pSample = CCardStore::GetInstance()->GetCardByID(3005);
	if (pSample)
	{
		m_CardBitmap.Attach(pSample->GetBitmap(m_CardSizeSlider.GetPos(), FALSE).GetHBITMAP());
	}

	HBITMAP hPreviousBitmap = m_Card.SetBitmap((HBITMAP)m_CardBitmap.GetSafeHandle());
	if (hPreviousBitmap)
		::DeleteObject(hPreviousBitmap);
}

void CAppearanceDialog::OnOK() 
{
	UpdateData(FROM_UI);

	m_dwBoardSize = (DWORD)m_BoardSize.GetItemData(m_BoardSize.GetCurSel());

	m_strCustomBackgroundFile.Trim();

	if (m_strCustomBackgroundFile.IsEmpty())
	{
		MessageBox(_T("Invalid background file path"), _T("Appearance Settings"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if (!PathFileExists(m_strCustomBackgroundFile))
	{
		MessageBox(_T("Cannot find background file: ") + m_strCustomBackgroundFile, _T("Appearance Settings"), MB_OK | MB_ICONERROR);
		return;
	}

	if (m_CardSizeSlider.GetPos() == CCardStore::GetInstance()->GetSmallCardSize().Height)
		m_nCardSize = -1;
	else
	{
		m_nCardSize = m_CardSizeSlider.GetPos();
	}
	
	CDialog::OnOK();
}

void CAppearanceDialog::OnSpeech() 
{
	UpdateData(FROM_UI);
	GetDlgItem(IDC_SPEAK_OPENING)->EnableWindow(!m_bDisableSpeech && m_bSpeech);
}

void CAppearanceDialog::OnBnClickedBackgroundLocation()
{
	UpdateData(FROM_UI);
	
	EnableControls();
}

void CAppearanceDialog::OnBnClickedUseCustomBackground()
{
	UpdateData(FROM_UI);

	EnableControls();

	UpdateData(TO_UI);
}

void CAppearanceDialog::OnBnClickedBrowse()
{
	UpdateData(FROM_UI);

	m_strCustomBackgroundFile =
		CMagicWandDoc::GetOpenFile(
			_T("Bitmaps (*.bmp,*.gif,*.jpg,*.png,*.tif)\0*.bmp;*.gif;*.jpg;*.png;*.tif\0")
			_T("All Files (*.*)\0*.*\0\0"),
			_T("gif"),
			g_pCoreApp->GetBitmapPath() + _T("\\Wallpapers"));

	UpdateData(TO_UI);
}

void CAppearanceDialog::OnBnClickedScaleCustomBackground()
{
	UpdateData(FROM_UI);

	EnableControls();
}

void CAppearanceDialog::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	CString strValue;
	strValue.Format(_T("%d"), m_CardSizeSlider.GetPos());

	m_CardSizeValue.SetWindowText(strValue);
	ResizeCardBitmap();

	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CAppearanceDialog::OnBnClickedLifeColor()
{
	CColorDialog dlg(m_LifeTextColor);

	if (dlg.DoModal() == IDOK)
	{
		m_LifeTextColor = dlg.GetColor();
		m_LifeColorButton.SetColor(m_LifeTextColor, m_LifeTextColor);
	}
}

void CAppearanceDialog::OnBnClickedLibraryColor()
{
	CColorDialog dlg(m_LibraryTextColor);

	if (dlg.DoModal() == IDOK)
	{
		m_LibraryTextColor = dlg.GetColor();
		m_LibraryColorButton.SetColor(m_LibraryTextColor, m_LibraryTextColor);
	}
}

void CAppearanceDialog::OnBnClickedPhaseColor()
{
	CColorDialog dlg(m_PhaseTextColor);

	if (dlg.DoModal() == IDOK)
	{
		m_PhaseTextColor = dlg.GetColor();
		m_PhaseColorButton.SetColor(m_PhaseTextColor, m_PhaseTextColor);
	}
}

void CAppearanceDialog::OnBnClickedAvatars()
{
	CAvatarDlg dlg;
	
	dlg.m_strAvatarPath1 = m_strAvatarPath1;
	dlg.m_strAvatarPath2 = m_strAvatarPath2;

	if (dlg.DoModal() == IDOK)
	{
		m_strAvatarPath1 = dlg.m_strAvatarPath1;
		m_strAvatarPath2 = dlg.m_strAvatarPath2;
	}
}
