#pragma once

#include "Runner.h"

// main() ���α׷� ���� -> ���� ���� -> ���� ����

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

