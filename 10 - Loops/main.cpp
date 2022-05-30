#include <iostream>

int main()
{
    /*
    * While
    *
    * The while loop loops through a block of code
    * as long as a specified condition is true:
    *
    * while (contidition) {
    *   // code block to be executed
    * }
    */
    int i = 0;
    while (i < 5) {
        std::cout << i << "\n";
        i++;
    }

    /*
    * Do/While
    *
    * This loop will execute the code block once,
    * before checking if the condition is true,
    * then it will repeat the loop as long
    * as the condition is true:
    *
    * do {
    *   // code block to be executed
    * } while (conditon);
    */
    i = 0;
    do {
        std::cout << i << "\n";
        i++;
    } while (i < 5);

    /*
    * For
    *
    * When you know exactly how many times you want to
    * loop through a block of code,
    * use the for loop instead of a while loop:
    *
    * for (statement 1; statement 2; statement 3) {
    * // code block to be executed
    * }
    *
    * Statement 1 is executed (one time) before the execution
    *   of the code block.
    * Statement 2 defines the condition for executing the code block.
    * Statement 3 is executed (every time) after
    *   the code block has been executed.
    */
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2) {
        std::cout << i << "\n";
    }

    /*
    * break;
    *
    * The break statement can also be used to jump out of a loop.
    */
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        std::cout << i << "\n";
    }

    /*
    * continue;
    *
    * The continue statement breaks one iteration (in the loop),
    * if a specified condition occurs,
    * and continues with the next iteration in the loop.
    */
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        std::cout << i << "\n";
    }

    i = 0;
    while (i < 10) {
        std::cout << i << "\n";
        i++;
        if (i == 4) {
            break;
        }
    }

    i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        std::cout << i << "\n";
        i++;
    }
    return 0;
}
