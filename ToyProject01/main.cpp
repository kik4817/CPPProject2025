/*
* ��ǥ : cpp ���� ȭ�� �����ϱ�
* ���� : Windows.h GotoXY() �籸��
* ����� : cpp ������� ������ϱ�
* �̷� : namespace �����غ���
*/

/*
* �̸������� ����� ���� ����
* 1. �ٸ� �� ������Ʈ�� copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �� �� �ִ�.
* 2. �̸������� ������ �̸��� ���ؼ� �ڵ带 �з��� �� �ִ�.
*/

/*
* ��ǥ : �÷��̾��� �̵��� �����ڸ� ����Ͽ� �Լ�ȭ �غ���
*/

#include <iostream>
#include <Windows.h> // Ŀ���� ��ġ�� �ű�� �Լ� SetCoursorPosition
#include <conio.h>
namespace ConsoleUtils
{ 
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void InputPlayerKey(int& x, int& y)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_LEFT)) // Ű���� '<-' ��������
			{
				x--;
				if (x < 0)
				{
					x = 0;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
				if (x > 30)
				{
					x = 30;
				}
			}
			if (GetAsyncKeyState(VK_UP))
			{
				y--;
				if (y < 0)
				{
					y = 0;
				}
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				y++;
				if (y > 30)
				{
					y = 30;
				}
			}
		}
	}
}

int main()
{
	// ���� 1. 10,10 ��ǥ�� �÷��̾��� ������ �ؽ�Ʈ�� ����غ�����.
	std::cout << "���� 1" << std::endl;
	ConsoleUtils::GoToXY(1, 1);
	std::cout << "�÷��̾��� ����" << std::endl;

	// ���� 2. �÷��̾��� �̸��� �Է¹޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ �� �� �Ʒ��� ����ϱ�
	// �Է� ���� ������ �޾Ƽ� 1�� ������ �÷��̾� �̸� �߰��ϱ�
	// 2�� ������ ȭ�鿡 �÷��̾� ������ ����ϱ�

	std::cout << "\n���� 2" << std::endl;

	char name[10];
	
	while (true)
	{
		int inputNumber = 0;

		std::cout << "1. ������� �̸��� ������ �� �ֽ��ϴ�.\n2. �÷��̾��� ������ ȭ�鿡 ����մϴ�." << std::endl;
		std::cin >> inputNumber; // �ּ� �����ڸ� �����ص� ��밡��(���������δ� ó���ϰ�����)
		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ��� : ";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10,10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtils::GoToXY(10,11);
			std::cout << "�÷��̾��� �̸� :"<<name;			
			_getch();
		}
		else
		{
			break;
		}
		system("cls");
	}
	
	int x = 0, y = 0;

	while (true) // �÷��̾��� �̵� ����
	{
		system("cls");
		ConsoleUtils::InputPlayerKey(x, y);
		std::cout << "�÷��̾��� ��ǥ : " << "[" << x << "," << y << "]" << std::endl;
		ConsoleUtils::GoToXY(x, y);
		std::cout << "��";
	}
}