// AvatarDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MagicWand.h"
#include "Resource.h"
#include "AvatarDlg.h"
#include "MagicWandDoc.h"

// CAvatarDlg dialog

IMPLEMENT_DYNAMIC(CAvatarDlg, CDialog)

CAvatarDlg::CAvatarDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAvatarDlg::IDD, pParent)
{

}

CAvatarDlg::~CAvatarDlg()
{
}

void CAvatarDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_AVATAR1, m_strAvatarPath1);
	DDX_Text(pDX, IDC_AVATAR2, m_strAvatarPath2);
	DDX_Control(pDX, IDC_AVATAR1_IMAGE, m_AvatarImage1);
	DDX_Control(pDX, IDC_AVATAR2_IMAGE, m_AvatarImage2);
}

BOOL CAvatarDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	UpdateAvatarImage1();
	UpdateAvatarImage2();

	return TRUE;
}

void CAvatarDlg::UpdateAvatarImage1()
{
	UpdateData(FROM_UI);

	USES_CONVERSION;

	CGdipBitmap bitmap1(m_strAvatarPath1);
	if (bitmap1.IsValid())
	{
		Gdiplus::Size size(70, 70);
		CGdipBitmap bitmapSmall(bitmap1);
		bitmapSmall.Stretch(size);
		if (bitmapSmall.IsValid())
		{
			DWORD dwBackground = GetSysColor(COLOR_3DFACE);
			Gdiplus::Color backgroundColor(GetRValue(dwBackground), GetGValue(dwBackground), GetBValue(dwBackground));
			HBITMAP hBitmap;
			Gdiplus::Status status = ((Gdiplus::Bitmap*)bitmapSmall)->GetHBITMAP(backgroundColor, &hBitmap);
			if (status == Gdiplus::Ok && hBitmap)
			{
				HBITMAP hPreviousBitmap = m_AvatarImage1.SetBitmap(hBitmap);
				if (hPreviousBitmap)
					::DeleteObject(hPreviousBitmap);
			}
		}
	}
}

void CAvatarDlg::UpdateAvatarImage2()
{
	UpdateData(FROM_UI);

	USES_CONVERSION;

	CGdipBitmap bitmap1(m_strAvatarPath2);
	if (bitmap1.IsValid())
	{
		Gdiplus::Size size(70, 70);
		CGdipBitmap bitmapSmall(bitmap1);
		bitmapSmall.Stretch(size);
		if (bitmapSmall.IsValid())
		{
			DWORD dwBackground = GetSysColor(COLOR_3DFACE);
			Gdiplus::Color backgroundColor(GetRValue(dwBackground), GetGValue(dwBackground), GetBValue(dwBackground));
			HBITMAP hBitmap;
			Gdiplus::Status status = ((Gdiplus::Bitmap*)bitmapSmall)->GetHBITMAP(backgroundColor, &hBitmap);
			if (status == Gdiplus::Ok && hBitmap)
			{
				HBITMAP hPreviousBitmap = m_AvatarImage2.SetBitmap(hBitmap);
				if (hPreviousBitmap)
					::DeleteObject(hPreviousBitmap);
			}
		}
	}
}

BEGIN_MESSAGE_MAP(CAvatarDlg, CDialog)
	ON_BN_CLICKED(IDC_BROWSE_AVATAR1, &CAvatarDlg::OnBnClickedBrowseAvatar1)
	ON_BN_CLICKED(IDC_BROWSE_AVATAR2, &CAvatarDlg::OnBnClickedBrowseAvatar2)
END_MESSAGE_MAP()

// CAvatarDlg message handlers

void CAvatarDlg::OnBnClickedBrowseAvatar1()
{
	UpdateData(FROM_UI);

	CString strPath = 
		CMagicWandDoc::GetOpenFile(
			_T("Bitmaps (*.bmp,*.gif,*.jpg,*.png,*.tif)\0*.bmp;*.gif;*.jpg;*.png;*.tif\0")
			_T("All Files (*.*)\0*.*\0\0"),
			_T("png"));

	if (!strPath.IsEmpty())
		m_strAvatarPath1 = strPath;

	UpdateData(TO_UI);

	UpdateAvatarImage1();
}

void CAvatarDlg::OnBnClickedBrowseAvatar2()
{
	UpdateData(FROM_UI);

	CString strPath =
		CMagicWandDoc::GetOpenFile(
			_T("Bitmaps (*.bmp,*.gif,*.jpg,*.png,*.tif)\0*.bmp;*.gif;*.jpg;*.png;*.tif\0")
			_T("All Files (*.*)\0*.*\0\0"),
			_T("png"));

	if (!strPath.IsEmpty())
		m_strAvatarPath2 = strPath;

	UpdateData(TO_UI);

	UpdateAvatarImage2();
}
