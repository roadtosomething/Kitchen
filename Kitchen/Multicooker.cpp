#include "Multicooker.h"
#include <string>

Multicooker::Multicooker(int inventoryNumberr, std::string Color, int volume, int power, bool hasFastCook) : ElectricStove(inventoryNumberr, Color, power), Pan(inventoryNumberr, volume) {
	hasFastCooking = hasFastCook;
}

bool Multicooker::isHasFasCooking() {
	return hasFastCooking;
}

std::string Multicooker::ToString() {
	return "МУЛЬТИВАРКА: \nИневентарный номер: " + std::to_string(GetInventoryNumber()) + "\nЦвет: " + GetColor() + "\nОбъем: " + std::to_string(GetVolume()) + " л.\n" + "Мощность: " + std::to_string(GetPower()) + " у.е.\n" + (isHasFasCooking() ? "Есть функция скороварки\n" : "Нет функции скороварки\n");
}