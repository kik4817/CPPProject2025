#include "Unit.h"

void Marin::Move()
{
	if (!isUpgrade || isUseable)
		cout << "������ ���� �̵��ӵ� ��ū" << "������ �����Դϴ�." << endl;

	// ���࿡ ������ ���׷��̵� �Ϸ�ǰ�, �������� ����Ѵٸ�
	else(isUseable && isUpgrade)
		cout << "������ ������ �̵���ŭ �����Դϴ�." << endl;
}
