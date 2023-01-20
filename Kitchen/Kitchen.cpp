#include <iostream>
#include "ElectricStove.h"
#include "GasStove.h"
#include "KitchenObject.h"
#include "Multicooker.h"
#include "Pan.h"
#include "Stove.h"
#include "Tree.h"
#include <list>


int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Сколько объектов на вашей кухне?\n";
	int N;
	std::cin >> N;
	KitchenObject** kitchenObjects = new KitchenObject * [N];
	std::cout << "Давайте опишем эти объекты...\n";
	int answer;
	for (int i = 0; i < N; i++) {
		std::cout << "Выберите тип " + std::to_string(i + 1) + "-го объекта:\n";
		std::cout << "1. Плита\n";
		std::cout << "2. Газовая плита\n";
		std::cout << "3. Электрическая плита\n";
		std::cout << "4. Кастрюля\n";
		std::cout << "5. Мультиварка\n";
		std::cin >> answer;
		switch (answer)
		{
		case 1:
			kitchenObjects[i] = new Stove();
			if (i != 0) {
				for (int j = 0; j < i; j++) {
					while (kitchenObjects[i]->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "Найден такой же инвентарный номер, измените его!\nВведите новый инвентарный номер:";
						int inventorNum;
						std::cin >> inventorNum;
						kitchenObjects[i]->SetInventoryNumber(inventorNum);
					}
				}
			}
			break;
		case 2:
			kitchenObjects[i] = new GasStove();
			if (i != 0) {
				for (int j = 0; j < i; j++) {
					while (kitchenObjects[i]->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "Найден такой же инвентарный номер, измените его!\nВведите новый инвентарный номер:";
						int inventorNum;
						std::cin >> inventorNum;
						kitchenObjects[i]->SetInventoryNumber(inventorNum);
					}
				}
			}
			break;
		case 3:
			kitchenObjects[i] = new ElectricStove();
			if (i != 0) {
				for (int j = 0; j < i; j++) {
					while (kitchenObjects[i]->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "Найден такой же инвентарный номер, измените его!\nВведите новый инвентарный номер:";
						int inventorNum;
						std::cin >> inventorNum;
						kitchenObjects[i]->SetInventoryNumber(inventorNum);
					}
				}
			}
			break;
		case 4:
			kitchenObjects[i] = new Pan();
			if (i != 0) {
				for (int j = 0; j < i; j++) {
					while (kitchenObjects[i]->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "Найден такой же инвентарный номер, измените его!\nВведите новый инвентарный номер:";
						int inventorNum;
						std::cin >> inventorNum;
						kitchenObjects[i]->SetInventoryNumber(inventorNum);
					}
				}
			}
			break;
		case 5:
			kitchenObjects[i] = new Multicooker();
			if (i != 0) {
				for (int j = 0; j < i; j++) {
					while (kitchenObjects[i]->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "Найден такой же инвентарный номер, измените его!\nВведите новый инвентарный номер:";
						int inventorNum;
						std::cin >> inventorNum;
						kitchenObjects[i]->SetInventoryNumber(inventorNum);
					}
				}
			}
			break;
		default:
			std::cout<< "Выберите пункт меню от 1 до 5!\n";
			continue;
		}
	}
	std::cout << "Помещаем объекты в дерево...\n";
	Tree* tree = new Tree();
	for (int i = 0; i < N; i++) {
		tree->Add(kitchenObjects[i]);
	}
	std::cout << "Объекты успешно добавлены в дерево\n";
	std::cout << "Просмотр объектов дерево LCP\n";
	tree->LCP();
	std::cout << "Вывод инвентарных номеров в виде дерева";
	tree->TreePrint();
}