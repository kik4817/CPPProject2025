#pragma once

#include "Skill.h"

/*
* PlayerŬ���� �ȿ��� ���Ǵ� Money
* �÷��̾� ���� xx �Ѵ�.
*/

class GameMoney
{
public:
	void Use();
	void Add();
};

class Gem
{
public:
	void Use();
	void Add();
};

// �������� �����Ѵ�.
// player.Use();

class Money
{
private:
	//int currentMoney;
	GameMoney gameMoney;
	Gem gem;
public:
	void Use();
	void Add();
};

