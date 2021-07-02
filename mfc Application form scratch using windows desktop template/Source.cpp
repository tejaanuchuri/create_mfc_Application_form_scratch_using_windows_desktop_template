#include <afxwin.h>

class CMyFrame : public CFrameWnd {
public:
    CMyFrame() {
        Create(NULL, _T("MFC Application form scratch using Windows Desktop Application"));
    }
};

class CExample : public CWinApp {
    BOOL InitInstance() {
        CMyFrame* Frame = new CMyFrame();
        m_pMainWnd = Frame;

        Frame->ShowWindow(SW_NORMAL);
        Frame->UpdateWindow();

        return TRUE;
    }
};

CExample theApp;