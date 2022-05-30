#include <iostream>
#include <string>
using namespace std;

int main() {

    // Basic Data Types
    /*
     Data Type      |       Size        |       Description             |
     boolean        |       1 byte      |   Stores true of false values |
     char           |       1 byte      |   Stores a sign character     |
                    |                   |    /letter/number. or         |
                    |                   |    ASCII values               |
     int            |       2 or        |   Stores whole numbers,       |
                    |       4 bytes     |   without decimals            |
     float          |       4 bytes     |   Stores fractional numbers,  |
                    |                   |   containing one              |
                    |                   |   or more decimals.           |
                    |                   |   Sufficient for storing 7    |
                    |                   |   digits.                     |
     double         |       8 bytes     |   Stores fractional numbers,  |
                    |                   |   containing one              |
                    |                   |   or more decimals.           |
                    |                   |   Sufficient for storing 15   |
                    |                   |   digits.                     |
    */
    int myNum = 5;                  // Integer (whole number)
    float myFloatNum = 5.99;        // Floating point number
    double myDoubleNum = 9.98;      // Floating point number
    char myLetter = 'D';            // Character
    bool myBoolean = true;          // Boolean
    string myText = "Hello";        // String

    return 0;
}
