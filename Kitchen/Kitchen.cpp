#include <iostream>
#include "ElectricStove.h"
#include "GasStove.h"
#include "KitchenObject.h"
#include "Multicooker.h"
#include "Pan.h"
#include "Stove.h"

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 7;
	KitchenObject** objects = new KitchenObject * [n];
	objects[0] = new GasStove(1,"Красный", 125);
	objects[1] = new ElectricStove(2,"Бардовый",220);
	objects[2] = new Pan(3,5);
	objects[3] = new Stove(4,"Коричневый");
	objects[4] = new Multicooker(5,"Зеленый",15,220,true);
	objects[5] = new Multicooker(6, "Кислотный", 15, 180, false);
	objects[6] = new Pan(7,10);

	for (int i=0; i < n; i++) {
		objects[i]->print();
	}
}