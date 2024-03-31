#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int triangleFunc() { // для треугольника
	
	cout << "Enter sides: " << endl;
	float a, b, c;
	cin >> a >> b >> c;
	
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