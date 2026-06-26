#include <iostream>

int main() {
    int num = 4; // Binary: 00000100

    int leftShifted = num << 1;   // Shift left by 1:  00001000 (8)
    int rightShifted = num >> 1;  // Shift right by 1: 00000010 (2)

    std::cout << "Original: " << num << "\n";
    std::cout << "Left Shifted by 1 (4 * 2): " << leftShifted << "\n";
    std::cout << "Right Shifted by 1 (4 / 2): " << rightShifted << "\n";

    return 0;
}
