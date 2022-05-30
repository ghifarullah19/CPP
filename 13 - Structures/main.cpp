#include <iostream>
#include <string>

int main()
{
    // References
    std::string food = "Pizza"; // food variable
    std::string& meal = food; // reference to food

    std::cout << food << "\n"; // Pizza
    std::cout << meal << "\n"; // Pizza

    // Memory Address
    std::cout << &food << "\n";
}
