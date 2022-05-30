#include <iostream>
using namespace std;;

int main() {

    // Constants
    /*
     When you don't want others (or yourself) to
     override existing variable values,
     use const keyword (this will declare the variable
     as "constant", which means unchangeable and read-only)
    */
    const int myNum = 15;   // myNum will always be 15
    myNum = 10;     // error: assigntment of read-only variable 'myNum'

    /*
     You should declare the variable as constant when you have
     values that are unlikely to change:
    */
    const int minutesPerHour = 60;
    const float PI = 3.14;

    return 0;
}
