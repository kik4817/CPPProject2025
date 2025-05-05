#include "DataHandler.h"

int DataHandler::LoadItems(const std::string& filename, Item items[])
{
    std::ifstream file(filename);
    
    // ���� üũ
    if (!file.is_open()) // ������ ������ �ʾҴٸ�
    {
        std::cerr << "������ ���� �� �߽��ϴ�." << filename << std::endl;
        return 0;
    }

    // ������ �ҷ����� �ڵ�
    int itemCount = 0;
    std::string line;
    // item �׸��� �о�;��Ѵ�.
    while (std::getline(file, line) && itemCount < max_ITEMS)
    {
        std::istringstream iss(line);
        int index;
        std::string name;
        int price;

        // ������ �߰�
        int typeCount;
        int amount;
        
        // ������ �Ľ�
        if (iss >> index >> name >> price >> typeCount >> amount)
        {
            //items[itemCount] = Item(index, name, price);
            //itemCount++;
            //items[itemCount++] = Item(index, name, price);
            ItemDataType newType(typeCount, amount);
            items[itemCount++] = Item(index, name, price, newType);
        }
        else
        {
            std::cerr << "��ȿ���� ���� �����Ͱ� �����մϴ�." << line << std::endl;
        }
    }

    file.close();
    return itemCount;
}
