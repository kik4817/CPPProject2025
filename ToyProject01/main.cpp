/*
* 목표 : cpp 게임 화면 구성하기
* 복습 : Windows.h GotoXY() 재구현
* 입출력 : cpp 방식으로 입출력하기
* 이론 : namespace 응용해보기
*/

/*
* 이름공간을 사용할 때의 장점
* 1. 다른 두 프로젝트를 copy paste 합칠 때 발생하는 문제를 최소화 할 수 있다.
* 2. 이름공간에 쓰여진 이름을 통해서 코드를 분류할 수 있다.
*/

#include <iostream>
#include <Windows.h> // 커서의 위치를 옮기는 함수 SetCoursorPosition
#include <conio.h>
namespace ConsoleUtils
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

int main()
{
	// 예제 1. 10,10 좌표에 플레이어의 정보를 텍스트를 출력해보세요.
	std::cout << "예제 1" << std::endl;
	ConsoleUtils::GoToXY(1, 1);
	std::cout << "플레이어의 정보" << std::endl;

	// 예제 2. 플레이어의 이름을 입력받아서 플레이어의 정보 텍스트 한 줄 아래에 출력하기
	// 입력 값을 정수로 받아서 1을 받으면 플레이어 이름 추가하기
	// 2를 받으면 화면에 플레이어 정보를 출력하기

	std::cout << "\n예제 2" << std::endl;

	char name[10];
	
	while (true)
	{
		int inputNumber = 0;

		std::cout << "1. 사용자의 이름을 변경할 수 있습니다.\n2. 플레이어의 정보를 화면에 출력합니다." << std::endl;
		std::cin >> inputNumber; // 주소 연산자를 사용안해도 사용가능(내부적으로는 처리하고있음)
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세요 : ";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10,10);
			std::cout << "플레이어의 정보";
			ConsoleUtils::GoToXY(10,11);
			std::cout << "플레이어의 이름 :"<<name;
			_getch();
		}
		else
		{
			
		}
		system("cls");
	}

}