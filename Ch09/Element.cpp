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
