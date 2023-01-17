#include "Pan.h"
#include <iostream>
#include <string>

Pan::Pan(int num, int vol) {
	volume = vol;
	SetInventoryNumber(num);
}

int Pan::GetVolume() {
	return volume;
}

void Pan::print() {
	KitchenObject::print();
	std::cout << "־בתול: " + std::to_string(GetVolume()) + " כ\n";
}