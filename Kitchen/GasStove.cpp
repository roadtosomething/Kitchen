#include "GasStove.h"
#include <string>
#include <iostream>
GasStove::GasStove(int num, std::string col, int gC) : Stove(num,col) {
	gasConsuption = gC;
}

GasStove::GasStove() : Stove() {
	std::cout << "������� ������ ����:";
	std::cin >> gasConsuption;
}

int GasStove::GetGasConsuption() {
	return gasConsuption;
}

void GasStove::print(bool need){
	Stove::print(need);
	std::cout << "������ ����: " + std::to_string(GetGasConsuption()) + "\n";
}