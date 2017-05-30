/////////////////////////////////////////////////////////////////////////////////
/// Copyright (C), 2017, zhangxuan. All rights reserved.
/// \brief   ���ڹ�����
/// \author  zhangxuan
/// \date    2017-05
/////////////////////////////////////////////////////////////////////////////////
#ifndef WinApp_H_
#define WinApp_H_

#include <windows.h>
#include "../Util/Singleton.h"

class WinApp : public Singleton<WinApp>
{
	SINGLETON_DEFINE(WinApp)
private:
	WinApp(void);
	~WinApp(void);

public:
	/// \brief ��������
	void	create(HINSTANCE hInstance, int nCmdShow, int width, int height, LPSTR caption);	

	/// \brief ��ȡ���ڵĿ�
	int		getWidth();

	/// \brief ��ȡ���ڵĳ�
	int		getHeight();

	/// \brief ��ȡ���ھ��
	HWND	getHwnd();

private:
	/// \brief ����ע��
	WORD	registerClass(HINSTANCE hInstance);

	/// \brief ��ʼ��
	bool	init(HINSTANCE hInstance, int nCmdShow);

	/// \brief ��Ϣ�ص�����
	static	LRESULT CALLBACK  wndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

	///	��������
	LPSTR	mCaption;

	///	���ڳ���
	int		mHeight;

	///	���ڿ���
	int		mWidth;

	///	���ھ��
	HWND	mHWND;
};

#endif