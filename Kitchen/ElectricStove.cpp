#include "ElectricStove.h"
#include <string>

ElectricStove::ElectricStove(int num, std::string col, int pow) : Stove(num,col) {
	power = pow;
}

int ElectricStove::GetPower() {
	return power;
}

std::string ElectricStove::ToString() {
	return "ЁЋ≈ “–»„≈— јя ѕЋ»“ј: \n»нвентарный номер: " + std::to_string(GetInventoryNumber()) + "\n÷вет: " + GetColor() + "\nћощность: " + std::to_string(GetPower()) + " у.е.\n";
}