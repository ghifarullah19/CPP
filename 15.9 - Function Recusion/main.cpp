#include <iostream>
#include <string>
using namespace std;

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

int main()
{
    /*
    * Recursion
    *
    * Recursion is the technique of making
    * a function call itself. This technique
    * provides a way to break complicated problems
    * down into simple problems which are easier to solve.
    */

    int result = sum(10);
    cout << result;

    /*
    10 + sum(9)
    10 + ( 9 + sum(8) )
    10 + ( 9 + ( 8 + sum(7) ) )
    ...
    10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
    10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
    */

    return 0;
}
