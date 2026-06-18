#include <iostream>
using namespace std;

/*
    QUESTION 14: Difference between Left Shift (<<) and Right Shift (>>) operators

    LEFT SHIFT (<<):
    - Shifts the bits of a number to the LEFT by a specified number of positions.
    - Each left shift by 1 is equivalent to multiplying by 2.
    - Syntax: x << n   (shifts x left by n positions)

    RIGHT SHIFT (>>):
    - Shifts the bits of a number to the RIGHT by a specified number of positions.
    - Each right shift by 1 is equivalent to integer division by 2.
    - Syntax: x >> n   (shifts x right by n positions)
*/

int main() {
    int x = 8;  // Binary: 00001000

    // Left Shift example
    int leftResult = x << 2;  // Shift left by 2: 00100000 = 32
    cout << "Left shift: " << x << " << 2 = " << leftResult << endl;
    cout << "(Same as " << x << " * 4 = " << x * 4 << ")" << endl;

    // Right Shift example
    int rightResult = x >> 2; // Shift right by 2: 00000010 = 2
    cout << "\nRight shift: " << x << " >> 2 = " << rightResult << endl;
    cout << "(Same as " << x << " / 4 = " << x / 4 << ")" << endl;

    return 0;
}