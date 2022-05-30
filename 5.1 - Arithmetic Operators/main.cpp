#include <iostream>
using namespace std;

int main() {

    // Operators
    /*
     Operators are used to perform operations on variables and values.
    */
    int x = 100 + 50;

    /*
     Although the + operator is often used to add together two values,
     like in the example above,
     it can also be used to add together a variable and a value,
     or a variable and another variable:
    */
    int sum1 = 100 + 50;        // 150
    int sum2 = sum1 + 250;      // 400
    int sum3 = sum2 + sum2;     // 800

    /*
    Operator    Name        Description                     Example
    +	        Addition	Adds together two values	    x + y
    -	        Subtraction	Subtracts one value from        x - y
                            another
    *	        Multipli-   Multiplies two values           x * y
                cation
    /	        Division	Divides one value by another	x / y
    %	        Modulus	    Returns the division remainder	x % y
    ++	        Increment	Increases the value of          ++x
                            a variable by 1
    --	        Decrement	Decreases the value of          --x
                            a variable by 1
    */
    return 0;
}
