#pragma once

#include "Common.h"

class Weapon
{
private: // ��� ���� - ��� ������ ����.
	string name;
	int lv;
	int baseAtk;
	int weight;
protected: // ��ӹ��� �ڽ��� �� ����� �����޾Ƽ� ����� �� �ִ�.
	int DoUpgrade();
	int finalAtk;
public:
	Weapon(string name, int baseatk, int weight)
		: name(name), lv(1), baseAtk(baseatk), weight(weight) {}
	Weapon(string name, int lv, int baseatk, int weight)
		: name(name), lv(lv), baseAtk(baseatk), weight(weight) {}

public:
	void Showinfo();
	//void Attack();
	virtual void Attack();
	virtual void Upgrade();
};


class Spear : public Weapon
{
private:
	int specialAtk;
public:
	Spear(string name, int lv, int baseatk, int weight, int specialatk)
		: Weapon(name, lv, baseatk, weight), specialAtk(specialatk) {}
public:
	void Attack();
	void Upgrade() override;
};

class Sword : public Weapon
{
public:
	Sword(string name, int lv, int baseatk, int weight)
		: Weapon(name, lv, baseatk, weight) {
	}

public:
	void Attack();
	void Upgrade() override;
};

class Arrow : public Weapon
{
public:
	Arrow(string name, int lv, int baseatk, int weight)
		: Weapon(name, lv, baseatk, weight) {
	}

public:
	void Attack();
	void Upgrade() override;
};
