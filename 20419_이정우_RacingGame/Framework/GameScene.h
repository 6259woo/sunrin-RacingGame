#pragma once
#include "Scene.h"
//#include "Player.h"
#include "BackGround.h"
#include "PlayerCar.h"

#include "EnemyManager.h"

//장면을 관리할 객체가 필요합니다.
//Scene을 상속받아 객체를 생성합니다.
class GameScene :
	public Scene
{
public:
	virtual void Initialize();		//모든 Scene에는 반드시 Initialize함수가 있어야합니다. (추상 클래스 참고)
public:
	BackGround* backGround;
	PlayerCar* playerCar;
	EnemyManager* em;
	
	//Player* player;

};
