#include "Enemy.h"

void Enemy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0;y < IMAGEHEIGHT;y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage(int& posX, int& posY)
{
	for (int y = 0;y < IMAGEHEIGHT;y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			// Ư�� ��ǥ�� �̵��ϼ��� GoToXY
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];


		}
		cout << endl; // ���� �پ��
	}
}

bool Enemy::IsBattle(int x, int y)
{
	if (x <= 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY)
{
	ChangeImage(Image);

	// �̵� ����
	
	// x�� ��ǥ�� ��ǥ ��ġ���� ũ�� �̵� �ؾ��Ѵ�.
	// x�� ��ǥ�� ��ǥ ��ġ���� �۰ų� ������ ��ġ �̵��ؾ��Ѵ�.

	if (IsBattle(posX, posY)) // true �϶� ��������
	{
		posX = 10; // 10 ��ſ� ����� ǥ�� �����ϴ�.
	}
	else
	{
		// ���� ���� Ư���� �ൿ�� �ϴ� �Լ� ȣ��
		posX--;
	}
	ShowImage(posX, posY);

	//if (posX <= 10)
	//	posX = 10;
	//	

	//else

	//	// Y�� �ٲٸ� ���� ǥ�� ����
	//	posX--;
	//ShowImage(posX, posY);
}
