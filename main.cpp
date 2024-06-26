#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isTriangle(float a, float b, float c) {
	
	return (a + b > c) && (a + c > b) && (b + c > a);

}

int triangleFunc() { // for triangle
	
	float a, b, c;

	do {
		cout << "Enter sides: " << endl;
		cin >> a >> b >> c;

		if (!isTriangle(a, b, c)) {
			cout << "Try again" << endl;
		}
	} while (!isTriangle(a, b, c));

	float perimeter = a + b + c;
	float semiPerimeter = perimeter / 2;
	float area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
	
	cout << "Perimeter is " << perimeter << endl << endl;
	cout << "Area is equal " << area << endl << endl;
	
	if ((a == b) || (a == c) || (b == c)) {
		cout << "Isosceles triangle" << endl;
	}
	else
		cout << "Equilateral triangle" << endl;

	return 0;

}

int retangleFunc() { // для прямоугольника 
	
	cout << "Enter sides: " << endl;
	float a, b;
	cin >> a >> b;
	
	float perimeter = (a + b) * 2;
	float area = a * b;
	float diagonal = sqrt(a * a + b * b);

	cout << "Perimeter is " << perimeter << endl << endl;
	cout << "Area is equal " << area << endl << endl;
	cout << "The diagonal is " << diagonal << endl << endl;
	
	return 0;

}

int main() {

	cout << "Select a shape: " << endl;
	string triangle = "Triangle";
	string retangle = "Retangle";
	string input;
	getline(cin, input);
	if (input == "Triangle") {
		triangleFunc();
	}
	if (input == "Retangle") {
		retangleFunc();
	}
	return 0;

}