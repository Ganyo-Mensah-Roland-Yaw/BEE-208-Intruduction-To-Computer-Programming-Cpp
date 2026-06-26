#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> num1 >> num2;

    double larger = (num1 > num2) ? num1 : num2;

    std::cout << "The larger number is: " << larger << "\n";

    return 0;
}
