// 스타크래프트
// User 종족을 선택 : 테란, 저그, 프로토스
// 배럭(마린, 파이어벳, 메딕, 고스트)
// 생선 건물 : 배럭, 팩토리, 스타퐅, 커멘드센터
// 배럭. Spawn(BarrackUnit);

#include "Unit.h"
#include "RandomUtil.h"

int main()
{
	BarrackUnit* unitptr = new Marin();

	unitptr->Move();

	int random = RandomUtil::GetRandomInt(100);

	if (random > 70) // 30% 확률
	{
		cout << "성공했다." << endl;
	}
	else
	{
		cout << "실패했다." << endl;
	}
	int rand = RandomUtil::GetRandomInt(5);
}