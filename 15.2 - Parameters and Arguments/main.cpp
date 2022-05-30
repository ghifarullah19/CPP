#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
	cout << fname << " Refsnes\n";
}

int main() {

	/*
	* Parameter
	*
	* void functionName(parameter1, parameter2, parameter3) {
	*	// code to be executed
	* }
	*/

	myFunction("Liam");
	myFunction("Jenny");
	myFunction("Anja");

	return 0;
}
