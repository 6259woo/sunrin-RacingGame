#include "stdafx.h"
#include "BackGround.h"
#include "InputManager.h"


BackGround::BackGround() : GameObject(L"resources/background/background1.png", Vector2(960.0f, 0.0f))
{
}


BackGround::~BackGround()
{
}

void BackGround::Update()
{
	/*printf("ÁÂÇ¥: %f, %f\n", transform->position.x, transform->position.y);

	if (InputManager::GetMyKeyState(VK_UP))
		transform->position.y -= 10.0f;
	if (InputManager::GetMyKeyState(VK_DOWN))
		transform->position.y += 10.0f;
	if (InputManager::GetMyKeyState(VK_RIGHT))
		transform->position.x += 10.0f;
	if (InputManager::GetMyKeyState(VK_LEFT))
		transform->position.x -= 10.0f;*/

	if (transform->position.y < 1080.0f)
	{
		transform->position.y += 30.0f;
	}
	else if (transform->position.y >= 1080.0f)
	{
		transform->position.y = 0.0f;
	}
}
