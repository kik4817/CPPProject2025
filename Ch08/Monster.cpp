#include "Monster.h"

void Attacker::Attack()
{
	cout << "�����Ѵ�." << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}

void Unit:: Attack()
{
	cout << "������ �����Ѵ�." << endl;
}

void Unit::UseSkill()
{
	cout << "������ ��ų�� ����Ͽ����ϴ�." << endl;
}

void Probe::Attack()
{
	cout << "���� Ÿ���� ������ �Ѵ�.\n" << endl;
}

void Probe::UseSkill()
{
	cout << "���̾�� ����Ͽ����ϴ�.\n" << endl;
}

void Zealot::Attack()
{
	cout << "���� Ÿ���� ������ �Ѵ�." << endl;
	cout << "�����ؼ� �ι� �����Ѵ�.\n" << endl;
}

void Zealot::UseSkill()
{
	cout << "����ź�� ����Ͽ����ϴ�.\n" << endl;
}

void Dragoon::Attack()
{
	cout << "���� Ÿ���� ������ �Ѵ�." << endl;
	cout << "���� Ȯ���� ������ ��������.\n" << endl;
}

void Dragoon::UseSkill()
{
	cout << "�����Ʈ�� ����Ͽ����ϴ�.\n" << endl;
}
