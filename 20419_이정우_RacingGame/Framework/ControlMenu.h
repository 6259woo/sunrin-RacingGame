#pragma once
#include "GameObject.h"
class ControlMenu :
	public GameObject
{
public:
	ControlMenu();
	int i = 0;

	virtual void Update();
};

