#include <iostream>
using namespace std;

/*
    QUESTION 9: Difference between Assignment (=) and Equality (==) operators

    ASSIGNMENT OPERATOR (=):
    - Used to assign a value to a variable.
    - It stores a value on the left side from the expression on the right.
    - Example: x = 5  --> x now holds the value 5

    EQUALITY OPERATOR (==):
    - Used to compare two values.
    - It returns true (1) if both sides are equal, false (0) otherwise.
    - Example: x == 5  --> checks if x is equal to 5
*/

int main() {
    // Example of assignment operator (=)
    int x;
    x = 10;  // Assigns 10 to x
    cout << "After assignment (x = 10), x = " << x << endl;

    // Example of equality operator (==)
    bool result = (x == 10);  // Checks if x equals 10
    cout << "Equality check (x == 10): " << (result ? "true" : "false") << endl;

    bool result2 = (x == 5);  // Checks if x equals 5
    cout << "Equality check (x == 5): " << (result2 ? "true" : "false") << endl;

    return 0;
}