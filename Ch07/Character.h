#pragma once

#include "Skill.h"
#include "Entity.h"

// ��ų, ����, ����, ����

class Character : public Entity
{	

private:
	//int HP2;
	int HP;

public:

	void UseSkill(Skill& skill);

	void UseHP();
};

