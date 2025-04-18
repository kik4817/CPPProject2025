/*
* �ۼ��� : 2025-04-17 ~ 18
* �ۼ��� : ���α�
* �� ��(17��) : ���� �ý��� ��ü ����
* �� ��(18��) : ��Ʋ �ý����� ���� �Ŵ��� ��ü ����
*/

/*
* Common.h ��� ������ ���� ����� ���̺귯���� �߰����ּ���
* GoToxy();
* 
* Player
* Enemy, Monster, Slime
* 
* Game, Stage, Monster(Manager)
*/

/*
* ���� (Battle)
* ��� : Player, Enemy
* ü��, ���ݷ�, ����
* ����ϴ�.( ü���� 0���� �۰ų� ���� ��)
* (ü���� �����ϴ� ���)
* ������ �޾Ҵ�, ������ �Դ´�.
*/

#include "GameManager.h"

int main()
{
	Enemy slime(20, 10, 1, "������", SlimeMove, IDLE);   // ���� ��ü�� ����
	Player player(20, 10, 1, "���谡", PlayerIdle, IDLE); // �÷��̾� ��ü ����
	GameManager Game(slime, player);

	//int slimeX = 30;
	//int slimeY = 5;

	//_getch(); // Ű������ �ƹ� ��ư�� ������ �������� ����ȴ�.

	/*
	* ������ � ������ �� SlimeIdle �̾�� �ϴ°�?
	* ������ � ������ �� Move�ΰ�?
	* ������ � ������ �� Battle�ΰ�?
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