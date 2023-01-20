#include "Multicooker.h"
#include <string>
#include <iostream>

Multicooker::Multicooker(int inventoryNumberr, std::string Color, int volume, int power, bool hasFastCook) : ElectricStove(inventoryNumberr, Color, power), Pan(inventoryNumberr, volume) {
	hasFastCooking = hasFastCook;
}

Multicooker::Multicooker() : ElectricStove(), Pan() {
	std::cout << "Имеется ли функция скороварки? \n1.Да \n2.Нет \nОтвет: ";
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
		std::cout << "Имеет функцию скороварки\n";
	}
	else {
		std::cout<<"Не имеет функцию скороварки\n";
	}
	 
}