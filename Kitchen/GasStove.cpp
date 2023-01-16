#include "GasStove.h"
#include <string>
GasStove::GasStove(int num, std::string col, int gC) : Stove(num,col) {
	gasConsuption = gC;
}

int GasStove::GetGasConsuption() {
	return gasConsuption;
}

std::string GasStove::ToString() {
	return "������� �����: \n����������� �����: " + std::to_string(GetInventoryNumber()) + "\n����: " + GetColor() + "\n��������: " + std::to_string(GetGasConsuption()) + " �.�/�\n";
}