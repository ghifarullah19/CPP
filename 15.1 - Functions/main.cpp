#include <iostream>
#include <string>
using namespace std;

// Create a function
void myFunction() {
    cout << "I just got executed" << endl;
}

// Function declaration
void myFunc();

int main()
{
    /*
    * Function
    *
    * void myFunction() { // declaration
    *   // code to be executed (definition)
    * }
    */

    myFunction(); // call the function
    myFunction();
    myFunction();

    myFunc(); // call the function

    return 0;
}

// Function definition
void myFunc() {
    cout << "I just got executed" << endl;
}
