#pragma once

#include "Common.h"
#include "Monster.h"

class Element
{
protected:
	int LV;
	int defaultMATK;
	int finalMATK;
public:
	Element() {}
	Element(int lv, int defaultmatk) : LV(lv), defaultMATK(defaultmatk) {}
public:
	virtual void MAttack();
	void CalculatefinalMAtk();
};

class Fire : Element
{
public:
	Fire(int lv, int defaultmatk) : Element(lv, defaultmatk) {}
public:
	void MAttack() override;
};

class Water : Element
{
public:
	Water(int lv, int defaultmatk) : Element(lv, defaultmatk) {}
public:
	void MAttack() override;
};

class Wind : Element
{
public:
	Wind(int lv, int defaultmatk) : Element(lv, defaultmatk) {}
public:
	void MAttack() override;
};

class Earth : Element
{
public:
	Earth(int lv, int defaultmatk) : Element(lv, defaultmatk) {}
public:
	void MAttack() override;
};