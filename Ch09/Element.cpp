#include "Element.h"

void Element::MAttack()
{
	CalculatefinalMAtk();
	cout << "Ư�� ���ݷ� : " << finalMATK << endl;
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
