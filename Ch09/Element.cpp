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
