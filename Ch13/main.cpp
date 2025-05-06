/*
* 작성일 : 2025-05-06
* 작성자 : 김인국
* 주 제 : 스토리 만들기
*/

// 스토리 게임 구성 요소
// 콘솔 유틸리티 함수
// Image 클래스
// ImageModel 객체 구조체
// Actor - Tell(), Selection()

/*
* 등장 인물
* 등장 배경
* "사건"
*/

#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

int main()
{	
	ImageModel model;
	Actor actor;
	Console::CursorVisible(false);
	
	Image bat(model.batArt, 8);
	//system("cls"); 화면을 지우고 다시 그리기 때문에 UI같은 창은 다시 넣어줘야한다.
	//bat.show(1, 4);
	//Sleep(1000);	
	//bat.show(3, 4);
	//Sleep(1000);
	Console::GoToXY(20, 20);	
	actor.Tell("나레이션", "밥을 먹었다");
	bat.move(3, 10, 10, 500);
					
	actor.Tell("나레이션", "정면에 호랑이가 나타났습니다.");
	actor.Tell("나레이션", "박쥐는 어떤 선택을 해야하나요?");
	bool b1 = actor.Selection("나레이션", "도망칩니다.", "맞서싸웁니다.");
	if (b1)
	{
		cout << "박쥐가 도망쳐서 이 후의 스토리 진행";
		//bool b2 = actor.Selection("박쥐", "도망칩니다.", "맞서싸웁니다.");
		//if(b2)
	}
	else
	{
		cout << "Bad Ending" << endl;
	}
	//bat.moveReverse(10, 10, 15, 500);

	while (true);
}