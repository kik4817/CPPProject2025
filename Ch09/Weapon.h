#pragma once

#include "Common.h"

class Weapon
{
	string name;
	int defaultATK;

public:
	virtual void ShowInfo();
};

class ¾ç¼Õ°Ë : Weapon
{

};

class ¿¢½ºÄ®¸®¹ö : ¾ç¼Õ°Ë
{
private:
	void OwnSkill();
public:
	void ShowInfo();
};



class BlackSmith
{
private:
	¿¢½ºÄ®¸®¹ö weapon1;
public:
	void EnforceWeapon(Weapon& weapon);
};

