/*
* �ۼ��� : 2025-04-23
* �ۼ��� : ���α�
* �� �� : ��ü �������α׷��� ��� ����, ������
*/

/*
* ���
* 1. ����� ������ �ϳ��� ���� ���
* 2. ���� ����� �ؾߵǴ°�?
*/

/*
* Unit�� �ൿ �ý��� ����
* 
* ������ �����Ѵ�.
* Unit.Attack();
* 1. ������ ����� : �Ȱ��� ���� �ڵ带 �����Ѵ�.
* 2. virtual Ű���带 ����ϸ� ���� �ڵ尡 ����ȴ�.
*/

/*
* Unit �ڵ带 �̿��ؼ�
* Attack, Stop, Hold, ... �������
* ����� ���Ѽ� Ư���� ������ �ϵ��� �մϴ�.
* ���� Ÿ���� �ڵ������� �ٸ� ����� �����ų �� �ִ�
*/

/*
* Monster.Attack();
* 
* Slime. �п��Ѵ�.
* Goblin. ��ȭ��� �����Ѵ�.
*/

#include "Common.h"
#include "Book.h"
#include "Monster.h"

int main()
{
	Book book;
	SpellBook spBook;
	StoryBook stBook;
	QuestBook qBook;

	book.Read();
	//book.ShowPage();
	spBook.Read();
	//spBook.ShowPage();
	stBook.Read();
	//stBook.ShowPage();
	qBook.Read();
	//qBook.ShowPage();

	Probe probe1(true);
	probe1.ReturnAttacker()->Attack();

	Attacker* tempAttacker;
	tempAttacker = probe1.ReturnAttacker();
	//tempAttacker->Attack();

	//Attacker tempAttacker;
	//tempAttacker = *(probe1.ReturnAttacker());
	//tempAttacker.Attack();

	Zealot zealot;
	Dragoon dragoon;

	cout << "������ ���� �ؽ�Ʈ ���\n\n";

	probe1.Attack();
	zealot.Attack();
	dragoon.Attack();

	cout << "Unit���� ǥ���ϱ�\n\n";

	Unit& SelectUnit = probe1; // ���� Ÿ������ �Ȱ��� ���·� ǥ���غ���
	Unit& SelectUnit2 = zealot;
	Unit& SelectUnit3 = dragoon;

	SelectUnit.Attack();
	SelectUnit.UseSkill();
	SelectUnit2.Attack();
	SelectUnit2.UseSkill();
	SelectUnit3.Attack();
	SelectUnit3.UseSkill();
}