#include "Node.h"
Node::Node(KitchenObject *kO) {
	kitchenObject = kO;
}

Node::~Node() {
	if (left != NULL) { delete left; };
	if (right != NULL) { delete right; }
}

