#include "Weapon.h"

int Weapon::DoUpgrade()
{
	return lv = (baseAtk + weight);
}

void Weapon::Showinfo()
{
	cout << name << " ���� ���ݷ� : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
	cout << DoUpgrade(); //<< " ��ŭ ������ �մϴ�." << endl;
}

void Weapon::Upgrade()
{
	DoUpgrade();
}

void Spear::Attack() 
{
	//cout << DoUpgrade() << " ��ŭ ������ �մϴ�." << endl;
	Weapon::Attack();
	cout << " â���� ��ϴ�." << endl;
}

void Spear::Upgrade()
{
	// â���� ������ ���ܰ� ��ŭ �߰��� ���ݷ��� �����ϴ�.
	finalAtk = DoUpgrade() + specialAtk;
	cout << finalAtk << " â ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}

void Sword::Attack()
{
	Weapon::Attack();
	cout << " ������ �ֵθ��ϴ�." << endl;
}

void Sword::Upgrade()
{
	// 10�� ���ݷ��� �߰��� ����մϴ�.
	finalAtk = DoUpgrade() + 10;
	cout << finalAtk << " Į ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}

void Arrow::Attack()
{
	Weapon::Attack();
	cout << " Ȱ�� �ֵθ��ϴ�." << endl;
}

void Arrow::Upgrade()
{
	finalAtk = DoUpgrade() + 10;
	cout << finalAtk << " Ȱ ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}
