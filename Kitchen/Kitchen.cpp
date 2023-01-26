#include <iostream>
#include "ElectricStove.h"
#include "GasStove.h"
#include "KitchenObject.h"
#include "Multicooker.h"
#include "Pan.h"
#include "Stove.h"
#include "Tree.h"
#include <list>

bool Checker(int N, KitchenObject** kitchenObjects, KitchenObject* kO){
	for (int j = 0; j < N; j++) {
					while (kO->GetInventoryNumber() == kitchenObjects[j]->GetInventoryNumber()) {
						std::cout << "Try Again";
						return false;
					}
				}
	return true;
}
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Ñêîëüêî îáúåêòîâ íà âàøåé êóõíå?\n";
	int N;
	std::cin >> N;
	KitchenObject** kitchenObjects = new KitchenObject * [N];
	std::cout << "Äàâàéòå îïèøåì ýòè îáúåêòû...\n";
	int answer;
	for (int i = 0; i < N; i++) {
		std::cout << "Âûáåðèòå òèï " + std::to_string(i + 1) + "-ãî îáúåêòà:\n";
		std::cout << "1. Ïëèòà\n";
		std::cout << "2. Ãàçîâàÿ ïëèòà\n";
		std::cout << "3. Ýëåêòðè÷åñêàÿ ïëèòà\n";
		std::cout << "4. Êàñòðþëÿ\n";
		std::cout << "5. Ìóëüòèâàðêà\n";
		std::cin >> answer;
		switch (answer)
		{
		case 1:
			kitchenObjects[i] = new Stove();
			if (i != 0) {
				while(!Checker(i,kitchenObjects,kitchenObjects[i]))
				{
					int inventorNum;
					std::cin>>inventorNum;
					kitchenObjects[i]->SetInventoryNumber(inventorNum)
				}
			}
			break;
		case 2:
			kitchenObjects[i] = new GasStove();
			if (i != 0) {
				
			}
			break;
		case 3:
			kitchenObjects[i] = new ElectricStove();
			if (i != 0) {
				while(!Checker(i,kitchenObjects,kitchenObjects[i]))
				{
					int inventorNum;
					std::cin>>inventorNum;
					kitchenObjects[i]->SetInventoryNumber(inventorNum)
				}
			}
			break;
		case 4:
			kitchenObjects[i] = new Pan();
			if (i != 0) {
				while(!Checker(i,kitchenObjects,kitchenObjects[i]))
				{
					int inventorNum;
					std::cin>>inventorNum;
					kitchenObjects[i]->SetInventoryNumber(inventorNum)
				}
			}
			break;
		case 5:
			kitchenObjects[i] = new Multicooker();
			if (i != 0) {
				while(!Checker(i,kitchenObjects,kitchenObjects[i]))
				{
					int inventorNum;
					std::cin>>inventorNum;
					kitchenObjects[i]->SetInventoryNumber(inventorNum)
				}
			}
			break;
		default:
			std::cout<< "Âûáåðèòå ïóíêò ìåíþ îò 1 äî 5!\n";
			continue;
		}
	}
	std::cout << "Ïîìåùàåì îáúåêòû â äåðåâî...\n";
	Tree* tree = new Tree();
	for (int i = 0; i < N; i++) {
		tree->Add(kitchenObjects[i]);
	}
	std::cout << "Îáúåêòû óñïåøíî äîáàâëåíû â äåðåâî\n";
	std::cout << "Ïðîñìîòð îáúåêòîâ äåðåâî LCP\n";
	tree->LCP();
	std::cout << "Ïðîñìîòð îáúåêòîâ äåðåâî PCL\n";
	tree->PCL();
	std::cout << "Ïðîñìîòð îáúåêòîâ äåðåâî CLP\n";
	tree->CLP();
	std::cout << "Âûâîä èíâåíòàðíûõ íîìåðîâ â âèäå äåðåâà\n";
	tree->TreePrint();
	std::cout << "Äëÿ óäàëåíèÿ ýëåìåíòà ââåäèòå èíâåíòàðíûé íîìåð:";
	int inventorNumDelete;
	std::cin >> inventorNumDelete;
	std::cout << std::endl;
	tree->DeleteNode(inventorNumDelete);
	std::cout << "Äåðåâî ïîñëå óäàëåíèÿ:\n";
	tree->TreePrint();
}
