#pragma once

#include "Skill.h"
#include "Entity.h"

// 스킬, 전투, 상점, 모험

class Character : public Entity
{	

private:
	//int HP2;
	int HP;

public:

	void UseSkill(Skill& skill);

	void UseHP();
};

