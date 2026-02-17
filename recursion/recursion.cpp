/*
Recursive function: A function that calls itself.

Base case: The condition that ends the recursion (prevents infinite loops).

Recursive case: The part of the function where it calls itself with modified arguments
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;          // Base case
    return n * factorial(n - 1);   // Recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " = " << factorial(num);
    return 0;
}








