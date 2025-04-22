#include "Enemy.h"

void Enemy::Attacked()
{
	cout << "���� �Ѵ�" << endl;
	HP -= 10;
}

void Enemy::Defence()
{
	cout << "��� �ڼ�" << endl;
	DEF += 5;
}

void Enemy::Recovery()
{
	cout << "ȸ�� �Ѵ�" << endl;
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
