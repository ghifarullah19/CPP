#include <iostream>
#include <string>
using namespace std;

// Inside class
class MyClass { // The class
    public: // Access specifier
        void myMethod() { // Method / function defined inside the class
            cout << "Hello World" << endl;
        }
};

// Outside class
class MyClass2 {
    public:
        void myMethod(); // Method declaration
};

// Method definition
void MyClass2::myMethod() {
    cout << "Hello World!" << endl;
}


// With Parameter
class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main()
{
    MyClass myObj;  // Create an object of MyClass
    myObj.myMethod();   // Call the method

    MyClass2 myObj2;  // Create an object of MyClass2
    myObj2.myMethod();   // Call the method

    Car myObj3; // Create an object of Car
    cout << myObj3.speed(200) << endl; // Call the method with an argument
    return 0;
}
