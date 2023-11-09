/*
 * The purpose of this program is to demonstrate the concept of
 * overloaded functions.
 *
 * Two different functions can have the same name if their parameters
 * are different; either because they have a different number of parameters,
 * or because any of their parameters are of different type.
 *
 *
 * The compiler knows which one to call in each case by examining the types
 * passed as arguments when the function is called.
 *
 * Note that a function cannot be overloaded only by its return type.
 * At least one of its parameters must have a different type.
 */

#include <iostream>

// function prototypes

// simple multiplication function
int operation (int a, int b) {
    return (a*b);
}

// simple division function
double operation (double a, double b) {
    return (a/b);
}

int main() {
    // variables
    int x = 5, y = 2;
    double j = 5.0, k = 2.0;

    // standard output
    std::cout << operation(x, y) << std::endl;
    std::cout << operation(j, k) << std::endl;

    return 0;
}
