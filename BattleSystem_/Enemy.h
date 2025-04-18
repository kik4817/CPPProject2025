#pragma once

#include "Common.h"
#include "Image.h"

struct Enemy
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	int posX;
	int posY; // ������ ��ü ��ǥ�� �����ش�
	bool isDeath;

	Enemy(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], BattleState battleState)
		: HP(HP), ATK(ATK), DEF(DEF), name(name), battleState(battleState)
	{
		posX = 30;
		posY = 5;
		isDeath = false;

		for (int y = 0;y < IMAGEHEIGHT;y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}
	
	// ����� ����
	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	//void ShowImage(int& posX, int& posY); // int& �������� ǥ���ϰ� ������
	void ShowImage();

	// ���ǿ� �ش��ϴ� ���
	bool IsBattle(int x, int y);
	bool IsWalk(int x, int y);
	bool IsIdle(int x, int y);

	// ����� �����ؼ� �ϳ��� ���ο� ������� ǥ���Ѵ�.
	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	// ������ ���� ���
	void Attacked(int damage);
	//void Defence();
	//void Skill();
};

