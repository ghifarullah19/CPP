#include <iostream>
#include <string>

int main()
{
    // Pointers
    std::string food = "Pizza"; // A food variable of type string

    std::cout << food << "\n";  // Outputs the value of food (Pizza)
    std::cout << &food << "\n"; // Outputs the memory address of food

    food = "Pizza";             // A food variable of type string
    std::string* ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Ouput the value of food (Pizza)
    std::cout << food << "\n";

    // Output the memory address of food
    std::cout << &food << "\n";

    // Output the memory address of food with the pointer
    std::cout << ptr << "\n";

    // Get Memory Address and Value (Dereference)
    std::cout << *ptr << "\n";

    // Modify the Pointer Value
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    std::cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    std::cout << food << "\n";
}
