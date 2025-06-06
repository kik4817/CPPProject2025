#include "Monster.h"

void Attacker::Attack()
{
	cout << "공격한다." << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}

void Unit:: Attack()
{
	cout << "유닛이 공격한다." << endl;
}

void Unit::UseSkill()
{
	cout << "유닛이 스킬을 사용하였습니다." << endl;
}

void Probe::Attack()
{
	cout << "소형 타입의 공격을 한다.\n" << endl;
}

void Probe::UseSkill()
{
	cout << "파이어볼을 사용하였습니다.\n" << endl;
}

void Zealot::Attack()
{
	cout << "소형 타입의 공격을 한다." << endl;
	cout << "연속해서 두번 공격한다.\n" << endl;
}

void Zealot::UseSkill()
{
	cout << "물폭탄을 사용하였습니다.\n" << endl;
}

void Dragoon::Attack()
{
	cout << "중형 타입의 공격을 한다." << endl;
	cout << "일정 확률로 공격이 빗나간다.\n" << endl;
}

void Dragoon::UseSkill()
{
	cout << "썬더볼트를 사용하였습니다.\n" << endl;
}
