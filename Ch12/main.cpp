/*
* �ۼ��� : 2025-04-29
* �ۼ��� : ���α�
* �� �� : ���� ���� �߰�
*/

#include "SoundUtil.h"

// Winmm.lib : Window Muliti Media Library

int main()
{
	cout << "��������� �ִ� ���" << endl;

	// visual studio Audio file ����ϴ� ���
	// Windows.h PlaySound�Լ� ����ϱ�
	
	// SND_SYNC  : ���� ������ ���� ����ǰ� �� �Ŀ� �Ʒ� �ڵ带 �����Ѵ�.
	// SND_ASYNC : �Ʒ� �ڵ�� ������ ������ ����ȴ�. while �Ǵ� for�� �ʿ�

	//bool isPlay = PlaySound(_T("sound.wav"), NULL, SND_ASYNC); // �Ҹ��� ��� "true"
	
	SoundUtil::PlayBGM(_T("sound.wav"));

	cout << "�Ҹ� ���" << endl;
	
	while (true)
	{

	}
}