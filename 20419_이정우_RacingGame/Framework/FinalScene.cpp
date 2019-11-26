#include "stdafx.h"
#include "FinalScene.h"

FinalScene::FinalScene(bool res)
{
	this->res = res;
}

void FinalScene::Initialize()
{
	if (res)
	{
		end2 = (Ending2*)PushBackGameObject(new Ending2);
	}
	else
	{
		end = (Ending*)PushBackGameObject(new Ending);
	}
} 
