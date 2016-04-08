#include<iostream>
#include "superclass.h"

using namespace std;

int main() {
	int select = 0;
	while (select != 3) {
		cout << "\nEnter 1 for 2 dimensional object and 2 for 3 dimensional object\n3 to EXIT:  \n";
		cin >> select;
		if (select == 1) {
			float length;
			float width;
			int option1 = 0;
			while (option1 != 5) {
				cout << "\nEnter 1 for square \n2 for rectangle \n3 for triangle \n4 for circle \n5 to EXIT : \n";
				cin >> option1;
				switch (option1)
				{
				case 1:
					two_dimensional square;
					cout << "\nEnter the value of length for a square: ";
					cin >> length;
					square.set_length(length);
					cout << "\narea of the square: " << square.square_area();
					break;
				case 2:
					two_dimensional rect;
					cout << "\nEnter the value of length and width for a rectangle: ";
					cin >> length >> width;
					rect.set_length(length);
					rect.set_width(width);
					cout << "\narea of the rectangle: " << rect.Rectange_area();
					break;
				case 3:
					two_dimensional tri;
					cout << "\nEnter the value of base and height for a triangle: ";
					cin >> length >> width;
					tri.set_length(length);
					tri.set_width(width);
					cout << "\narea of the triangle: " << tri.triangle_area();
					break;
				case 4:
					two_dimensional circ;
					cout << "\nEnter the value of length for a radius of circle: ";
					cin >> length;
					circ.set_length(length);
					cout << "\narea of the circle: " << circ.circle_area();
					break;
				}
			}
		}
		else if (select == 2) {
			//three_dimensional Sphere;
			float length;
			int option2 = 0;
			while (option2 != 3) {
				cout << "\nEnter 1 for sphere \n2 for cube \n3 to EXIT : \n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					three_dimensional sphere;
					cout << "\nEnter the value for a radius of a sphere: ";
					cin >> length;
					sphere.set_length(length);
					cout << "\narea of the sphere: " << sphere.sphere_area();
					break;
				case 2:
					three_dimensional cube;
					cout << "\nEnter the value of side of a cube: ";
					cin >> length;
					cube.set_length(length);
					cout << "\narea of the cube: " << cube.cube_area();
					break;
				}
			}

		}
		else if(select ==3){
			cout << "\nExiting..";
		}
		else {
			cout << "\nyou have entered the wrong option. please try again.";
		}
	}
	cout << "\n";
	system("pause");
	return 0;
}