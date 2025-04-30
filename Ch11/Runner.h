#pragma once

#include "Common.h"
#include "Utility.h"

enum PlayerStat
{
	MINSPEED, MAXSPEED, NONE
};

class Runner
{
private:
	//int run;
	bool isEnd;

protected:
	PlayerStat stat;
	int run;
	int minSpeed;
	int maxSpeed;
	int money;
	string symbol;

protected:
	virtual void SetMaxSpeed();
	void DrawMoveDistance(); // ���� �����ϴ�
	virtual void SetShape();

public:
	Runner() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("N"), stat(PlayerStat::NONE), money(1000) {}
	Runner(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol), stat(PlayerStat::NONE), money(1000) {}
	void Run();
	bool CheckEndLine(int length);
	virtual void ShowPlayerInfo(); // dynamicCast<> ��ü
	
	void Upgrade(PlayerStat selectedStat);
	void Upgrade(PlayerStat selectedStat, int amount);
	// void Upgrade(ShopItem)

	void SetMin(int value);
	void SetMax(int value);

	void Initialize();
};

class Player : public Runner
{
private:

protected:
	void SetMaxSpeed() override;
	void SetShape() override;	
public:
	Player() : Runner() 
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {} // �÷��̾��� �̸��� ���� �־��ְ� ������
public:
	//void Run() override;
	//void Run();
	//void Upgrade();
	void ShowPlayerInfo() override;
};

class Enemy : public Runner
{
private:

protected:
	void SetMaxSpeed() override;
	void SetShape() override;
public:
	Enemy() : Runner() 
	{
		symbol = "E";
	}
	Enemy(string symbol) : Runner(symbol) {}
public:
	//void Run();	
};
