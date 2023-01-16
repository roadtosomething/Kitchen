#include "Multicooker.h"
#include <string>

Multicooker::Multicooker(int inventoryNumberr, std::string Color, int volume, int power, bool hasFastCook) : ElectricStove(inventoryNumberr, Color, power), Pan(inventoryNumberr, volume) {
	hasFastCooking = hasFastCook;
}

bool Multicooker::isHasFasCooking() {
	return hasFastCooking;
}

std::string Multicooker::ToString() {
	return "�����������: \n������������ �����: " + std::to_string(GetInventoryNumber()) + "\n����: " + GetColor() + "\n�����: " + std::to_string(GetVolume()) + " �.\n" + "��������: " + std::to_string(GetPower()) + " �.�.\n" + (isHasFasCooking() ? "���� ������� ����������\n" : "��� ������� ����������\n");
}