#pragma once

//____________________________________________________________________________
//
#define new DEBUG_NEW

#include "resource.h"
#include <MagicCore.h>
#include "MagicWand.h"

//____________________________________________________________________________
//
enum WM_APP_
{
	//WM_APP_PREVIEW_CARD = WM_APP + 1000,	
	WM_APP_ENGINE_EXCEPTION = WM_APP + 1001,
	WM_APP_RESIZE,
	WM_APP_FOCUS_MAIN_WND,
	WM_APP_FILTER_CHANGED
};

enum IDW_
{
	IDW_MESSAGE		= (AFX_IDW_CONTROLBAR_LAST - 1),
	IDW_SELECTIONS	= (AFX_IDW_CONTROLBAR_LAST - 2),
	IDW_PLAYER1		= (AFX_IDW_CONTROLBAR_LAST - 3),
	IDW_PLAYER2		= (AFX_IDW_CONTROLBAR_LAST - 4),
	IDW_TOOLBAR1	= (AFX_IDW_CONTROLBAR_LAST - 5),
	IDW_GRAPH		= (AFX_IDW_CONTROLBAR_LAST - 6),
	IDW_PREVIEW		= (AFX_IDW_CONTROLBAR_LAST - 7),
	IDW_NETWORK		= (AFX_IDW_CONTROLBAR_LAST - 8),
	IDW_CHAT		= (AFX_IDW_CONTROLBAR_LAST - 9),
	IDW_STATISTIC	= (AFX_IDW_CONTROLBAR_LAST - 10),
};

#define REG_COMPANY_NAME						_T("EpochSoft")

#define REG_SETTINGS_ALWAYS_STACK_LANDS			_T("AlwaysStackLands")
#define REG_SETTINGS_ANIMATED_CARD_MOVEMENT		_T("AnimatedCardMovement")
#define REG_SETTINGS_AUTO_ZOOM					_T("AutoZoom")
#define REG_SETTINGS_AVATAR1					_T("Avatar1")
#define REG_SETTINGS_AVATAR2					_T("Avatar2")
#define REG_SETTINGS_BACKGROUND_LOCATION		_T("BackgroundLocation")
#define REG_SETTINGS_BOARD_SIZE					_T("BoardSize")
#define REG_SETTINGS_BOOST_PROCESS				_T("BoostProcess")
#define REG_SETTINGS_CARD_SIZE					_T("CardSize")
#define REG_SETTINGS_COMPUTER_PLAYER_NAME		_T("Computer")
#define REG_SETTINGS_CONSERVATIVE				_T("Conservative")
#define REG_SETTINGS_CUSTOM_BACKGROUND_FILE		_T("CustomBackgroundFile")
#define REG_SETTINGS_DBL_CLK_ZOOM				_T("DblClkZoom")
#define REG_SETTINGS_DECK						_T("Deck")
#define REG_SETTINGS_DECK1						_T("Deck1")
#define REG_SETTINGS_DECK2						_T("Deck2")
#define REG_SETTINGS_DELAY_SELECT_IN_MAIN		_T("DelaySelectInMain")
#define REG_SETTINGS_DELAY_SELECT_IN_OTHERS		_T("DelaySelectInOthers")
#define REG_SETTINGS_EXTRA_CAREFUL				_T("ExtraCareful")
#define REG_SETTINGS_FULL_SCREEN				_T("FullScreen")
#define REG_SETTINGS_GRAPH_NODE_STATES			_T("GraphNodeStates%d_%d")
#define REG_SETTINGS_KEEP_ASPECT_RATIO			_T("KeepAspectRatio")
#define REG_SETTINGS_LIBRARY_TEXT_COLOR			_T("LibraryColor")
#define REG_SETTINGS_LIFE_TEXT_COLOR			_T("LifeColor")
#define REG_SETTINGS_MAX_DURATION				_T("MaxDuration")
#define REG_SETTINGS_MULLIGAN					_T("Mulligan")
#define REG_SETTINGS_OVERKILL					_T("Overkill")
#define REG_SETTINGS_PHASE_TEXT_COLOR			_T("PhaseColor")
#define REG_SETTINGS_RANDOM_DECK1				_T("RandomDeck1")
#define REG_SETTINGS_RANDOM_DECK2				_T("RandomDeck2")
#define REG_SETTINGS_SCALE_CUSTOM_BACKGROUND	_T("ScaleCustomBackground")
#define REG_SETTINGS_SELECTION_TIMER_COUNTDOWN	_T("SelectionTimerCountdown")
#define REG_SETTINGS_SHOW_AVATAR_IMAGE			_T("ShowAvatarImage")
#define REG_SETTINGS_SHOW_LIBRARY_CARD_COUNT	_T("ShowLibraryCardCount")
#define REG_SETTINGS_SHOW_LIFE					_T("ShowLife")
#define REG_SETTINGS_SHOW_PHASE_TEXT			_T("ShowPhaseText")
#define REG_SETTINGS_SHOW_PHASE_ICON			_T("ShowPhaseIcon")
#define REG_SETTINGS_SHOW_POOL					_T("ShowPool")
#define REG_SETTINGS_SHOW_SELECTION_INDICATOR	_T("ShowSelectionIndicator")
#define REG_SETTINGS_SHOW_WATERMARK				_T("ShowWatermark")
#define REG_SETTINGS_SPEAK_OPENING				_T("SpeakOpening")
#define REG_SETTINGS_SPEECH						_T("Speech")
#define REG_SETTINGS_START_FIRST				_T("StartFirst")
#define REG_SETTINGS_VIEW_OP_GRAVEYARD			_T("ViewOpponentGraveyard")
#define REG_SETTINGS_VIEW_OP_HAND				_T("ViewOpponentHand")
#define REG_SETTINGS_VIEW_YR_GRAVEYARD			_T("ViewYourGraveyard")

#define REG_DECK_DIALOG_BITMAP_ENTRY			_T("ShowBitmap")
#define REG_DECK_DIALOG_KEY						_T("DialogDeck")
#define REG_DIALOG_KEY							_T("Dialog%d")
#define REG_DIALOG_CX_ENTRY						_T("CX")
#define REG_DIALOG_CY_ENTRY						_T("CY")
#define REG_DIALOG_X_ENTRY						_T("X")
#define REG_DIALOG_Y_ENTRY						_T("Y")
#define REG_LISTCTRL_KEY						_T("Dialog%d\\List%d")
#define REG_LISTCTRL_SORT_COL_ENTRY				_T("SortCol")
#define REG_LISTCTRL_SORT_ORDER_ENTRY			_T("SortOrder")
#define REG_LISTCTRL_COLUMN_ORDER_ENTRY			_T("Order%d")
#define REG_LISTCTRL_WIDTH_ENTRY				_T("Width%d")
