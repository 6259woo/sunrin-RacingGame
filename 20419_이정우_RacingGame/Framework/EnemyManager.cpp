#include "stdafx.h"
#include "EnemyManager.h"
#include "Scene.h"
#include "FinalScene.h"


EnemyManager::EnemyManager(PlayerCar* playerCar)
{
	pc = playerCar;
}


EnemyManager::~EnemyManager()
{
}

void EnemyManager::trackSelect()
{
	srand(time(NULL));
	int random = rand() % 5;
	if (random <= 3)
	{
		PushBackEnemy(new Enemy(random));
	}
	/*PushBackEnemy(new Enemy(0));
	PushBackEnemy(new Enemy(1));
	PushBackEnemy(new Enemy(2));
	PushBackEnemy(new Enemy(3));*/
}

Enemy* EnemyManager::PushBackEnemy(Enemy* e)
{
	Scene::GetCurrentScene().PushBackGameObject(e);
	enemyList.push_back(e);
	return e;
}

void EnemyManager::Destroy(Enemy* e)
{
	destroyed.push_back(e);
}

void EnemyManager::Update()
{
	// line 간격
	if (inLine < interval)
	{
		inLine++;
	}
	else 
	{
		inLine = 0;
		trackSelect();
		line++;
	}
	//printf("inLine: %d\nline: %d\n", inLine, line);

	for(auto& i : enemyList)
	{
		if (i->col->Intersected(*pc->carcol))
		{
			//printf("%d true\n",line);
			Scene::ChangeScene(new FinalScene(false));
		}
	}
	// complete
	if (line >= 15)
	{
		Scene::ChangeScene(new FinalScene(true));
	}
}

void EnemyManager::LateUpdate()
{
	// 화면에서 벗어난거 지우기
	for (auto& i : enemyList)
	{
		if (i->transform->position.y >= 1280.0f)
		{
			Destroy(i);
			//printf("destroyed에 추가됨\n");
		}
	}
	Remove();
}

void EnemyManager::Remove()
{
	for (auto& i : destroyed)
	{
		enemyList.remove(i);
		Scene::GetCurrentScene().Destroy(i);
	}
	destroyed.clear();
}