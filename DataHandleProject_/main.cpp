/*
* �ۼ��� : 2025-05-02
* �ۼ��� : ���α�
* �� �� : �޸����� �̿��Ͽ� ���̺� �ε�
*/

/*
* ��ǥ : �޸��忡 �ִ� ���� �����͸� �ڵ�� �д� ����� �����Ѵ�.
*/

#include "ShopManager.h"

int main()
{
	//DataHandler loader;
	//Item items[max_ITEMS];
	////loader.LoadItems("data.txt", items);
	//int count = loader.LoadItems("data.txt", items);

	//// items ������ ������
	//std::cout << "�Ǹ��ϴ� ������" << std::endl;
	//for (int i = 0;i < count;i++)
	//{
	//	std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin" << std::endl;
	//}

	Shop shop;
	//Shop shop2("shop1.txt");

	shop.ShowItems();
	//std::cout << "2��° ����" << std::endl;
	//shop2.ShowItems();

	Player player;
	player.Upgrade(shop.GetItems(3));
	player.ShowPlayerInfo();

	// items �����͸� �о����
}