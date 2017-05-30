/////////////////////////////////////////////////////////////////////////////////
/// Copyright (C), 2017, zhangxuan. All rights reserved.
/// \brief   Nά�����������Ļ���
/// \author  zhangxuan
/// \date    2017-05
/////////////////////////////////////////////////////////////////////////////////
#ifndef Engine_H_
#define Engine_H_

#include <Windows.h>
#include "../Util/Singleton.h"

class Engine : public Singleton<Engine>
{
	SINGLETON_DEFINE(Engine)
private:
	Engine(void);
	~Engine(void);

public:
	/// \brief ��ʼ��
	void init(HINSTANCE hInstance, int nCmdShow);

	/// \brief ��Դ����
	void destroy();

	/// \brief ����
	void update(float dt);

private:
	/// \brief ��������
	void createWin(HINSTANCE hInstance, int nCmdShow);
};


#endif