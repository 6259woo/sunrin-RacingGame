#include "stdafx.h"
#include "Ending2.h"
#include "InputManager.h"

Ending2::Ending2() : GameObject(L"resources/background/ending2.png", Vector2(960.0f, 540.0f))
{
}

Ending2::~Ending2()
{
}

void Ending2::Update()
{
	if (InputManager::GetMyKeyState(VK_RETURN))
		exit(0);
}
