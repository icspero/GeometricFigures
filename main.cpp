#include <iostream>
#include <string>
#include <cmath>
using namespace std;

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