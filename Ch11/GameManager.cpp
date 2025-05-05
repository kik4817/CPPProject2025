#include "GameManager.h"

void GameManager::ShowTitle()
{
	// Ÿ��Ʋ ���� �����ִ� �ڵ� ����
	ConsoleUtil::GotoXY(30, 0);
	cout << "�޸��� ����" << endl;
	//SoundUtil::PlayTitleSound(_T("sound.wav")); // ���� ����� ư�� �� ���� ���� �ڵ�� �Ѿ�� �ʴ´�
}

void GameManager::ShopPhase()
{
	// �÷��̾��� ��ȭ �ý��� �ʿ�
	system("cls");
	cout << "������ �����߽��ϴ�." << endl;

	int input = 0;
	cout << "�ൿ�� �������ּ���." << endl;
	cout << "1. minSpeed�� 1��ŭ �����մϴ�." << endl;
	cout << "2. maxSpeed�� 1��ŭ �����մϴ�." << endl;
	cout << "3. ������ �����մϴ�." << endl;

	cin >> input;
	if (input == 1)
	{
		player->Upgrade(PlayerStat::MINSPEED, 1);
	}
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MAXSPEED, 1);		
	}
	else if (input == 3)
	{
		cout << "������ �����մϴ�." << endl;
	}	
}

void GameManager::GamePhase()
{
	// ���带 ������ִ� ����� �ۼ�
	//SoundUtil::PlayBGM(_T("sound.wav"));

	//Player* runA = new Player("A");
	Runner* runB = new Enemy("B");
	Runner* runC = new Runner();
	Runner* runD = new Runner("D");

	string line = "========================";
	int endline = line.length();

	player->Initialize();
	runB->Initialize();
	runC->Initialize();
	runD->Initialize();

	Sleep(1000);

	while (true)
	{
		Sleep(1000); // 1�� ���� ������ ������Ʈ
		system("cls"); // ȭ���� �����		
					
		cout << line << endl;
		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;

		player->ShowPlayerInfo();

		if (player->CheckEndLine(endline) || runB->CheckEndLine(endline) || runC->CheckEndLine(endline) || runD->CheckEndLine(endline))
		{
			cout << "��� ����" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "A�� 1���� �߽��ϴ�." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C�� 1���� �߽��ϴ�." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}

	cout << "���� ����� �����ϱ� ���ؼ� �ƹ�Ű�� �Է����ּ���." << endl;
	_getch();
}

void GameManager::Play()
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();
	}
}
