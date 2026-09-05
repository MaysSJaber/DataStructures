#include<iostream>
#include"Node.h"
using namespace std;

void InsertAtEnd(Node*& Head, int Value) {

	Node* new_node = new Node();
	new_node->value = Value;
	new_node->next = NULL;

	if (Head == NULL) {
		Head = new_node;
		return;
	}

	Node* LastNode = Head;
	while (LastNode->next != NULL) {

		LastNode = LastNode->next;

	}
	LastNode->next = new_node;
	return;
}

int main() {

	Node* Head =NULL;
	InsertAtEnd(Head, 1);
	InsertAtEnd(Head, 2);
	InsertAtEnd(Head, 3);
	InsertAtEnd(Head, 4);
	InsertAtEnd(Head, 5);
	InsertAtEnd(Head, 6);
	
	PrintLinkedList(Head);
}		