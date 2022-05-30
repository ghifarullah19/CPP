#include <iostream>
#include <string>

int main()
{
    /*
    * Arrays
    *
    * Arrays are used to store multiple values in a single variable,
    * instead of declaring separate variables for each value.
    *
    * To declare an array, define the variable type,
    * specify the name of the array followed by square brackets
    * and specify the number of elements it should store:
    */
    std::string cars_one[4];

    std::string cars_two[4] = { "Volvo", "BMW", "Ford", "Mazda" };

    int myNum[3] = { 10, 20, 30 };

    /*
    * Access the Elements of an Array
    *
    * You access an array element by referring to the index number
    * inside square brackets [].
    */
    std::cout << cars_two[0];


    /*
    * Change an Array Element
    *
    * To change the value of a specific element,
    * refer to the index number:
    */
    cars_two[0] = "Opel";
    std::cout << cars_two[0];

    /*
    * Loop Through an Array
    *
    * You can loop through the array elements with the for loop.
    */
    for (int i = 0; i < 4; i++) {
        std::cout << cars_two[i] << "\n";
    }

    for (int i = 0; i < 4; i++) {
        std::cout << i << ": " << cars_two[i] << "\n";
    }

    /*
    * Omit Array Size
    *
    * You don't have to specify the size of the array.
    * But if you don't, it will only be as big as the elements
    * that are inserted into it:
    */
    std::string cars[] = { "Volvo", "BMW", "Ford" }; // size of array is always 3

    std::string cars_three[5] = { "Volvo", "BMW", "Ford" }; // size of array is 5, even though it's only three elements inside it
    cars_three[3] = "Mazda";
    cars_three[4] = "Tesla";

    /*
    * Omit Elements on Declaration
    *
    * It is also possible to declare an array without
    * specifying the elements on declaration, and add them later:
    */
    std::string cars_four[5];
    cars_four[0] = "Volvo";
    cars_four[1] = "BMW";
    cars_four[2] = "Ford";
    cars_four[3] = "Mazda";
    cars_four[4] = "Tesla";

    /*
    * Get the Size of an Array
    *
    * sizeof() operator returns the size of a type in bytes.
    * 4 * 5 = 20
    */
    int myNumbers[5] = { 10, 20, 30, 40, 50 };
    std::cout << sizeof(myNumbers);

    // To find out how many elements an array has
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    std::cout << getArrayLength;

    // Multidimensional Arrays
    std::string letters[2][4];

    std::string letters_two[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    std::string letters_three[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    // Access the Elements of a Multidimensional Array
    std::string letters_four[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    std::cout << letters[0][2] << std::endl; // C

    // Change Elements in a Multidimensional Array
    letters_four[0][0] = "Z";

    std::cout << letters_four[0][0] << std::endl;

    // Loop Through a Multidimensional Array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << letters_four[i][j] << std::endl;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                std::cout << letters_three[i][j][k] << std::endl;
            }
        }
    }

    // Why Multidimensional Arrays?
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };

    // Keep track of how many hits the player has
    // and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going untill they have hit
    // all four ships
    while (hits < 4) {
        int row, column;

        std::cout << "Selecting coordinates\n";

        //Ask the player for a row
        std::cout << "Choose a row number between 0 and 3: ";
        std::cin >> row;

        //Ask the player for a column
        std::cout << "Choose a column number between 0 and 3: ";
        std::cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting the value
            // to zero
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and
            // how many ships are left
            std::cout << "Hit! " << (4 - hits) << " left.\n\n";
        }
        else {
            // Tell the player that they missed
            std::cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    std::cout << "Victory!\n";
    std::cout << "You won in " << numberOfTurns << " turns";
    return 0;
}
