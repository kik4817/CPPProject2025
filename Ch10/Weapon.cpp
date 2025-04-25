#include "Weapon.h"

int Weapon::DoUpgrade()
{
	return lv = (baseAtk + weight);
}

void Weapon::Showinfo()
{
	cout << name << " 최종 공격력 : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
	cout << DoUpgrade(); //<< " 만큼 공격을 합니다." << endl;
}

void Weapon::Upgrade()
{
	DoUpgrade();
}

void Spear::Attack() 
{
	//cout << DoUpgrade() << " 만큼 공격을 합니다." << endl;
	Weapon::Attack();
	cout << " 창으로 찌릅니다." << endl;
}

void Spear::Upgrade()
{
	// 창마다 고유의 공겨격 만큼 추가로 공격력이 오릅니다.
	finalAtk = DoUpgrade() + specialAtk;
	cout << finalAtk << " 창 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}

void Sword::Attack()
{
	Weapon::Attack();
	cout << " 검으로 휘두릅니다." << endl;
}

void Sword::Upgrade()
{
	// 10의 공격력이 추가로 상승합니다.
	finalAtk = DoUpgrade() + 10;
	cout << finalAtk << " 칼 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}

void Arrow::Attack()
{
	Weapon::Attack();
	cout << " 활로 휘두릅니다." << endl;
}

void Arrow::Upgrade()
{
	finalAtk = DoUpgrade() + 10;
	cout << finalAtk << " 활 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}
