#pragma once
#include <string>
class KitchenObject
{
private:
	int inventoryNumber;
public:
	virtual ~KitchenObject() {};
	virtual int GetInventoryNumber();
	virtual void SetInventoryNumber(int inventoryNumber);
	virtual void print();
};

