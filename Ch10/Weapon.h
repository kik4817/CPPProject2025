#pragma once

#include "Common.h"

class Weapon
{
private: // 멤버 변수 - 상속 받을수 없다.
	string name;
	int lv;
	int baseAtk;
	int weight;
protected: // 상속받은 자식이 이 기능을 물려받아서 사용할 수 있다.
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
