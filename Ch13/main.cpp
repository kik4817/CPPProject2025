/*
* �ۼ��� : 2025-05-06
* �ۼ��� : ���α�
* �� �� : ���丮 �����
*/

// ���丮 ���� ���� ���
// �ܼ� ��ƿ��Ƽ �Լ�
// Image Ŭ����
// ImageModel ��ü ����ü
// Actor - Tell(), Selection()

/*
* ���� �ι�
* ���� ���
* "���"
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
	//system("cls"); ȭ���� ����� �ٽ� �׸��� ������ UI���� â�� �ٽ� �־�����Ѵ�.
	//bat.show(1, 4);
	//Sleep(1000);	
	//bat.show(3, 4);
	//Sleep(1000);
	Console::GoToXY(20, 20);	
	actor.Tell("�����̼�", "���� �Ծ���");
	bat.move(3, 10, 10, 500);
					
	actor.Tell("�����̼�", "���鿡 ȣ���̰� ��Ÿ�����ϴ�.");
	actor.Tell("�����̼�", "����� � ������ �ؾ��ϳ���?");
	bool b1 = actor.Selection("�����̼�", "����Ĩ�ϴ�.", "�¼��ο�ϴ�.");
	if (b1)
	{
		cout << "���㰡 �����ļ� �� ���� ���丮 ����";
		//bool b2 = actor.Selection("����", "����Ĩ�ϴ�.", "�¼��ο�ϴ�.");
		//if(b2)
	}
	else
	{
		cout << "Bad Ending" << endl;
	}
	//bat.moveReverse(10, 10, 15, 500);

	while (true);
}