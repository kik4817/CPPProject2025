#pragma once

#include "Common.h"
#include "Utility.h"

class Runner
{
private:
	//int run;
	bool isEnd;

protected:
	int run;
	int minSpeed;
	int maxSpeed;
	string symbol;

protected:
	virtual void SetMaxSpeed();
	void DrawMoveDistance(); // ���� �����ϴ�
	virtual void SetShape();

public:
	Runner() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("N") {}
	Runner(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	void Run();
	bool CheckEndLine(int length);
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
	void Run();
	//void Upgrade();
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
	void Run();	
};
