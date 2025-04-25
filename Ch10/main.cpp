/*
* 작성일 : 2025-04-25
* 작성자 : 김인국
* 주 제 : 다형성을 사용한 객체 프로그래밍 구현
*/

/*
* 목표 : 클레스 간의 관계를 정의 이 후 어떻게 코딩을 할까?
* 상속을 이용한 객체로 시스템 구현
*/

/*
* 강화 시스템 - 상속과 함께 구현한다.
* lv * (baseATK + weight) = 최종공격력;
*/

#include "Common.h"
#include "Weapon.h"
#include "UpgradeSystem.h"

int main()
{
	/*string name = "롱소드";
	int lv = 1;
	int baseAtk = 5;
	int weight = 3;

	int finalAtk = lv * (baseAtk + weight);
	cout << name << " 최종 공격력 : " << finalAtk << endl;

	string name2 = "숏소드";
	int lv2 = 1;
	int baseAtk2 = 4;
	int weight2 = 7;

	int finalAtk2 = lv2 * (baseAtk2 + weight2);
	cout << name << " 최종 공격력 : " << finalAtk2 << endl;*/

	Weapon weapon("롱소드", 1, 3, 5);
	weapon.Showinfo();
	weapon.Attack();
	
	Weapon weapon2("숏소드", 1, 4, 7);
	weapon2.Showinfo();	
	weapon2.Attack();

	Spear 창("창", 1, 3, 5, 2);
	Sword 칼("칼", 1, 4, 7);
	Arrow 활("활", 1, 6, 6);
	창.Attack();
	칼.Attack();	

	// 다형성
	// 같은 모습인데 다르게 표현할 수 있다.

	Weapon* wptr = &창;
	wptr->Attack();
	Weapon* wptr2 = &칼;
	wptr2->Attack();
	

	UpgradeSystem upgradeSystem;

	upgradeSystem.Upgrade(&창);
	upgradeSystem.Upgrade(&칼);
	upgradeSystem.Upgrade(&활);
}