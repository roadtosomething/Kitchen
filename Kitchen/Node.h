#pragma once
#include "KitchenObject.h"
class Node
{
public:
	KitchenObject *kitchenObject;
	Node *left, *right;
	Node(KitchenObject *data);
	~Node();
};

