#include "stdafx.h"
#include "TitleScene.h"

void TitleScene::Initialize()
{
	mt = (MainTitle*)PushBackGameObject(new MainTitle());
}
