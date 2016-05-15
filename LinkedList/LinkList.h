#pragma once
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node {
	int value;
	struct node *next;
}*start;

class LinkedList {

public:
	LinkedList() {
		start = NULL;
	}

	node* createLinkedListItem(int value) {

		struct node *newnode;

		newnode = new(struct node);

		if (newnode == NULL) {
			cout << "out of memory" << endl;
			return 0;
		}

		else {
			newnode->value = value;
			newnode->next = NULL;
			return newnode;
		}

	};

	void Insert_at_beginning() {

		struct node *newnode, *temp;
		int value;
		cout << "Enter the node value to be added at the beginning: " << endl;
		cin >> value;
		// create a node with value entered and pointing to null for now
		newnode = createLinkedListItem(value);

		// if there are no nodes in list
		if (start == NULL) {
			start = newnode;
			newnode->next = NULL;
		}
		else {

			temp = start;
			start = newnode;
			newnode->next = temp;
		}

	};


	void Insert_at_end() {
		struct node *newnode, *endnode;
		int value;
		cout << "Enter the node value to be added at the end: " << endl;
		cin >> value;

		// create a node with value entered and pointing to null for now
		newnode = createLinkedListItem(value);

		endnode = start;
		// traverse through the list till the last existing node
		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}
		newnode->next = NULL;
		endnode->next = newnode;
	};

	void Insert_at_position() {
		struct node *newnode, *positionnode, *totalnodes, *temp, *previousnode;
		int value;
		int counter = 0;
		int position;
		cout << "Enter the node position where node should be added: " << endl;
		cin >> position;

		cout << "Enter the node value to be added at the end: " << endl;
		cin >> value;
		// create a node with value entered and pointing to null for now
		newnode = createLinkedListItem(value);



		totalnodes = start;

		while (totalnodes != NULL) {
			totalnodes = totalnodes->next;
			counter++;
		}

		if (position > counter) {
			cout << "position entered is out of range!!" << endl;
		}

		if (position == 1) {
			if (start == NULL) {
				start = newnode;
				newnode->next = NULL;
			}
			else
			{
				temp = start;
				start = newnode;
				newnode->next = temp;
			}
		}
		if (position > 1 && position <= counter) {

			positionnode = start;
			previousnode = positionnode;

			for (int i = 0; i < position; i++) {

				previousnode = positionnode;
				positionnode = positionnode->next;

			}

			previousnode->next = newnode;
			newnode->next = positionnode;
		}
	};

	void sortLinkedList() {
		int tempvalue;
		node *pointernode, *temp;
		pointernode = start;

		if (start == NULL) {
			cout << "Empty List: " << endl;
		}

		while (pointernode != NULL)
		{
			for (temp = pointernode->next; temp != NULL; temp = temp->next) {

				if (pointernode->value > temp->value) {

					tempvalue = pointernode->value;
					pointernode->value = temp->value;
					temp->value = tempvalue;

				}
			}

			pointernode = pointernode->next;
		}
	};


	void delete_at_position() {

		node *positionode, *previosnode;
		int position, counter = 0;

		cout << "enter the position where you want to delete the node: " << endl;
		cin >> position;

		positionode = start;

		if (start == NULL) {
			cout << "List is empty" << endl;
		}

		if (position == 1) {
			start = positionode->next;
		}

		while (positionode != NULL) {

			positionode = positionode->next;
			counter++;

		}

		if (position > 1 && position <= counter) {

			positionode = start;
			previosnode = positionode;

			for (int i = 0; i < position; i++) {

				previosnode = positionode;
				positionode = positionode->next;

			}

			previosnode->next = positionode->next;

		}

	};

	void displayList() {

		node *pointernode;

		if (start == NULL) {

			cout << "List is Empty" << endl;

		}

		pointernode = start;
		cout << "values of the nodes in Linked List : " << endl;
		while (pointernode != NULL) {

			cout << pointernode->value << " ";
			pointernode = pointernode->next;

		}

		cout << endl;


	};

};
