#include<iostream>
using namespace std;
#include "stack.h"

int main() {
	int const stack_size = 10;
	Stack mystack;
	//mystack is the object of class Stack
	// lets decide the stack size and initilize the stack to zeros.
	mystack.set_stack_size(stack_size);
	mystack.Initilize_Stack();

	//push 10 items to stack
	for (int i = 0; i < 10; i++) {
		mystack.push(i);
	}
	//perform some more operations like pop,print and top
	//push: add a number to a stack
	//pop: pop most recently added nubmer
	//top: print most recently added number but don't pop it
	//print: print all stack
	//empty: check if the stack is empty
	mystack.pop();
	mystack.push(23);
	mystack.print();
	mystack.top();
	mystack.empty();
	mystack.push(25);
	system("pause");
	return 0;
}