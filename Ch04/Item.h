#pragma once

#include "Game.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

enum ItemType
{
	ARMOR,
	WEAPON,
	USEABLE
};

struct Item
{
	string name;
	int price;
	int itemCount;
	ItemType type;

	// ������ - ����ü�� �̸��� �����ؾ� �Ѵ� + ()
	// ��� �̴ϼȶ�����(member initialize)
	Item(string name, int price, int itemCount, ItemType type)
		: name(name), price(price), itemCount(itemCount), type(type)
	{}

	void ShowItemInfo();	

	// ���ڿ��� ��ȯ
	string ReturnByTypeName();	
};