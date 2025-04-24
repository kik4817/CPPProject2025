#pragma once

#include "Common.h"
#include "Element.h"

// 몬스터(Monster) - 몬스터 조작, 관리(MonsterHandler)
 
// 몬스터는 공격을 한다.

// 몬스터의 공격 규칙

// 최종 공격력 -  

/*
* 오버라이드(override)
* 
* Monster::Attack();
* Slime::Attack();
* Slime입장 몬스터 Attack, Slime Attack 어떤 Attack 사용해야하는가?
* 부모의 함수를 대체한다
* 
* override 키워드
*/

/*
* virtual, override
* 
* virtual : 코드가 실제(존재)하지 않는다. 
            다른 곳에서 이 함수를 찾아서 사용해라.
* 
* override : 같은 이름의 함수를 자식에서 선언하면 부모의 코드가 숨겨진다.
* 
* 슬라임, 고블린, 오크등등 추가
* Monster.Attack();
*
* Slime.Attack();
* Goblin.Attack();
* Orc.Attack();
* 
* 확장성 문제. 슬라임, 오크, 고블린.. 새로 추가할 몬스터의 개성을 추가할 수 없다.
* 
* override키워드? 사람이 하는 실수를 보안해주는 키워드
* 함수의 이름이 같아야 한다.
*/

class ElementTYPE // 또는 enum으로 사용가능
{

};

class Monster // 몬스터 is 속성? Has 속성?
{

protected:
	int LV;
	int defaultATK;
	int finalATK;
	ElementTYPE type; // 모든 몬스터 사용	
	// ElementTYPE* type; 사용가능한 몬스터 선택

public:
	Monster() {}
	Monster(int lv, int defaultatk) : LV(lv), defaultATK(defaultatk) {}

public:
	virtual void Attack(); // 몬스터는 공격을 한다.
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
