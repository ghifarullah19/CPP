#include <iostream>
// Include the string library
#include <string>
using namespace std;

int main() {

	/*
	*
	* Strings
	* A string variable contains a collection of
	* characters surrounded by double quotes
	*
	*/

	// Create a variable of type string and assign it a value:
	string greeting = "Hello";

	/*
	* String Concatenation
	* The + operator can be used between strings to
	* add them together to make a new string.
	* This is called concatenation
	*/
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName + lastName;
	cout << fullName;

	/*
	string firstName = "John";
	string lastName = "Doe";
	string fullName = firstName + " " + lastName;
	cout << fullName;
	*/
	return 0;
}
