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

void Tree::PCL() {
	PCLInner(root);
}

void Tree::PCLInner(Node* curNode) {
	if (curNode == NULL) {
		std::cout << "___________________________________________________\n";
	}
	else {
		PCLInner(curNode->right);
		curNode->kitchenObject->print(true);
		PCLInner(curNode->left);
	}
}

void Tree::CLP() {
	CLPInner(root);
}

void Tree::CLPInner(Node* curNode) {
	if (curNode == NULL) {
		std::cout << "";
	}
	else {
		curNode->kitchenObject->print(true);
		CLPInner(curNode->left);
		CLPInner(curNode->right);
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

Node* Tree::FindNode(int inventorynum) {
	return FindNodeInner(root,inventorynum);
}

Node* Tree::FindNodeInner(Node* curnode, int inventorynum) {
	if (curnode != NULL) {
		if (curnode->kitchenObject->GetInventoryNumber() == inventorynum) {
			return curnode;
		}
		else {
			if (inventorynum < curnode->kitchenObject->GetInventoryNumber()) {
				return FindNodeInner(curnode->left, inventorynum);
			}
			else {
				return FindNodeInner(curnode->right, inventorynum);
			}
		}
	}
	return NULL;
}

void Tree::DeleteNode(int inventoryNum) {
	Node* findNode = FindNode(inventoryNum);
	if (findNode != NULL) {
		if (findNode->left == NULL && findNode->right == NULL) {
			delete findNode->kitchenObject;
			delete findNode;
		}
		if (findNode->left != NULL && findNode == NULL) {
			delete findNode->kitchenObject;
			Node* target =findNode;
			findNode = findNode->left;
			delete target;
		}
		if (findNode->left == NULL && findNode != NULL) {
			delete findNode->kitchenObject;
			Node* target = findNode;
			findNode = findNode->right;
			delete target;
		}
		if (findNode->left != NULL && findNode->right != NULL) {
			delete findNode->kitchenObject;
			Node* target = findNode;
			findNode = MinRightElement(findNode);
			delete target;
		}
	}
	else {
		std::cout << "Íå íàéäåí ýëåìåíò ñ äàííûì èíâåíòàðíûì íîìåðîì!" << std::endl;
	}
}

Node* Tree::MinRightElement(Node* curnode) {
	if (curnode->left != NULL) return curnode->left;
	if (curnode->left == NULL && curnode->right == NULL) return curnode;
}
