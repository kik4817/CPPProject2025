#pragma once

#include "Skill.h"

/*
* Player클래스 안에서 사용되는 Money
* 플레이어 돈을 xx 한다.
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

// 아이템을 구입한다.
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

