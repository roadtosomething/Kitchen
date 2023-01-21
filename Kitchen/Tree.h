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
	void PCL();
	void CLP();
	void DeleteNode(int inventorynum);
	Node* FindNode(int inventorynum);
	void TreePrint();
private:
	void AddInner(Node* curnode, Node *kitchenO);
	void LCPInner(Node* curnode);
	void PCLInner(Node* curnode);
	void CLPInner(Node* curnode);
	Node* FindNodeInner(Node* curnode, int inventoryNum);
	void TreePrintInner(Node* curnode, int level);
	Node* MinRightElement(Node* curnode);
};

