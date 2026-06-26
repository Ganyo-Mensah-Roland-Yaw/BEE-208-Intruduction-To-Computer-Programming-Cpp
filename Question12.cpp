#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if ((num % 2 != 0) && (num % 3 == 0)) {
        std::cout << num << " is both odd and divisible by 3.\n";
    } else {
        std::cout << num << " does not meet both conditions.\n";
    }

    return 0;
}
