#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integer values: ";
    std::cin >> num1 >> num2;

    std::cout << "Sum: " << (num1 + num2) << "\n";
    std::cout << "Difference: " << (num1 - num2) << "\n";
    std::cout << "Product: " << (num1 * num2) << "\n";
    
    if (num2 != 0) {
        std::cout << "Quotient: " << (num1 / num2) << "\n";
    } else {
        std::cout << "Quotient: Undefined (Division by zero)\n";
    }

    return 0;
}
