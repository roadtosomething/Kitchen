#include "Stove.h"
#include <iostream>
#include <string>

Stove::Stove(int inventoryNum, std::string color) {
	Color = color;
	SetInventoryNumber(inventoryNum);
}

Stove::Stove() {
	std::cout << "������� ����������� �����:";
	int inventorynum;
	std::cin >> inventorynum;
	SetInventoryNumber(inventorynum);
	std::cout << "������� ����:";
	std::cin >> Color;
}


std::string Stove::GetColor() {
	return Color;
}

void Stove::print(bool need) {
	KitchenObject::print(need);
	std::cout << "����: " + GetColor() + "\n";
}
