#include<iostream>
#include<iomanip>
#include <limits>  // needed for pause
#include <cstdlib> // needed for rand function

#include "Header.h"
using namespace std;
void print_array(const int A[][5], int array_size);
void matrix_multiplication(const int B[][5], const int C[][5], int array_size);

int main() {
	const int array_size = 5;
	Matrix a;
	int B[array_size][array_size] = {};
	int C[array_size][array_size] = {};
	a.set_array_size(array_size);

	for (int i = 0; i < array_size; i++) {
		for (int j = 0; j < array_size; j++) {
			B[i][j] = a.Initilize_matrix();
			C[i][j] = a.Initilize_matrix();
		}
	}
	cout << "Matrix B: \n";
	print_array(B,array_size);
	cout << "\nMatrix C: \n";
	print_array(C, array_size);
	cout << "\nMatrix Multiplication of B and C: \n";

	matrix_multiplication(B, C,array_size);

	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //pause
	return 0;
}

void print_array(const int A[][5] , int array_size){

	for (int i = 0; i < array_size; i++) {
		for (int j = 0; j < array_size; j++) {
			cout << A[i][j] << setw(5);
		}
		cout << "\n";
	}
}
void matrix_multiplication(const int B[][5], const int C[][5], int array_size) {
	int temp=0;
	for (int i = 0; i < array_size; i++) {
		for (int j = 0; j < array_size; j++) {
			for (int k = 0; k < array_size; k++) {
				temp = temp + B[i][k] * C[k][j];
			}
			cout << temp << setw(5);
			temp = 0;
		}
		
		cout << "\n";
	}

}