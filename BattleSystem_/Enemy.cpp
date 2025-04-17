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
			// 특정 좌표로 이동하세요 GoToXY
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];


		}
		cout << endl; // 한줄 뛰어쓰기
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

	// 이동 로직
	
	// x의 좌표가 목표 위치보다 크면 이동 해야한다.
	// x의 좌표가 목표 위치보다 작거나 같으면 위치 이동해야한다.

	if (IsBattle(posX, posY)) // true 일때 전투상태
	{
		posX = 10; // 10 대신에 상수로 표현 가능하다.
	}
	else
	{
		// 전국 마다 특별한 행동을 하는 함수 호출
		posX--;
	}
	ShowImage(posX, posY);

	//if (posX <= 10)
	//	posX = 10;
	//	

	//else

	//	// Y를 바꾸면 점프 표현 가능
	//	posX--;
	//ShowImage(posX, posY);
}
