/*
* �ۼ��� : 2025-04-22
* �ۼ��� : ���α�
* �� �� : ��ü���α׷����� Ư¡ :ĸ��ȭ, ���
*/

#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"
#include "Entity.h"

// A ������ plyaer. <- (��ų), (��ȭ)
// B ������           skill , Currency, Money

class Player : public Entity
{
private:
	Skill skill;
	Money money;
public:
};

class ShopManager
{

};

class MoveManager
{

};

class BattleManager
{
private:

	Player player;
	Enemy enemy;

	bool isEnd;

	void EnemyTurn()
	{
		enemy.Action();
	}
	void PlayerTurn()
	{

	}
public:
	void Battle()
	{
		while (true)
		{
			PlayerTurn();
			EnemyTurn();
			if (isEnd)
			{
				break;
			}
		}
	}
};

int main()
{
	//Skill skill;
	//Money money;

	//skill.Use();
	//money.Use();

	//Character player1;

	////player1.Attacked();

	//Enemy enemy;
	//enemy.Action();

	BattleManager battle;
	battle.Battle();
}