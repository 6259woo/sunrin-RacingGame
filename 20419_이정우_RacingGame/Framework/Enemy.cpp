#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy(int i) : GameObject(L"resources/car/car2.png")
{
	transform->SetScale(0.7, 0.7);
	col = new AABBCollider(*transform, Vector2(171.5f, 343.0f));
	if (i == 0)
	{
		transform->position.x = 500.25f;
		transform->position.y = -300.0f;
	}
	else if (i == 1)
	{
		transform->position.x = 806.75f;
		transform->position.y = -300.0f;
	}
	else if (i == 2)
	{
		transform->position.x = 1113.25f;
		transform->position.y = -300.0f;
	}
	else if (i == 3)
	{
		transform->position.x = 1419.75f;
		transform->position.y = -300.0f;
	}
}

void Enemy::Update()
{
	transform->position.y += 20.0f;
}
