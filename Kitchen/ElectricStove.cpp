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
	std::cout << "Мощность: " + std::to_string(GetPower()) + " В\n";
}