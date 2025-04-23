#pragma once

#include "Common.h"

// å
// Spell Book, Story Book, Quest Book

// ��� å���� �ؾ� �ϴ� ���?
// ���� �� �ִ°�? �д´�.

/*
* ����� 3���� ���
* public, protected, private ���
* 
* 1. public ����� �ϸ� �ȴ�.
* 2. protected, private �����ΰ�?
* 3. public? private? protected? ���� ����
*/

class BookMark
{
	int page;

public:
	void ShowPage();
};


// ������ ������ �ִ� �ڵ��Դϴ�.
// å�� �ݵ�� BookMark�� ������ �ִ� �����Դϴ�.
// �ʿ� ���� �ڵ尡 �߰��ȴ�. 

// Is-A ���� Has-A����
// (B)Is-A  : B�� A�̴�.(����)
// (B)Has-A : B�� A�� ���� �ִ�.

class Book // (public)å�� å�����̴�. -> å�� å���Ǹ� ���� �ִ�.
{

private:
	BookMark* bookMark; // BookMark* bookMark = NULL;

public:
	void Read();

};

class SpellBook : public Book // SpellBook�� Book�Դϴ�.
{
	
};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};