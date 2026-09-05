#include<iostream>
#include"Node.h"
using namespace std;

void InsertAtBeginning(Node* &Head, int Value) {
	

	Node* new_node = new Node();
	new_node->value = Value;
	new_node->prev = NULL;
	new_node->next = Head;

	if (Head != NULL) {
		Head->prev = new_node;
	}

	Head = new_node;
	return;




}
void PrintNodeDetails(Node* head)
{

	if (head->prev != NULL)
		cout << head->prev->value;
	else
		cout << "NULL";

	cout << " <--> " << head->value << " <--> ";

	if (head->next != NULL)
		cout << head->next->value << "\n";
	else
		cout << "NULL";

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
	InsertAtBeginning(head, 13);
	////step6

	PrintLinkedList(head);


}
