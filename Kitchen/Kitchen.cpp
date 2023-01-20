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
	std::cout << "������� �������� �� ����� �����?\n";
	int N;
	std::cin >> N;
	KitchenObject** kitchenObjects = new KitchenObject * [N];
	std::cout << "������� ������ ��� �������...\n";
	int answer;
	for (int i = 0; i < N; i++) {
		std::cout << "�������� ��� " + std::to_string(i + 1) + "-�� �������:\n";
		std::cout << "1. �����\n";
		std::cout << "2. ������� �����\n";
		std::cout << "3. ������������� �����\n";
		std::cout << "4. ��������\n";
		std::cout << "5. �����������\n";
		std::cin >> answer;
		switch (answer)
		{
		case 1:
			kitchenObjects[i] = new Stove();
			if (i != 0) {
				for (int j = 0; j < i; j++) {
					while (kitchenObjects[i]->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "������ ����� �� ����������� �����, �������� ���!\n������� ����� ����������� �����:";
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
						std::cout << "������ ����� �� ����������� �����, �������� ���!\n������� ����� ����������� �����:";
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
						std::cout << "������ ����� �� ����������� �����, �������� ���!\n������� ����� ����������� �����:";
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
						std::cout << "������ ����� �� ����������� �����, �������� ���!\n������� ����� ����������� �����:";
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
						std::cout << "������ ����� �� ����������� �����, �������� ���!\n������� ����� ����������� �����:";
						int inventorNum;
						std::cin >> inventorNum;
						kitchenObjects[i]->SetInventoryNumber(inventorNum);
					}
				}
			}
			break;
		default:
			std::cout<< "�������� ����� ���� �� 1 �� 5!\n";
			continue;
		}
	}
	std::cout << "�������� ������� � ������...\n";
	Tree* tree = new Tree();
	for (int i = 0; i < N; i++) {
		tree->Add(kitchenObjects[i]);
	}
	std::cout << "������� ������� ��������� � ������\n";
	std::cout << "�������� �������� ������ LCP\n";
	tree->LCP();
	std::cout << "����� ����������� ������� � ���� ������";
	tree->TreePrint();
}