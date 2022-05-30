#include <iostream>
#include <string>
using namespace std;

void myFunction(int myNumbers[x]) {
	for (int i = 0; i < myNumbers.size(); i++) {
		cout << myNumbers[i] << "\n";
	}
}

int main() {

	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	myFunction(myNumbers);

	return 0;
}
