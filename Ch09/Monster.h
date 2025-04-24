#pragma once

#include "Common.h"
#include "Element.h"

// ����(Monster) - ���� ����, ����(MonsterHandler)
 
// ���ʹ� ������ �Ѵ�.

// ������ ���� ��Ģ

// ���� ���ݷ� -  

/*
* �������̵�(override)
* 
* Monster::Attack();
* Slime::Attack();
* Slime���� ���� Attack, Slime Attack � Attack ����ؾ��ϴ°�?
* �θ��� �Լ��� ��ü�Ѵ�
* 
* override Ű����
*/

/*
* virtual, override
* 
* virtual : �ڵ尡 ����(����)���� �ʴ´�. 
            �ٸ� ������ �� �Լ��� ã�Ƽ� ����ض�.
* 
* override : ���� �̸��� �Լ��� �ڽĿ��� �����ϸ� �θ��� �ڵ尡 ��������.
* 
* ������, ���, ��ũ��� �߰�
* Monster.Attack();
*
* Slime.Attack();
* Goblin.Attack();
* Orc.Attack();
* 
* Ȯ�强 ����. ������, ��ũ, ���.. ���� �߰��� ������ ������ �߰��� �� ����.
* 
* overrideŰ����? ����� �ϴ� �Ǽ��� �������ִ� Ű����
* �Լ��� �̸��� ���ƾ� �Ѵ�.
*/

class ElementTYPE // �Ǵ� enum���� ��밡��
{

};

class Monster // ���� is �Ӽ�? Has �Ӽ�?
{

protected:
	int LV;
	int defaultATK;
	int finalATK;
	ElementTYPE type; // ��� ���� ���	
	// ElementTYPE* type; ��밡���� ���� ����

public:
	Monster() {}
	Monster(int lv, int defaultatk) : LV(lv), defaultATK(defaultatk) {}

public:
	virtual void Attack(); // ���ʹ� ������ �Ѵ�.
	void CalculateFinalATK();
};

class Slime : public Monster
{
public:		
	Slime(int lv, int defaultatk) : Monster(lv, defaultatk) {}
public:
	void Attack() override;
};

class Orc : public Monster
{
public:	
	Orc(int lv, int defaultatk) : Monster(lv, defaultatk) {}
public:
	void Attack() override;
};
