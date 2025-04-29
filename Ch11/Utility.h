#pragma once

#include "Common.h"

class RandomUtil
{
public:
	static int GetRandomInt(int range);
};

class ConsoleUtil
{
public:
	static void GotoXY(int x, int y);	
};

class SoundUtil
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};