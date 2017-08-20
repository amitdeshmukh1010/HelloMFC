#pragma once

#include "afxwin.h"

class CMainWindow;
class CMyApp :public CWinApp
{
public :
	virtual BOOL InitInstance();

private:
	//CMainWindow *m_pMainWnd;
};


///-----------

class CMainWindow :public CFrameWnd
{
public:
	CMainWindow();

protected :
	afx_msg void OnPaint();

	DECLARE_MESSAGE_MAP();

private:

};