#include <iostream>
using namespace std;

int main() {
    // Numeric Types

    // int
    int myNum = 1000;
    cout << myNum;

    // float vs. double
    /*
     The precision of float is only six or seven decimal digits,
     while double variables have a precision of about 15 digits.
    */

    // float
    float myNumF = 5.75;
    cout << myNumF;

    // double
    double myNumD = 19.99;
    cout << myNumD;

    // Scientific Numbers
    /*
     A floating point number can also be a scientific number
     with an "e" to indicate the power of 10.
    */
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1;
    return 0;
}
