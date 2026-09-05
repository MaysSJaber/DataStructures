#include<iostream>
#include"Node.h"
using namespace std;
void InsertAfter(Node* current, int value) {
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = current->next;
	newNode->prev = current;

	if (current->next != NULL) {
		current->next->prev = newNode;
	}
	current->next = newNode;
}
void PrintLinkedList(Node* Head) {


	while (Head != NULL) {

		cout << Head->value << endl;
		Head = Head->next;

	}
}
int main() {
	////step1 

	Node* head;
	Node* node1 = NULL;
	Node* node2 = NULL;
	Node* node3 = NULL;

	////step2


	node1 = new Node();
	node2 = new Node();
	node3 = new Node();

	////step4


	node1->value = 1;
	node1->prev = NULL;
	node1->next = node2;

	node2->value = 2;
	node2->prev = node1;
	node2->next = node3;

	node3->value = 3;
	node3->prev = node2;
	node3->next = NULL;


	////step5

	head = node1;
	////step6
	InsertAfter(node1, 14);
	PrintLinkedList(head);


}