#pragma once
#include "Scene.h"
#include "MainTitle.h"
class TitleScene :
	public Scene
{
public:
	virtual void Initialize();		//��� Scene���� �ݵ�� Initialize�Լ��� �־���մϴ�. (�߻� Ŭ���� ����)

	MainTitle* mt;
};

