#pragma once

// ��ǥ : ���� ���� ������.

// private, puble
// struct - �⺻ Ÿ�� public
// class - �⺻ Ÿ�� private

#include <iostream>
#include "HP.h"

using namespace std;

class Player
{
private:
	int HP;
	int MaxHP;
	bool isDeath;
public:
	void AttackedBy(int damage);
	void Recovery(int heal);		
};

//class Player : public HP
//{
//
//};