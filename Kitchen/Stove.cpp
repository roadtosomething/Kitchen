#include "Stove.h"
#include <iostream>
#include <string>

Stove::Stove(int inventoryNum, std::string color) {
	Color = color;
	SetInventoryNumber(inventoryNum);
}

Stove::Stove() {
	std::cout << "¬ведите инвентарный номер:";
	int inventorynum;
	std::cin >> inventorynum;
	SetInventoryNumber(inventorynum);
	std::cout << "¬ведите цвет:";
	std::cin >> Color;
}


std::string Stove::GetColor() {
	return Color;
}

void Stove::print(bool need) {
	KitchenObject::print(need);
	std::cout << "÷вет: " + GetColor() + "\n";
}
