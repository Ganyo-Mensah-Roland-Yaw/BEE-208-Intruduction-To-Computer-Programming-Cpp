#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num % 2 != 0) {
        std::cout << "Odd number\n";
    } else {
        std::cout << "Even number\n";
    }

    return 0;
}
