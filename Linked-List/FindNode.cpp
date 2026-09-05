#include<iostream>
#include"Node.h"
using namespace std;


void InsertAtBeginning(Node* &Head, int value) {

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

	if (Find(Head, -700)!=NULL) {
	
		cout << "\n Found :) " << endl;
	}
	else {
	
		cout << "\n Not Found :( " << endl;
	}


}