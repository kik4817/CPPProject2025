/*
* �ۼ��� : 2025-04-25
* �ۼ��� : ���α�
* �� �� : �������� ����� ��ü ���α׷��� ����
*/

/*
* ��ǥ : Ŭ���� ���� ���踦 ���� �� �� ��� �ڵ��� �ұ�?
* ����� �̿��� ��ü�� �ý��� ����
*/

/*
* ��ȭ �ý��� - ��Ӱ� �Բ� �����Ѵ�.
* lv * (baseATK + weight) = �������ݷ�;
*/

#include "Common.h"
#include "Weapon.h"
#include "UpgradeSystem.h"

int main()
{
	/*string name = "�ռҵ�";
	int lv = 1;
	int baseAtk = 5;
	int weight = 3;

	int finalAtk = lv * (baseAtk + weight);
	cout << name << " ���� ���ݷ� : " << finalAtk << endl;

	string name2 = "���ҵ�";
	int lv2 = 1;
	int baseAtk2 = 4;
	int weight2 = 7;

	int finalAtk2 = lv2 * (baseAtk2 + weight2);
	cout << name << " ���� ���ݷ� : " << finalAtk2 << endl;*/

	Weapon weapon("�ռҵ�", 1, 3, 5);
	weapon.Showinfo();
	weapon.Attack();
	
	Weapon weapon2("���ҵ�", 1, 4, 7);
	weapon2.Showinfo();	
	weapon2.Attack();

	Spear â("â", 1, 3, 5, 2);
	Sword Į("Į", 1, 4, 7);
	Arrow Ȱ("Ȱ", 1, 6, 6);
	â.Attack();
	Į.Attack();	

	// ������
	// ���� ����ε� �ٸ��� ǥ���� �� �ִ�.

	Weapon* wptr = &â;
	wptr->Attack();
	Weapon* wptr2 = &Į;
	wptr2->Attack();
	

	UpgradeSystem upgradeSystem;

	upgradeSystem.Upgrade(&â);
	upgradeSystem.Upgrade(&Į);
	upgradeSystem.Upgrade(&Ȱ);
}