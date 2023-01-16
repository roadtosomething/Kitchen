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

std::string Stove::ToString() {
	return "�����:\n����������� �����: " + std::to_string(GetInventoryNumber()) + "\n ����: " + GetColor()+"\n";
}
