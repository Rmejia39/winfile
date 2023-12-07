
#define DIALOGRESIZECONTROLCLASSW L"DialogResizeControlClassW"
#define DIALOGRESIZECONTROLCLASSA "DialogResizeControlClassA"

#if defined(UNICODE) || defined(_UNICODE)
#define DIALOGRESIZECONTROLCLASS DIALOGRESIZECONTROLCLASSW
#else
#define DIALOGRESIZECONTROLCLASS DIALOGRESIZECONTROLCLASSA
#endif

#define DIALOGRESIZEDATACLASSW L"DialogResizeDataClassW"
#define DIALOGRESIZEDATACLASSA "DialogResizeDataClassA"

#if defined(UNICODE) || defined(_UNICODE)
#define DIALOGRESIZEDATACLASS DIALOGRESIZEDATACLASSW
#else
#define DIALOGRESIZEDATACLASS DIALOGRESIZEDATACLASSA
#endif

#ifndef RC_INVOKED

BOOL CALLBACK
ResizeDialogProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);

BOOL
ResizeDialogInitialize(HINSTANCE hInst);

#else

#define DIALOGRESIZE CONTROL "", -1, DIALOGRESIZEDATACLASS, NOT WS_VISIBLE, 0, 0, 0, 0, 0 
#define DIALOGRESIZECONTROL CONTROL "", -1, DIALOGRESIZECONTROLCLASS, NOT WS_VISIBLE, 0, 0, 0, 0, 0 

#endif

