#pragma once
#include "Scene.h"
#include "MainTitle.h"
class TitleScene :
	public Scene
{
public:
	virtual void Initialize();		//모든 Scene에는 반드시 Initialize함수가 있어야합니다. (추상 클래스 참고)

	MainTitle* mt;
};

