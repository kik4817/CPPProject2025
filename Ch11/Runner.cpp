#include "Runner.h"

void Runner::Run()
{
	// maxSpeed �������ִ� �׼�
	run += RandomUtil::GetRandomInt(maxSpeed);
	for (int i = 0; i < run; i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
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

void Player::Run()
{
	Runner::Run();
	cout << " ";
}

void Enemy::Run()
{

}
