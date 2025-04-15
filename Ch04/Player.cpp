#include "Player.h"

void Player::ShowPlayerInfo()
{
	cout << "�÷��̾� �̸� : " << name
		<< ", ���� : " << ReturnByTypeName()
		<< ", ��ġ : " << "[" << xPos << "," << yPos << "]"
		<< endl;
}

string Player::ReturnByTypeName()
{
	switch (type)
	{
	case HUMAN: return "HUMAN";
	case ORC: return "ORC";
	case ELF: return "ELF";
	default: return "���� ������ ��µǾ����ϴ�.";
	}
}

void Player::ChangePos(int x, int y)
{
	xPos = x;
	yPos = y;
}
