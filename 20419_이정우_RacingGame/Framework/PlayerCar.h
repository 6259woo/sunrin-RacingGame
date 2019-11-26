#pragma once
#include "GameObject.h"
#include "AABBCollider.h"

class PlayerCar :
	public GameObject
{
public:
	PlayerCar();
	AABBCollider* carcol;
	virtual void Update();
};

