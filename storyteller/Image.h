#pragma once

#include "Console.h"

class Image
{
private:
	char art[15][100];
	int height;
public:
	Image(const char* model, int height)
	{
		this->height = height;
		const char* lineStart = model;
		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart, '\n');
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model);
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}

	void show(int x, int y) const
	{
		for (int i = 0; i < height; i++)
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}

	void move(int x, int y, int moveDistance, int delayms) 
	{
		for (int i = 0; i < moveDistance; i++)
		{
			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(x + i, j);
				std::cout << art[j];
			}
			Sleep(delayms);
			system("cls");
		}
	}

	void moveReverse(int x, int y, int moveDistance, int delayms) 
	{
		for (int i = 0; i < moveDistance; i++)
		{
			int currentX = x - i;

			if (currentX < 0) 
			{
				currentX = 0;
			}

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(currentX, j);
				std::cout << art[j];
			}
			Sleep(delayms);
			system("cls");
		}
	}
};