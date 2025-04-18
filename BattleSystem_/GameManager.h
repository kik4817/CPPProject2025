#pragma once

// Player, Enemy

#include "Enemy.h"
#include "Player.h"

struct GameManager
{
	Enemy currentEnemy; // enemy �����ؼ� ����Ѵ�.
	Player player;
	TurnSystem currentTurnState;

	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), player(player)
	{
		currentTurnState = PLAYERTURN;
	}

	// �ٸ� ���� �������� ������ ���

	void GameLoop();

	void Battle(); // �Ʒ� �÷��̾��� �ൿ�� ���� �ൿ�� �����ش�

	void Animation();

	// �÷��̾��� �ൿ

	void PlayerTurn();

	// ������ �ൿ

	void EnemyTurn();
};