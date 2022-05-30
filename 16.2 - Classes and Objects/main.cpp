#include <iostream>
#include <string>
using namespace std;

class MyClass               // The class
{
    public:                 // Access specifier
        int myNum;          // Attributte
        string myString;    // Attributte
};

// Create a Car class with some attributtes
class Car
{
    public:
        string brand;
        string model;
        int year;
};

int main()
{
    MyClass myObj; // Create an object of MyClass

    // Access attributtes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print attributte values
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";

    // Create an object of Car
    Car carObjc1;
    carObjc1.brand = "BMW";
    carObjc1.model = "X5";
    carObjc1.year = 1999;

    // Create another object of Car
    Car carObjc2;
    carObjc2.brand = "Ford";
    carObjc2.model = "Mustang";
    carObjc2.year = 1969;

    // Print attributte values
    cout << carObjc1.brand << " " << carObjc1.model << " " << carObjc1.year << "\n";
    cout << carObjc2.brand << " " << carObjc2.model << " " << carObjc2.year << "\n";
    return 0;
}
