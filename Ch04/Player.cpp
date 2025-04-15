#include "Player.h"

void Player::ShowPlayerInfo()
{
	cout << "플레이어 이름 : " << name
		<< ", 종족 : " << ReturnByTypeName()
		<< ", 위치 : " << "[" << xPos << "," << yPos << "]"
		<< endl;
}

string Player::ReturnByTypeName()
{
	switch (type)
	{
	case HUMAN: return "HUMAN";
	case ORC: return "ORC";
	case ELF: return "ELF";
	default: return "예의 사항이 출력되었습니다.";
	}
}

void Player::ChangePos(int x, int y)
{
	xPos = x;
	yPos = y;
}
