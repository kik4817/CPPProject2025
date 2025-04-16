/*
* 작성일 : 2025-04-15
* 작성자 : 김인국
* 주 제 : 객체 지향 프로그래밍
*/

/*
* 1. namespace 사용법 및 주의사항
* 2. cpp 구조체의 변경사항 (객체를 표현하는 문법이 추가되었다.
* 3. class 키워드
*/

// namespace = std::cout, std::cin, std::endl
// 표준 라이브러리 standard = std

//using namespace std; // 해당 소스파일 내부의 모든 코드를 
                     //namespace std안에 잇는것으로 판단해라
// std::cout = cout

// 주의해야할 사항.
// std안에 있던 이름과 같은 타입의 데이터를 생성하면 모호하다는 에러가 발생한다.

//void cout()
//{
//	
//}

// 권장하는 사용 방법

#include "Game.h"
#include "Item.h"
#include "Player.h"

void NameSpaceExample()
{
	int number = 0;
	cin >> number;
	cout << "number의 값 : " << number << endl;
}

// 데이터를 선언
// 함수를 선언

// 구조체 안에 함수를 실행하게끔 한다.

int main()
{
	//std::cout << "Ch04 : 객체 지향 프로그래밍" << std::endl;
	cout << "Ch04 : 객체 지향 프로그래밍" << endl;
	
	//NameSpaceExample();

	Item item1 = { "Sword", 100, 1, ARMOR};
	// 타입 item1 이름 = { 이름, 가격, 수, 타입 }

	Item item2("Potion", 50, 1, USEABLE);

	item1.ShowItemInfo();
	item2.ShowItemInfo();

	Player player1 = { "AAA", HUMAN, 3,4};
	player1.ShowPlayerInfo();
}