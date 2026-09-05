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

void DeleteNode(Node* &Head, int Value) {

	Node* Current = Head, * Prev = Head;
	if (Head == NULL)return;

	if (Current->value == Value) {
		Head = Current->next;
		delete Current;
		return;
	}

	while (Current != NULL && Current->value != Value) {
		Prev = Current;
		Current = Current->next;
	}

	if (Current == NULL) return;
	
	Prev->next = Current->next;
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

	Node* Head =NULL;
	InsertAtEnd(Head, 1);
	InsertAtEnd(Head, 2);
	InsertAtEnd(Head, 3);
	InsertAtEnd(Head, 4);
	InsertAtEnd(Head, 5);
	InsertAtEnd(Head, 6);
	DeleteNode(Head, 3);
	PrintLinkedList(Head);
}		