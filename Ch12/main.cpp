/*
* 작성일 : 2025-04-29
* 작성자 : 김인국
* 주 제 : 사운드 파일 추가
*/

#include "SoundUtil.h"

// Winmm.lib : Window Muliti Media Library

int main()
{
	cout << "배경음악을 넣는 방법" << endl;

	// visual studio Audio file 출력하는 방법
	// Windows.h PlaySound함수 사용하기
	
	// SND_SYNC  : 사운드 파일이 전부 실행되고 난 후에 아래 코드를 실행한다.
	// SND_ASYNC : 아래 코드와 별개로 파일이 실행된다. while 또는 for가 필요

	//bool isPlay = PlaySound(_T("sound.wav"), NULL, SND_ASYNC); // 소리가 출력 "true"
	
	SoundUtil::PlayBGM(_T("sound.wav"));

	cout << "소리 출력" << endl;
	
	while (true)
	{

	}
}