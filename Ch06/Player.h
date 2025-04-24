#pragma once

// 목표 : 접근 제어 지정자.

// private, puble
// struct - 기본 타입 public
// class - 기본 타입 private

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