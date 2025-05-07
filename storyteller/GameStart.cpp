#include "GameStart.h"

void GameStart()
{
	ImageModel model;
	Actor actor;
	Image fish(model.fishArt, 5);
	Image lobster(model.lobsterArt, 15);

	Console::GoToXY(0, 20);
	fish.show(1, 0);
	actor.Tell("나레이션", "물고기의 일상.");
	actor.Tell("나레이션", "미끼가 있습니다.");
	bool b1 = actor.Selection("나레이션", "수영을한다.", "미끼를 먹는다.");
	if (b1)
	{
		cout << "미끼의 유혹을 참고 다시 수영을 하고 있습니다." << endl;
		cout << "잠시후 멀리서 수상한 그림자가 보입니다." << endl;

		bool b2 = actor.Selection("나레이션", "그림자에 가까이 다가간다.", "그림자를 피한다.");
		if (b2)
		{
			system("cls");
			cout << "그림자에 가까이 다가가니 랍스터를 발견했습니다." << endl;
			lobster.show(0, 0);
			bool b4 = actor.Selection("나레이션", "말을 건다.", "지나친다.");
			if (b4)
			{				
				actor.Tell("물고기", "안녕하세요.");
				actor.Tell("랍스터", "안녕하세요. 여기 앞에 그물이 있으니 조심하세요");
				actor.Tell("물고기", "감사합니다.");
				actor.Tell("나레이션", "랍스터의 도움으로 물고기는 그물을 피하게되었습니다.");
				cout << "GOOD ENDING" << endl;				
			}
			else
			{
				cout << "그물에 걸려 Bad Ending" << endl;
			}
		}
		else
		{
			cout << "그림자를 피한하였지만 그물에 걸리게 되었습니다." << endl;
			bool b3 = actor.Selection("나레이션", "그물을 물어 뜯는다.", "포기한다.");
			if (b3)
			{
				cout << "그물을 힘차게 물어 띁었지만 물고기의 힘으로는 그물을 뜯을수가 없었습니다.\nBad Endling" << endl;
			}
			else
			{
				cout << "Bad Ending" << endl;
			}
		}
	}
	else
	{
		cout << "미끼를 먹은 물고기는 사람에게 잡혔습니다.\nBad Ending" << endl;
	}	
}
