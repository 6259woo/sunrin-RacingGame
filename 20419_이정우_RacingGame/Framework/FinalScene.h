#pragma once
#include "Scene.h"
#include "Ending.h"
#include "Ending2.h"
class FinalScene :
	public Scene
{
public:
	bool res;
	FinalScene(bool res);
	virtual void Initialize();

	Ending* end;
	Ending2* end2;

};

