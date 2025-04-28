/*
* 작성일 : 2025-04-28
* 작성자 : 김인국
* 주 제 : 달리기 게임
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
* 달리기 게임
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

	cout << "달리기 게임 코드" << endl; // Game Title

	Runner* runA = new Player("O");
	Runner* runB = new Runner("B");
	Runner* runC = new Runner();
	Runner* runD = new Runner("D");

	//int runA = 0; // 1번 주자의 현재 이동 거리
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
		Sleep(1000); // 1초 마다 게임을 업데이트
		system("cls"); // 화면을 지운다

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
			cout << "경기 종료" << endl;
			break;
		}*/

		if (runA->CheckEndLine(endline) || runB->CheckEndLine(endline) || runC->CheckEndLine(endline) || runD->CheckEndLine(endline))
		{
			cout << "경기 종료" << endl;
			break;
		}

	}

	/*if (endA)
	{
		cout << "A가 1등을 했습니다." << endl;
	}
	if (endB)
	{
		cout << "B가 1등을 했습니다." << endl;
	}
	if (endC)
	{
		cout << "C가 1등을 했습니다." << endl;
	}
	if (endD)
	{
		cout << "D가 1등을 했습니다." << endl;
	}*/

	if(runA->CheckEndLine(endline))
	{
		cout << "A가 1등을 했습니다." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B가 1등을 했습니다." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C가 1등을 했습니다." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D가 1등을 했습니다." << endl;
	}
}