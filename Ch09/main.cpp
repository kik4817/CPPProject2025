/*
* �ۼ��� : 2025-04-24
* �ۼ��� : ���α�
* �� �� : ��ü���� ���α׷��� ������
*/

/*
* ĸ��ȭ
* ��� - ����� �ڵ带 �ϳ��� ���� �� �ִ�.
* ����� ���� �ؾ� �ϴ°�? "IS-A", Has-A 
* 
* ����� ����ϸ� � ������ �ִ°�?
*/

/*
* std::cout << "���� �óʰ� �ߵ��Ǹ� ���� 50% �����մϴ�."
* ���ӽó���   - 
* �ó���(����) - 
*/

#include "Common.h"
#include "Monster.h"
#include "MonsterHandler.h"

int main()
{
	MonsterHandler monsterHandler;
	
	Monster slime2(1, 5);
	Slime slime(1, 5);
	Orc orc(2, 10);
	
	//slime2.Attack();
	//slime.Attack();

	monsterHandler.BattleWithPlayer(slime2);
	monsterHandler.BattleWithPlayer(slime);
	monsterHandler.BattleWithPlayer(orc);

	// ������ ���̽�
	// �����͸� ���� �����.
	// �����͸� �����Ѵ�. �迭�� ������ �Ѵ�.
	// �����͸� �˻��ϰ� ����Ѵ�.

	// Ž�� �˰���
}