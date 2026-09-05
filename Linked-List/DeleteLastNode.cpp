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

void DeleteLastNode(Node*& Head) {

	Node* Current = Head, * Prev = Head;

	if (Head == NULL) return;

	if (Current->next == NULL) {

		Head = NULL;
		delete Current;
		return;
	}

	while (Current != NULL && Current->next != NULL) {

		Prev = Current;
		Current = Current->next;

	}
	Prev->next = NULL;
	delete Current;
	return;
}


void PrintLinkedList(Node* Head) {


	while (Head != NULL) {

		cout << Head->value << endl;
		Head = Head->next;

	}



}

int main() {

	Node* Head = NULL;
	InsertAtEnd(Head, 1);
	InsertAtEnd(Head, 2);
	InsertAtEnd(Head, 3);
	InsertAtEnd(Head, 4);
	InsertAtEnd(Head, 5);
	InsertAtEnd(Head, 6);
	DeleteLastNode(Head);


	PrintLinkedList(Head);
}