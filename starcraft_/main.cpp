// ��Ÿũ����Ʈ
// User ������ ���� : �׶�, ����, �����佺
// �跰(����, ���̾, �޵�, ��Ʈ)
// ���� �ǹ� : �跰, ���丮, ��Ÿ�j, Ŀ��弾��
// �跰. Spawn(BarrackUnit);

#include "Unit.h"
#include "RandomUtil.h"

int main()
{
	BarrackUnit* unitptr = new Marin();

	unitptr->Move();

	int random = RandomUtil::GetRandomInt(100);

	if (random > 70) // 30% Ȯ��
	{
		cout << "�����ߴ�." << endl;
	}
	else
	{
		cout << "�����ߴ�." << endl;
	}
	int rand = RandomUtil::GetRandomInt(5);
}