#include "Multicooker.h"
#include <string>
#include <iostream>

Multicooker::Multicooker(int inventoryNumberr, std::string Color, int volume, int power, bool hasFastCook) : ElectricStove(inventoryNumberr, Color, power), Pan(inventoryNumberr, volume) {
	hasFastCooking = hasFastCook;
}

Multicooker::Multicooker() : ElectricStove(), Pan() {
	std::cout << "������� �� ������� ����������? \n1.�� \n2.��� \n�����: ";
	int answer;
	std::cin >> answer;
	hasFastCooking = (answer == 1);
}

bool Multicooker::isHasFasCooking() {
	return hasFastCooking;
}

void Multicooker::print(bool need) {
	ElectricStove::print(true);
	Pan::print(false);
	if (isHasFasCooking()) {
		std::cout << "����� ������� ����������\n";
	}
	else {
		std::cout<<"�� ����� ������� ����������\n";
	}
	 
}