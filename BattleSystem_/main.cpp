/*
* �ۼ��� : 2025-04-17
* �ۼ��� : ���α�
* �� �� : ���� �ý��� ��ü ����
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

#include "Enemy.h"

int main()
{
	Enemy slime(100, 10, 1, "������", SlimeMove); // ���� ��ü�� ����
	
	int slimeX = 30;
	int slimeY = 5;

	_getch(); // Ű������ �ƹ� ��ư�� ������ �������� ����ȴ�.

	/*
	* ������ � ������ �� SlimeIdle �̾�� �ϴ°�?
	* ������ � ������ �� Move�ΰ�?
	* ������ � ������ �� Battle�ΰ�?
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