#pragma once
#include "Scene.h"
#include "ControlMenu.h"
class TitleScene2 :
	public Scene
{
	virtual void Initialize();

	ControlMenu* cm;
};

