#include <iostream>
#include <string>
#include <cmath>
using namespace std;

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