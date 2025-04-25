#pragma once

#include "Common.h"
#include "Element.h"

class GameElement: public Element
{
protected:
	Fire fire;
	Water water;
	Wind wind;
	Earth earth;

public:
	void MAttack();
};

