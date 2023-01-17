#include "KitchenObject.h"
#include <string>
#include <iostream>

int KitchenObject::GetInventoryNumber() {
	return inventoryNumber;
}

void KitchenObject::SetInventoryNumber(int inventoryNum) {
	inventoryNumber = inventoryNum;
}

void KitchenObject::print() {
	std::cout << "Инвентарный номер:" + std::to_string(GetInventoryNumber()) + "\n";
}