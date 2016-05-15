#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include "LinkList.h"
using namespace std;


int main()
{
	LinkedList mylist;
	start = NULL;
	mylist.Insert_at_beginning();
	mylist.Insert_at_end();
	mylist.Insert_at_beginning();
	mylist.Insert_at_position();
	mylist.displayList();
	mylist.delete_at_position();
	mylist.displayList();
	system("pause");
	
	return 0;
	}
