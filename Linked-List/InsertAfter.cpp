#include<iostream>
#include"Node.h"
using namespace std;


void InsertAtBeginning(Node*& Head, int value) {

	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = Head;
	Head = newNode;

}

Node* Find(Node* Head, int Value) {

	while (Head != NULL) {

		if (Head->value == Value) {

			return Head;

		}

		Head = Head->next;


	}
	return NULL;
}

void InsertAfter(Node* previous_node, int Value) {

	if (previous_node == NULL) {
		cout << "Previous node cannot be NULL" << endl;
		return;
	}

	Node* new_node = new Node();
	new_node->value = Value;
	new_node->next = previous_node->next;
	previous_node->next = new_node;
}

void PrintLinkedList(Node* Head) {


	while (Head != NULL) {

		cout << Head->value << endl;
		Head = Head->next;

	}



}

int main() {

	Node* Head = new Node();
	Head->value = 10;
	InsertAtBeginning(Head, 20);
	InsertAtBeginning(Head, 30);
	InsertAtBeginning(Head, 40);
	InsertAtBeginning(Head, 50);
	InsertAtBeginning(Head, 60);


	Node* N1 = Find(Head, 30);
	InsertAfter(N1, 5000);
	PrintLinkedList(Head);
}