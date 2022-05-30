#include <iostream>
#include <string>
using namespace std;

int myFunction(int x) {
	return 5 + x;
}

int myFunc(int x, int y) {
	return x + y;
}

int main() {

	/*
	* Return
	*
	* The void keyword, used in the previous examples,
	* indicates that the function should not return a value.
	* If you want the function to return a value,
	* you can use a data type (such as int, string, etc.)
	* instead of void,
	* and use the return keyword inside the function:
	*/

	cout << myFunction(3);
	cout << myFunc(5, 3);

	int z = myFunc(5, 5);
	cout << z;

	return 0;
}
