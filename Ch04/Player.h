#pragma once

#include "Game.h"

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