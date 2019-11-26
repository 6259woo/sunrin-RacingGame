#pragma once
#include "GameObject.h"
#include "Enemy.h"
#include "PlayerCar.h"
#include <time.h>

class EnemyManager :
	public GameObject
{
public:
	EnemyManager(PlayerCar* playerCar);
	~EnemyManager();

	int interval = 50;
	int line = 0;
	int inLine = interval;

	void trackSelect();
	PlayerCar* pc;

	std::list<Enemy*> enemyList;

	Enemy* PushBackEnemy(Enemy* e);
	void Destroy(Enemy* e);
	virtual void Update();
	virtual void LateUpdate();

	std::list<Enemy*> destroyed;
	void Remove();
};

