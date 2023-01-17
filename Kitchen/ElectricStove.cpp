#include "ElectricStove.h"
#include <string>
#include <iostream>

ElectricStove::ElectricStove(int num, std::string col, int pow) : Stove(num,col) {
	power = pow;
}

int ElectricStove::GetPower() {
	return power;
}

void ElectricStove::print() {
	Stove::print();
	std::cout << "��������: " + std::to_string(GetPower()) + " �\n";
}