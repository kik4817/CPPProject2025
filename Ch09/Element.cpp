#include "Element.h"

void Element::MAttack()
{
	CalculatefinalMAtk();
	cout << "특수 공격력 : " << finalMATK << endl;
}

void Element::CalculatefinalMAtk()
{	
	finalMATK = LV * defaultMATK;
}

void Fire::MAttack()
{
	Element::MAttack();
}

void Water::MAttack()
{
	Element::MAttack();
}

void Wind::MAttack()
{
	Element::MAttack();
}

void Earth::MAttack()
{
	Element::MAttack();
}
