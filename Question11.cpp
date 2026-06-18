#include <iostream>
using namespace std;

/*
    QUESTION 11: Difference between Increment (++) and Decrement (--) operators

    INCREMENT OPERATOR (++):
    - Increases the value of a variable by 1.
    - Pre-increment (++x): increments first, then returns the new value.
    - Post-increment (x++): returns the current value first, then increments.

    DECREMENT OPERATOR (--):
    - Decreases the value of a variable by 1.
    - Pre-decrement (--x): decrements first, then returns the new value.
    - Post-decrement (x--): returns the current value first, then decrements.
*/

int main() {
    int x = 5;

    // Pre-increment
    cout << "Initial x = " << x << endl;
    cout << "Pre-increment (++x): " << ++x << endl;   // x becomes 6, prints 6
    cout << "After pre-increment, x = " << x << endl;

    // Post-increment
    x = 5;
    cout << "\nReset x = " << x << endl;
    cout << "Post-increment (x++): " << x++ << endl;  // prints 5, then x becomes 6
    cout << "After post-increment, x = " << x << endl;

    // Pre-decrement
    x = 5;
    cout << "\nReset x = " << x << endl;
    cout << "Pre-decrement (--x): " << --x << endl;   // x becomes 4, prints 4
    cout << "After pre-decrement, x = " << x << endl;

    // Post-decrement
    x = 5;
    cout << "\nReset x = " << x << endl;
    cout << "Post-decrement (x--): " << x-- << endl;  // prints 5, then x becomes 4
    cout << "After post-decrement, x = " << x << endl;

    return 0;
}