/*
* 작성일 : 2025-04-22
* 작성자 : 김인국
* 주 제 : 객체프로그래밍의 특징 :캡슐화, 상속
*/

#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"
#include "Entity.h"

// A 개발자 plyaer. <- (스킬), (재화)
// B 개발자           skill , Currency, Money

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