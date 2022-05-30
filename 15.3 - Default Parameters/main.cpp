#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
	cout << country << "\n";
}

int main() {

	/*
	* Default Parameter
	*
	* If we call the function without an argument,
	* it uses the default value ("Norway"):
	*/

	myFunction("Sweden");
	myFunction("India");
	myFunction();
	myFunction("USA");

	return 0;
}
