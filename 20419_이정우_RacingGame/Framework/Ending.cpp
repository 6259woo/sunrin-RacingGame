#include "stdafx.h"
#include "Ending.h"
#include "InputManager.h"

Ending::Ending() : GameObject(L"resources/background/ending1.png", Vector2(960.0f, 540.0f))
{
}

Ending::~Ending()
{
}

void Ending::Update()
{
	if (InputManager::GetMyKeyState(VK_RETURN))
		exit(0);
}
