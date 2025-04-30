#pragma once

#include "Runner.h"

// main() 프로그램 시작 -> 게임 시작 -> 게임 종료

class GameManager
{
private:
	Player* player;

	void ShowTitle();
	void ShopPhase();
	void GamePhase();	
public:
	GameManager()
	{
		player = new Player();
	}
	void Play();
};

