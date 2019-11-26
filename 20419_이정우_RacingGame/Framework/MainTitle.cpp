#include "stdafx.h"
#include "MainTitle.h"
#include "InputManager.h"
#include "Scene.h"
#include "TitleScene2.h"

MainTitle::MainTitle() : GameObject(L"resources/background/main.png", Vector2(960.0f, 540.0f))
{
}

void MainTitle::Update()
{
	if (InputManager::GetMyKeyState(VK_RETURN))
		Scene::ChangeScene(new TitleScene2());
}
