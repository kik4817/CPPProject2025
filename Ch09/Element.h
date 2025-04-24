#pragma once

#include "Common.h"
#include "GameElement.h"

class ElementType
{

};

class Element
{
protected:
	int LV;
	int MaxMP;
	int MP;
	int defaultMATK;
	int finalMATK;
public:
	Element() {}
	Element(int lv, int maxmp, int defaultMATK) : LV(lv), MaxMP(maxmp), defaultMATK(defaultMATK) {}
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