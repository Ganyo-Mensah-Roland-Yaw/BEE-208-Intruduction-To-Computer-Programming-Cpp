#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter value for a and b: ";
    std::cin >> a >> b;

    std::cout << "Before swap: a = " << a << ", b = " << b << "\n";

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::cout << "After swap: a = " << a << ", b = " << b << "\n";

    return 0;
}
