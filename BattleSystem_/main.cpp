/*
* 작성일 : 2025-04-17
* 작성자 : 김인국
* 주 제 : 전투 시스템 객체 구현
*/

/*
* Common.h 헤더 파일을 만들어서 공통된 라이브러리를 추가해주세요
* GoToxy();
* 
* Player
* Enemy, Monster, Slime
* 
* Game, Stage, Monster(Manager)
*/

/*
* 전투 (Battle)
* 대상 : Player, Enemy
* 체력, 공격력, 방어력
* 사망하다.( 체력이 0보다 작거나 같을 때)
* (체력을 조작하는 기능)
* 공격을 받았다, 포션을 먹는다.
*/

#include "Enemy.h"

int main()
{
	Enemy slime(100, 10, 1, "슬라임", SlimeMove); // 몬스터 객체를 생성
	
	int slimeX = 30;
	int slimeY = 5;

	_getch(); // 키보드의 아무 버튼을 누르면 다음으로 진행된다.

	/*
	* 적군이 어떤 조건일 때 SlimeIdle 이어야 하는가?
	* 적군이 어떤 조건일 때 Move인가?
	* 적군이 어떤 조건일 때 Battle인가?
	*/

	while (true)
	{		
		slime.SetBattleImage(SlimeIdle, slimeX, slimeY);
		Sleep(500);
		system("cls");
		slime.SetBattleImage(SlimeMove, slimeX, slimeY);
		Sleep(500);
		system("cls");
	}
}