/*
* �ۼ��� : 2025-04-28
* �ۼ��� : ���α�
* �� �� : �޸��� ����
*/

#include "Base.h"
#include "Utility.h"
//#include "Runner.h"
#include "GameManager.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Derived* derived = new Derived();
	derived->Do();
	delete derived;
}

/*
* �޸��� ����
* ---------------
* 1
* 2
* 3
* 4
* ---------------
*/

int main()
{

	/*ClassDefaultInfo();
	Sleep(500);
	system("cls");*/
		
	GameManager game;
	game.Play();
	
	//cout << "�޸��� ���� �ڵ�" << endl; // Game Title
		
	//int runA = 0; // 1�� ������ ���� �̵� �Ÿ�
	//int runB = 0;
	//int runC = 0;
	//int runD = 0;

	/*runA += RandomUtil::GetRandomInt(5);
		runB += RandomUtil::GetRandomInt(5);
		runC += RandomUtil::GetRandomInt(5);
		runD += RandomUtil::GetRandomInt(5);*/

	//bool endA = false;
	//bool endB = false;
	//bool endC = false;
	//bool endD = false;
	
		/*cout << line << endl;
		for (int i = 0; i < runA; i++)
		{
			cout << " ";
		}
		cout << "1" << endl;
		for (int i = 0; i < runB; i++)
		{
			cout << " ";
		}
		cout << "2" << endl;
		for (int i = 0; i < runC; i++)
		{
			cout << " ";
		}
		cout << "3" << endl;
		for (int i = 0; i < runD; i++)
		{
			cout << " ";
		}
		cout << "4" << endl;
		cout << line << endl;

		if (runA >= endline)
		{
			endA = true;
		}
		if (runB >= endline)
		{
			endB = true;
		}
		if (runC >= endline)
		{
			endC = true;
		}
		if (runD >= endline)
		{
			endD = true;
		}

		if (endA || endB || endC || endD)
		{
			cout << "��� ����" << endl;
			break;
		}*/
	}

	/*if (endA)
	{
		cout << "A�� 1���� �߽��ϴ�." << endl;
	}
	if (endB)
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}
	if (endC)
	{
		cout << "C�� 1���� �߽��ϴ�." << endl;
	}
	if (endD)
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}*/	
//}