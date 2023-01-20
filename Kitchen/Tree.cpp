#include "Tree.h"
#include "Node.h"
#include "KitchenObject.h"
#include <iostream>

Tree::Tree() {
	root = NULL;
}

Tree::~Tree() {
	if (root != NULL) { delete root; };
}

void Tree::Add(KitchenObject *kO) {
	Node *node = new Node(kO);
	if (root == NULL) { root = node; }
	else
	{
		AddInner(root, node);
	}
}

void Tree::AddInner(Node *curnode, Node *object) {
	if (curnode->kitchenObject->GetInventoryNumber() >= object->kitchenObject->GetInventoryNumber())
		if (curnode->left == NULL) curnode->left = object;
		else AddInner(curnode->left, object);
	else
		if (curnode->right == NULL) curnode->right = object;
		else AddInner(curnode->right, object);
}

void Tree::LCP() {
	LCPInner(root);
}

void Tree::LCPInner(Node* curNode) {
	if (curNode == NULL) {
		std::cout << "___________________________________________________\n";
	}
	else {
		LCPInner(curNode->left);
		curNode->kitchenObject->print(true);
		LCPInner(curNode->right);
	}
}

void Tree::TreePrint() {
	TreePrintInner(root,1);
}

void Tree::TreePrintInner(Node* curnode, int level) {
	if (curnode != NULL) {
		TreePrintInner(curnode->left, level + 1);
		for (int i = 0; i < level; i++) std::cout << "    ";
		std::cout << curnode->kitchenObject->GetInventoryNumber() << std::endl;
		TreePrintInner(curnode->right, level + 1);
	}
}