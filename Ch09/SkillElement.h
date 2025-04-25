#pragma once

#include "Common.h"
#include "Element.h"

class SkillElement: public Element
{
protected:
	Fire fire;
	Water water;
	Wind wind;
	Earth earth;

public:
	void Skill();
};

