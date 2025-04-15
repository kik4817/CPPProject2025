#pragma once

#include "Game.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

enum PlayerType
{
	HUMAN,
	ORC,
	ELF
};

struct Player
{
	string name;
	PlayerType type;
	int xPos;
	int yPos;

	void ShowPlayerInfo();

	string ReturnByTypeName();

	void ChangePos(int x, int y);
	
};