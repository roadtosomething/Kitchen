#include "KitchenObject.h"
#include <string>
std::string KitchenObject::ToString() {
	std::string res = "����������� �����:" + std::to_string(GetInventoryNumber());
	return res;
}

int KitchenObject::GetInventoryNumber() {
	return inventoryNumber;
}

void KitchenObject::SetInventoryNumber(int inventoryNum) {
	inventoryNumber = inventoryNum;
}