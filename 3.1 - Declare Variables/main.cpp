#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declaring Variable

    // type variableName = value;

    /*
     Create a variable called myNum
     of type int and assign it the value 15:
    */
    int myNum = 15;
    cout << myNum << endl;

    /*
     Declare a variable without assigning the value,
     and assign the value later:
    */
    int myNum2;
    myNum2 = 15;
    cout << myNum2 << endl;

    /*
     Note that if you assign a new value to an existing variable,
     it will overwrite the previous value:
    */
    int myNum3 = 15;  // myNum is 15
    myNum3 = 10;  // Now myNum is 10
    cout << myNum3 << endl;  // Outputs 10

    // Other Types
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    // Display Variables
    /*
     The cout object is used together
     with the << operator to display variables.

     To combine both text and a variable,
     separate them with the << operator:
    */
    int myAge = 35;
    cout << "I am " << myAge << " years old." << endl;

    // Add Variables Together
    /*
     To add a variable to another variable,
     you can use the + operator:
    */
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    return 0;
}
