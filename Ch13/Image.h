#pragma once

#include <iostream>
#include <string>
#include "Console.h"

// 1���� �����͸� 2���� �迭�� ��ȯ �� �����ִ� ��ü

class Image
{
	//static const int Max_Height 10
private:
	char art[8][100]; // [����][����]
	int height;
public:
	Image(const char* model, int height)
	{
		this->height = height;
		const char* lineStart = model;
		for (int i = 0; i < height;i++)
		{
			// 1��° �ٿ��� ���๮�ڸ� ã�ƶ�
			const char* lineEnd = strchr(lineStart, '\n');
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model); // ������ ���� ǥ��
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

	void move(int x, int y, int moveDistance, int delayms) // ���������� �̵� ->
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
	
	void moveReverse(int x, int y, int moveDistance, int delayms) // ���� <-
	{
		for (int i = 0;i < moveDistance;i++)
		{
			int currentX = x - i;
			
			if (currentX < 0) // �ֿܼ��� x 0���� ������ ���ܰ� �߻��Ѵ�.
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

