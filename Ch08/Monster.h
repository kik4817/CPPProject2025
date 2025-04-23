#pragma once

#include "Common.h"

class Monster
{

};

// ������Ʈ �����ϰ� �����ϴ� ���
// 1. �ͼ��� ������ �����´�.
// 2. �ϳ��� �����͸� �����ؼ� ��ü�� ǥ���Ѵ�.

// Has-A

/*
* virtaul Ű���带 ���� �߰��ϰ�, ���� ����� ���ϴ°�?
* �ڵ带 ����ϴ� ��ü�� ����� �߰����� Ư¡�� ���´�. virtual, �Լ� �������̵�
* ��� ������ ����ٶ�� ����� �����ϴ�.
*/

class Attacker
{
public:
	void Attack();
};

class Flayer
{

};

class Unit // ������ ���ݰ����Ѱ�? ��� ������ ���ݰ����ϸ� public Attacker || ������ ���Ҽ� �� �ִ�
{
	Attacker* attacker;
	Flayer* flayer;

	bool isAttackable;

public:
	Unit()
	{
		attacker = new Attacker();
	}
	Unit(bool attackable)
	{
		isAttackable = attackable;
		if (attackable)
		{
			attacker = new Attacker();
		}
	}

public:
	//Attacker* attakcer; �� ������ ��� ������ ������ �Ҽ��ְ� �Ǽ� ������ �����.
	Attacker* ReturnAttacker();

	virtual void Attack();
	void Stop();
	void Move();
	void Patrol();
	void Hold();
	virtual void UseSkill();

};

class Factory
{

};

class Nexus : public Factory
{

};

class GateWay : public Factory
{

};

class Probe : public Unit // ���κ�� ����?
{
public:
	Probe(bool attackable) : Unit(attackable) {}

	void Attack();
	void UseSkill();
};

class Zealot : public Unit
{
public:
	void Attack();
	void UseSkill();
};

class Dragoon : public Unit
{
public:
	void Attack();
	void UseSkill();
};
