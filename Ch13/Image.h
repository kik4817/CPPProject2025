#pragma once

#include <iostream>
#include <string>
#include "Console.h"

// 1차원 데이터를 2차원 배열로 변환 후 보여주는 객체

class Image
{
	//static const int Max_Height 10
private:
	char art[8][100]; // [세로][가로]
	int height;
public:
	Image(const char* model, int height)
	{
		this->height = height;
		const char* lineStart = model;
		for (int i = 0; i < height;i++)
		{
			// 1번째 줄에서 개행문자를 찾아라
			const char* lineEnd = strchr(lineStart, '\n');
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model); // 마지막 줄을 표현
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}

	void show(int x, int y) const
	{
		for (int i = 0;i < height;i++)
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}

	void move(int x, int y, int moveDistance, int delayms) // 오른쪽으로 이동 ->
	{
		for (int i = 0;i < moveDistance;i++)
		{
			//Console::GoToXY(x + i, y);

			for (int j = 0;j < height;j++)
			{
				Console::GoToXY(x + i, j);
				std::cout << art[j];
			}
			Sleep(delayms);
			system("cls");
		}		
	}
	
	void moveReverse(int x, int y, int moveDistance, int delayms) // 왼쪽 <-
	{
		for (int i = 0;i < moveDistance;i++)
		{
			int currentX = x - i;
			
			if (currentX < 0) // 콘솔에서 x 0보다 작으면 에외가 발생한다.
			{
				currentX = 0;
			}			

			for (int j = 0;j < height;j++)
			{
				Console::GoToXY(currentX, j);
				std::cout << art[j];
			}
			Sleep(delayms);
			system("cls");
		}
	}
};

