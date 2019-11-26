#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
class Enemy :
	public GameObject
{

public:
	Enemy(int i);

	
	AABBCollider* col;
	virtual void Update();
};

