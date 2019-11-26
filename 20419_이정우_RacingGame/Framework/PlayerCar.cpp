#include "stdafx.h"
#include "PlayerCar.h"
#include "InputManager.h"

PlayerCar::PlayerCar() : GameObject(L"resources/car/car1.png", Vector2(960.0f, 540.0f))
{
	carcol = new AABBCollider(*transform, 171.5f, 343.0f);
	transform->SetScale(0.7, 0.7 );
}

void PlayerCar::Update()
{
	if (InputManager::GetMyKeyState(VK_UP))
		if (transform->position.y > 0.0f)
			transform->position.y -= 8.0f;
	if (InputManager::GetMyKeyState(VK_DOWN))
		if (transform->position.y < 1080.0f)
			transform->position.y += 8.0f;
	if (InputManager::GetMyKeyState(VK_RIGHT))
		if(transform->position.x < 1530.25f)
			transform->position.x += 15.0f;
	if (InputManager::GetMyKeyState(VK_LEFT))
		if(transform->position.x > 399.75f)
			transform->position.x -= 15.0f;
}
