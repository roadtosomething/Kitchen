#include "ElectricStove.h"
#include <string>
#include <iostream>

ElectricStove::ElectricStove(int num, std::string col, int pow) : Stove(num,col) {
	power = pow;
}

ElectricStove::ElectricStove() : Stove() {
	std::cout << "Введите мощность плиты:";
	std::cin >> power;
}

int ElectricStove::GetPower() {
	return power;
}

void ElectricStove::print(bool need) {
	Stove::print(need);
	std::cout << "Мощность: " + std::to_string(GetPower()) + " В\n";
}