#include "Enemy.h"

void Enemy::Attacked()
{
	cout << "공격 한다" << endl;
	HP -= 10;
}

void Enemy::Defence()
{
	cout << "방어 자세" << endl;
	DEF += 5;
}

void Enemy::Recovery()
{
	cout << "회복 한다" << endl;
	HP += 10;
}

void Enemy::BehaviorAI()
{
	if (HP > 5)
	{
		currentPattern = AGGRESSIVE;
	}
	else if (HP % 2 == 0)
	{
		currentPattern = DEFENSIVE;
	}
	else
	{
		currentPattern = COWARD;
	}

}

void Enemy::Action()
{
	BehaviorAI();
	switch (currentPattern)
	{
	case AGGRESSIVE:
		Attacked();
		break;
	case DEFENSIVE:
		Defence();
		break;
	case COWARD:
		Recovery();
		break;

	}

}
