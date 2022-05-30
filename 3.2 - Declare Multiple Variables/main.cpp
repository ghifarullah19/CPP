#include <iostream>
using namespace std;

int main() {

    // Declare Multiple Variables
    /*
     To declare more than one variable of the same type,
     use a comma-separated list:
    */
    int x = 5, y = 6, z = 50;
    cout << x + y + z <, endl;

    // One Value to Multiple Variables
    /*
     You can also assign the same value
     to multiple variables in one line:
    */
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;

    return 0;
}
