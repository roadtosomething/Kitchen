#include "Stove.h"
#include <iostream>
#include <string>

Stove::Stove(int inventoryNum, std::string color) {
	Color = color;
	SetInventoryNumber(inventoryNum);
}


std::string Stove::GetColor() {
	return Color;
}

void Stove::print() {
	KitchenObject::print();
	std::cout << "Цвет: " + GetColor() + "\n";
}
