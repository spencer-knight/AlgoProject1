#ifndef SINGLY_LINKED_LIST_CPP
#define SINGLY_LINKED_LIST_CPP
#include <iostream>
using namespace std;
#include "singlyLinkedList.h"
#include "Node.h"
SinglyLinkedList::SinglyLinkedList()
{
	head = NULL;
}
SinglyLinkedList::~SinglyLinkedList()
{
	// garbage collection
	Node* tempNode = head;
	Node* tempNodeC = tempNode;
	while (tempNode != NULL)
	{
		tempNodeC = tempNode;
		delete tempNode;
		tempNode = tempNodeC->next;
	} // while
	head = NULL;
}
void SinglyLinkedList::insert(Node* newNode)
{
	if (head == NULL) // when the singly linked list is empty
		head = newNode;
	else
	{
		// before adding newNoide, head points to the first node
		// of SLL
		newNode->next = head;
		head = newNode;
	}
}
void SinglyLinkedList::display()
{
	Node* tempNode = head;
	cout << endl;
	while (tempNode != NULL)
	{
		cout << tempNode->display_Value() << " " << endl;
		tempNode = tempNode->next;
	} // while
}
void SinglyLinkedList::displayAddress()
{
	// CODE TO BE ADDED for Project 1
}
void SinglyLinkedList::insertSomewhere(int position, Node * newNode) // counting
{
	if (position == 0) {
		newNode->next = head;
		head = newNode;
		return;
	}
	Node* traverser = head;
	for (int i = 0; i < position - 1; i++) {
		traverser = traverser->next;
	}
	newNode->next = traverser->next;
	traverser->next = newNode;
}
void SinglyLinkedList::swapNode(Node* tNode)
{
	//don't search for the node
	if (tNode == head) {
		return;
	}
	
	//In the case where tNode comes after head.
	//Needs special handling, otherwise tNode will point at itself
	if (head->next == tNode) {
		head->next = tNode->next;
		tNode->next = head;
		head = tNode;
		return;
	}

	Node* traverser = head;
	while (traverser->next != tNode) {
		traverser = traverser->next;
	}
	Node* headNext = head->next;
	head->next = tNode->next;
	traverser->next = head;
	head = tNode;
	head->next = headNext;
}
#endif