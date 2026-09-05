#include<iostream>
#include"Node.h"
using namespace std;


void InsertAtBeginning(Node* &Head, int value) {

	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = Head;
	Head = newNode;

}

void PrintLinkedList(Node* Head) {

	
	while (Head != NULL) {
	
		cout << Head->value<<endl;
		Head = Head->next;

	}



}

int main() {
	
	Node* Head = new Node();
	Head->value = 10;
	InsertAtBeginning(Head, 20);
	InsertAtBeginning(Head, 30);
	PrintLinkedList(Head);


}