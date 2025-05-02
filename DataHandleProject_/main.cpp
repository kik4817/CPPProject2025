/*
* 작성일 : 2025-05-02
* 작성자 : 김인국
* 주 제 : 메모장을 이용하여 세이브 로드
*/

/*
* 목표 : 메모장에 있는 게임 데이터를 코드로 읽는 방법을 구현한다.
*/

#include "ShopManager.h"

int main()
{
	//DataHandler loader;
	//Item items[max_ITEMS];
	////loader.LoadItems("data.txt", items);
	//int count = loader.LoadItems("data.txt", items);

	//// items 정보를 보여줘
	//std::cout << "판매하는 아이템" << std::endl;
	//for (int i = 0;i < count;i++)
	//{
	//	std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin" << std::endl;
	//}

	Shop shop;
	//Shop shop2("shop1.txt");

	shop.ShowItems();
	//std::cout << "2번째 상점" << std::endl;
	//shop2.ShowItems();

	Player player;
	player.Upgrade(shop.GetItems(3));
	player.ShowPlayerInfo();

	// items 데이터를 읽어와줘
}