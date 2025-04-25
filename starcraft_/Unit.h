#pragma once
#include "Common.h"

class Unit
{
public:
	virtual void Move() = 0; // ���� ���� �Լ�
};

class BarrackUnit : public Unit
{
public:
	virtual void Move() = 0;
};

class Marin : public BarrackUnit
{
private:
	bool isUpgrade;
	bool isUseable;
public:
	void Move() override;
};

class Firebat : public BarrackUnit
{

};

class Medic : public BarrackUnit
{

};