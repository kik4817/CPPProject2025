/*
* �ۼ��� : 2025-04-28
* �ۼ��� : ���α�
* �� �� : �޸��� ����
*/

#include "Base.h"
#include "Utility.h"
#include "Runner.h"

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
	ClassDefaultInfo();
	Sleep(500);
	system("cls");

	cout << "�޸��� ���� �ڵ�" << endl; // Game Title

	Runner* runA = new Player("O");
	Runner* runB = new Runner("B");
	Runner* runC = new Runner();
	Runner* runD = new Runner("D");

	//int runA = 0; // 1�� ������ ���� �̵� �Ÿ�
	//int runB = 0;
	//int runC = 0;
	//int runD = 0;

	//bool endA = false;
	//bool endB = false;
	//bool endC = false;
	//bool endD = false;

	string line = "========================";
	int endline = line.length();

	while (true)
	{
		Sleep(1000); // 1�� ���� ������ ������Ʈ
		system("cls"); // ȭ���� �����

		/*runA += RandomUtil::GetRandomInt(5);
		runB += RandomUtil::GetRandomInt(5);
		runC += RandomUtil::GetRandomInt(5);
		runD += RandomUtil::GetRandomInt(5);*/

		cout << line << endl;
		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;

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

		if (runA->CheckEndLine(endline) || runB->CheckEndLine(endline) || runC->CheckEndLine(endline) || runD->CheckEndLine(endline))
		{
			cout << "��� ����" << endl;
			break;
		}

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

	if(runA->CheckEndLine(endline))
	{
		cout << "A�� 1���� �߽��ϴ�." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C�� 1���� �߽��ϴ�." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}
}