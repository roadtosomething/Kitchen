#include "Pan.h"
#include <iostream>
#include <string>

Pan::Pan(int num, int vol) {
	volume = vol;
	SetInventoryNumber(num);
}

Pan::Pan() {
	if (GetInventoryNumber() < 0) {
		std::cout << "������� ����������� �����:";
		int inventorynum;
		std::cin >> inventorynum;
		SetInventoryNumber(inventorynum);
	}
	std::cout << "������� �����:";
	std::cin >> volume;
}

int Pan::GetVolume() {
	return volume;
}

void Pan::print(bool need) {
	KitchenObject::print(need);
	std::cout << "�����: " + std::to_string(GetVolume()) + " �\n";
}