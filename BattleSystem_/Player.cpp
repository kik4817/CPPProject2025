#include "Player.h"

void Player::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0;y < IMAGEHEIGHT;y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Player::ShowImage()
{
	for (int y = 0;y < IMAGEHEIGHT;y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{			
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];


		}
		cout << endl;
	}
}

bool Player::IsBattle(int x, int y)
{
	if (posX >= 6)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);
	

	if (IsBattle(posX, posY))
	{
		posX = 6; 
	}
	else
	{		
		posX++;
	}
	ShowImage();
}

void Player::Attacked(int damage)
{
	// ������ ���� ��Ģ
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	// HP�� ���ݷ� ��ŭ �������� �ش�
	HP -= damage;

	// HP�� 0���� �۰ų� ������ ���� �׾��ٴ� ����� �˷����Ѵ�. - Bool isDeath
	if (HP <= 0)
	{
		isDeath = true;
	}
}

void Player::Defence()
{
	DEF += 1;
}

void Player::UseItem(int heal)
{
	HP += heal;

	// �ִ� ü��
}
