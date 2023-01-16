#include "GasStove.h"
#include <string>
GasStove::GasStove(int num, std::string col, int gC) : Stove(num,col) {
	gasConsuption = gC;
}

int GasStove::GetGasConsuption() {
	return gasConsuption;
}

std::string GasStove::ToString() {
	return "√ј«ќ¬јя ѕЋ»“ј: \n»нвентарный номер: " + std::to_string(GetInventoryNumber()) + "\n÷вет: " + GetColor() + "\nћощность: " + std::to_string(GetGasConsuption()) + " у.е/д\n";
}