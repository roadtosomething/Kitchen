#include "ElectricStove.h"
#include <string>

ElectricStove::ElectricStove(int num, std::string col, int pow) : Stove(num,col) {
	power = pow;
}

int ElectricStove::GetPower() {
	return power;
}

std::string ElectricStove::ToString() {
	return "������������� �����: \n����������� �����: " + std::to_string(GetInventoryNumber()) + "\n����: " + GetColor() + "\n��������: " + std::to_string(GetPower()) + " �.�.\n";
}