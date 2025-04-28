#pragma once

#include "Common.h"
#include "Utility.h"

class Runner
{
private:
	int run;
	bool isEnd;
protected:
	int minSpeed;
	int maxSpeed;
	string symbol;
public:
	Runner() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E") {}
	Runner(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	virtual void Run();
	bool CheckEndLine(int length);
};

class Player : public Runner
{
private:

protected:

public:
	Player() : Runner() 
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {} // 플레이어의 이름을 직접 넣어주고 싶을때
public:
	void Run() override;
	void Upgrade();
};

class Enemy : public Runner
{
private:

protected:

public:
	void Run() override;

};
