#pragma once

#include "Skill.h"

/*
* Player����� ����
* Enemy ����� ����
* Player, Enemy ��ü�� �������� �����Ͱ� �ִ�.
* ���
* ��� ���� �������� �ϴ°�?
* �θ� - �ڽ�
* 
* Character Ŭ������ Entity Ŭ������ ����ϰ� �ִ�.
* Character Ŭ������ Eneity�� �ڽ� Ŭ������.
* Parent - Child
* base   - Derived
*/

/*
* ���� ���� ������
* protected : �ڽĿ��Դ� �����ְ� �� �̿ܿ��� ������ ���ϰ� ���� ��
* �θ� �ڽĿ��� ��� ���� �Ѱ��ְ� ���� ���� �� �ִ�
* �θ� �ڱ� �ڽſ����� ����ϰ� ���� ���� private �����ϰ�
* �ڽĿ����� �����ϰ� ���� ���� protected �����Ѵ�.
*/

/*
* 1. Enemy, Player �Ѵ� ü��, ���ݷ�, ������ �������� �ϼ���
* 2. ü���� ����ϴ� �ý����� Entity �������� ���������ϴٸ� private���� ���踦 �Ѵ�.
*/

class Entity
{
//private:
//	int HP;
//	int ATK;
//	int DEF;
//
//protected:
//	int HP_protected;
//	int ATK_protected;
//	int DEF_protected;

protected:
	int HP;
	int ATK;
	int DEF;

public:

	/*void Attacked();
	void Defence();
	void Recovery();*/

	int GetHP();
	int GetATK();
	int GetDEF();
	int SetHP(int value);
	int SetATK(int value);
	int SetDEF(int value);


};

