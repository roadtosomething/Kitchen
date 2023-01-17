#pragma once
#include "Node.h"
#include "KitchenObject.h"
class Tree
{
	Node *root;
public:
	Tree();
	~Tree();
	void Add(KitchenObject *kitchenobject);
private:
	void AddInner(Node *curnode, Node *kitchenO);
};

