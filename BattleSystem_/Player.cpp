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
	// 데미지 감소 규칙
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	// HP가 공격력 만큼 데미지를 준다
	HP -= damage;

	// HP가 0보다 작거나 같으면 몬스터 죽었다는 사실을 알려야한다. - Bool isDeath
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

	// 최대 체력
}
