#include "Unit.h"

void Marin::Move()
{
	if (!isUpgrade || isUseable)
		cout << "유닛이 가진 이동속도 만큰" << "유닛이 움직입니다." << endl;

	// 만약에 스팀팩 업그레이드 완료되고, 스팀팩을 사용한다면
	else(isUseable && isUpgrade)
		cout << "유닛이 증가한 이동만큼 움직입니다." << endl;
}
