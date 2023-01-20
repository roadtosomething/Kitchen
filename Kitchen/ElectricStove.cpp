#include "ElectricStove.h"
#include <string>
#include <iostream>

ElectricStove::ElectricStove(int num, std::string col, int pow) : Stove(num,col) {
	power = pow;
}

ElectricStove::ElectricStove() : Stove() {
	std::cout << "������� �������� �����:";
	std::cin >> power;
}

int ElectricStove::GetPower() {
	return power;
}

void ElectricStove::print(bool need) {
	Stove::print(need);
	std::cout << "��������: " + std::to_string(GetPower()) + " �\n";
}