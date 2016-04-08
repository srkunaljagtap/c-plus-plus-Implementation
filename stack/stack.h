#include<iostream>

class Stack
{
public:
	//empty initialy stack 
	void Initilize_Stack() {
		pointer = -1;
		for (int i = 0; i < Stack_max; i++) {
			stack[i] = 0;
		}
	}
	//set the maximum size of stack
	void set_stack_size(int stack_size) {
		Stack_max= stack_size;
	}
	int get_stack_size() {
		return Stack_max;
	}

	void empty() {
		if (pointer == -1) {
			cout << "\nstack is empty";
		}
		else {
			cout << "\nstack is not empty";
		}
	
	}
	// push an element to a stack if possible
	void push(int N) {
		if (pointer < Stack_max - 1) {
			stack[++pointer] = N;
		}
		else {
			cout << "\nstack full" << endl;
		}
	}

	void top() {
		cout << "\nitem recently added to the stack: " << stack[pointer];
	
	}
	int pop() {

		if (pointer == -1) {
			cout << ("\nstack is empty");
			return NULL;
		}
		else {
			int data = stack[pointer];
			stack[pointer] = NULL;
			pointer--;

			return data;
		}
	}
	void print() {
		for (int i = 0; i < Stack_max; i++) {
			cout << stack[i] << endl;

		}

	}

public:
	int pointer;
	int Stack_max = 0;
	int stack[];

};


