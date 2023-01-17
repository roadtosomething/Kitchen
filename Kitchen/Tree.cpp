#include "Tree.h"
#include "Node.h"
#include "KitchenObject.h"

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