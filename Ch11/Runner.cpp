#include "Runner.h"

void Runner::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed);	
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)
	{
		cout << " ";
	}	
}

void Runner::SetShape()
{
	cout << symbol << endl;
}

void Runner::Run()
{
	// maxSpeed �������ִ� �׼�
	//run += RandomUtil::GetRandomInt(maxSpeed); // 1. ĳ������ �ִ� �ӵ� ����
	//for (int i = 0; i < run; i++)              // 2. �̵��Ѵ�.
	//{
	//	cout << " ";
	//}
	//cout << symbol << endl;                    // 3. ���¸� �׷��ش�. ~~P
	
	SetMaxSpeed();      // ����� �� �ִ� �Լ� (virtual)
	DrawMoveDistance(); // ����Ǹ� �Ƴ��� �Լ�
	SetShape();         // ����� �� �ִ� �Լ�
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		isEnd = true;
	}
	else
	{
		isEnd = false;
	}
	return isEnd;
}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 2; // ������, ��ų �̸�, ȿ�� : �÷��̾��� �ִ� �ӵ��� 1���� �����ִ� ��ų�̴�.
	run += RandomUtil::GetRandomInt(applyMaxSpeed);

	//run += OwnSkillA();
}

void Player::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);
	if (percent > 50)
	{
		cout << "~" << symbol << endl;
	}
	else
	{
		cout << symbol << endl;
	}
}

void Player::Run()
{
	Runner::Run();
	cout << " ";
}

void Enemy::Run()
{
	Runner::Run();
	cout << " ";
}

void Enemy::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 2;
	run += RandomUtil::GetRandomInt(applyMaxSpeed);
}

void Enemy::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);
	if (percent > 50)
	{
		cout << "~" << symbol << endl;
	}
	else
	{
		cout << symbol << endl;
	}
}
