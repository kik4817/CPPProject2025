#include "Character.h"

void Character::UseSkill(Skill& skill)
{
	skill.Use();
}

void Character::UseHP()
{
	/*HP_protected -= 10;
	HP2 -= 10;*/

	HP -= 10;
}
