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
	// maxSpeed 제어해주는 항수
	//run += RandomUtil::GetRandomInt(maxSpeed); // 1. 캐릭터의 최대 속도 설정
	//for (int i = 0; i < run; i++)              // 2. 이동한다.
	//{
	//	cout << " ";
	//}
	//cout << symbol << endl;                    // 3. 형태를 그려준다. ~~P
	
	SetMaxSpeed();      // 변경될 수 있는 함수 (virtual)
	DrawMoveDistance(); // 변경되면 아노디는 함수
	SetShape();         // 변경될 수 있는 함수
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

void Runner::ShowPlayerInfo()
{

}

void Runner::Upgrade(PlayerStat selectedStat)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(1);
		cout << "최소 속도가 1증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(1);
		cout << "최대 속도가 1증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스텟이 없습니다." << endl;
	}
	
	//switch()
}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(amount);
		cout << "최소 속도가 " << amount << "증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(amount);
		cout << "최대 속도가 " << amount << "증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스텟이 없습니다." << endl;
	}
}

void Runner::SetMin(int value)
{
	if (maxSpeed < value)
	{
		value = maxSpeed;
	}
	minSpeed += value;
}

void Runner::SetMax(int value)
{
	if (10 < value)
	{
		value = 10;
	}
	maxSpeed += value;
}

void Runner::Initialize()
{
	run = 0;       // 모든 주자가 0에서 시작
	isEnd = false; // 우승을 한게 아니다
}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 2; // 아이콘, 스킬 이름, 효과 : 플레이어의 최대 속도를 1증가 시켜주는 스킬이다.
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

//void Player::Run()
//{
//	Runner::Run();
//	cout << " ";
//}

void Player::ShowPlayerInfo()
{
	cout << "유저 정보" << endl;
	cout << "최소 속도 : " << minSpeed << "최대 속도 : " << maxSpeed << endl;
	cout << "보유 금액 : " << money << endl;
}

//void Enemy::Run()
//{
//	Runner::Run();
//	cout << " ";
//}

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
