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

std::string Pan::ToString() {
	return "��������:\n����������� �����:" + std::to_string(GetInventoryNumber()) + "\n�����: " + std::to_string(GetVolume()) + " �. \n";
}