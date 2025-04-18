/*
* 작성일 : 2025-04-17 ~ 18
* 작성자 : 김인국
* 주 제(17일) : 전투 시스템 객체 구현
* 주 제(18일) : 배틀 시스템의 게임 매니저 객체 구현
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

#include "GameManager.h"

int main()
{
	Enemy slime(20, 10, 1, "슬라임", SlimeMove, IDLE);   // 몬스터 객체를 생성
	Player player(20, 10, 1, "모험가", PlayerIdle, IDLE); // 플레이어 객체 생성
	GameManager Game(slime, player);

	//int slimeX = 30;
	//int slimeY = 5;

	//_getch(); // 키보드의 아무 버튼을 누르면 다음으로 진행된다.

	/*
	* 적군이 어떤 조건일 때 SlimeIdle 이어야 하는가?
	* 적군이 어떤 조건일 때 Move인가?
	* 적군이 어떤 조건일 때 Battle인가?
	*/

	Game.GameLoop();

	//while (true)
	//{		
	//	//player.SetBattleImage(PlayerIdle);
	//	Game.player.SetBattleImage(PlayerIdle);
	//	Game.currentEnemy.SetBattleImage(SlimeIdle);
	//	Sleep(500);
	//	system("cls");
	//	//player.SetBattleImage(PlayerMove);
	//	Game.player.SetBattleImage(PlayerMove);
	//	Game.currentEnemy.SetBattleImage(SlimeMove);
	//	Sleep(500);
	//	system("cls");
	//}
}