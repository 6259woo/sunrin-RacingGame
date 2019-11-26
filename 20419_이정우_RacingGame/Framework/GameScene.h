#pragma once
#include "Scene.h"
//#include "Player.h"
#include "BackGround.h"
#include "PlayerCar.h"

#include "EnemyManager.h"

//����� ������ ��ü�� �ʿ��մϴ�.
//Scene�� ��ӹ޾� ��ü�� �����մϴ�.
class GameScene :
	public Scene
{
public:
	virtual void Initialize();		//��� Scene���� �ݵ�� Initialize�Լ��� �־���մϴ�. (�߻� Ŭ���� ����)
public:
	BackGround* backGround;
	PlayerCar* playerCar;
	EnemyManager* em;
	
	//Player* player;

};
