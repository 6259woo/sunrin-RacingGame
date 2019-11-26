#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"
#include "TitleScene.h"

int main()
{
	Framework& f = Framework::GetInstance();
	//f.Run(new GameScene(),L"≈∏¿Ã∆≤", 1920, 1080, false);
	f.Run(new TitleScene(), L"Racing Game", 1920, 1080, false);
	return 0;
}