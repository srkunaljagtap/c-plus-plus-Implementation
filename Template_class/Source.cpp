#include<iostream>
#include<string>
using namespace std;

#include "template.h"
int main(){
	// here we have three different types of data types
	//	we will call the same class to find the maximum from all three numbers
	// I have created same template class M in template.h file to find maximum from all three valuess
	int n1,n2,n3;
	double double1, double2, double3;
	string string1, string2, string3;

	cout << "Enter the 3 integers: ";
	cin >> n1 >> n2 >>n3;
	cout << "\nmaximum from all three integers is: "<<maximum(n1, n2, n3);
	cout << "\nEnter the 3 strings: ";
	cin >> string1 >> string2 >> string3;
	cout << "\nmaximum from all three strings is: " << maximum(string1, string2, string3);
	cout << "\nEnter the 3 double values: ";
	cin >> double1 >> double2 >> double3;
	cout << "\nmaximum from all three doubles is: " << maximum(double1, double2, double3);
	
	cin.get();
return 0;
}