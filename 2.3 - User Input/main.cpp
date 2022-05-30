#include <iostream>
using namespace std;

int main() {

    // User Input
    /*
     cin is a predefined variable that reads data from
     the keyboard with the extraction operator (>>)
    */
    int x;
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x << endl; // Display the input value

    // Creating a Simple Calculator
    /*
     In this example, the user must input two numbers.
     Then we print the sum by calculating (adding) the two numbers:
    */
    int y, z;
    int sum;
    cout << "Type a number: ";
    cin >> y;
    cout << "Type another number: ";
    cin >> z;
    sum = y + z;
    cout << "Sum is: " << sum;

    return 0;
}
