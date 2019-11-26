#include "stdafx.h"
#include "ControlMenu.h"
#include "InputManager.h"
#include "GameScene.h"

ControlMenu::ControlMenu() : GameObject(L"resources/background/control.png", Vector2(960.0f, 540.0f))
{
}

void ControlMenu::Update()
{
	i++;
	if (i >= 60) {
		if (InputManager::GetMyKeyState(VK_RETURN))
			Scene::ChangeScene(new GameScene());
	}
	
}
