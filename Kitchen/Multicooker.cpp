#include "Multicooker.h"
#include <string>
#include <iostream>

Multicooker::Multicooker(int inventoryNumberr, std::string Color, int volume, int power, bool hasFastCook) : ElectricStove(inventoryNumberr, Color, power), Pan(inventoryNumberr, volume) {
	hasFastCooking = hasFastCook;
}

bool Multicooker::isHasFasCooking() {
	return hasFastCooking;
}

void Multicooker::print() {
	ElectricStove::print();
	Pan::print();
	std::cout << isHasFasCooking() ? "Имеет функцию скороварки\n" : "Не имеет функцию скороварки\n";
}