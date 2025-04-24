#pragma once

#include "Common.h"
#include "Monster.h"

class Element
{
protected:
	int defaultMATK;
	int finalMATK;
public:
	Element() {}
	Element(int defaultmatk) : defaultMATK(defaultmatk) {}
public:
	virtual void MAttack();
	void CalculatefinalMAtk();
};

class Fire : Element
{
public:
	void MAttack();
};

class Water : Element
{
public:
	void MAttack();
};

class Wind : Element
{
public:
	void MAttack();
};

class Earth : Element
{
public:
	void MAttack();
};