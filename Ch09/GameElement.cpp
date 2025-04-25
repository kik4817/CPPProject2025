#include "GameElement.h"

void GameElement::MAttack()
{
	fire.MAttack();
	water.MAttack();
	wind.MAttack();
	earth.MAttack();
}
