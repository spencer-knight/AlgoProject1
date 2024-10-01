#include "Node.h"
#include "singlyLinkedList.h"
#include <iostream>

int main()
{
	int caseNum = 1;

	//problem 1
	if (caseNum == 1) {
		cout << "Case 1:" << endl;
		// create a node object
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node* n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList* sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(0, n4); // insert a node n4 into the singly linked
		// list before the node at position 0 (the
		// first node counting as 0)
		sLL1->display();
		cout << endl << endl;
	}
	caseNum++;
	if (caseNum == 2) {
		cout << "Case 2:" << endl;
		// create a node object
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node* n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList* sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(3, n4); // insert a node n4 into the singly linked
		// list before the node at position 3 (the
		// first node counting as 0)
		sLL1->display();
		cout << endl << endl;
	}
	caseNum++;
	if (caseNum == 3) {
		cout << "Case 3:" << endl;
		// create a node object
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node* n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList* sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(1, n4); // insert a node n4 into the singly linked
		// list before the node at position 1 (the
		// first node counting as 0)
		sLL1->display();
		cout << endl << endl;
	}

	caseNum++;
	//problem 2
	if (caseNum == 4) {
		cout << "Case 4:" << endl;
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node* n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList* sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(1, n4); // insert a node n4 into the singly linked
		// list before the node at position 1 (the
		// first node counting as 0)
		sLL1->display();
		sLL1->insert(n5);
		sLL1->display();
		sLL1->swapNode(n5); // swap the node n5 with the first node (always the
		// first node)
		// no need to have the first node in the argument
		sLL1->display();
		cout << endl << endl;	}
	caseNum++;
	if (caseNum == 5) {
		cout << "Case 5:" << endl;
		// create a node object
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node * n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList* sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(1, n4); // insert a node n4 into the singly linked
		// list before the node at position 1 (the
	   // first node counting as 0)
		sLL1->display();
		sLL1->insert(n5);
		sLL1->display();
		sLL1->swapNode(n3); // swap the node n3 with the first node (always the
		// first node)
		// no need to have the first node in the argument
		sLL1->display();
		cout << endl << endl;	}
	caseNum++;
	if (caseNum == 6) {
		cout << "Case 6:" << endl;
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node* n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList* sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(1, n4); // insert a node n4 into the singly linked
		// list before the node at position 1 (the
		// first node counting as 0)
		sLL1->display();
		sLL1->insert(n5);
		sLL1->display();
		sLL1->swapNode(n1); // swap the node n1 with the first node (always the
		// first node)
		// no need to have the first node in the argument
		sLL1->display();
		cout << endl << endl;	}
	caseNum++;
	//problem 3
	if (caseNum == 7) {
		cout << "Case 7:" << endl;
		// create a node object
		Node* n1;
		n1 = new Node(100); // create anode
		Node* n2;
		n2 = new Node(200);
		Node* n3;
		n3 = new Node(300);
		Node* n4;
		n4 = new Node(400);
		Node* n5;
		n5 = new Node(500);
		// create a singly linked list
		SinglyLinkedList * sLL1 = new SinglyLinkedList(); // create a singly linked
		// list
		sLL1->insert(n1); // insert a node to the front of the singly linked list
		sLL1->insert(n2);
		sLL1->insert(n3);
		sLL1->display();
		sLL1->insertSomewhere(1, n4); // insert a node n4 into the singly linked
		// list before the node at position 1 (the
	   // first node counting as 0)
		sLL1->display();
		sLL1->insert(n5);
		sLL1->display();
		sLL1->swapNode(n1); // swap the node n1 with the first node (always the
		// first node)
		// no need to have the first node in the argument
		sLL1->display();
		sLL1->displayAddress(); // display the singly linked list with node address
		// and its value
		// also display the head of the singly linked list
		cout << endl << endl;
	}
	system("PAUSE");
}