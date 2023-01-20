#pragma once
#include "Node.h"
#include "KitchenObject.h"
class Tree
{
	Node *root;
public:
	Tree();
	~Tree();
	void Add(KitchenObject* kitchenobject);
	void LCP();
	void TreePrint();
private:
	void AddInner(Node* curnode, Node *kitchenO);
	void LCPInner(Node* curnode);
	void TreePrintInner(Node* curnode, int level);
};

