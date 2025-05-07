#include "GameStart.h"

void GameStart()
{
	ImageModel model;
	Actor actor;
	Image fish(model.fishArt, 5);
	Image lobster(model.lobsterArt, 15);

	Console::GoToXY(0, 20);
	fish.show(1, 0);
	actor.Tell("�����̼�", "������� �ϻ�.");
	actor.Tell("�����̼�", "�̳��� �ֽ��ϴ�.");
	bool b1 = actor.Selection("�����̼�", "�������Ѵ�.", "�̳��� �Դ´�.");
	if (b1)
	{
		cout << "�̳��� ��Ȥ�� ���� �ٽ� ������ �ϰ� �ֽ��ϴ�." << endl;
		cout << "����� �ָ��� ������ �׸��ڰ� ���Դϴ�." << endl;

		bool b2 = actor.Selection("�����̼�", "�׸��ڿ� ������ �ٰ�����.", "�׸��ڸ� ���Ѵ�.");
		if (b2)
		{
			system("cls");
			cout << "�׸��ڿ� ������ �ٰ����� �����͸� �߰��߽��ϴ�." << endl;
			lobster.show(0, 0);
			bool b4 = actor.Selection("�����̼�", "���� �Ǵ�.", "����ģ��.");
			if (b4)
			{				
				actor.Tell("�����", "�ȳ��ϼ���.");
				actor.Tell("������", "�ȳ��ϼ���. ���� �տ� �׹��� ������ �����ϼ���");
				actor.Tell("�����", "�����մϴ�.");
				actor.Tell("�����̼�", "�������� �������� ������ �׹��� ���ϰԵǾ����ϴ�.");
				cout << "GOOD ENDING" << endl;				
			}
			else
			{
				cout << "�׹��� �ɷ� Bad Ending" << endl;
			}
		}
		else
		{
			cout << "�׸��ڸ� �����Ͽ����� �׹��� �ɸ��� �Ǿ����ϴ�." << endl;
			bool b3 = actor.Selection("�����̼�", "�׹��� ���� ��´�.", "�����Ѵ�.");
			if (b3)
			{
				cout << "�׹��� ������ ���� �������� ������� �����δ� �׹��� �������� �������ϴ�.\nBad Endling" << endl;
			}
			else
			{
				cout << "Bad Ending" << endl;
			}
		}
	}
	else
	{
		cout << "�̳��� ���� ������ ������� �������ϴ�.\nBad Ending" << endl;
	}	
}
