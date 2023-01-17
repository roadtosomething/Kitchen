#include "GasStove.h"
#include <string>
#include <iostream>
GasStove::GasStove(int num, std::string col, int gC) : Stove(num,col) {
	gasConsuption = gC;
}

int GasStove::GetGasConsuption() {
	return gasConsuption;
}

void GasStove::print(){
	Stove::print();
	std::cout << "Расход газа: " + std::to_string(GetGasConsuption()) + "\n";
}